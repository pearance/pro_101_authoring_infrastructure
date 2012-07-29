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
  $items['rules_notification_of_client_generated_content'] = entity_import('rules_config', '{ "rules_notification_of_client_generated_content" : {
      "LABEL" : "Notification of client generated content",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-5",
      "TAGS" : [ "client", "content" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
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
  $items['rules_notification_of_consumer_generated_content'] = entity_import('rules_config', '{ "rules_notification_of_consumer_generated_content" : {
      "LABEL" : "Notification of consumer generated content",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "testimonial" : "testimonial" } }
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
  return $items;
}
