<?php
/**
 * @file
 * pro_101_authoring_infrastructure.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function pro_101_authoring_infrastructure_default_rules_configuration() {
  $items = array();
  $items['rules_notify_support_of_new_moderated_content'] = entity_import('rules_config', '{ "rules_notify_support_of_new_moderated_content" : {
      "LABEL" : "Notify support of new moderated content",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : { "8998634" : "8998634", "96220023" : "96220023" } },
            "operation" : "OR"
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "support@pearance.net",
            "subject" : "NEW CONTENT - [[node:content-type]@[site:name]]",
            "message" : "Title: [node:title]\\r\\nCreated: [node:created]\\r\\nLast Update: [node:changed]\\r\\n\\r\\nRevision Msg: [node:log]\\r\\n\\r\\nContent URL: [node:url]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_notify_support_of_new_non_moderated_content'] = entity_import('rules_config', '{ "rules_notify_support_of_new_non_moderated_content" : {
      "LABEL" : "Notify support of new non-moderated content",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "testimonial" : "testimonial" } }
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "support@pearance.net",
            "subject" : "NEW CONTENT - [[node:content-type]@[site:name]]",
            "message" : "Title: [node:title]\\r\\nCreated: [node:created]\\r\\nLast Update: [node:changed]\\r\\n\\r\\nRevision Msg: [node:log]\\r\\n\\r\\nContent URL: [node:url]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
