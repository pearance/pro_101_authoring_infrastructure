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
  $items['rules_post_content_delete'] = entity_import('rules_config', '{ "rules_post_content_delete" : {
      "LABEL" : "Post content delete",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_delete" ],
      "DO" : [ { "redirect" : { "url" : "[site:url]" } } ]
    }
  }');
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
  $items['rules_redirect_upon_unpublishing_a_node'] = entity_import('rules_config', '{ "rules_redirect_upon_unpublishing_a_node" : {
      "LABEL" : "Redirect upon unpublishing a node",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "redirect" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "unpublished" } }
      ],
      "DO" : [ { "redirect" : { "url" : "[node:url]" } } ]
    }
  }');
  return $items;
}
