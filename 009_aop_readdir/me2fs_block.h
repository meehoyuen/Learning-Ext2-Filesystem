/*********************************************************************************
	File			: me2fs_block.h
	Description		: Definitions for block group operations

*********************************************************************************/
#ifndef	__ME2FS_BLOCK_H__
#define	__ME2FS_BLOCK_H__


/*
==================================================================================

	Prototype Statement

==================================================================================
*/

/*
==================================================================================

	DEFINES

==================================================================================
*/

/*
==================================================================================

	Management

==================================================================================
*/

/*
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	< Open Functions >

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
/*
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	Function	:me2fsGetGroupDescriptor
	Input		:struct super_block *sb
				 < vfs super block >
				 unsigned int block_group
				 < block group number >
	Output		:void
	Return		:struct ext2_group_desc*
				 < goup descriptor >

	Description	:get group descriptor
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
*/
struct ext2_group_desc*
me2fsGetGroupDescriptor( struct super_block *sb,
						 unsigned int block_group );

/*
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
	Function	:me2fsHasBgSuper
	Input		:struct super_block *sb
				 < vfs super block >
				 int gourp
				 < group number >
	Output		:void
	Return		:int
				 < result >

	Description	:does block goup have super block?
_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
*/
int me2fsHasBgSuper( struct super_block *sb, int group );

#endif	// __ME2FS_BLOCK_H__
