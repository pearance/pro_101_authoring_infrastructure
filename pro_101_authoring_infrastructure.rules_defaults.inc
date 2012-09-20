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
  $items['rules_professional_or_assistant_content_creation'] = entity_import('rules_config', '{ "rules_professional_or_assistant_content_creation" : {
      "LABEL" : "Professional or assistant content creation",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "pro assistant" ],
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
  return $items;
}
