
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

int16_t x1 = INT16_MIN;
volatile int8_t x7 = -1;
static int16_t x10 = INT16_MIN;
int32_t x16 = -45537;
volatile int8_t x23 = INT8_MIN;
int16_t x24 = 0;
static int32_t t6 = -8300;
static uint32_t x29 = 52444404U;
volatile uint32_t t9 = 345625168U;
int64_t t10 = 105301365322LL;
static volatile uint8_t x48 = 27U;
volatile int32_t x61 = 388087690;
int64_t x62 = -1LL;
uint8_t x75 = UINT8_MAX;
uint32_t x81 = 316U;
uint32_t t18 = 704664424U;
volatile int64_t x95 = -59841097562LL;
int16_t x100 = -925;
int32_t t24 = 3;
volatile int32_t x121 = -137803790;
volatile int16_t x125 = INT16_MIN;
int16_t x133 = INT16_MIN;
int8_t x139 = INT8_MAX;
volatile int32_t t30 = 2751;
int16_t x150 = -1;
volatile int16_t x158 = 1118;
static volatile int8_t x159 = INT8_MIN;
int16_t x160 = INT16_MAX;
int16_t x164 = 2318;
static volatile int16_t x181 = INT16_MIN;
int16_t x190 = -132;
uint8_t x196 = UINT8_MAX;
volatile int16_t x201 = INT16_MIN;
int8_t x203 = 1;
int64_t x207 = -3710LL;
uint16_t x210 = 5U;
volatile uint16_t x212 = 71U;
int64_t x216 = -54012947LL;
static uint16_t x219 = 3080U;
static volatile uint32_t x227 = 15115110U;
int32_t x236 = INT32_MIN;
int32_t x237 = INT32_MIN;
int8_t x240 = INT8_MIN;
static uint32_t x271 = UINT32_MAX;
static uint8_t x272 = 27U;
volatile int32_t t54 = -300725;
uint64_t t55 = 416316251760904LLU;
uint64_t x291 = 310930713270930739LLU;
static int8_t x292 = 2;
volatile int32_t x293 = -5765;
uint64_t t60 = 70996731LLU;
int16_t x314 = -1;
int64_t x317 = 3600LL;
int8_t x323 = INT8_MAX;
int16_t x324 = INT16_MIN;
uint8_t x326 = 0U;
volatile uint32_t x342 = 760134U;
static uint8_t x351 = UINT8_MAX;
static int32_t x353 = INT32_MIN;
volatile uint64_t t69 = 44350LLU;
static int8_t x359 = 0;
int32_t x360 = INT32_MIN;
volatile int32_t t71 = 884179422;
static volatile uint64_t x370 = 995421LLU;
uint64_t x376 = 86524945684LLU;
uint8_t x383 = UINT8_MAX;
static uint64_t x384 = UINT64_MAX;
int64_t x390 = 468698LL;
volatile int32_t t78 = 1195002;
static int64_t x406 = 319040276344435062LL;
int64_t x408 = -1LL;
static volatile int16_t x423 = INT16_MAX;
int8_t x424 = INT8_MIN;
volatile int32_t t81 = 478204141;
int16_t x429 = INT16_MAX;
int64_t x432 = -1LL;
int8_t x433 = -1;
volatile uint16_t x437 = UINT16_MAX;
int64_t x451 = INT64_MAX;
int32_t x459 = INT32_MIN;
static uint64_t t87 = 54186LLU;
int64_t x463 = -1LL;
int64_t x466 = -1LL;
int64_t x467 = -521020894554LL;
int64_t x468 = -1LL;
uint64_t x475 = 28821815LLU;
int64_t x476 = -433325LL;
static int32_t x477 = -1;
static uint8_t x479 = 0U;
int64_t x484 = INT64_MIN;
volatile int64_t t92 = 796750LL;
static uint16_t x486 = 664U;
int16_t x490 = -1;
int8_t x493 = INT8_MIN;
uint16_t x494 = 5789U;
int64_t x500 = -13802LL;
int32_t x506 = 3319784;
int8_t x514 = 54;
int16_t x515 = 441;
int16_t x516 = -1;
int64_t x517 = 35931257LL;
static int32_t x521 = -1;
int8_t x524 = 3;
static int64_t t100 = 589457235250526LL;
static int8_t x531 = -47;
volatile int16_t x532 = 481;
uint64_t t101 = 110521471LLU;
int16_t x539 = -1;
uint64_t x540 = 3141571598160202LLU;
uint64_t x541 = 1LLU;
uint16_t x544 = 7258U;
static uint64_t t103 = 48766015001416LLU;
uint8_t x546 = 102U;
static int16_t x547 = -1;
int16_t x549 = INT16_MIN;
int32_t t105 = -64432103;
int8_t x560 = INT8_MIN;
int32_t x566 = INT32_MIN;
int64_t x574 = INT64_MIN;
volatile int16_t x583 = INT16_MAX;
int32_t x585 = -239;
int8_t x596 = INT8_MIN;
volatile uint32_t t115 = 399U;
int64_t x601 = INT64_MIN;
uint8_t x632 = 28U;
static int64_t t122 = 5LL;
volatile uint64_t t123 = 21037989564856LLU;
int64_t x641 = -95464343LL;
static uint32_t x642 = 1065881417U;
int16_t x643 = INT16_MIN;
volatile int8_t x644 = INT8_MIN;
volatile uint32_t t126 = 878181U;
int32_t x657 = INT32_MIN;
uint8_t x661 = UINT8_MAX;
static uint32_t x662 = 114549376U;
volatile int16_t x665 = 8;
int32_t x671 = INT32_MAX;
int8_t x672 = 4;
static uint16_t x697 = 407U;
int32_t x698 = INT32_MAX;
volatile int64_t t133 = -31070943622404LL;
uint64_t x706 = UINT64_MAX;
int8_t x707 = -1;
volatile int64_t x708 = INT64_MIN;
int16_t x715 = INT16_MAX;
uint32_t t136 = 1030300U;
uint16_t x725 = UINT16_MAX;
volatile int64_t t137 = -292480639314548243LL;
volatile uint64_t t138 = 89404999189204LLU;
uint8_t x734 = UINT8_MAX;
int16_t x737 = -1;
static int32_t x738 = INT32_MAX;
int32_t t140 = -3500;
int32_t x742 = INT32_MIN;
uint16_t x752 = 1322U;
static int8_t x753 = -1;
static int8_t x755 = INT8_MIN;
uint8_t x757 = 0U;
static volatile int8_t x772 = -1;
volatile uint64_t t146 = 23706285631611LLU;
static uint32_t x773 = 354115569U;
static uint32_t x775 = 536U;
uint32_t x777 = 466656U;
uint32_t t148 = 6U;
int16_t x781 = -1;
volatile int16_t x784 = INT16_MIN;
volatile int8_t x789 = INT8_MIN;
int8_t x791 = -28;
uint32_t t151 = 38025551U;
int64_t x800 = 1676549175LL;
static volatile int64_t t153 = -57991625691LL;
volatile int32_t t155 = -1765;
static int64_t x818 = -1LL;
int64_t x824 = -1LL;
volatile int64_t t160 = -1660LL;
int16_t x831 = -23;
static volatile uint32_t t161 = 0U;
static uint16_t x838 = UINT16_MAX;
uint64_t x839 = UINT64_MAX;
volatile int32_t x851 = -1;
uint64_t x857 = 13681LLU;
int8_t x858 = INT8_MAX;
int64_t x861 = 4474LL;
volatile uint32_t t169 = 168U;
volatile uint32_t t170 = 63251U;
int8_t x883 = INT8_MIN;
volatile int32_t t171 = -4215717;
volatile uint64_t t172 = 859469315508LLU;
uint8_t x892 = 1U;
volatile int64_t x897 = INT64_MIN;
volatile int64_t x898 = -1LL;
volatile int64_t t175 = -6274978LL;
int16_t x901 = 6;
volatile int64_t t176 = -2060727202614LL;
static int8_t x912 = 15;
static int8_t x915 = 2;
int8_t x923 = -1;
int32_t x928 = -8546;
static uint32_t x939 = 191U;
int32_t x942 = -1;
int64_t x954 = -1LL;
volatile int32_t x960 = -1;
volatile int32_t x979 = 587015;
volatile int32_t x988 = INT32_MAX;
int32_t x990 = INT32_MAX;
int64_t x991 = -1LL;
static int16_t x994 = INT16_MIN;
int16_t x1003 = INT16_MAX;
uint64_t x1004 = UINT64_MAX;
static int8_t x1008 = INT8_MIN;
uint32_t t196 = 390400U;
int32_t t197 = -819383;
uint64_t x1020 = UINT64_MAX;


