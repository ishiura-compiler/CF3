
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x13 = UINT32_MAX;
int8_t x15 = -2;
uint32_t x16 = 8085529U;
int32_t x21 = INT32_MIN;
int16_t x26 = -7;
int16_t x30 = -1;
volatile int32_t t6 = -43772;
uint16_t x36 = 498U;
static int32_t x38 = INT32_MIN;
int64_t x54 = -1LL;
uint64_t x57 = UINT64_MAX;
int16_t x58 = INT16_MAX;
volatile uint64_t t11 = UINT64_MAX;
volatile uint32_t x61 = 5477531U;
uint16_t x66 = 8U;
uint8_t x68 = 62U;
static int32_t x69 = -194;
int64_t x71 = INT64_MIN;
static int64_t x76 = 289312993LL;
int16_t x79 = 1555;
volatile int64_t t16 = 85740LL;
volatile int32_t x81 = INT32_MIN;
int64_t t21 = 2LL;
static uint32_t x107 = 1609715U;
uint64_t x110 = 54LLU;
uint8_t x118 = 8U;
uint32_t x122 = 38937U;
uint64_t x123 = UINT64_MAX;
uint16_t x129 = UINT16_MAX;
int8_t x130 = 6;
uint16_t x137 = 11U;
static uint16_t x140 = 7U;
volatile int32_t x142 = 3;
int32_t x149 = -1;
int32_t x150 = 16241;
static int64_t x151 = INT64_MIN;
static volatile int32_t x152 = -1;
volatile int64_t t31 = 1003LL;
static uint8_t x158 = 0U;
volatile uint32_t t34 = 3643U;
uint64_t x169 = 8LLU;
uint16_t x171 = 14432U;
uint16_t x172 = 949U;
int8_t x181 = -1;
int32_t x182 = 6;
volatile uint32_t x187 = 1U;
volatile uint32_t t42 = 17455691U;
static int64_t x200 = 25809680LL;
int16_t x201 = -1;
volatile uint32_t x202 = 33886U;
int64_t x214 = 17214059761778LL;
int8_t x218 = INT8_MIN;
int64_t x222 = INT64_MIN;
uint64_t x230 = UINT64_MAX;
volatile int32_t x231 = INT32_MIN;
uint8_t x239 = UINT8_MAX;
uint32_t x240 = UINT32_MAX;
int64_t x249 = 1107LL;
static int64_t x250 = -4782981372615LL;
int32_t x253 = INT32_MAX;
static int32_t x255 = -22692946;
volatile int32_t t55 = 37;
int16_t x262 = 5;
uint16_t x263 = UINT16_MAX;
int64_t x264 = INT64_MIN;
uint32_t x267 = 22U;
uint32_t t59 = UINT32_MAX;
volatile int64_t x273 = -12157589LL;
volatile int64_t t60 = 488581552877892LL;
int8_t x288 = -4;
int64_t x289 = -1LL;
uint16_t x290 = 4481U;
int64_t x291 = 139LL;
volatile int64_t t63 = -149372804972LL;
volatile int32_t x294 = INT32_MIN;
int32_t x301 = -5;
static volatile int32_t x304 = -1;
volatile int64_t x307 = -1LL;
volatile int64_t t68 = 123556LL;
int16_t x315 = 2081;
static uint64_t x316 = UINT64_MAX;
uint64_t t69 = 99160859882436794LLU;
uint64_t x323 = 60389216460327LLU;
int8_t x334 = INT8_MIN;
volatile int32_t t73 = 78;
int16_t x341 = INT16_MAX;
int8_t x349 = INT8_MIN;
volatile uint8_t x356 = 10U;
volatile int32_t t78 = 18042;
int8_t x360 = INT8_MIN;
volatile uint32_t t81 = 137393394U;
int32_t x372 = INT32_MAX;
static int32_t x378 = INT32_MIN;
int64_t x380 = 245295461LL;
static volatile int64_t t84 = 24239922LL;
int32_t x384 = INT32_MAX;
volatile int32_t t86 = 864;
static int64_t x395 = INT64_MIN;
volatile int64_t x397 = INT64_MIN;
static int32_t x406 = -1;
static uint32_t x412 = 197U;
uint64_t t92 = 32LLU;
uint64_t t93 = 30708917LLU;
volatile int8_t x431 = INT8_MIN;
uint8_t x434 = 77U;
int64_t x435 = INT64_MIN;
int8_t x438 = 22;
int32_t t97 = 31;
volatile int32_t x452 = -563784315;
int8_t x456 = 9;
int16_t x458 = -1;
int16_t x459 = 9689;
uint16_t x464 = UINT16_MAX;
static uint8_t x466 = UINT8_MAX;
volatile int8_t x475 = 1;
volatile uint64_t t105 = 6576725783LLU;
int8_t x483 = -3;
static int16_t x488 = INT16_MIN;
volatile int64_t t107 = 1513067691225318LL;
volatile int8_t x495 = -9;
int64_t x496 = 301LL;
uint16_t x498 = UINT16_MAX;
volatile int32_t x507 = -1046;
int16_t x517 = -1;
int64_t x518 = -1LL;
int8_t x521 = -1;
static int16_t x533 = INT16_MAX;
int8_t x537 = INT8_MAX;
int8_t x540 = INT8_MAX;
volatile int16_t x542 = INT16_MIN;
volatile int8_t x543 = -8;
static volatile int64_t x551 = -1LL;
int8_t x557 = INT8_MIN;
static volatile int32_t t123 = -183503026;
static int32_t x562 = INT32_MAX;
static uint8_t x566 = 72U;
int8_t x567 = INT8_MAX;
static int16_t x574 = INT16_MIN;
int16_t x576 = INT16_MIN;
volatile int32_t t127 = -788184;
static int16_t x582 = INT16_MIN;
int64_t t129 = -305845LL;
uint16_t x588 = 2U;
static volatile uint32_t x590 = 312560587U;
volatile int16_t x601 = INT16_MIN;
int64_t x614 = -1LL;
static int16_t x622 = INT16_MIN;
static int64_t x624 = INT64_MIN;
uint64_t x626 = 106445561881LLU;
int64_t x629 = -1LL;
volatile uint16_t x631 = UINT16_MAX;
int64_t t141 = -4LL;
volatile uint16_t x639 = 448U;
int64_t x642 = INT64_MAX;
int16_t x643 = INT16_MIN;
volatile uint8_t x647 = 8U;
uint64_t x649 = UINT64_MAX;
static volatile int32_t x654 = INT32_MIN;
int16_t x656 = INT16_MAX;
volatile int64_t t147 = -54236122714LL;
uint32_t x660 = UINT32_MAX;
int32_t t149 = 276;
int32_t x665 = INT32_MAX;
static uint32_t t150 = 1662047U;
volatile uint32_t t151 = UINT32_MAX;
volatile int8_t x678 = INT8_MIN;
volatile int16_t x681 = 875;
int8_t x684 = INT8_MIN;
static uint32_t x701 = 34718U;
static int64_t x704 = 7439LL;
volatile int32_t x705 = -92942599;
uint32_t x710 = 8097583U;
uint64_t x715 = UINT64_MAX;
uint64_t t160 = UINT64_MAX;
uint32_t t161 = UINT32_MAX;
uint32_t x737 = 29184U;
int16_t x740 = INT16_MIN;
uint64_t x741 = 10532721LLU;
volatile int64_t t167 = 87331206420LL;
uint64_t t168 = 29LLU;
int32_t x765 = INT32_MAX;
int64_t t172 = 152737923804530LL;
int8_t x789 = INT8_MIN;
int64_t x794 = -49362788112111LL;
int16_t x796 = -1;
int8_t x805 = -3;
int32_t x807 = -1;
int64_t x811 = INT64_MAX;
uint16_t x814 = 31996U;
volatile uint64_t t179 = 81877183416537761LLU;
int64_t x820 = INT64_MAX;
volatile int16_t x821 = INT16_MAX;
int16_t x824 = INT16_MAX;
int64_t t181 = 9LL;
uint16_t x829 = 45U;
volatile int16_t x831 = 61;
int16_t x841 = 1;
int64_t x843 = 58439221360LL;
int32_t x847 = INT32_MAX;
uint64_t x848 = 22948902567664630LLU;
int8_t x851 = -1;
int64_t t189 = 1011942LL;
uint64_t x857 = 27264LLU;
int64_t x859 = -47107018042540LL;
int32_t x864 = INT32_MAX;
uint8_t x866 = UINT8_MAX;
int32_t x870 = 2140;
volatile int64_t t195 = 507LL;
int16_t x885 = 203;
static uint16_t x894 = 32116U;


