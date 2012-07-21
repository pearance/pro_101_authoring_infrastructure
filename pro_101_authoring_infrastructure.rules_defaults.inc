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
  $items['rules_notify_support_of_new_content'] = entity_import('rules_config', '{ "rules_notify_support_of_new_content" : {
      "LABEL" : "Notify support of new content",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
        { "AND" : [] },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "8998634" : "8998634", "96220023" : "96220023" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "support@pearance.com",
            "subject" : "NEW CONTENT - [Type: [node:content-type]] @ [Site: [site:name]]",
            "message" : "\\u003Cstrong\\u003EContent URL:\\u003C\\/strong\\u003E \\u003Ca href=\\u0022[node:url]\\u0022\\u003E[node:title]\\u003C\\/a\\u003E\\r\\n\\r\\n\\u003Cstrong\\u003ECreated:\\u003C\\/strong\\u003E [node:created]\\r\\n\\u003Cstrong\\u003ELast Update:\\u003C\\/strong\\u003E [node:changed]\\r\\n\\u003Cstrong\\u003ERevision Msg:\\u003C\\/strong\\u003E [node:log]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