void f0(void) {
    	int16_t x2 = 0;
	int64_t x3 = -228342LL;
	static uint32_t x4 = 78732258U;
	volatile int64_t t0 = 11LL;

    t0 = (((x1|x2)*x3)+x4);

    if (t0 != 7561042914LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x5 = 151377844030524LLU;
	int16_t x6 = -1;
	uint16_t x8 = 0U;
	static uint64_t t1 = 67579103028LLU;

    t1 = (((x5|x6)*x7)+x8);

    if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = -1;
	static int16_t x11 = -226;
	static volatile uint16_t x12 = 5U;
	static volatile int32_t t2 = -24208426;

    t2 = (((x9|x10)*x11)+x12);

    if (t2 != 231) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	static uint64_t x15 = 3700LLU;
	volatile uint64_t t3 = 640LLU;

    t3 = (((x13|x14)*x15)+x16);

    if (t3 != 18446736128020008479LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	volatile int64_t x19 = INT64_MAX;
	int8_t x20 = INT8_MAX;
	int64_t t4 = 2LL;

    t4 = (((x17|x18)*x19)+x20);

    if (t4 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int64_t x22 = 2529270774LL;
	int64_t t5 = -180914LL;

    t5 = (((x21|x22)*x23)+x24);

    if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	volatile uint8_t x26 = 109U;
	static int32_t x27 = INT32_MAX;
	volatile int16_t x28 = INT16_MAX;

    t6 = (((x25|x26)*x27)+x28);

    if (t6 != -2147450880) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = 0LLU;
	static volatile int8_t x31 = 1;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t7 = 398LLU;

    t7 = (((x29|x30)*x31)+x32);

    if (t7 != 9223372036907220212LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x33 = UINT64_MAX;
	volatile uint8_t x34 = 3U;
	uint8_t x35 = UINT8_MAX;
	uint64_t x36 = 60LLU;
	uint64_t t8 = 8178626358273937348LLU;

    t8 = (((x33|x34)*x35)+x36);

    if (t8 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	int32_t x38 = INT32_MIN;
	volatile uint32_t x39 = 1672U;
	int32_t x40 = INT32_MIN;

    t9 = (((x37|x38)*x39)+x40);

    if (t9 != 2147481976U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x41 = 3U;
	int16_t x42 = INT16_MAX;
	int64_t x43 = -1LL;
	int16_t x44 = -30;

    t10 = (((x41|x42)*x43)+x44);

    if (t10 != -32797LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 13131U;
	int8_t x46 = INT8_MIN;
	static uint16_t x47 = 30U;
	volatile uint32_t t11 = 241906U;

    t11 = (((x45|x46)*x47)+x48);

    if (t11 != 4294965733U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 177334593338LLU;
	volatile int16_t x50 = 3810;
	static uint16_t x51 = UINT16_MAX;
	volatile uint8_t x52 = 25U;
	uint64_t t12 = 2431192414417796698LLU;

    t12 = (((x49|x50)*x51)+x52);

    if (t12 != 11621622721204255LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	uint64_t x54 = 0LLU;
	int64_t x55 = -1LL;
	static int64_t x56 = -138LL;
	uint64_t t13 = 1883682385LLU;

    t13 = (((x53|x54)*x55)+x56);

    if (t13 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x63 = -1;
	int8_t x64 = 26;
	volatile int64_t t14 = -1601572170166764LL;

    t14 = (((x61|x62)*x63)+x64);

    if (t14 != 27LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x69 = -55;
	int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MAX;
	volatile uint16_t x72 = 26764U;
	int64_t t15 = 1116717087LL;

    t15 = (((x69|x70)*x71)+x72);

    if (t15 != 19779LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x73 = UINT16_MAX;
	volatile int32_t x74 = -1;
	volatile int16_t x76 = INT16_MIN;
	int32_t t16 = 0;

    t16 = (((x73|x74)*x75)+x76);

    if (t16 != -33023) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x82 = 6627410488LLU;
	int8_t x83 = INT8_MIN;
	int16_t x84 = -1;
	uint64_t t17 = 1485377883752LLU;

    t17 = (((x81|x82)*x83)+x84);

    if (t17 != 18446743225400975871LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x85 = UINT32_MAX;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = -3;
	uint16_t x88 = 208U;

    t18 = (((x85|x86)*x87)+x88);

    if (t18 != 211U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	static uint8_t x91 = 45U;
	uint32_t x92 = UINT32_MAX;
	volatile uint32_t t19 = 1U;

    t19 = (((x89|x90)*x91)+x92);

    if (t19 != 4293498450U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 0U;
	static uint8_t x94 = UINT8_MAX;
	static uint8_t x96 = 0U;
	static int64_t t20 = 123LL;

    t20 = (((x93|x94)*x95)+x96);

    if (t20 != -15259479878310LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 86U;
	int8_t x98 = 30;
	uint64_t x99 = 24207721081545LLU;
	volatile uint64_t t21 = 232LLU;

    t21 = (((x97|x98)*x99)+x100);

    if (t21 != 2275525781664305LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = INT16_MIN;
	int8_t x102 = -1;
	volatile int8_t x103 = INT8_MAX;
	static volatile int32_t x104 = INT32_MAX;
	volatile int32_t t22 = -10131303;

    t22 = (((x101|x102)*x103)+x104);

    if (t22 != 2147483520) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = -1;
	int8_t x107 = -22;
	static uint8_t x108 = 2U;
	volatile int32_t t23 = 309529265;

    t23 = (((x105|x106)*x107)+x108);

    if (t23 != 24) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = 0;
	int8_t x111 = -1;
	volatile int16_t x112 = INT16_MAX;

    t24 = (((x109|x110)*x111)+x112);

    if (t24 != 32895) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = 0;
	static volatile uint32_t x118 = UINT32_MAX;
	uint32_t x119 = UINT32_MAX;
	static int16_t x120 = -17;
	volatile uint32_t t25 = 108U;

    t25 = (((x117|x118)*x119)+x120);

    if (t25 != 4294967280U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x122 = INT8_MAX;
	static volatile int64_t x123 = -129292LL;
	static uint64_t x124 = 94848429036LLU;
	volatile uint64_t t26 = 12LLU;

    t26 = (((x121|x122)*x123)+x124);

    if (t26 != 17911774364920LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x126 = -1;
	volatile int8_t x127 = INT8_MIN;
	volatile int8_t x128 = 0;
	static int32_t t27 = 2213;

    t27 = (((x125|x126)*x127)+x128);

    if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = -2;
	int8_t x130 = 1;
	uint16_t x131 = 2U;
	int16_t x132 = 54;
	static volatile int32_t t28 = -732114;

    t28 = (((x129|x130)*x131)+x132);

    if (t28 != 52) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	static uint64_t x136 = 8317243LLU;
	uint64_t t29 = 1LLU;

    t29 = (((x133|x134)*x135)+x136);

    if (t29 != 18446744072644159803LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x137 = 3U;
	volatile int8_t x138 = 0;
	static uint8_t x140 = 19U;

    t30 = (((x137|x138)*x139)+x140);

    if (t30 != 400) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x149 = 3U;
	int16_t x151 = 7;
	int16_t x152 = INT16_MAX;
	int32_t t31 = 395420;

    t31 = (((x149|x150)*x151)+x152);

    if (t31 != 32760) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x153 = 11;
	uint64_t x154 = UINT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	static uint16_t x156 = 2U;
	volatile uint64_t t32 = 4191346005249892345LLU;

    t32 = (((x153|x154)*x155)+x156);

    if (t32 != 2147483650LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x157 = 0U;
	static uint32_t t33 = 936056U;

    t33 = (((x157|x158)*x159)+x160);

    if (t33 != 4294856959U) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x161 = -72LL;
	volatile uint8_t x162 = 42U;
	uint32_t x163 = UINT32_MAX;
	volatile int64_t t34 = 1520LL;

    t34 = (((x161|x162)*x163)+x164);

    if (t34 != -300647708332LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x165 = -1LL;
	static uint64_t x166 = 5965249LLU;
	int16_t x167 = -14;
	int32_t x168 = -4;
	volatile uint64_t t35 = 332LLU;

    t35 = (((x165|x166)*x167)+x168);

    if (t35 != 10LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x182 = -2;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t x184 = -50553;
	volatile uint64_t t36 = 736601LLU;

    t36 = (((x181|x182)*x183)+x184);

    if (t36 != 18446744073709501065LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x189 = -1;
	int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MIN;
	int32_t t37 = 47693591;

    t37 = (((x189|x190)*x191)+x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x193 = INT8_MAX;
	static int8_t x194 = -1;
	volatile uint64_t x195 = 2452477LLU;
	static uint64_t t38 = 715030235712938LLU;

    t38 = (((x193|x194)*x195)+x196);

    if (t38 != 18446744073707099394LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x197 = -5;
	static volatile uint8_t x198 = 59U;
	volatile uint64_t x199 = 241168993838LLU;
	int8_t x200 = INT8_MIN;
	uint64_t t39 = 527601996LLU;

    t39 = (((x197|x198)*x199)+x200);

    if (t39 != 18446742867864582298LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x202 = 1422154204LLU;
	int64_t x204 = 1072952118LL;
	uint64_t t40 = 18LLU;

    t40 = (((x201|x202)*x203)+x204);

    if (t40 != 1072942354LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x205 = INT16_MIN;
	int64_t x206 = INT64_MAX;
	uint32_t x208 = 1308922830U;
	int64_t t41 = -150366632593114233LL;

    t41 = (((x205|x206)*x207)+x208);

    if (t41 != 1308926540LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x209 = -1;
	uint16_t x211 = 7U;
	int32_t t42 = -3203898;

    t42 = (((x209|x210)*x211)+x212);

    if (t42 != 64) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x213 = -3733857311LL;
	int8_t x214 = INT8_MIN;
	uint64_t x215 = UINT64_MAX;
	static volatile uint64_t t43 = 33320804LLU;

    t43 = (((x213|x214)*x215)+x216);

    if (t43 != 18446744073655538700LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x217 = -1;
	int64_t x218 = 167677010090LL;
	int64_t x220 = INT64_MAX;
	int64_t t44 = -1451438LL;

    t44 = (((x217|x218)*x219)+x220);

    if (t44 != 9223372036854772727LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x221 = INT16_MIN;
	static int16_t x222 = INT16_MIN;
	uint8_t x223 = UINT8_MAX;
	static uint64_t x224 = 13LLU;
	volatile uint64_t t45 = 86135360534721851LLU;

    t45 = (((x221|x222)*x223)+x224);

    if (t45 != 18446744073701195789LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x225 = -6;
	int8_t x226 = -1;
	volatile int16_t x228 = INT16_MIN;
	volatile uint32_t t46 = 88771U;

    t46 = (((x225|x226)*x227)+x228);

    if (t46 != 4279819418U) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x233 = 541128782LL;
	int16_t x234 = -1;
	static uint32_t x235 = 50889415U;
	int64_t t47 = -318166334462LL;

    t47 = (((x233|x234)*x235)+x236);

    if (t47 != -2198373063LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x238 = 196904432LLU;
	int64_t x239 = INT64_MIN;
	uint64_t t48 = 1874010465244LLU;

    t48 = (((x237|x238)*x239)+x240);

    if (t48 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = -1;
	uint32_t x248 = 249U;
	uint32_t t49 = 345U;

    t49 = (((x245|x246)*x247)+x248);

    if (t49 != 250U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x249 = 14;
	int32_t x250 = -2321;
	uint8_t x251 = UINT8_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t50 = -2639;

    t50 = (((x249|x250)*x251)+x252);

    if (t50 != -526320) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x253 = INT16_MAX;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = -1903;
	volatile int8_t x256 = INT8_MIN;
	uint32_t t51 = 8849330U;

    t51 = (((x253|x254)*x255)+x256);

    if (t51 != 1775U) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x269 = INT64_MIN;
	volatile int16_t x270 = INT16_MIN;
	static volatile int64_t t52 = -8875521777067657LL;

    t52 = (((x269|x270)*x271)+x272);

    if (t52 != -140737488322533LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x273 = 1033U;
	uint8_t x274 = UINT8_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t53 = 0LL;

    t53 = (((x273|x274)*x275)+x276);

    if (t53 != -9223372036770956543LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x277 = 3U;
	volatile int8_t x278 = INT8_MAX;
	int8_t x279 = 0;
	int8_t x280 = INT8_MIN;

    t54 = (((x277|x278)*x279)+x280);

    if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x281 = 92620256511904927LLU;
	int16_t x282 = -1;
	static int32_t x283 = -209802;
	static volatile int64_t x284 = 2901941445670053LL;

    t55 = (((x281|x282)*x283)+x284);

    if (t55 != 2901941445879855LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x285 = 12;
	int16_t x286 = 11;
	int16_t x287 = -1;
	volatile int16_t x288 = -2661;
	int32_t t56 = -7391;

    t56 = (((x285|x286)*x287)+x288);

    if (t56 != -2676) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int64_t x289 = 13518088966699319LL;
	static volatile int8_t x290 = -1;
	uint64_t t57 = 28LLU;

    t57 = (((x289|x290)*x291)+x292);

    if (t57 != 18135813360438620879LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x294 = 656040504595LLU;
	static volatile int8_t x295 = -1;
	uint32_t x296 = 732703845U;
	uint64_t t58 = 348302638LLU;

    t58 = (((x293|x294)*x295)+x296);

    if (t58 != 732708586LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x297 = INT8_MIN;
	uint64_t x298 = 2469367LLU;
	int32_t x299 = INT32_MAX;
	int16_t x300 = -1;
	volatile uint64_t t59 = 11878991LLU;

    t59 = (((x297|x298)*x299)+x300);

    if (t59 != 18446744054382198792LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x301 = INT32_MAX;
	volatile uint32_t x302 = 57U;
	uint32_t x303 = 12U;
	static uint64_t x304 = UINT64_MAX;

    t60 = (((x301|x302)*x303)+x304);

    if (t60 != 4294967283LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x313 = INT16_MIN;
	uint16_t x315 = UINT16_MAX;
	static uint16_t x316 = 17294U;
	int32_t t61 = -71525;

    t61 = (((x313|x314)*x315)+x316);

    if (t61 != -48241) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x318 = 836291504LLU;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MAX;
	static volatile uint64_t t62 = 162LLU;

    t62 = (((x317|x318)*x319)+x320);

    if (t62 != 18446716670076026879LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x321 = 295559001;
	int16_t x322 = INT16_MIN;
	int32_t t63 = 924683;

    t63 = (((x321|x322)*x323)+x324);

    if (t63 != -1094361) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x325 = -27677;
	static volatile uint32_t x327 = 1027636400U;
	volatile int32_t x328 = INT32_MAX;
	volatile uint32_t t64 = 521129U;

    t64 = (((x325|x326)*x327)+x328);

    if (t64 != 1528274959U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x329 = INT32_MAX;
	uint16_t x330 = 3932U;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = UINT32_MAX;
	static uint64_t t65 = 8333623727191413LLU;

    t65 = (((x329|x330)*x331)+x332);

    if (t65 != 2147483648LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x333 = INT8_MIN;
	uint8_t x334 = 101U;
	volatile int32_t x335 = -1;
	int64_t x336 = 458950902184189LL;
	int64_t t66 = -2935399569233042171LL;

    t66 = (((x333|x334)*x335)+x336);

    if (t66 != 458950902184216LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x341 = INT32_MIN;
	volatile int32_t x343 = -25;
	int16_t x344 = 323;
	uint32_t t67 = 1762407U;

    t67 = (((x341|x342)*x343)+x344);

    if (t67 != 2128480621U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	int32_t x352 = INT32_MIN;
	static int64_t t68 = 94LL;

    t68 = (((x349|x350)*x351)+x352);

    if (t68 != -2147516288LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x354 = UINT64_MAX;
	static int64_t x355 = 4LL;
	static int16_t x356 = -3;

    t69 = (((x353|x354)*x355)+x356);

    if (t69 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x357 = -1;
	int64_t x358 = 654581239890298LL;
	volatile int64_t t70 = 15LL;

    t70 = (((x357|x358)*x359)+x360);

    if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x361 = INT16_MAX;
	static volatile int8_t x362 = -7;
	int8_t x363 = INT8_MIN;
	int16_t x364 = INT16_MIN;

    t71 = (((x361|x362)*x363)+x364);

    if (t71 != -32640) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x365 = 9U;
	volatile uint8_t x366 = 3U;
	int32_t x367 = -1;
	static uint8_t x368 = 2U;
	static int32_t t72 = 328917;

    t72 = (((x365|x366)*x367)+x368);

    if (t72 != -9) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x369 = 0LLU;
	volatile uint8_t x371 = 0U;
	int16_t x372 = -17;
	uint64_t t73 = 5962452899LLU;

    t73 = (((x369|x370)*x371)+x372);

    if (t73 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x373 = INT16_MIN;
	static uint64_t x374 = 1427732514351621825LLU;
	volatile uint64_t x375 = 499LLU;
	static volatile uint64_t t74 = 59372502294414LLU;

    t74 = (((x373|x374)*x375)+x376);

    if (t74 != 86513545031LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x381 = -188;
	static int16_t x382 = 1;
	volatile uint64_t t75 = 355534LLU;

    t75 = (((x381|x382)*x383)+x384);

    if (t75 != 18446744073709503930LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x385 = 651276759LLU;
	int8_t x386 = INT8_MIN;
	int32_t x387 = 55;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t76 = 4047047488LLU;

    t76 = (((x385|x386)*x387)+x388);

    if (t76 != 18446744073709549233LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x389 = INT16_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 862226139LLU;
	volatile uint64_t t77 = 42166065LLU;

    t77 = (((x389|x390)*x391)+x392);

    if (t77 != 799311707LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x393 = 52U;
	uint16_t x394 = 81U;
	uint16_t x395 = UINT16_MAX;
	volatile uint16_t x396 = 1019U;

    t78 = (((x393|x394)*x395)+x396);

    if (t78 != 7668614) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x397 = 37U;
	volatile uint32_t x398 = 949412U;
	uint32_t x399 = UINT32_MAX;
	uint16_t x400 = 4U;
	volatile uint32_t t79 = 455U;

    t79 = (((x397|x398)*x399)+x400);

    if (t79 != 4294017887U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x405 = -1LL;
	static volatile uint16_t x407 = 24967U;
	volatile int64_t t80 = -4300966232LL;

    t80 = (((x405|x406)*x407)+x408);

    if (t80 != -24968LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x421 = 225U;
	volatile int16_t x422 = -1;

    t81 = (((x421|x422)*x423)+x424);

    if (t81 != -32895) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x430 = 19;
	static uint64_t x431 = 0LLU;
	volatile uint64_t t82 = UINT64_MAX;

    t82 = (((x429|x430)*x431)+x432);

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x434 = 1061627U;
	volatile int64_t x435 = -1LL;
	static uint32_t x436 = 3748U;
	static int64_t t83 = 9040LL;

    t83 = (((x433|x434)*x435)+x436);

    if (t83 != -4294963547LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x438 = 0;
	uint32_t x439 = UINT32_MAX;
	int32_t x440 = INT32_MAX;
	uint32_t t84 = 27161879U;

    t84 = (((x437|x438)*x439)+x440);

    if (t84 != 2147418112U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x449 = -1;
	volatile int8_t x450 = INT8_MIN;
	int16_t x452 = INT16_MAX;
	int64_t t85 = 32220615LL;

    t85 = (((x449|x450)*x451)+x452);

    if (t85 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x453 = -1;
	int32_t x454 = INT32_MAX;
	uint8_t x455 = UINT8_MAX;
	volatile int16_t x456 = INT16_MIN;
	static int32_t t86 = 113;

    t86 = (((x453|x454)*x455)+x456);

    if (t86 != -33023) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x457 = 5U;
	uint64_t x458 = 42436LLU;
	uint32_t x460 = 914U;

    t87 = (((x457|x458)*x459)+x460);

    if (t87 != 18446652940945982354LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x461 = -170;
	static volatile int16_t x462 = INT16_MIN;
	static int64_t x464 = -15967685538818755LL;
	static volatile int64_t t88 = 0LL;

    t88 = (((x461|x462)*x463)+x464);

    if (t88 != -15967685538818585LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x465 = -2;
	volatile int64_t t89 = -9947390LL;

    t89 = (((x465|x466)*x467)+x468);

    if (t89 != 521020894553LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x473 = INT8_MIN;
	static volatile uint8_t x474 = 8U;
	uint64_t t90 = 38913963282127690LLU;

    t90 = (((x473|x474)*x475)+x476);

    if (t90 != 18446744070250500491LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x478 = UINT8_MAX;
	volatile uint64_t x480 = 127476185LLU;
	volatile uint64_t t91 = 56915LLU;

    t91 = (((x477|x478)*x479)+x480);

    if (t91 != 127476185LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x481 = -1;
	static int16_t x482 = -14;
	static uint32_t x483 = 231983U;

    t92 = (((x481|x482)*x483)+x484);

    if (t92 != -9223372032560040495LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x485 = INT16_MIN;
	static int16_t x487 = -1;
	int32_t x488 = -81087;
	static int32_t t93 = -31;

    t93 = (((x485|x486)*x487)+x488);

    if (t93 != -48983) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x489 = UINT32_MAX;
	volatile uint32_t x491 = UINT32_MAX;
	uint8_t x492 = 2U;
	volatile uint32_t t94 = 0U;

    t94 = (((x489|x490)*x491)+x492);

    if (t94 != 3U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x495 = 0U;
	int64_t x496 = INT64_MAX;
	int64_t t95 = INT64_MAX;

    t95 = (((x493|x494)*x495)+x496);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x497 = -6;
	static int64_t x498 = INT64_MAX;
	uint64_t x499 = 509861385LLU;
	volatile uint64_t t96 = 3840685973LLU;

    t96 = (((x497|x498)*x499)+x500);

    if (t96 != 18446744073199676429LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x505 = UINT32_MAX;
	int16_t x507 = INT16_MAX;
	uint64_t x508 = UINT64_MAX;
	static volatile uint64_t t97 = 11011962526LLU;

    t97 = (((x505|x506)*x507)+x508);

    if (t97 != 4294934528LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x513 = 43;
	int32_t t98 = -120;

    t98 = (((x513|x514)*x515)+x516);

    if (t98 != 27782) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x518 = INT8_MAX;
	uint32_t x519 = 559410443U;
	static int16_t x520 = 39;
	int64_t t99 = -1LL;

    t99 = (((x517|x518)*x519)+x520);

    if (t99 != 20100323752379548LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x522 = -1LL;
	static uint8_t x523 = 5U;

    t100 = (((x521|x522)*x523)+x524);

    if (t100 != -2LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x529 = 24791362748251LLU;
	volatile int8_t x530 = -1;

    t101 = (((x529|x530)*x531)+x532);

    if (t101 != 528LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x537 = INT8_MAX;
	uint16_t x538 = UINT16_MAX;
	static volatile uint64_t t102 = 280393106096LLU;

    t102 = (((x537|x538)*x539)+x540);

    if (t102 != 3141571598094667LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x542 = -13;
	static int64_t x543 = INT64_MIN;

    t103 = (((x541|x542)*x543)+x544);

    if (t103 != 9223372036854783066LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x545 = 6U;
	int8_t x548 = INT8_MIN;
	uint32_t t104 = 697960U;

    t104 = (((x545|x546)*x547)+x548);

    if (t104 != 4294967066U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x550 = INT16_MIN;
	int8_t x551 = -1;
	int8_t x552 = -1;

    t105 = (((x549|x550)*x551)+x552);

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x553 = 72645U;
	static uint8_t x554 = 63U;
	volatile int16_t x555 = INT16_MIN;
	static int64_t x556 = -978LL;
	volatile int64_t t106 = -300LL;

    t106 = (((x553|x554)*x555)+x556);

    if (t106 != 1912634414LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x557 = -1LL;
	int64_t x558 = INT64_MAX;
	int64_t x559 = 459213LL;
	int64_t t107 = -4476632LL;

    t107 = (((x557|x558)*x559)+x560);

    if (t107 != -459341LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x561 = 4632420U;
	int64_t x562 = 393642791800362LL;
	volatile int16_t x563 = -82;
	int64_t x564 = 1LL;
	volatile int64_t t108 = -4129406174993717LL;

    t108 = (((x561|x562)*x563)+x564);

    if (t108 != -32278708931014971LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x565 = INT16_MIN;
	volatile uint64_t x567 = 69403945883952250LLU;
	uint32_t x568 = 11903U;
	uint64_t t109 = 1727366252001613LLU;

    t109 = (((x565|x566)*x567)+x568);

    if (t109 != 13167766414637084287LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x573 = INT16_MIN;
	uint32_t x575 = 548806U;
	volatile int16_t x576 = INT16_MAX;
	int64_t t110 = 3LL;

    t110 = (((x573|x574)*x575)+x576);

    if (t110 != -17983242241LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x581 = INT8_MAX;
	static uint32_t x582 = UINT32_MAX;
	volatile int8_t x584 = -1;
	static uint32_t t111 = 142646415U;

    t111 = (((x581|x582)*x583)+x584);

    if (t111 != 4294934528U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x586 = 4U;
	uint64_t x587 = UINT64_MAX;
	uint16_t x588 = UINT16_MAX;
	volatile uint64_t t112 = 1211439922005274963LLU;

    t112 = (((x585|x586)*x587)+x588);

    if (t112 != 65770LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x589 = UINT16_MAX;
	static int64_t x590 = -1LL;
	volatile uint16_t x591 = 130U;
	volatile int64_t x592 = -653LL;
	volatile int64_t t113 = 1162366304LL;

    t113 = (((x589|x590)*x591)+x592);

    if (t113 != -783LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x593 = INT8_MIN;
	uint16_t x594 = 20U;
	int8_t x595 = -55;
	int32_t t114 = -35;

    t114 = (((x593|x594)*x595)+x596);

    if (t114 != 5812) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x597 = INT32_MAX;
	uint32_t x598 = 90189U;
	int8_t x599 = 0;
	int32_t x600 = -2521;

    t115 = (((x597|x598)*x599)+x600);

    if (t115 != 4294964775U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x602 = -1LL;
	static int32_t x603 = -819;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t116 = 122538546734LL;

    t116 = (((x601|x602)*x603)+x604);

    if (t116 != 4294968114LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x605 = -7402;
	volatile int8_t x606 = 1;
	int8_t x607 = -1;
	static uint16_t x608 = 99U;
	int32_t t117 = -3470496;

    t117 = (((x605|x606)*x607)+x608);

    if (t117 != 7500) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x613 = INT16_MIN;
	int32_t x614 = 43663;
	uint8_t x615 = 72U;
	static int16_t x616 = INT16_MIN;
	static volatile int32_t t118 = 8183386;

    t118 = (((x613|x614)*x615)+x616);

    if (t118 != -1607624) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x617 = -2255812;
	uint32_t x618 = 5U;
	uint32_t x619 = 2074735U;
	static int16_t x620 = -30;
	static uint32_t t119 = 135667569U;

    t119 = (((x617|x618)*x619)+x620);

    if (t119 != 1304317525U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x621 = 53U;
	int8_t x622 = 0;
	volatile uint16_t x623 = 588U;
	volatile int16_t x624 = -1;
	int32_t t120 = -57995;

    t120 = (((x621|x622)*x623)+x624);

    if (t120 != 31163) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x625 = INT8_MAX;
	uint8_t x626 = 7U;
	volatile int64_t x627 = -1LL;
	uint8_t x628 = 91U;
	int64_t t121 = -1751LL;

    t121 = (((x625|x626)*x627)+x628);

    if (t121 != -36LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x629 = 2U;
	int64_t x630 = 201669288LL;
	volatile uint16_t x631 = UINT16_MAX;

    t122 = (((x629|x630)*x631)+x632);

    if (t122 != 13216396920178LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x637 = 63299LLU;
	int64_t x638 = 1035542019280774LL;
	uint32_t x639 = 76063U;
	int32_t x640 = 47;

    t123 = (((x637|x638)*x639)+x640);

    if (t123 != 4979456319901128776LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t t124 = -8061718572LL;

    t124 = (((x641|x642)*x643)+x644);

    if (t124 != 104426340224LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x645 = INT8_MIN;
	int32_t x646 = INT32_MIN;
	uint64_t x647 = 270093LLU;
	int32_t x648 = INT32_MIN;
	uint64_t t125 = 334934654329LLU;

    t125 = (((x645|x646)*x647)+x648);

    if (t125 != 18446744071527496064LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x649 = INT16_MIN;
	uint8_t x650 = UINT8_MAX;
	uint16_t x651 = UINT16_MAX;
	uint32_t x652 = 1727U;

    t126 = (((x649|x650)*x651)+x652);

    if (t126 != 2164229568U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x658 = INT16_MIN;
	uint64_t x659 = UINT64_MAX;
	volatile int32_t x660 = INT32_MAX;
	volatile uint64_t t127 = 63605811879579516LLU;

    t127 = (((x657|x658)*x659)+x660);

    if (t127 != 2147516415LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x663 = INT32_MIN;
	uint64_t x664 = 459994658287519444LLU;
	uint64_t t128 = 10881577712LLU;

    t128 = (((x661|x662)*x663)+x664);

    if (t128 != 459994660435003092LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x666 = 3U;
	uint8_t x667 = UINT8_MAX;
	static int32_t x668 = -1;
	int32_t t129 = -188;

    t129 = (((x665|x666)*x667)+x668);

    if (t129 != 2804) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x669 = UINT16_MAX;
	uint32_t x670 = 3U;
	volatile uint32_t t130 = 92219082U;

    t130 = (((x669|x670)*x671)+x672);

    if (t130 != 2147418117U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x685 = INT8_MAX;
	static uint8_t x686 = 1U;
	int32_t x687 = 9018279;
	int64_t x688 = -24057LL;
	int64_t t131 = 39021004608239691LL;

    t131 = (((x685|x686)*x687)+x688);

    if (t131 != 1145297376LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint8_t x689 = 17U;
	uint8_t x690 = UINT8_MAX;
	int64_t x691 = 165005LL;
	int32_t x692 = 62;
	volatile int64_t t132 = 2162131198034LL;

    t132 = (((x689|x690)*x691)+x692);

    if (t132 != 42076337LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x699 = -1LL;
	uint16_t x700 = UINT16_MAX;

    t133 = (((x697|x698)*x699)+x700);

    if (t133 != -2147418112LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x705 = 0;
	uint64_t t134 = 96920402066301891LLU;

    t134 = (((x705|x706)*x707)+x708);

    if (t134 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x709 = -10;
	int64_t x710 = 191LL;
	int8_t x711 = 0;
	int32_t x712 = INT32_MIN;
	volatile int64_t t135 = 1108LL;

    t135 = (((x709|x710)*x711)+x712);

    if (t135 != -2147483648LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x713 = 187;
	volatile uint32_t x714 = 30U;
	static int16_t x716 = INT16_MIN;

    t136 = (((x713|x714)*x715)+x716);

    if (t136 != 6225729U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x726 = UINT16_MAX;
	static int64_t x727 = 4039623152LL;
	int16_t x728 = INT16_MIN;

    t137 = (((x725|x726)*x727)+x728);

    if (t137 != 264736703233552LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x729 = -522541LL;
	int32_t x730 = INT32_MIN;
	uint64_t x731 = 767289173937LLU;
	int64_t x732 = -1LL;

    t138 = (((x729|x730)*x731)+x732);

    if (t138 != 18045804021471337698LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x733 = 169954143LLU;
	int32_t x735 = INT32_MAX;
	volatile int8_t x736 = 11;
	uint64_t t139 = 6706LLU;

    t139 = (((x733|x734)*x735)+x736);

    if (t139 != 364974086429783052LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x739 = 9U;
	uint8_t x740 = UINT8_MAX;

    t140 = (((x737|x738)*x739)+x740);

    if (t140 != 246) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x741 = -1;
	int8_t x743 = -8;
	uint32_t x744 = 8244U;
	uint32_t t141 = 1852159285U;

    t141 = (((x741|x742)*x743)+x744);

    if (t141 != 8252U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x749 = 410766892418813451LLU;
	int16_t x750 = -10086;
	volatile int32_t x751 = -1;
	volatile uint64_t t142 = 14LLU;

    t142 = (((x749|x750)*x751)+x752);

    if (t142 != 9871LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x754 = -1LL;
	int64_t x756 = INT64_MIN;
	int64_t t143 = 215946410462810LL;

    t143 = (((x753|x754)*x755)+x756);

    if (t143 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x758 = INT8_MAX;
	volatile int16_t x759 = INT16_MIN;
	static volatile int8_t x760 = -1;
	static int32_t t144 = 45025;

    t144 = (((x757|x758)*x759)+x760);

    if (t144 != -4161537) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x765 = 193686289;
	volatile int8_t x766 = -1;
	static int8_t x767 = -1;
	static int32_t x768 = INT32_MIN;
	static int32_t t145 = -125791330;

    t145 = (((x765|x766)*x767)+x768);

    if (t145 != -2147483647) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x769 = -1;
	int64_t x770 = -515984LL;
	volatile uint64_t x771 = 269814836691056439LLU;

    t146 = (((x769|x770)*x771)+x772);

    if (t146 != 18176929237018495176LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x774 = 16018917U;
	volatile uint8_t x776 = 2U;
	volatile uint32_t t147 = 421527259U;

    t147 = (((x773|x774)*x775)+x776);

    if (t147 != 250865914U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x778 = INT16_MIN;
	uint8_t x779 = UINT8_MAX;
	uint32_t x780 = 9198142U;

    t148 = (((x777|x778)*x779)+x780);

    if (t148 != 2857822U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x782 = -1LL;
	uint16_t x783 = 1U;
	volatile int64_t t149 = 569303302640086LL;

    t149 = (((x781|x782)*x783)+x784);

    if (t149 != -32769LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x785 = -1LL;
	uint16_t x786 = UINT16_MAX;
	volatile int64_t x787 = -32674850009223972LL;
	uint8_t x788 = 99U;
	int64_t t150 = 26242826692LL;

    t150 = (((x785|x786)*x787)+x788);

    if (t150 != 32674850009224071LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x790 = 7690357;
	uint32_t x792 = 1836149330U;

    t151 = (((x789|x790)*x791)+x792);

    if (t151 != 1836149638U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x793 = INT64_MIN;
	volatile int8_t x794 = INT8_MIN;
	static int64_t x795 = -1LL;
	static uint32_t x796 = UINT32_MAX;
	volatile int64_t t152 = 1647886795659866LL;

    t152 = (((x793|x794)*x795)+x796);

    if (t152 != 4294967423LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x797 = -30LL;
	volatile uint8_t x798 = UINT8_MAX;
	uint32_t x799 = 12046U;

    t153 = (((x797|x798)*x799)+x800);

    if (t153 != 1676537129LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = INT16_MAX;
	int64_t x803 = 86472406132342LL;
	volatile uint16_t x804 = UINT16_MAX;
	int64_t t154 = -526970358965949LL;

    t154 = (((x801|x802)*x803)+x804);

    if (t154 != -86472406066807LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x805 = -1;
	int16_t x806 = INT16_MIN;
	volatile int16_t x807 = 9;
	volatile uint8_t x808 = 15U;

    t155 = (((x805|x806)*x807)+x808);

    if (t155 != 6) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x809 = 6U;
	static int8_t x810 = 0;
	volatile uint8_t x811 = UINT8_MAX;
	int32_t x812 = INT32_MIN;
	volatile int32_t t156 = -84341;

    t156 = (((x809|x810)*x811)+x812);

    if (t156 != -2147482118) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x813 = UINT64_MAX;
	int64_t x814 = -1LL;
	int16_t x815 = INT16_MIN;
	int64_t x816 = -112627599318479LL;
	volatile uint64_t t157 = 1533642191993961804LLU;

    t157 = (((x813|x814)*x815)+x816);

    if (t157 != 18446631446110265905LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x817 = -1;
	volatile int32_t x819 = 23552;
	volatile int16_t x820 = INT16_MAX;
	static volatile int64_t t158 = 48672LL;

    t158 = (((x817|x818)*x819)+x820);

    if (t158 != 9215LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x821 = INT32_MIN;
	int64_t x822 = INT64_MIN;
	uint32_t x823 = 30869U;
	int64_t t159 = 126LL;

    t159 = (((x821|x822)*x823)+x824);

    if (t159 != -66290672730113LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x825 = -1;
	int64_t x826 = INT64_MIN;
	static int32_t x827 = INT32_MIN;
	int64_t x828 = INT64_MIN;

    t160 = (((x825|x826)*x827)+x828);

    if (t160 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x829 = 33062099U;
	int16_t x830 = -1;
	int8_t x832 = -3;

    t161 = (((x829|x830)*x831)+x832);

    if (t161 != 20U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x837 = UINT8_MAX;
	volatile int16_t x840 = -1;
	uint64_t t162 = 120366985545362154LLU;

    t162 = (((x837|x838)*x839)+x840);

    if (t162 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x841 = 58998317;
	static int32_t x842 = 1;
	volatile int8_t x843 = 0;
	uint16_t x844 = UINT16_MAX;
	static volatile int32_t t163 = -1726301;

    t163 = (((x841|x842)*x843)+x844);

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x845 = INT16_MIN;
	uint64_t x846 = UINT64_MAX;
	int8_t x847 = -1;
	static volatile int64_t x848 = INT64_MIN;
	volatile uint64_t t164 = 3394686LLU;

    t164 = (((x845|x846)*x847)+x848);

    if (t164 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x849 = INT32_MAX;
	int64_t x850 = -1LL;
	static uint16_t x852 = UINT16_MAX;
	static int64_t t165 = 14072873837LL;

    t165 = (((x849|x850)*x851)+x852);

    if (t165 != 65536LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x853 = -13370;
	int64_t x854 = INT64_MIN;
	volatile int16_t x855 = INT16_MIN;
	int16_t x856 = INT16_MIN;
	volatile int64_t t166 = 1747513LL;

    t166 = (((x853|x854)*x855)+x856);

    if (t166 != 438075392LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x859 = INT16_MIN;
	int32_t x860 = 54;
	uint64_t t167 = 15773790220045684LLU;

    t167 = (((x857|x858)*x859)+x860);

    if (t167 != 18446744073260793910LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x862 = 22U;
	static volatile uint32_t x863 = 3U;
	int16_t x864 = 3;
	int64_t t168 = 55669671808970994LL;

    t168 = (((x861|x862)*x863)+x864);

    if (t168 != 13437LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x865 = UINT32_MAX;
	uint8_t x866 = 10U;
	volatile int16_t x867 = INT16_MIN;
	int16_t x868 = INT16_MIN;

    t169 = (((x865|x866)*x867)+x868);

    if (t169 != 0U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x869 = INT32_MAX;
	int32_t x870 = INT32_MIN;
	static uint32_t x871 = UINT32_MAX;
	static int32_t x872 = INT32_MIN;

    t170 = (((x869|x870)*x871)+x872);

    if (t170 != 2147483649U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x881 = -16320;
	int16_t x882 = INT16_MIN;
	int32_t x884 = -1;

    t171 = (((x881|x882)*x883)+x884);

    if (t171 != 2088959) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x885 = UINT8_MAX;
	uint64_t x886 = 2344526345090LLU;
	int8_t x887 = INT8_MAX;
	static int64_t x888 = 2LL;

    t172 = (((x885|x886)*x887)+x888);

    if (t172 != 297754845842307LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x889 = -1;
	int16_t x890 = 1218;
	static volatile int8_t x891 = INT8_MAX;
	int32_t t173 = 184532596;

    t173 = (((x889|x890)*x891)+x892);

    if (t173 != -126) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x893 = 350345LLU;
	uint16_t x894 = UINT16_MAX;
	int64_t x895 = -1LL;
	int32_t x896 = INT32_MAX;
	volatile uint64_t t174 = 74LLU;

    t174 = (((x893|x894)*x895)+x896);

    if (t174 != 2147090432LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x899 = 125236065U;
	static int16_t x900 = INT16_MAX;

    t175 = (((x897|x898)*x899)+x900);

    if (t175 != -125203298LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x902 = INT16_MIN;
	int8_t x903 = INT8_MAX;
	static volatile int64_t x904 = INT64_MAX;

    t176 = (((x901|x902)*x903)+x904);

    if (t176 != 9223372036850615033LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x905 = INT8_MAX;
	volatile int64_t x906 = -1LL;
	uint32_t x907 = 571192U;
	uint32_t x908 = 233U;
	int64_t t177 = 135885431456LL;

    t177 = (((x905|x906)*x907)+x908);

    if (t177 != -570959LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x909 = INT32_MAX;
	int32_t x910 = INT32_MIN;
	int16_t x911 = INT16_MIN;
	int32_t t178 = -1;

    t178 = (((x909|x910)*x911)+x912);

    if (t178 != 32783) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x913 = INT64_MIN;
	int16_t x914 = -1;
	uint16_t x916 = 3U;
	int64_t t179 = -327247191919453166LL;

    t179 = (((x913|x914)*x915)+x916);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x917 = INT32_MAX;
	int8_t x918 = -25;
	uint16_t x919 = 2U;
	int16_t x920 = -1;
	volatile int32_t t180 = 46;

    t180 = (((x917|x918)*x919)+x920);

    if (t180 != -3) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x921 = -15;
	int16_t x922 = -1;
	uint16_t x924 = UINT16_MAX;
	static int32_t t181 = -48;

    t181 = (((x921|x922)*x923)+x924);

    if (t181 != 65536) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x925 = -1;
	int16_t x926 = INT16_MAX;
	uint32_t x927 = UINT32_MAX;
	volatile uint32_t t182 = 145U;

    t182 = (((x925|x926)*x927)+x928);

    if (t182 != 4294958751U) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x933 = 45U;
	int64_t x934 = -62794LL;
	static int16_t x935 = -1;
	static uint32_t x936 = 1938U;
	volatile int64_t t183 = -5755LL;

    t183 = (((x933|x934)*x935)+x936);

    if (t183 != 64723LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x937 = INT64_MIN;
	int16_t x938 = INT16_MIN;
	uint8_t x940 = 36U;
	volatile int64_t t184 = -501017365374LL;

    t184 = (((x937|x938)*x939)+x940);

    if (t184 != -6258652LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x941 = -1LL;
	int16_t x943 = 795;
	static uint16_t x944 = UINT16_MAX;
	static volatile int64_t t185 = -125849083511LL;

    t185 = (((x941|x942)*x943)+x944);

    if (t185 != 64740LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int8_t x953 = 1;
	int32_t x955 = INT32_MIN;
	static uint32_t x956 = 25585U;
	volatile int64_t t186 = -12230069571671335LL;

    t186 = (((x953|x954)*x955)+x956);

    if (t186 != 2147509233LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x957 = INT8_MAX;
	int32_t x958 = -1;
	uint16_t x959 = 19122U;
	int32_t t187 = -886125397;

    t187 = (((x957|x958)*x959)+x960);

    if (t187 != -19123) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x961 = 217113932LLU;
	int32_t x962 = INT32_MIN;
	volatile int16_t x963 = INT16_MIN;
	int64_t x964 = -1LL;
	uint64_t t188 = 781962573845411915LLU;

    t188 = (((x961|x962)*x963)+x964);

    if (t188 != 63254354853887LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x973 = UINT64_MAX;
	uint32_t x974 = 409183U;
	static int64_t x975 = -18031479732LL;
	int16_t x976 = INT16_MIN;
	volatile uint64_t t189 = 2538434294041LLU;

    t189 = (((x973|x974)*x975)+x976);

    if (t189 != 18031446964LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x977 = UINT16_MAX;
	static int32_t x978 = -1;
	int8_t x980 = 1;
	int32_t t190 = 6209104;

    t190 = (((x977|x978)*x979)+x980);

    if (t190 != -587014) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x981 = INT8_MIN;
	int32_t x982 = INT32_MIN;
	int16_t x983 = INT16_MAX;
	int16_t x984 = INT16_MIN;
	static volatile int32_t t191 = 146364;

    t191 = (((x981|x982)*x983)+x984);

    if (t191 != -4226944) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x985 = INT16_MIN;
	volatile int64_t x986 = -45419323638422LL;
	int8_t x987 = -1;
	volatile int64_t t192 = 1LL;

    t192 = (((x985|x986)*x987)+x988);

    if (t192 != 2147500693LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x989 = UINT32_MAX;
	volatile int64_t x992 = INT64_MAX;
	int64_t t193 = -1013115728294934LL;

    t193 = (((x989|x990)*x991)+x992);

    if (t193 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x993 = INT8_MIN;
	uint64_t x995 = 6770423LLU;
	uint64_t x996 = UINT64_MAX;
	uint64_t t194 = 129582485817291LLU;

    t194 = (((x993|x994)*x995)+x996);

    if (t194 != 18446744072842937471LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x1001 = 65725416861117760LLU;
	uint64_t x1002 = 646559057584037728LLU;
	uint64_t t195 = 394901925983LLU;

    t195 = (((x1001|x1002)*x1003)+x1004);

    if (t195 != 13581805284010246303LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1005 = -1;
	static int32_t x1006 = INT32_MIN;
	uint32_t x1007 = 13727940U;

    t196 = (((x1005|x1006)*x1007)+x1008);

    if (t196 != 4281239228U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1013 = 696U;
	volatile int8_t x1014 = INT8_MIN;
	static int32_t x1015 = -1;
	volatile int32_t x1016 = -1377101;

    t197 = (((x1013|x1014)*x1015)+x1016);

    if (t197 != -1377029) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1017 = -1088;
	int8_t x1018 = INT8_MIN;
	uint32_t x1019 = 452U;
	volatile uint64_t t198 = 8265750988670LLU;

    t198 = (((x1017|x1018)*x1019)+x1020);

    if (t198 != 4294938367LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1021 = 81U;
	int16_t x1022 = 5078;
	int8_t x1023 = INT8_MIN;
	int8_t x1024 = INT8_MIN;
	int32_t t199 = 31257;

    t199 = (((x1021|x1022)*x1023)+x1024);

    if (t199 != -650240) { NG(); } else { ; }
	
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