void f0(void) {
    	int16_t x5 = 335;
	volatile int8_t x6 = 10;
	static volatile uint64_t x7 = 73610242232191LLU;
	static int16_t x8 = INT16_MIN;
	uint64_t t0 = 18098687LLU;

    t0 = (x5|(x6*(x7%x8)));

    if (t0 != 736102422322175LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = -1;
	int16_t x10 = INT16_MIN;
	static uint8_t x11 = UINT8_MAX;
	volatile uint32_t x12 = 1795523767U;
	uint32_t t1 = UINT32_MAX;

    t1 = (x9|(x10*(x11%x12)));

    if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x14 = 2U;
	uint32_t t2 = UINT32_MAX;

    t2 = (x13|(x14*(x15%x16)));

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x17 = 83709765246935748LLU;
	volatile int32_t x18 = INT32_MIN;
	volatile int64_t x19 = -93091LL;
	int16_t x20 = INT16_MIN;
	volatile uint64_t t3 = 6286790LLU;

    t3 = (x17|(x18*(x19%x20)));

    if (t3 != 83727636605854404LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	volatile int8_t x24 = INT8_MAX;
	volatile int64_t t4 = -50528482808538LL;

    t4 = (x21|(x22*(x23%x24)));

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	volatile int8_t x27 = INT8_MAX;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 473697417;

    t5 = (x25|(x26*(x27%x28)));

    if (t5 != -889) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x29 = 0U;
	int16_t x31 = INT16_MIN;
	int8_t x32 = INT8_MIN;

    t6 = (x29|(x30*(x31%x32)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = -1;
	int32_t x34 = -1;
	static volatile uint8_t x35 = UINT8_MAX;
	static int32_t t7 = 317;

    t7 = (x33|(x34*(x35%x36)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = INT32_MAX;
	int8_t x39 = -38;
	static int64_t x40 = INT64_MAX;
	int64_t t8 = -5LL;

    t8 = (x37|(x38*(x39%x40)));

    if (t8 != 83751862271LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -134482879;
	static int32_t x46 = -3698155;
	volatile int32_t x47 = -1;
	static int16_t x48 = -2;
	int32_t t9 = 30;

    t9 = (x45|(x46*(x47%x48)));

    if (t9 != -134480405) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x53 = -1LL;
	static uint8_t x55 = 38U;
	volatile int16_t x56 = INT16_MAX;
	volatile int64_t t10 = -118LL;

    t10 = (x53|(x54*(x55%x56)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x59 = -1;
	int64_t x60 = INT64_MAX;

    t11 = (x57|(x58*(x59%x60)));

    if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x62 = UINT64_MAX;
	uint8_t x63 = 1U;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (x61|(x62*(x63%x64)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x65 = -1531LL;
	static volatile int32_t x67 = -1;
	volatile int64_t t13 = -941LL;

    t13 = (x65|(x66*(x67%x68)));

    if (t13 != -3LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x70 = -1488961;
	uint32_t x72 = 10U;
	int64_t t14 = -7LL;

    t14 = (x69|(x70*(x71%x72)));

    if (t14 != -194LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -1;
	int16_t x74 = INT16_MIN;
	int8_t x75 = 0;
	volatile int64_t t15 = -49688003816LL;

    t15 = (x73|(x74*(x75%x76)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	volatile int64_t x78 = -1LL;
	uint32_t x80 = UINT32_MAX;

    t16 = (x77|(x78*(x79%x80)));

    if (t16 != -1537LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x82 = -1;
	uint64_t x83 = 515371283LLU;
	int8_t x84 = INT8_MAX;
	volatile uint64_t t17 = 13LLU;

    t17 = (x81|(x82*(x83%x84)));

    if (t17 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = 2;
	int8_t x86 = INT8_MAX;
	int64_t x87 = 59LL;
	int32_t x88 = -1;
	int64_t t18 = -130440506421LL;

    t18 = (x85|(x86*(x87%x88)));

    if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = INT32_MIN;
	uint32_t x90 = 14580264U;
	int16_t x91 = INT16_MIN;
	volatile int8_t x92 = INT8_MIN;
	uint32_t t19 = 6810U;

    t19 = (x89|(x90*(x91%x92)));

    if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MIN;
	int8_t x95 = 20;
	int8_t x96 = INT8_MIN;
	int32_t t20 = 11383498;

    t20 = (x93|(x94*(x95%x96)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = 1;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static uint8_t x100 = UINT8_MAX;

    t21 = (x97|(x98*(x99%x100)));

    if (t21 != 274877906945LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x105 = INT16_MAX;
	volatile uint64_t x106 = 1216621434LLU;
	int64_t x108 = INT64_MAX;
	uint64_t t22 = 85LLU;

    t22 = (x105|(x106*(x107%x108)));

    if (t22 != 1958413771636735LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x109 = 107U;
	volatile uint8_t x111 = UINT8_MAX;
	int64_t x112 = -68814737320LL;
	uint64_t t23 = 21LLU;

    t23 = (x109|(x110*(x111%x112)));

    if (t23 != 13803LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = INT32_MIN;
	volatile int64_t x119 = INT64_MAX;
	int32_t x120 = 4226536;
	int64_t t24 = -1107587836863LL;

    t24 = (x117|(x118*(x119%x120)));

    if (t24 != -2133090888LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x121 = INT64_MAX;
	int64_t x124 = INT64_MAX;
	uint64_t t25 = 4772LLU;

    t25 = (x121|(x122*(x123%x124)));

    if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x131 = -28;
	int32_t x132 = INT32_MIN;
	volatile int32_t t26 = -3497;

    t26 = (x129|(x130*(x131%x132)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x133 = 1185U;
	volatile int8_t x134 = -1;
	static uint64_t x135 = UINT64_MAX;
	int64_t x136 = INT64_MIN;
	uint64_t t27 = 1594686942486670139LLU;

    t27 = (x133|(x134*(x135%x136)));

    if (t27 != 9223372036854776993LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x138 = -1LL;
	uint32_t x139 = 358U;
	volatile int64_t t28 = 125615444683LL;

    t28 = (x137|(x138*(x139%x140)));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x141 = -1492LL;
	int16_t x143 = -1;
	volatile int32_t x144 = INT32_MAX;
	volatile int64_t t29 = -1466449644913LL;

    t29 = (x141|(x142*(x143%x144)));

    if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x145 = 1351751868U;
	int16_t x146 = 250;
	volatile int32_t x147 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	static volatile uint32_t t30 = 11U;

    t30 = (x145|(x146*(x147%x148)));

    if (t30 != 4294967230U) { NG(); } else { ; }
	
}

void f31(void) {
    

    t31 = (x149|(x150*(x151%x152)));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x153 = 0U;
	uint32_t x154 = 7633U;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MIN;
	static uint64_t t32 = 491636946904792131LLU;

    t32 = (x153|(x154*(x155%x156)));

    if (t32 != 16391742677551LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = INT64_MAX;
	int8_t x159 = INT8_MAX;
	int64_t x160 = -1LL;
	volatile int64_t t33 = INT64_MAX;

    t33 = (x157|(x158*(x159%x160)));

    if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x161 = 31U;
	int32_t x162 = -1;
	int32_t x163 = -29900752;
	uint32_t x164 = 480058498U;

    t34 = (x161|(x162*(x163%x164)));

    if (t34 != 3870368767U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x165 = 58;
	uint32_t x166 = UINT32_MAX;
	int32_t x167 = 3;
	int16_t x168 = INT16_MAX;
	volatile uint32_t t35 = UINT32_MAX;

    t35 = (x165|(x166*(x167%x168)));

    if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x170 = 26U;
	volatile uint64_t t36 = 39LLU;

    t36 = (x169|(x170*(x171%x172)));

    if (t36 != 5130LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x173 = INT8_MIN;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = 1;
	uint8_t x176 = 11U;
	int32_t t37 = 82;

    t37 = (x173|(x174*(x175%x176)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x177 = INT32_MIN;
	volatile uint32_t x178 = 607U;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 306680075U;
	uint32_t t38 = 1309672368U;

    t38 = (x177|(x178*(x179%x180)));

    if (t38 != 2586419309U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x183 = INT8_MIN;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t39 = 1;

    t39 = (x181|(x182*(x183%x184)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	int16_t x188 = INT16_MIN;
	int64_t t40 = -497LL;

    t40 = (x185|(x186*(x187%x188)));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x189 = INT32_MAX;
	uint32_t x190 = 1U;
	int32_t x191 = -1062609151;
	int64_t x192 = -1LL;
	int64_t t41 = -364805878722LL;

    t41 = (x189|(x190*(x191%x192)));

    if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x193 = 54232U;
	int16_t x194 = -871;
	int8_t x195 = -1;
	int8_t x196 = 2;

    t42 = (x193|(x194*(x195%x196)));

    if (t42 != 54271U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x197 = -7;
	volatile int8_t x198 = INT8_MIN;
	volatile uint16_t x199 = UINT16_MAX;
	int64_t t43 = -18LL;

    t43 = (x197|(x198*(x199%x200)));

    if (t43 != -7LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x203 = UINT8_MAX;
	int8_t x204 = INT8_MAX;
	static volatile uint32_t t44 = UINT32_MAX;

    t44 = (x201|(x202*(x203%x204)));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = UINT32_MAX;
	static volatile uint64_t x210 = 213LLU;
	static volatile uint64_t x211 = 850762LLU;
	int32_t x212 = -1;
	uint64_t t45 = 61LLU;

    t45 = (x209|(x210*(x211%x212)));

    if (t45 != 4294967295LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = 1709;
	int32_t x215 = INT32_MIN;
	volatile uint64_t x216 = 1020357376LLU;
	volatile uint64_t t46 = 600LLU;

    t46 = (x213|(x214*(x215%x216)));

    if (t46 != 6752761825709700781LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x217 = INT8_MAX;
	static int8_t x219 = INT8_MAX;
	int32_t x220 = 399409;
	int32_t t47 = -7;

    t47 = (x217|(x218*(x219%x220)));

    if (t47 != -16129) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x221 = -2;
	volatile uint64_t x223 = 13LLU;
	static uint8_t x224 = 23U;
	uint64_t t48 = 15992086291422951LLU;

    t48 = (x221|(x222*(x223%x224)));

    if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x229 = INT8_MIN;
	int32_t x232 = -64094253;
	uint64_t t49 = 0LLU;

    t49 = (x229|(x230*(x231%x232)));

    if (t49 != 18446744073709551539LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x233 = UINT64_MAX;
	uint8_t x234 = 3U;
	static uint32_t x235 = 268983U;
	volatile int16_t x236 = INT16_MIN;
	volatile uint64_t t50 = UINT64_MAX;

    t50 = (x233|(x234*(x235%x236)));

    if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x237 = UINT32_MAX;
	uint16_t x238 = 11647U;
	volatile uint32_t t51 = UINT32_MAX;

    t51 = (x237|(x238*(x239%x240)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = INT8_MIN;
	int16_t x242 = 3;
	int32_t x243 = -1;
	static uint32_t x244 = UINT32_MAX;
	static uint32_t t52 = 12579U;

    t52 = (x241|(x242*(x243%x244)));

    if (t52 != 4294967168U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x245 = INT16_MAX;
	uint32_t x246 = UINT32_MAX;
	uint16_t x247 = 1U;
	uint32_t x248 = 1762U;
	uint32_t t53 = UINT32_MAX;

    t53 = (x245|(x246*(x247%x248)));

    if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MAX;
	static int64_t t54 = -698979652467040LL;

    t54 = (x249|(x250*(x251%x252)));

    if (t54 != 9565962745311LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x254 = 1U;
	int8_t x256 = INT8_MIN;

    t55 = (x253|(x254*(x255%x256)));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x257 = 31;
	static uint8_t x258 = 63U;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = UINT8_MAX;
	uint64_t t56 = 227478968299873314LLU;

    t56 = (x257|(x258*(x259%x260)));

    if (t56 != 31LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x261 = INT32_MIN;
	volatile int64_t t57 = -357960900677458829LL;

    t57 = (x261|(x262*(x263%x264)));

    if (t57 != -2147155973LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x265 = 7351765986334LLU;
	int32_t x266 = -1;
	uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t58 = 545476034958LLU;

    t58 = (x265|(x266*(x267%x268)));

    if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x269 = -1;
	static int16_t x270 = 120;
	uint16_t x271 = 326U;
	volatile uint32_t x272 = 27U;

    t59 = (x269|(x270*(x271%x272)));

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x274 = 187U;
	volatile int32_t x275 = -22;
	int8_t x276 = -1;

    t60 = (x273|(x274*(x275%x276)));

    if (t60 != -12157589LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x277 = 880971932;
	int64_t x278 = 547021888985800LL;
	volatile int16_t x279 = -1;
	int64_t x280 = 278812109447212833LL;
	volatile int64_t t61 = 129LL;

    t61 = (x277|(x278*(x279%x280)));

    if (t61 != -547021016533572LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x285 = -1065LL;
	int32_t x286 = 142;
	static int16_t x287 = -1;
	volatile int64_t t62 = 4032LL;

    t62 = (x285|(x286*(x287%x288)));

    if (t62 != -9LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x292 = 2U;

    t63 = (x289|(x290*(x291%x292)));

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x293 = INT64_MIN;
	int64_t x295 = -51924613313LL;
	static int32_t x296 = 93143;
	int64_t t64 = -691388636LL;

    t64 = (x293|(x294*(x295%x296)));

    if (t64 != -9223174554258505728LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x298 = 1569;
	int8_t x299 = -1;
	int64_t x300 = INT64_MAX;
	volatile int64_t t65 = 1931883584888LL;

    t65 = (x297|(x298*(x299%x300)));

    if (t65 != -33LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x302 = 304377645LLU;
	int16_t x303 = 31;
	volatile uint64_t t66 = 3919791LLU;

    t66 = (x301|(x302*(x303%x304)));

    if (t66 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = INT64_MIN;
	uint8_t x306 = UINT8_MAX;
	uint8_t x308 = 1U;
	volatile int64_t t67 = INT64_MIN;

    t67 = (x305|(x306*(x307%x308)));

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x309 = -183779421LL;
	static volatile int8_t x310 = -1;
	int8_t x311 = 0;
	uint16_t x312 = 7463U;

    t68 = (x309|(x310*(x311%x312)));

    if (t68 != -183779421LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x313 = 75310155LLU;
	uint16_t x314 = 12U;

    t69 = (x313|(x314*(x315%x316)));

    if (t69 != 75326927LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x317 = UINT16_MAX;
	int32_t x318 = 3721534;
	volatile int32_t x319 = INT32_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	volatile uint64_t t70 = 3067347530808525070LLU;

    t70 = (x317|(x318*(x319%x320)));

    if (t70 != 18438752140299141119LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = UINT8_MAX;
	static volatile int8_t x324 = -1;
	static uint64_t t71 = 4LLU;

    t71 = (x321|(x322*(x323%x324)));

    if (t71 != 15399250197413887LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MAX;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 64867794609244LLU;
	volatile uint64_t t72 = 130LLU;

    t72 = (x325|(x326*(x327%x328)));

    if (t72 != 3790615728881663LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x333 = 0;
	int16_t x335 = INT16_MIN;
	int16_t x336 = INT16_MAX;

    t73 = (x333|(x334*(x335%x336)));

    if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x337 = 441LLU;
	uint16_t x338 = UINT16_MAX;
	int64_t x339 = INT64_MIN;
	int16_t x340 = 340;
	uint64_t t74 = 6024LLU;

    t74 = (x337|(x338*(x339%x340)));

    if (t74 != 18446744073701163449LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x342 = 2735538690430LLU;
	volatile int16_t x343 = INT16_MIN;
	int32_t x344 = 2018;
	uint64_t t75 = 262621983849989LLU;

    t75 = (x341|(x342*(x343%x344)));

    if (t75 != 18445431015138164735LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x345 = 5U;
	static volatile int32_t x346 = INT32_MIN;
	int16_t x347 = -1;
	int8_t x348 = -1;
	volatile int32_t t76 = -53256279;

    t76 = (x345|(x346*(x347%x348)));

    if (t76 != 5) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x350 = INT8_MIN;
	int8_t x351 = 7;
	int8_t x352 = -1;
	volatile int32_t t77 = 5044;

    t77 = (x349|(x350*(x351%x352)));

    if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = -1;
	static volatile uint16_t x354 = 2U;
	uint16_t x355 = 122U;

    t78 = (x353|(x354*(x355%x356)));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x357 = INT64_MAX;
	uint16_t x358 = 1U;
	int64_t x359 = INT64_MAX;
	int64_t t79 = INT64_MAX;

    t79 = (x357|(x358*(x359%x360)));

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x361 = UINT16_MAX;
	int16_t x362 = 0;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = UINT64_MAX;
	static uint64_t t80 = 183195417LLU;

    t80 = (x361|(x362*(x363%x364)));

    if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = -6734966;
	int16_t x366 = 4050;
	uint32_t x367 = 8U;
	static volatile uint32_t x368 = 66959128U;

    t81 = (x365|(x366*(x367%x368)));

    if (t81 != 4288249754U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x369 = INT16_MAX;
	int64_t x370 = 401725LL;
	static uint8_t x371 = 61U;
	static int64_t t82 = 152881LL;

    t82 = (x369|(x370*(x371%x372)));

    if (t82 != 24510463LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x373 = UINT8_MAX;
	volatile uint16_t x374 = 1U;
	uint8_t x375 = UINT8_MAX;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t83 = 7;

    t83 = (x373|(x374*(x375%x376)));

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MAX;
	static volatile int32_t x379 = -1;

    t84 = (x377|(x378*(x379%x380)));

    if (t84 != 2147483775LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x381 = -86253328;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 14659298U;
	volatile uint32_t t85 = 2U;

    t85 = (x381|(x382*(x383%x384)));

    if (t85 != 4210814960U) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x385 = 71U;
	volatile int16_t x386 = INT16_MAX;
	uint16_t x387 = 0U;
	uint16_t x388 = 10U;

    t86 = (x385|(x386*(x387%x388)));

    if (t86 != 71) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x389 = 1659;
	volatile int16_t x390 = -1;
	int32_t x391 = -1;
	uint8_t x392 = 8U;
	static volatile int32_t t87 = -132082537;

    t87 = (x389|(x390*(x391%x392)));

    if (t87 != 1659) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MIN;
	volatile int32_t x396 = INT32_MIN;
	int64_t t88 = 123848507LL;

    t88 = (x393|(x394*(x395%x396)));

    if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x398 = 73;
	volatile uint8_t x399 = 13U;
	static uint64_t x400 = 5690337109857LLU;
	uint64_t t89 = 77LLU;

    t89 = (x397|(x398*(x399%x400)));

    if (t89 != 9223372036854776757LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = 15921;
	int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	static uint8_t x404 = UINT8_MAX;
	volatile int32_t t90 = -24;

    t90 = (x401|(x402*(x403%x404)));

    if (t90 != -335) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x405 = 5358212796835LL;
	static int32_t x407 = INT32_MAX;
	int16_t x408 = 12429;
	static int64_t t91 = -111974756428360LL;

    t91 = (x405|(x406*(x407%x408)));

    if (t91 != -1025LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x409 = 2127749172LLU;
	volatile uint32_t x410 = UINT32_MAX;
	uint16_t x411 = 17U;

    t92 = (x409|(x410*(x411%x412)));

    if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x413 = INT8_MAX;
	static volatile int16_t x414 = INT16_MIN;
	static uint64_t x415 = 109586985LLU;
	static volatile uint8_t x416 = 105U;

    t93 = (x413|(x414*(x415%x416)));

    if (t93 != 18446744073707585663LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x417 = UINT32_MAX;
	uint8_t x418 = 4U;
	int16_t x419 = -38;
	int8_t x420 = INT8_MAX;
	uint32_t t94 = UINT32_MAX;

    t94 = (x417|(x418*(x419%x420)));

    if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x430 = -1;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t95 = -51;

    t95 = (x429|(x430*(x431%x432)));

    if (t95 != -32640) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = 114855568U;
	static int64_t x436 = -726732138312779LL;
	volatile int64_t t96 = -43647464389809LL;

    t96 = (x433|(x434*(x435%x436)));

    if (t96 != -31914153524805731LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x437 = -1;
	int8_t x439 = INT8_MAX;
	uint16_t x440 = 61U;

    t97 = (x437|(x438*(x439%x440)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x441 = INT8_MIN;
	uint32_t x442 = 2U;
	static int16_t x443 = -1;
	uint32_t x444 = 5U;
	uint32_t t98 = 115U;

    t98 = (x441|(x442*(x443%x444)));

    if (t98 != 4294967168U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x445 = 28U;
	uint16_t x446 = 61U;
	static volatile int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t99 = -129288554;

    t99 = (x445|(x446*(x447%x448)));

    if (t99 != 28) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = 23;
	uint16_t x450 = UINT16_MAX;
	int16_t x451 = -3167;
	int32_t t100 = 10;

    t100 = (x449|(x450*(x451%x452)));

    if (t100 != -207549345) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x453 = 64U;
	static int64_t x454 = INT64_MIN;
	static int32_t x455 = 7731;
	int64_t t101 = 2529210LL;

    t101 = (x453|(x454*(x455%x456)));

    if (t101 != 64LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x457 = INT32_MIN;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t102 = 6737U;

    t102 = (x457|(x458*(x459%x460)));

    if (t102 != 4294957607U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x461 = INT8_MIN;
	volatile uint16_t x462 = 0U;
	int64_t x463 = 48187290104LL;
	volatile int64_t t103 = -39773456796LL;

    t103 = (x461|(x462*(x463%x464)));

    if (t103 != -128LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x465 = INT8_MAX;
	int16_t x467 = INT16_MIN;
	static uint64_t x468 = UINT64_MAX;
	uint64_t t104 = 7826397015LLU;

    t104 = (x465|(x466*(x467%x468)));

    if (t104 != 18446744073701195903LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x473 = 9030LLU;
	int64_t x474 = 7374LL;
	static int16_t x476 = INT16_MIN;

    t105 = (x473|(x474*(x475%x476)));

    if (t105 != 16334LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x481 = UINT64_MAX;
	uint16_t x482 = 8941U;
	uint16_t x484 = 979U;
	volatile uint64_t t106 = UINT64_MAX;

    t106 = (x481|(x482*(x483%x484)));

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x485 = -1LL;
	uint32_t x486 = 476561724U;
	uint16_t x487 = 58U;

    t107 = (x485|(x486*(x487%x488)));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x489 = 33U;
	int64_t x490 = 102303323617897LL;
	int32_t x491 = INT32_MIN;
	volatile int32_t x492 = INT32_MAX;
	int64_t t108 = 21385371916485LL;

    t108 = (x489|(x490*(x491%x492)));

    if (t108 != -102303323617865LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x493 = 3;
	volatile int8_t x494 = INT8_MIN;
	int64_t t109 = -14170964652611LL;

    t109 = (x493|(x494*(x495%x496)));

    if (t109 != 1155LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x497 = 608U;
	int64_t x499 = -62LL;
	int16_t x500 = INT16_MIN;
	volatile int64_t t110 = 220173739LL;

    t110 = (x497|(x498*(x499%x500)));

    if (t110 != -4062594LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x505 = INT16_MIN;
	static int16_t x506 = INT16_MAX;
	static int32_t x508 = INT32_MAX;
	volatile int32_t t111 = 2;

    t111 = (x505|(x506*(x507%x508)));

    if (t111 != -31722) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x509 = -1LL;
	uint32_t x510 = 852815337U;
	volatile uint32_t x511 = 47U;
	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t112 = UINT64_MAX;

    t112 = (x509|(x510*(x511%x512)));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = 181;
	static uint32_t x514 = 1U;
	volatile int16_t x515 = INT16_MIN;
	uint8_t x516 = UINT8_MAX;
	static uint32_t t113 = 1123U;

    t113 = (x513|(x514*(x515%x516)));

    if (t113 != 4294967221U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x519 = UINT32_MAX;
	static int32_t x520 = 184;
	int64_t t114 = -6412244009320937LL;

    t114 = (x517|(x518*(x519%x520)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x522 = INT16_MIN;
	int8_t x523 = -1;
	int32_t x524 = INT32_MIN;
	volatile int32_t t115 = -3;

    t115 = (x521|(x522*(x523%x524)));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x525 = 64043250U;
	uint8_t x526 = 96U;
	static uint16_t x527 = 22U;
	uint32_t x528 = 22415253U;
	uint32_t t116 = 3338044U;

    t116 = (x525|(x526*(x527%x528)));

    if (t116 != 64043250U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x534 = -1;
	static uint8_t x535 = UINT8_MAX;
	static uint64_t x536 = UINT64_MAX;
	volatile uint64_t t117 = UINT64_MAX;

    t117 = (x533|(x534*(x535%x536)));

    if (t117 != UINT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x538 = -16;
	static int8_t x539 = INT8_MIN;
	static int32_t t118 = 926488754;

    t118 = (x537|(x538*(x539%x540)));

    if (t118 != 127) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x541 = -10;
	int16_t x544 = -1;
	int32_t t119 = 6122;

    t119 = (x541|(x542*(x543%x544)));

    if (t119 != -10) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x545 = INT8_MIN;
	int32_t x546 = -484;
	int64_t x547 = INT64_MAX;
	static volatile uint16_t x548 = 1U;
	static int64_t t120 = -128975715333LL;

    t120 = (x545|(x546*(x547%x548)));

    if (t120 != -128LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x549 = -7;
	int16_t x550 = INT16_MAX;
	uint64_t x552 = 1110196LLU;
	uint64_t t121 = 7756086968990915LLU;

    t121 = (x549|(x550*(x551%x552)));

    if (t121 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x553 = -1;
	static int8_t x554 = INT8_MAX;
	static int16_t x555 = INT16_MIN;
	uint64_t x556 = 205886151391LLU;
	volatile uint64_t t122 = UINT64_MAX;

    t122 = (x553|(x554*(x555%x556)));

    if (t122 != UINT64_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x558 = -44;
	int32_t x559 = INT32_MAX;
	static uint16_t x560 = 56U;

    t123 = (x557|(x558*(x559%x560)));

    if (t123 != -20) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x561 = INT16_MIN;
	volatile uint16_t x563 = UINT16_MAX;
	static int64_t x564 = 8433332904LL;
	volatile int64_t t124 = 108570LL;

    t124 = (x561|(x562*(x563%x564)));

    if (t124 != -32767LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x565 = INT16_MAX;
	int8_t x568 = 5;
	int32_t t125 = -319981;

    t125 = (x565|(x566*(x567%x568)));

    if (t125 != 32767) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x569 = INT64_MAX;
	uint16_t x570 = 15174U;
	uint64_t x571 = 19496LLU;
	uint32_t x572 = 73893U;
	uint64_t t126 = 20LLU;

    t126 = (x569|(x570*(x571%x572)));

    if (t126 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x575 = -1;

    t127 = (x573|(x574*(x575%x576)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = 6;
	uint32_t x578 = UINT32_MAX;
	uint8_t x579 = 11U;
	uint16_t x580 = 28U;
	static uint32_t t128 = 73U;

    t128 = (x577|(x578*(x579%x580)));

    if (t128 != 4294967287U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x581 = INT32_MIN;
	static int16_t x583 = INT16_MIN;
	int64_t x584 = 369514780161LL;

    t129 = (x581|(x582*(x583%x584)));

    if (t129 != -1073741824LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x585 = INT64_MIN;
	uint16_t x586 = 16672U;
	int16_t x587 = INT16_MIN;
	volatile int64_t t130 = INT64_MIN;

    t130 = (x585|(x586*(x587%x588)));

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x589 = 34909;
	uint64_t x591 = UINT64_MAX;
	int16_t x592 = INT16_MAX;
	volatile uint64_t t131 = 1723761342239LLU;

    t131 = (x589|(x590*(x591%x592)));

    if (t131 != 4688443645LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x593 = 23;
	volatile int8_t x594 = -1;
	static int16_t x595 = INT16_MAX;
	int8_t x596 = INT8_MIN;
	static volatile int32_t t132 = 60539;

    t132 = (x593|(x594*(x595%x596)));

    if (t132 != -105) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x597 = -140;
	volatile uint64_t x598 = UINT64_MAX;
	int64_t x599 = -1LL;
	int8_t x600 = 30;
	volatile uint64_t t133 = 229995828LLU;

    t133 = (x597|(x598*(x599%x600)));

    if (t133 != 18446744073709551477LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x602 = INT8_MIN;
	static volatile uint16_t x603 = UINT16_MAX;
	int8_t x604 = INT8_MIN;
	int32_t t134 = 164135;

    t134 = (x601|(x602*(x603%x604)));

    if (t134 != -16256) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x605 = INT8_MAX;
	uint64_t x606 = 270201459306LLU;
	volatile uint8_t x607 = UINT8_MAX;
	static uint16_t x608 = 3U;
	volatile uint64_t t135 = 29413987484441086LLU;

    t135 = (x605|(x606*(x607%x608)));

    if (t135 != 127LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x609 = 1;
	uint8_t x610 = 1U;
	int64_t x611 = 567760703180229866LL;
	uint8_t x612 = 56U;
	volatile int64_t t136 = 229LL;

    t136 = (x609|(x610*(x611%x612)));

    if (t136 != 35LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x615 = -1;
	int8_t x616 = -2;
	static volatile int64_t t137 = 207102LL;

    t137 = (x613|(x614*(x615%x616)));

    if (t137 != -127LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x617 = 25U;
	int16_t x618 = 318;
	uint32_t x619 = 14855U;
	uint8_t x620 = 63U;
	volatile uint32_t t138 = 1742845U;

    t138 = (x617|(x618*(x619%x620)));

    if (t138 != 15901U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x621 = -1;
	uint8_t x623 = 40U;
	int64_t t139 = 75205404LL;

    t139 = (x621|(x622*(x623%x624)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x625 = INT16_MIN;
	volatile uint64_t x627 = 3984870800LLU;
	volatile uint16_t x628 = UINT16_MAX;
	static uint64_t t140 = 1663LLU;

    t140 = (x625|(x626*(x627%x628)));

    if (t140 != 18446744073709528333LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x630 = UINT16_MAX;
	volatile int8_t x632 = INT8_MIN;

    t141 = (x629|(x630*(x631%x632)));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x633 = -1LL;
	int16_t x634 = INT16_MIN;
	int32_t x635 = -1;
	volatile int8_t x636 = INT8_MIN;
	volatile int64_t t142 = 61770656505LL;

    t142 = (x633|(x634*(x635%x636)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x637 = UINT64_MAX;
	int64_t x638 = -1LL;
	static uint16_t x640 = 3U;
	volatile uint64_t t143 = UINT64_MAX;

    t143 = (x637|(x638*(x639%x640)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x641 = -13750;
	volatile uint64_t x644 = 4177347734279LLU;
	uint64_t t144 = 2442601282607LLU;

    t144 = (x641|(x642*(x643%x644)));

    if (t144 != 18446744073709538174LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x645 = 14572846726LL;
	int32_t x646 = -3;
	static int32_t x648 = -72468013;
	int64_t t145 = 1LL;

    t145 = (x645|(x646*(x647%x648)));

    if (t145 != -18LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x650 = -1;
	uint16_t x651 = 58U;
	static int16_t x652 = 642;
	uint64_t t146 = UINT64_MAX;

    t146 = (x649|(x650*(x651%x652)));

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x653 = INT16_MIN;
	int64_t x655 = -1LL;

    t147 = (x653|(x654*(x655%x656)));

    if (t147 != -32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x657 = INT16_MAX;
	int64_t x658 = 105576LL;
	static int8_t x659 = -4;
	int64_t t148 = -100189LL;

    t148 = (x657|(x658*(x659%x660)));

    if (t148 != 453445466849279LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x661 = 2;
	static volatile int8_t x662 = 1;
	int32_t x663 = 808314725;
	int8_t x664 = INT8_MIN;

    t149 = (x661|(x662*(x663%x664)));

    if (t149 != 103) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x666 = 58292468U;
	static int8_t x667 = -6;
	int16_t x668 = 6;

    t150 = (x665|(x666*(x667%x668)));

    if (t150 != 2147483647U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x669 = UINT8_MAX;
	int32_t x670 = -1;
	uint32_t x671 = 4U;
	int8_t x672 = INT8_MIN;

    t151 = (x669|(x670*(x671%x672)));

    if (t151 != UINT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x673 = UINT32_MAX;
	static uint16_t x674 = 460U;
	static int16_t x675 = INT16_MIN;
	int16_t x676 = INT16_MIN;
	volatile uint32_t t152 = UINT32_MAX;

    t152 = (x673|(x674*(x675%x676)));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x677 = INT8_MAX;
	volatile int32_t x679 = INT32_MIN;
	static int64_t x680 = INT64_MAX;
	int64_t t153 = -5167090679668092LL;

    t153 = (x677|(x678*(x679%x680)));

    if (t153 != 274877907071LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x682 = 195;
	static volatile int32_t x683 = INT32_MIN;
	volatile int32_t t154 = 0;

    t154 = (x681|(x682*(x683%x684)));

    if (t154 != 875) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x689 = INT16_MIN;
	uint32_t x690 = 1U;
	uint64_t x691 = 1618110479LLU;
	int64_t x692 = -1LL;
	uint64_t t155 = 517687LLU;

    t155 = (x689|(x690*(x691%x692)));

    if (t155 != 18446744073709545487LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x702 = 2U;
	int8_t x703 = 1;
	volatile int64_t t156 = 522202050LL;

    t156 = (x701|(x702*(x703%x704)));

    if (t156 != 34718LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x706 = 202;
	uint8_t x707 = UINT8_MAX;
	int64_t x708 = 192340LL;
	int64_t t157 = -826414362LL;

    t157 = (x705|(x706*(x707%x708)));

    if (t157 != -92942337LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x709 = 25U;
	uint64_t x711 = 1714971980LLU;
	int64_t x712 = INT64_MAX;
	volatile uint64_t t158 = 6086LLU;

    t158 = (x709|(x710*(x711%x712)));

    if (t158 != 13887127950724349LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x713 = 31;
	int16_t x714 = 1;
	int64_t x716 = -14552LL;
	uint64_t t159 = 111993LLU;

    t159 = (x713|(x714*(x715%x716)));

    if (t159 != 14559LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x717 = UINT64_MAX;
	static volatile int16_t x718 = -1;
	uint16_t x719 = 3077U;
	static int32_t x720 = 7;

    t160 = (x717|(x718*(x719%x720)));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x721 = -1;
	uint32_t x722 = UINT32_MAX;
	static int8_t x723 = -15;
	static uint32_t x724 = 200U;

    t161 = (x721|(x722*(x723%x724)));

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x725 = 1U;
	int64_t x726 = -63522LL;
	volatile int8_t x727 = -4;
	static int64_t x728 = -1LL;
	volatile int64_t t162 = -64590339325LL;

    t162 = (x725|(x726*(x727%x728)));

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x729 = INT16_MIN;
	uint16_t x730 = UINT16_MAX;
	volatile int16_t x731 = 865;
	int32_t x732 = INT32_MIN;
	static int32_t t163 = -3822356;

    t163 = (x729|(x730*(x731%x732)));

    if (t163 != -865) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x733 = INT32_MIN;
	static volatile int64_t x734 = -1LL;
	volatile uint16_t x735 = 12821U;
	volatile uint64_t x736 = 59131747343460LLU;
	uint64_t t164 = 1000246146539LLU;

    t164 = (x733|(x734*(x735%x736)));

    if (t164 != 18446744073709538795LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x738 = INT16_MIN;
	int8_t x739 = 0;
	volatile uint32_t t165 = 353138U;

    t165 = (x737|(x738*(x739%x740)));

    if (t165 != 29184U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x742 = 7956U;
	uint16_t x743 = 1U;
	static int16_t x744 = INT16_MIN;
	static volatile uint64_t t166 = 11LLU;

    t166 = (x741|(x742*(x743%x744)));

    if (t166 != 10534773LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x745 = INT8_MIN;
	static volatile int32_t x746 = INT32_MIN;
	volatile uint16_t x747 = 346U;
	int64_t x748 = -1LL;

    t167 = (x745|(x746*(x747%x748)));

    if (t167 != -128LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x749 = INT64_MAX;
	uint64_t x750 = 4091694578747LLU;
	int16_t x751 = -1;
	int8_t x752 = -1;

    t168 = (x749|(x750*(x751%x752)));

    if (t168 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x753 = 10U;
	int8_t x754 = INT8_MIN;
	volatile uint8_t x755 = UINT8_MAX;
	int64_t x756 = INT64_MAX;
	static volatile int64_t t169 = 17LL;

    t169 = (x753|(x754*(x755%x756)));

    if (t169 != -32630LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	int64_t x763 = -123LL;
	volatile int32_t x764 = INT32_MIN;
	volatile int64_t t170 = 3786718LL;

    t170 = (x761|(x762*(x763%x764)));

    if (t170 != 2147483647LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x766 = INT64_MIN;
	uint8_t x767 = 96U;
	int8_t x768 = -1;
	volatile int64_t t171 = -4LL;

    t171 = (x765|(x766*(x767%x768)));

    if (t171 != 2147483647LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x769 = -1116898647974LL;
	int64_t x770 = -4600033398315220258LL;
	static uint16_t x771 = 2983U;
	int64_t x772 = 7LL;

    t172 = (x769|(x770*(x771%x772)));

    if (t172 != -67165474LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x777 = INT16_MIN;
	static volatile int32_t x778 = 48;
	static uint64_t x779 = 413621057415LLU;
	uint8_t x780 = 4U;
	volatile uint64_t t173 = 3LLU;

    t173 = (x777|(x778*(x779%x780)));

    if (t173 != 18446744073709518992LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x790 = 21;
	int8_t x791 = -60;
	int32_t x792 = -1;
	int32_t t174 = 302;

    t174 = (x789|(x790*(x791%x792)));

    if (t174 != -128) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x793 = INT64_MIN;
	static uint8_t x795 = 5U;
	volatile int64_t t175 = INT64_MIN;

    t175 = (x793|(x794*(x795%x796)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x801 = INT64_MIN;
	int8_t x802 = 1;
	int8_t x803 = INT8_MIN;
	volatile int32_t x804 = INT32_MIN;
	volatile int64_t t176 = 3868110569360000132LL;

    t176 = (x801|(x802*(x803%x804)));

    if (t176 != -128LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x806 = UINT8_MAX;
	uint64_t x808 = 31121112LLU;
	uint64_t t177 = 228018004358121468LLU;

    t177 = (x805|(x806*(x807%x808)));

    if (t177 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x809 = 0U;
	static uint8_t x810 = 1U;
	int16_t x812 = -2726;
	volatile int64_t t178 = -18049354363235659LL;

    t178 = (x809|(x810*(x811%x812)));

    if (t178 != 881LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x813 = 1;
	uint64_t x815 = 13028654LLU;
	uint8_t x816 = 1U;

    t179 = (x813|(x814*(x815%x816)));

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x817 = -242LL;
	volatile int32_t x818 = INT32_MAX;
	static int8_t x819 = 58;
	volatile int64_t t180 = 5LL;

    t180 = (x817|(x818*(x819%x820)));

    if (t180 != -50LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x822 = -1LL;
	static uint32_t x823 = UINT32_MAX;

    t181 = (x821|(x822*(x823%x824)));

    if (t181 != -1LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x825 = INT32_MAX;
	static int16_t x826 = 1428;
	volatile uint16_t x827 = 108U;
	int32_t x828 = -36;
	static volatile int32_t t182 = INT32_MAX;

    t182 = (x825|(x826*(x827%x828)));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x830 = UINT8_MAX;
	volatile uint8_t x832 = 47U;
	int32_t t183 = -51003542;

    t183 = (x829|(x830*(x831%x832)));

    if (t183 != 3583) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x833 = -293049;
	static volatile uint32_t x834 = 19966U;
	uint16_t x835 = 4228U;
	static uint32_t x836 = 448514267U;
	uint32_t t184 = 48155U;

    t184 = (x833|(x834*(x835%x836)));

    if (t184 != 4294678527U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x837 = INT16_MAX;
	int16_t x838 = -2817;
	static int64_t x839 = INT64_MIN;
	static volatile int8_t x840 = -1;
	volatile int64_t t185 = -4088570LL;

    t185 = (x837|(x838*(x839%x840)));

    if (t185 != 32767LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x842 = -1LL;
	uint32_t x844 = 64930511U;
	int64_t t186 = 63454LL;

    t186 = (x841|(x842*(x843%x844)));

    if (t186 != -1761459LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x845 = 98U;
	static int16_t x846 = INT16_MAX;
	volatile uint64_t t187 = 322017570120113LLU;

    t187 = (x845|(x846*(x847%x848)));

    if (t187 != 70366596661347LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x849 = INT8_MIN;
	int8_t x850 = INT8_MAX;
	uint16_t x852 = UINT16_MAX;
	static volatile int32_t t188 = 12532;

    t188 = (x849|(x850*(x851%x852)));

    if (t188 != -127) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x853 = INT16_MIN;
	static volatile int32_t x854 = INT32_MAX;
	uint32_t x855 = UINT32_MAX;
	int64_t x856 = INT64_MAX;

    t189 = (x853|(x854*(x855%x856)));

    if (t189 != -32767LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x858 = -1;
	uint32_t x860 = 1124U;
	volatile uint64_t t190 = 166127710053212LLU;

    t190 = (x857|(x858*(x859%x860)));

    if (t190 != 27564LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x861 = 0;
	uint32_t x862 = UINT32_MAX;
	int64_t x863 = INT64_MIN;
	static volatile int64_t t191 = 61645576LL;

    t191 = (x861|(x862*(x863%x864)));

    if (t191 != -8589934590LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x865 = -570;
	uint16_t x867 = 9505U;
	static volatile int32_t x868 = INT32_MAX;
	int32_t t192 = 61254;

    t192 = (x865|(x866*(x867%x868)));

    if (t192 != -33) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x869 = 107U;
	static int16_t x871 = 0;
	int8_t x872 = INT8_MAX;
	static int32_t t193 = -5457;

    t193 = (x869|(x870*(x871%x872)));

    if (t193 != 107) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x877 = INT32_MIN;
	int8_t x878 = INT8_MAX;
	int16_t x879 = INT16_MIN;
	uint16_t x880 = UINT16_MAX;
	int32_t t194 = -270;

    t194 = (x877|(x878*(x879%x880)));

    if (t194 != -4161536) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x881 = 15265420U;
	static int16_t x882 = 1;
	int64_t x883 = -58909735321400LL;
	int8_t x884 = INT8_MAX;

    t195 = (x881|(x882*(x883%x884)));

    if (t195 != -1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x886 = 171907U;
	int16_t x887 = INT16_MIN;
	volatile int64_t x888 = INT64_MIN;
	int64_t t196 = -32374743652187079LL;

    t196 = (x885|(x886*(x887%x888)));

    if (t196 != -5633048373LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x889 = INT8_MIN;
	uint64_t x890 = UINT64_MAX;
	int32_t x891 = INT32_MIN;
	static uint16_t x892 = UINT16_MAX;
	uint64_t t197 = 7651LLU;

    t197 = (x889|(x890*(x891%x892)));

    if (t197 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x893 = 0U;
	static uint8_t x895 = 11U;
	static int16_t x896 = -1726;
	int32_t t198 = -1;

    t198 = (x893|(x894*(x895%x896)));

    if (t198 != 353276) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x897 = 2U;
	uint32_t x898 = 0U;
	int32_t x899 = INT32_MAX;
	uint32_t x900 = UINT32_MAX;
	uint32_t t199 = 1U;

    t199 = (x897|(x898*(x899%x900)));

    if (t199 != 2U) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

