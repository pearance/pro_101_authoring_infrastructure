<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function pro_101_authoring_infrastructure_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
    ),
    'published:unpublished' => array(
      'from_name' => 'published',
      'to_name' => 'unpublished',
    ),
    'unpublished:draft' => array(
      'from_name' => 'unpublished',
      'to_name' => 'draft',
    ),
    'unpublished:needs_review' => array(
      'from_name' => 'unpublished',
      'to_name' => 'needs_review',
    ),
  );
  return $items;
}
