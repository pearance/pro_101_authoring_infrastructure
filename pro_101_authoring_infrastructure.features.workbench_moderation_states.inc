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
    'trash' => array(
      'name' => 'trash',
      'label' => 'Trash',
      'description' => 'Mark this content as trash',
      'weight' => '0',
    ),
    'unpublished' => array(
      'name' => 'unpublished',
      'label' => 'Unpublished',
      'description' => 'Make this content unpublished',
      'weight' => '0',
    ),
  );
  return $items;
}
