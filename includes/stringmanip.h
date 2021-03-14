/*
 * stringmanip.h
 *
 *  Created on: Feb 28, 2021
 *      Author: keith
 */

#ifndef STRINGMANIP_H_
#define STRINGMANIP_H_

namespace KP{
	/**
	 * Calculate the exact amount of memory needed to allocate a that consists of the old string with all tags replaced by tag_replacements.
	 * Don't forget the terminating null!
	 * 
	 * ex. src="a large ship"
	 *     tag="large"
	 *     tag_replacement="really large"
	 *     
	 *     then
	 *     len_src = 14
	 *     numbTagsToReplace=1
	 *     len_tag=5
	 *     len_tag_replacement=12
	 *     
	 *     the function should return 22
	 * 
	 * \param len_src - length of original string
	 * \param numbTagsToReplace - number of tags to replace in the original string
	 * \param len_tag - length of the tag
	 * \param len_tag_replacement - length of the tag replacement
	 * \return
	 */
	int amountOfMemoryToAllocateForNewString(int len_src, int numbTagsToReplace, int len_tag, int len_tag_replacement);
		return len_src + ((len_tag_replacement * numbTagsToReplace) - (len_tag * numbTagsToReplace)) + 1;

	/**
	 * how often does the string in tag occur in src? 
	 * 
	 * \param src  initial char string
	 * \param tag  the tag to search for
	 * \return INVALID_NULL_PTR_DETECTED one or more of src, or tag is NULL
	 *         otherwise the number of times tag occurs in src
	 */
	int findNumbOccurrences(const char *src,  const char *tag);
	if (src == NULL || tag == NULL) {
		return INVALID_NULL_PTR_DETECTED;
	}
	int len_src = strlen(src);
	int len_tag = strlen(tag);
	int count_occurrences = 0;
	for (int i = 0; i < len_src; i++) {
		if (*(src + i) == tag[0]) {
			if (strncmp((src + i), tag, len_tag) == 0) {
				count_occurrences++;
			}
		}
	}
	return count_occurrences;
	/**
	 * If src,new_src, tag or tag_replacment are null then returns INVALID_NULL_PTR_DETECTED
	 * 
	 * Copies src char string to new_src char string, replaces all tag occurrences with tag_replacement.
	 * Please ensure that new_src is allocated and of proper size before calling this function
	 * 
	 * ex.
	 * 	src ="a large bucket on a large ship" 
		tag="large" 
		tag_replacement="really large"
		then when the function returns 
		new_src="a really large bucket on a really large ship"
	 * 
	 * \param src  initial char string, may be deleted and reallocated by this function
	 * \param new_src char string with enough space to hold src string with all tag occurrences replaced by tag_replacement
	 * \param tag  the tag to search for 
	 * \param tag_replacement  replaces all occurrences of tag
	 * \return INVALID_NULL_PTR_DETECTED one or more of src, tag or tag_replacement is NULL 
	 * 		   SUCCESS everything went well, src contains the 
	 */
	int replace(const char *src, char *new_src, const char *tag, const char *tag_replacement);
		if (src == NULL || tag == NULL || tag_replacement == NULL) {
			return INVALID_NULL_PTR_DETECTED;
		}
		len_src = strlen(src);
		len_tag = strlen(tag);
		len_tag_replacement = strlen(tag_replacement);
		int num_tags = findNumbOccurrences(src, tag);
		int amountMemory = amountOfMemoryToAllocateForNewString(len_src, num_tags, len_tag, len_tag_replacement);
		*new_src = newsrc[amountMemory];
		for (int i = 0; i < len_src; i++) {
			if (*(src + i) == tag[0]) {
				if (strncmp((src + i), tag, len_tag) == 0) {
					new_src[i] = 
				}
				else {
					
				}
			}
			else {
				
		}
	return SUCCESS;


#endif /* STRINGMANIP_H_ */
