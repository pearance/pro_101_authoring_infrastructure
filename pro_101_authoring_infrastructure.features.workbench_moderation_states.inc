<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function pro_101_authoring_infrastructure_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Draft',
      'description' => 'Work in progress',
      'weight' => '-10',
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Ready for Optimization',
      'description' => 'Ready for optimization',
      'weight' => '-9',
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Published',
      'description' => 'Make this version live',
      'weight' => '-8',
    ),
  );
  return $items;
}
