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
  $items['rules_client_generated_content'] = entity_import('rules_config', '{ "rules_client_generated_content" : {
      "LABEL" : "Client generated content",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "support@pearance.net",
            "subject" : "NEW CONTENT - [[node:content-type]@[site:name]]",
            "message" : "Title: [node:title]\\\\r\\\\nCreated: [node:created]\\\\r\\\\nLast Update: [node:changed]\\\\r\\\\n\\\\r\\\\nRevision Msg: [node:log]\\\\r\\\\n\\\\r\\\\nContent URL: [node:url]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_consumer_generated_content'] = entity_import('rules_config', '{ "rules_consumer_generated_content" : {
      "LABEL" : "Consumer generated content",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "testimonial" : "testimonial" } }
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "node:author" ],
            "roles" : { "value" : {
                "8998634" : "8998634",
                "96220023" : "96220023",
                "160159362" : "160159362",
                "121011395" : "121011395"
              }
            },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "workbench_moderation_set_state" : {
            "node" : [ "node" ],
            "moderation_state" : "needs_review",
            "force_transition" : 1
          }
        }
      ]
    }
  }');
  return $items;
}
