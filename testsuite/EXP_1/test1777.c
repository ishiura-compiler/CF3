
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

int8_t x2 = -61;
static int8_t x3 = INT8_MAX;
int64_t x7 = -1LL;
int64_t x8 = INT64_MAX;
volatile int64_t t1 = INT64_MAX;
int8_t x14 = 1;
volatile uint64_t x23 = 9326481812162503LLU;
static uint64_t x28 = 6729LLU;
volatile uint8_t x33 = UINT8_MAX;
volatile int64_t x34 = INT64_MAX;
int16_t x38 = INT16_MIN;
volatile uint8_t x42 = 2U;
uint32_t x43 = 218528U;
int16_t x51 = 46;
static volatile uint32_t t12 = 21878986U;
static volatile int16_t x54 = 0;
volatile int64_t x56 = 3106LL;
uint16_t x63 = 4U;
volatile int64_t x65 = 107078690101LL;
volatile uint8_t x70 = 14U;
static uint64_t x72 = 3478678067LLU;
int8_t x79 = INT8_MIN;
uint8_t x84 = 1U;
int64_t x85 = INT64_MAX;
volatile int32_t t21 = -8939;
int64_t t22 = -1730240LL;
static uint64_t x96 = 755775LLU;
static uint64_t t23 = 8568903LLU;
int16_t x101 = INT16_MAX;
int32_t t26 = -757461;
uint16_t x110 = UINT16_MAX;
int8_t x119 = -1;
uint64_t x121 = 500699809171723518LLU;
static int8_t x123 = INT8_MAX;
int32_t x129 = 5352;
static int32_t x130 = 848683604;
uint64_t t32 = 14050286927951935LLU;
int32_t x134 = INT32_MIN;
int16_t x135 = -11287;
volatile int32_t t33 = -12933;
int8_t x144 = 0;
volatile int16_t x146 = -128;
uint32_t x149 = UINT32_MAX;
static volatile int32_t x156 = INT32_MIN;
uint64_t x159 = UINT64_MAX;
static int16_t x162 = -14;
uint64_t x165 = 1055834543445547744LLU;
int8_t x175 = -48;
static int16_t x176 = INT16_MAX;
static int32_t t43 = -261625872;
volatile int16_t x188 = -5191;
uint32_t t46 = UINT32_MAX;
uint8_t x190 = UINT8_MAX;
static int16_t x192 = INT16_MIN;
int32_t t48 = 834255480;
static volatile int32_t x197 = INT32_MIN;
static uint64_t x199 = 101486728940638LLU;
uint16_t x200 = 0U;
uint64_t t49 = 795655127680606LLU;
volatile uint8_t x205 = 19U;
int64_t x206 = INT64_MIN;
static int16_t x220 = 1;
static uint64_t x232 = UINT64_MAX;
volatile int32_t t60 = 32;
int32_t x252 = INT32_MIN;
int32_t t62 = 113656916;
int16_t x259 = -1;
volatile int8_t x260 = INT8_MIN;
static uint32_t x264 = 356883U;
volatile int64_t t66 = -6893943930001099LL;
volatile uint32_t x270 = 1932212U;
static int16_t x271 = -1;
int32_t x275 = INT32_MIN;
int16_t x276 = INT16_MIN;
int32_t t68 = -4698928;
uint8_t x277 = 119U;
volatile int64_t x282 = INT64_MIN;
int32_t x293 = INT32_MIN;
uint64_t x295 = 1793LLU;
int8_t x298 = -1;
static int32_t x304 = INT32_MAX;
static int32_t x305 = 513;
uint64_t t77 = 6653719713614366LLU;
uint16_t x317 = 1000U;
volatile uint16_t x318 = 1U;
static int8_t x322 = 0;
volatile uint64_t x335 = UINT64_MAX;
uint64_t t83 = 63274LLU;
int32_t x345 = -6783887;
volatile int32_t t87 = 4369739;
int32_t x354 = 733427817;
volatile int32_t x355 = 22250;
uint16_t x356 = 24013U;
int8_t x365 = INT8_MAX;
int16_t x377 = -1;
static int64_t x379 = 180223167LL;
volatile int8_t x385 = INT8_MAX;
int32_t x386 = INT32_MIN;
uint8_t x389 = UINT8_MAX;
int32_t x394 = INT32_MIN;
volatile int32_t t98 = 3244;
int64_t x398 = 70540LL;
int32_t x399 = -3;
int64_t t99 = -29481LL;
uint8_t x404 = 1U;
int64_t t101 = -77LL;
uint16_t x412 = UINT16_MAX;
uint16_t x416 = UINT16_MAX;
int32_t t103 = 0;
int64_t t104 = 1742250429645LL;
volatile int32_t t105 = 27;
volatile uint16_t x425 = UINT16_MAX;
int32_t x430 = INT32_MIN;
volatile int32_t t107 = 25203538;
int32_t x443 = INT32_MIN;
uint32_t x449 = 25272U;
uint16_t x457 = 31U;
int64_t t113 = 40768LL;
int64_t x465 = -2084321LL;
int64_t x469 = -1LL;
volatile uint32_t x471 = 2712563U;
uint32_t x475 = 187U;
int16_t x477 = INT16_MIN;
uint32_t x478 = 108745316U;
uint32_t x485 = UINT32_MAX;
int64_t x486 = INT64_MIN;
static volatile uint32_t t119 = 1820U;
int16_t x499 = INT16_MIN;
static volatile int32_t t122 = 1325;
int32_t x503 = -1;
int64_t x504 = INT64_MIN;
static int16_t x505 = -6;
uint32_t x513 = 1212U;
static int32_t x515 = 1751980;
int8_t x519 = 1;
uint16_t x532 = 1U;
uint32_t t130 = 24260586U;
uint16_t x533 = 10778U;
static int32_t x536 = INT32_MIN;
int64_t x540 = -1LL;
int64_t x541 = INT64_MIN;
int16_t x542 = -13;
int16_t x546 = -1;
volatile int64_t x547 = INT64_MIN;
uint64_t x550 = UINT64_MAX;
int16_t x552 = 8106;
volatile int8_t x554 = -6;
static volatile int16_t x557 = 1842;
uint8_t x569 = 107U;
int32_t t140 = -90240;
volatile int64_t x574 = INT64_MAX;
int8_t x577 = INT8_MIN;
uint8_t x580 = UINT8_MAX;
static int64_t t142 = 213459809LL;
uint64_t x582 = UINT64_MAX;
static int32_t x583 = INT32_MIN;
volatile int32_t x587 = -1068766;
int32_t t144 = 0;
static volatile int64_t t146 = -37LL;
static volatile uint32_t t147 = 3975885U;
int64_t x601 = 14148226409609767LL;
int32_t x607 = 14318815;
volatile uint64_t t149 = 144LLU;
int64_t x618 = INT64_MIN;
static int16_t x619 = 7229;
static int8_t x624 = -1;
int64_t x631 = -28662418818037LL;
volatile int64_t t154 = 188303262179896419LL;
int8_t x637 = -1;
uint64_t t156 = 4LLU;
uint16_t x644 = 2398U;
static uint8_t x645 = UINT8_MAX;
int8_t x648 = INT8_MAX;
uint32_t x650 = UINT32_MAX;
int16_t x654 = INT16_MIN;
volatile int32_t x656 = -251933;
int32_t x659 = INT32_MIN;
int8_t x660 = 0;
uint16_t x662 = UINT16_MAX;
volatile int16_t x663 = -1;
static volatile int64_t x664 = 258485095LL;
int64_t t162 = 1547792LL;
int8_t x666 = 1;
int32_t t163 = -50;
int64_t t164 = 2626LL;
volatile int64_t t165 = -887029LL;
volatile uint16_t x682 = 15U;
static volatile uint32_t x683 = 2153U;
static uint8_t x684 = UINT8_MAX;
uint64_t x685 = 168465367451LLU;
uint8_t x697 = 2U;
int64_t x702 = INT64_MAX;
volatile int16_t x703 = INT16_MAX;
static int64_t x705 = INT64_MIN;
volatile int32_t x713 = -2655202;
uint64_t x716 = 60419LLU;
volatile uint64_t t174 = 274190326167243539LLU;
int8_t x718 = INT8_MAX;
volatile int32_t t175 = -515117903;
uint64_t t176 = 148LLU;
int64_t x733 = -532913710LL;
uint8_t x735 = 13U;
volatile int16_t x743 = -1;
int32_t t181 = 17734;
volatile int16_t x747 = -1;
volatile uint16_t x752 = UINT16_MAX;
uint32_t t183 = 359457U;
int32_t t184 = -1;
int32_t x761 = -1;
static uint8_t x770 = 40U;
static volatile uint16_t x773 = 0U;
uint16_t x781 = 8079U;
static int32_t x785 = 5;
static volatile int64_t x788 = 1LL;
uint8_t x789 = UINT8_MAX;
uint32_t x790 = 19735983U;
int16_t x803 = -1;
static volatile uint32_t t196 = 1365840260U;
static int32_t x814 = 6523;
int16_t x815 = INT16_MIN;
volatile uint32_t x817 = 204U;
int8_t x824 = INT8_MIN;
static volatile int32_t t199 = -116021926;


void f0(void) {
    	static volatile int16_t x1 = -1;
	uint64_t x4 = 3LLU;
	volatile uint64_t t0 = 53828LLU;

    t0 = (((x1<=x2)+x3)|x4);

    if (t0 != 127LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	volatile uint64_t x6 = UINT64_MAX;

    t1 = (((x5<=x6)+x7)|x8);

    if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -3;
	int32_t x10 = INT32_MIN;
	volatile int16_t x11 = -1;
	static int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -7;

    t2 = (((x9<=x10)+x11)|x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = UINT8_MAX;
	int32_t x15 = 13805843;
	int64_t x16 = -1LL;
	int64_t t3 = -566776046LL;

    t3 = (((x13<=x14)+x15)|x16);

    if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = UINT8_MAX;
	volatile uint32_t x18 = 2495055U;
	static uint16_t x19 = 396U;
	static int32_t x20 = 36953639;
	int32_t t4 = -41122;

    t4 = (((x17<=x18)+x19)|x20);

    if (t4 != 36954031) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x21 = 7699U;
	int32_t x22 = INT32_MAX;
	int8_t x24 = -8;
	static volatile uint64_t t5 = 146562378LLU;

    t5 = (((x21<=x22)+x23)|x24);

    if (t5 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x25 = 775848LLU;
	volatile int32_t x26 = -512;
	int16_t x27 = -5;
	volatile uint64_t t6 = 17853054656LLU;

    t6 = (((x25<=x26)+x27)|x28);

    if (t6 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 474U;
	uint64_t x30 = 744623410LLU;
	int16_t x31 = 113;
	int64_t x32 = -2629286105LL;
	volatile int64_t t7 = -374047343404562593LL;

    t7 = (((x29<=x30)+x31)|x32);

    if (t7 != -2629286025LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x35 = -1;
	uint32_t x36 = UINT32_MAX;
	uint32_t t8 = UINT32_MAX;

    t8 = (((x33<=x34)+x35)|x36);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x37 = INT8_MAX;
	volatile int8_t x39 = INT8_MIN;
	volatile int16_t x40 = 2;
	volatile int32_t t9 = -1;

    t9 = (((x37<=x38)+x39)|x40);

    if (t9 != -126) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint8_t x44 = 94U;
	uint32_t t10 = 11162665U;

    t10 = (((x41<=x42)+x43)|x44);

    if (t10 != 218623U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	volatile int32_t x46 = 3205;
	volatile uint8_t x47 = 2U;
	volatile int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 49;

    t11 = (((x45<=x46)+x47)|x48);

    if (t11 != -32765) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -1;
	static int32_t x50 = INT32_MIN;
	uint32_t x52 = 2U;

    t12 = (((x49<=x50)+x51)|x52);

    if (t12 != 46U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1065850185469LL;
	uint32_t x55 = 5297U;
	static volatile int64_t t13 = 4685668203514LL;

    t13 = (((x53<=x54)+x55)|x56);

    if (t13 != 7346LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = 153060;
	uint32_t x58 = 5U;
	int16_t x59 = INT16_MIN;
	int8_t x60 = -1;
	static volatile int32_t t14 = -13679635;

    t14 = (((x57<=x58)+x59)|x60);

    if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 390;
	static int64_t x62 = INT64_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = UINT64_MAX;

    t15 = (((x61<=x62)+x63)|x64);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 7U;
	int32_t x67 = 214;
	static volatile int32_t x68 = -1;
	int32_t t16 = -73957;

    t16 = (((x65<=x66)+x67)|x68);

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int8_t x71 = 1;
	uint64_t t17 = 19819853414LLU;

    t17 = (((x69<=x70)+x71)|x72);

    if (t17 != 3478678067LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	static int32_t x75 = 3718384;
	static int8_t x76 = 1;
	static volatile int32_t t18 = -56913;

    t18 = (((x73<=x74)+x75)|x76);

    if (t18 != 3718385) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x77 = INT8_MIN;
	int32_t x78 = -1;
	uint16_t x80 = 76U;
	volatile int32_t t19 = 6038293;

    t19 = (((x77<=x78)+x79)|x80);

    if (t19 != -51) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = 8;
	int64_t x82 = INT64_MIN;
	int64_t x83 = INT64_MIN;
	volatile int64_t t20 = -903116657529LL;

    t20 = (((x81<=x82)+x83)|x84);

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = UINT32_MAX;
	int32_t x87 = -1;
	volatile int8_t x88 = INT8_MIN;

    t21 = (((x85<=x86)+x87)|x88);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x89 = INT64_MIN;
	volatile int8_t x90 = -41;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MIN;

    t22 = (((x89<=x90)+x91)|x92);

    if (t22 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 140166370U;
	volatile int64_t x94 = INT64_MIN;
	volatile int16_t x95 = INT16_MIN;

    t23 = (((x93<=x94)+x95)|x96);

    if (t23 != 18446744073709520959LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	volatile uint8_t x98 = 39U;
	static uint32_t x99 = UINT32_MAX;
	int64_t x100 = INT64_MAX;
	static int64_t t24 = INT64_MAX;

    t24 = (((x97<=x98)+x99)|x100);

    if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x102 = UINT16_MAX;
	int8_t x103 = 13;
	uint8_t x104 = 126U;
	int32_t t25 = -75388;

    t25 = (((x101<=x102)+x103)|x104);

    if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = UINT8_MAX;
	int16_t x106 = INT16_MAX;
	int8_t x107 = -1;
	int32_t x108 = -1;

    t26 = (((x105<=x106)+x107)|x108);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x109 = 29U;
	static int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -300557940;

    t27 = (((x109<=x110)+x111)|x112);

    if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MIN;
	uint8_t x114 = UINT8_MAX;
	uint64_t x115 = 81536394380247405LLU;
	int8_t x116 = INT8_MAX;
	static volatile uint64_t t28 = 35168483911LLU;

    t28 = (((x113<=x114)+x115)|x116);

    if (t28 != 81536394380247423LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x117 = 1060251;
	int32_t x118 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -351791367;

    t29 = (((x117<=x118)+x119)|x120);

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x122 = 604U;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 142137700;

    t30 = (((x121<=x122)+x123)|x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x125 = INT8_MIN;
	volatile int64_t x126 = INT64_MIN;
	static volatile uint32_t x127 = 1537480612U;
	int64_t x128 = INT64_MIN;
	int64_t t31 = 90LL;

    t31 = (((x125<=x126)+x127)|x128);

    if (t31 != -9223372035317295196LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x131 = 61;
	uint64_t x132 = 3602768664866LLU;

    t32 = (((x129<=x130)+x131)|x132);

    if (t32 != 3602768664894LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = -326;
	uint8_t x136 = 5U;

    t33 = (((x133<=x134)+x135)|x136);

    if (t33 != -11283) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x137 = INT32_MIN;
	uint16_t x138 = 13800U;
	int8_t x139 = INT8_MAX;
	int8_t x140 = 1;
	int32_t t34 = -1;

    t34 = (((x137<=x138)+x139)|x140);

    if (t34 != 129) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MAX;
	uint8_t x142 = UINT8_MAX;
	static int8_t x143 = INT8_MIN;
	int32_t t35 = 2077;

    t35 = (((x141<=x142)+x143)|x144);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 6U;
	volatile int8_t x147 = 5;
	int32_t x148 = 779655;
	int32_t t36 = -1409437;

    t36 = (((x145<=x146)+x147)|x148);

    if (t36 != 779655) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 555U;
	int8_t x151 = 35;
	static int32_t x152 = -1;
	volatile int32_t t37 = -11268;

    t37 = (((x149<=x150)+x151)|x152);

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -1;
	volatile int16_t x154 = 3087;
	uint16_t x155 = 255U;
	int32_t t38 = -483377;

    t38 = (((x153<=x154)+x155)|x156);

    if (t38 != -2147483392) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = INT16_MIN;
	static int32_t x158 = 0;
	volatile int32_t x160 = INT32_MIN;
	uint64_t t39 = 20086LLU;

    t39 = (((x157<=x158)+x159)|x160);

    if (t39 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	static volatile uint8_t x163 = UINT8_MAX;
	static int64_t x164 = -1LL;
	int64_t t40 = 0LL;

    t40 = (((x161<=x162)+x163)|x164);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = -5;
	static int16_t x167 = -1;
	volatile uint8_t x168 = 2U;
	volatile int32_t t41 = 44621676;

    t41 = (((x165<=x166)+x167)|x168);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = -1;
	uint64_t x170 = 190479943014129374LLU;
	static int8_t x171 = 1;
	uint32_t x172 = 88722U;
	volatile uint32_t t42 = 85427U;

    t42 = (((x169<=x170)+x171)|x172);

    if (t42 != 88723U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x173 = 13909U;
	static int8_t x174 = INT8_MAX;

    t43 = (((x173<=x174)+x175)|x176);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = 712LLU;
	static int64_t x178 = 644LL;
	int8_t x179 = 2;
	volatile int64_t x180 = INT64_MIN;
	int64_t t44 = 1578201644031866402LL;

    t44 = (((x177<=x178)+x179)|x180);

    if (t44 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x181 = -1;
	int8_t x182 = 12;
	int8_t x183 = INT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = 56;

    t45 = (((x181<=x182)+x183)|x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 0U;
	int8_t x186 = -1;
	uint32_t x187 = UINT32_MAX;

    t46 = (((x185<=x186)+x187)|x188);

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x189 = 2585246710LL;
	static int32_t x191 = 12;
	volatile int32_t t47 = 659112;

    t47 = (((x189<=x190)+x191)|x192);

    if (t47 != -32756) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	volatile int64_t x194 = INT64_MIN;
	volatile uint8_t x195 = 115U;
	uint8_t x196 = 29U;

    t48 = (((x193<=x194)+x195)|x196);

    if (t48 != 125) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x198 = 6516U;

    t49 = (((x197<=x198)+x199)|x200);

    if (t49 != 101486728940639LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = 5457;
	int32_t x202 = -884218084;
	static uint64_t x203 = 102600421850118LLU;
	static volatile int32_t x204 = INT32_MAX;
	volatile uint64_t t50 = 1LLU;

    t50 = (((x201<=x202)+x203)|x204);

    if (t50 != 102602473734143LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint16_t x207 = 3U;
	int16_t x208 = -1;
	volatile int32_t t51 = -30539092;

    t51 = (((x205<=x206)+x207)|x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x209 = 31999U;
	uint64_t x210 = 4LLU;
	uint16_t x211 = 6844U;
	int8_t x212 = -1;
	int32_t t52 = -113;

    t52 = (((x209<=x210)+x211)|x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x213 = UINT16_MAX;
	uint8_t x214 = 1U;
	static int8_t x215 = INT8_MIN;
	int16_t x216 = -1;
	int32_t t53 = -135433;

    t53 = (((x213<=x214)+x215)|x216);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MAX;
	static int32_t x219 = -504494;
	volatile int32_t t54 = -3456;

    t54 = (((x217<=x218)+x219)|x220);

    if (t54 != -504493) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	int64_t x223 = 24366931LL;
	uint16_t x224 = 11834U;
	int64_t t55 = -9664659665307939LL;

    t55 = (((x221<=x222)+x223)|x224);

    if (t55 != 24375163LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;
	uint16_t x228 = UINT16_MAX;
	volatile int64_t t56 = -1069538008518171985LL;

    t56 = (((x225<=x226)+x227)|x228);

    if (t56 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x229 = UINT32_MAX;
	static int8_t x230 = INT8_MIN;
	static int8_t x231 = -29;
	volatile uint64_t t57 = UINT64_MAX;

    t57 = (((x229<=x230)+x231)|x232);

    if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	int8_t x234 = -1;
	volatile int64_t x235 = -4LL;
	int32_t x236 = 20321;
	volatile int64_t t58 = 720135LL;

    t58 = (((x233<=x234)+x235)|x236);

    if (t58 != -3LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	int64_t x238 = INT64_MIN;
	volatile int8_t x239 = INT8_MAX;
	int64_t x240 = -1LL;
	int64_t t59 = 1399565LL;

    t59 = (((x237<=x238)+x239)|x240);

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MAX;
	int8_t x243 = INT8_MIN;
	int32_t x244 = -1;

    t60 = (((x241<=x242)+x243)|x244);

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 701229U;
	volatile int8_t x246 = -1;
	static int16_t x247 = -1;
	uint32_t x248 = 9571U;
	volatile uint32_t t61 = 2334296U;

    t61 = (((x245<=x246)+x247)|x248);

    if (t61 != 9571U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x249 = INT8_MIN;
	uint32_t x250 = 568U;
	int16_t x251 = -1;

    t62 = (((x249<=x250)+x251)|x252);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	int64_t x254 = INT64_MIN;
	int64_t x255 = -80275455LL;
	int8_t x256 = -3;
	volatile int64_t t63 = -149LL;

    t63 = (((x253<=x254)+x255)|x256);

    if (t63 != -3LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MIN;
	uint16_t x258 = 10U;
	static int32_t t64 = 1379415;

    t64 = (((x257<=x258)+x259)|x260);

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = 24U;
	int32_t x262 = INT32_MIN;
	static int16_t x263 = -1;
	static uint32_t t65 = UINT32_MAX;

    t65 = (((x261<=x262)+x263)|x264);

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = INT64_MIN;
	volatile uint8_t x266 = 1U;
	int64_t x267 = 3730558926269LL;
	static int32_t x268 = 265531501;

    t66 = (((x265<=x266)+x267)|x268);

    if (t66 != 3730715164159LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = -1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -20012;

    t67 = (((x269<=x270)+x271)|x272);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	volatile int32_t x274 = -244750;

    t68 = (((x273<=x274)+x275)|x276);

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x278 = -64;
	uint64_t x279 = 15LLU;
	uint32_t x280 = UINT32_MAX;
	volatile uint64_t t69 = 52918LLU;

    t69 = (((x277<=x278)+x279)|x280);

    if (t69 != 4294967295LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = -1;
	static uint32_t x283 = 79377132U;
	uint32_t x284 = 49028396U;
	static volatile uint32_t t70 = 183141768U;

    t70 = (((x281<=x282)+x283)|x284);

    if (t70 != 117391340U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MIN;
	int16_t x286 = INT16_MIN;
	int16_t x287 = 256;
	int8_t x288 = INT8_MIN;
	int32_t t71 = -42465213;

    t71 = (((x285<=x286)+x287)|x288);

    if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = 46763182U;
	int16_t x290 = -932;
	int8_t x291 = -1;
	int64_t x292 = -1LL;
	int64_t t72 = -170614259094LL;

    t72 = (((x289<=x290)+x291)|x292);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x294 = 4824;
	static uint32_t x296 = UINT32_MAX;
	static uint64_t t73 = 0LLU;

    t73 = (((x293<=x294)+x295)|x296);

    if (t73 != 4294967295LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = 180;
	uint64_t x299 = 28LLU;
	static volatile uint8_t x300 = 3U;
	uint64_t t74 = 2820LLU;

    t74 = (((x297<=x298)+x299)|x300);

    if (t74 != 31LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	volatile int32_t t75 = 54;

    t75 = (((x301<=x302)+x303)|x304);

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MIN;
	volatile int8_t x308 = -1;
	int32_t t76 = 3;

    t76 = (((x305<=x306)+x307)|x308);

    if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -1;
	uint32_t x310 = 22447U;
	uint64_t x311 = 15069667812195LLU;
	static volatile int8_t x312 = INT8_MAX;

    t77 = (((x309<=x310)+x311)|x312);

    if (t77 != 15069667812223LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x313 = UINT16_MAX;
	static int16_t x314 = 25;
	int16_t x315 = -80;
	volatile int64_t x316 = INT64_MIN;
	static int64_t t78 = -6LL;

    t78 = (((x313<=x314)+x315)|x316);

    if (t78 != -80LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x319 = INT16_MIN;
	volatile int8_t x320 = -15;
	volatile int32_t t79 = 60111;

    t79 = (((x317<=x318)+x319)|x320);

    if (t79 != -15) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MIN;
	volatile int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t80 = -453192;

    t80 = (((x321<=x322)+x323)|x324);

    if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x325 = 12786U;
	static uint64_t x326 = UINT64_MAX;
	static volatile int16_t x327 = INT16_MAX;
	volatile uint64_t x328 = 103603514949158LLU;
	uint64_t t81 = 3891504264197071424LLU;

    t81 = (((x325<=x326)+x327)|x328);

    if (t81 != 103603514949158LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	uint64_t x330 = 1344LLU;
	uint64_t x331 = 99LLU;
	static uint64_t x332 = 294LLU;
	volatile uint64_t t82 = 3885999384LLU;

    t82 = (((x329<=x330)+x331)|x332);

    if (t82 != 359LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x333 = -304243754109729LL;
	int32_t x334 = -1;
	static uint32_t x336 = 33617U;

    t83 = (((x333<=x334)+x335)|x336);

    if (t83 != 33617LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x337 = 76;
	static int8_t x338 = 1;
	uint16_t x339 = 27099U;
	int64_t x340 = -1LL;
	static volatile int64_t t84 = -272LL;

    t84 = (((x337<=x338)+x339)|x340);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MAX;
	uint32_t x344 = 371U;
	volatile uint32_t t85 = 5U;

    t85 = (((x341<=x342)+x343)|x344);

    if (t85 != 33139U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x346 = 1078425U;
	volatile uint32_t x347 = 1302072541U;
	static int16_t x348 = INT16_MIN;
	uint32_t t86 = 5555851U;

    t86 = (((x345<=x346)+x347)|x348);

    if (t86 != 4294937821U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -2;
	volatile int16_t x350 = 2047;
	int16_t x351 = -29;
	uint16_t x352 = UINT16_MAX;

    t87 = (((x349<=x350)+x351)|x352);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x353 = 199864267064222482LL;
	int32_t t88 = -83875;

    t88 = (((x353<=x354)+x355)|x356);

    if (t88 != 24559) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = -1;
	int8_t x358 = 0;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = 6486728U;
	uint32_t t89 = 524U;

    t89 = (((x357<=x358)+x359)|x360);

    if (t89 != 4294965961U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MIN;
	int32_t x362 = -1;
	uint64_t x363 = 2422LLU;
	volatile uint8_t x364 = 127U;
	static uint64_t t90 = 8087LLU;

    t90 = (((x361<=x362)+x363)|x364);

    if (t90 != 2431LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x366 = 112985285841469317LLU;
	static volatile int16_t x367 = -1;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t91 = INT32_MIN;

    t91 = (((x365<=x366)+x367)|x368);

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 7;
	int16_t x370 = INT16_MAX;
	int32_t x371 = -9;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t92 = UINT64_MAX;

    t92 = (((x369<=x370)+x371)|x372);

    if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	static uint16_t x374 = UINT16_MAX;
	int32_t x375 = INT32_MIN;
	uint8_t x376 = 5U;
	int32_t t93 = 26696282;

    t93 = (((x373<=x374)+x375)|x376);

    if (t93 != -2147483643) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x378 = UINT32_MAX;
	uint16_t x380 = 28U;
	static volatile int64_t t94 = -34524552480274LL;

    t94 = (((x377<=x378)+x379)|x380);

    if (t94 != 180223196LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x381 = INT8_MIN;
	uint64_t x382 = 29172770LLU;
	uint64_t x383 = 28643LLU;
	static int64_t x384 = -1LL;
	uint64_t t95 = UINT64_MAX;

    t95 = (((x381<=x382)+x383)|x384);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x387 = 0U;
	uint64_t x388 = 2173019068LLU;
	volatile uint64_t t96 = 0LLU;

    t96 = (((x385<=x386)+x387)|x388);

    if (t96 != 2173019068LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = INT64_MAX;
	volatile int64_t t97 = 117LL;

    t97 = (((x389<=x390)+x391)|x392);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	uint16_t x395 = 62U;
	int16_t x396 = INT16_MIN;

    t98 = (((x393<=x394)+x395)|x396);

    if (t98 != -32706) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = 0;
	static int64_t x400 = -1LL;

    t99 = (((x397<=x398)+x399)|x400);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x401 = 1453706U;
	uint8_t x402 = 3U;
	int32_t x403 = INT32_MAX;
	volatile int32_t t100 = INT32_MAX;

    t100 = (((x401<=x402)+x403)|x404);

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x405 = UINT64_MAX;
	uint16_t x406 = 7U;
	uint8_t x407 = 2U;
	int64_t x408 = 0LL;

    t101 = (((x405<=x406)+x407)|x408);

    if (t101 != 2LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint16_t x409 = UINT16_MAX;
	uint16_t x410 = 23006U;
	static uint16_t x411 = UINT16_MAX;
	static int32_t t102 = 54973;

    t102 = (((x409<=x410)+x411)|x412);

    if (t102 != 65535) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = 50;
	volatile int8_t x414 = INT8_MIN;
	int8_t x415 = 8;

    t103 = (((x413<=x414)+x415)|x416);

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x417 = 4429683U;
	uint8_t x418 = 2U;
	int64_t x419 = -1LL;
	int8_t x420 = 2;

    t104 = (((x417<=x418)+x419)|x420);

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = INT32_MIN;
	uint32_t x422 = UINT32_MAX;
	int32_t x423 = 10201704;
	uint16_t x424 = 48U;

    t105 = (((x421<=x422)+x423)|x424);

    if (t105 != 10201721) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x426 = INT32_MAX;
	static volatile int8_t x427 = -10;
	int64_t x428 = INT64_MIN;
	static volatile int64_t t106 = 2306822498LL;

    t106 = (((x425<=x426)+x427)|x428);

    if (t106 != -9LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	uint16_t x431 = 200U;
	static int8_t x432 = -1;

    t107 = (((x429<=x430)+x431)|x432);

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x433 = UINT16_MAX;
	static int32_t x434 = -1;
	int32_t x435 = INT32_MIN;
	static volatile int32_t x436 = 1;
	static volatile int32_t t108 = 97701;

    t108 = (((x433<=x434)+x435)|x436);

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x439 = INT8_MIN;
	int32_t x440 = INT32_MIN;
	static int32_t t109 = -101564;

    t109 = (((x437<=x438)+x439)|x440);

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MAX;
	uint32_t x442 = UINT32_MAX;
	int64_t x444 = -1LL;
	volatile int64_t t110 = 104885747370LL;

    t110 = (((x441<=x442)+x443)|x444);

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x450 = INT8_MAX;
	uint8_t x451 = 7U;
	volatile int16_t x452 = 97;
	volatile int32_t t111 = -18430387;

    t111 = (((x449<=x450)+x451)|x452);

    if (t111 != 103) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x458 = -527045082736834LL;
	int16_t x459 = INT16_MIN;
	static int16_t x460 = INT16_MIN;
	int32_t t112 = -3;

    t112 = (((x457<=x458)+x459)|x460);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x461 = -1LL;
	volatile int32_t x462 = INT32_MIN;
	static int64_t x463 = INT64_MAX;
	int32_t x464 = INT32_MIN;

    t113 = (((x461<=x462)+x463)|x464);

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x466 = -1LL;
	int64_t x467 = INT64_MIN;
	volatile uint16_t x468 = UINT16_MAX;
	volatile int64_t t114 = 260LL;

    t114 = (((x465<=x466)+x467)|x468);

    if (t114 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x470 = 40441607571LLU;
	uint8_t x472 = UINT8_MAX;
	uint32_t t115 = 4490U;

    t115 = (((x469<=x470)+x471)|x472);

    if (t115 != 2712575U) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x473 = 59;
	int32_t x474 = INT32_MAX;
	uint16_t x476 = UINT16_MAX;
	volatile uint32_t t116 = 8474344U;

    t116 = (((x473<=x474)+x475)|x476);

    if (t116 != 65535U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x479 = INT8_MAX;
	static int16_t x480 = INT16_MIN;
	volatile int32_t t117 = 8050709;

    t117 = (((x477<=x478)+x479)|x480);

    if (t117 != -32641) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x481 = 0;
	int32_t x482 = -1;
	int32_t x483 = INT32_MIN;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t118 = -1;

    t118 = (((x481<=x482)+x483)|x484);

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x487 = INT8_MIN;
	uint32_t x488 = 1317364U;

    t119 = (((x485<=x486)+x487)|x488);

    if (t119 != 4294967284U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x489 = 1564595995175456LLU;
	static int64_t x490 = 16018220438383284LL;
	volatile int8_t x491 = INT8_MIN;
	int8_t x492 = -2;
	int32_t t120 = 15;

    t120 = (((x489<=x490)+x491)|x492);

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = -1;
	volatile int64_t x495 = -2785591278676776493LL;
	uint64_t x496 = 1789978549625LLU;
	volatile uint64_t t121 = 3325564533LLU;

    t121 = (((x493<=x494)+x495)|x496);

    if (t121 != 15661153345895890429LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x497 = INT16_MAX;
	volatile uint16_t x498 = 67U;
	int16_t x500 = 1;

    t122 = (((x497<=x498)+x499)|x500);

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x501 = 0U;
	volatile uint32_t x502 = 422049429U;
	static int64_t t123 = INT64_MIN;

    t123 = (((x501<=x502)+x503)|x504);

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x506 = INT8_MIN;
	int16_t x507 = INT16_MAX;
	static int64_t x508 = -73891959LL;
	volatile int64_t t124 = -19830638312LL;

    t124 = (((x505<=x506)+x507)|x508);

    if (t124 != -73891841LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x509 = INT16_MAX;
	volatile int16_t x510 = -99;
	uint64_t x511 = 940391157510314899LLU;
	int64_t x512 = INT64_MIN;
	uint64_t t125 = 55109160824LLU;

    t125 = (((x509<=x510)+x511)|x512);

    if (t125 != 10163763194365090707LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x514 = 266U;
	int64_t x516 = 0LL;
	int64_t t126 = -9153709398LL;

    t126 = (((x513<=x514)+x515)|x516);

    if (t126 != 1751980LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x517 = 4U;
	int64_t x518 = INT64_MAX;
	static int64_t x520 = -1LL;
	volatile int64_t t127 = 32335493718479LL;

    t127 = (((x517<=x518)+x519)|x520);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x521 = INT64_MIN;
	int16_t x522 = INT16_MIN;
	int32_t x523 = INT32_MIN;
	uint64_t x524 = UINT64_MAX;
	volatile uint64_t t128 = UINT64_MAX;

    t128 = (((x521<=x522)+x523)|x524);

    if (t128 != UINT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x525 = 0U;
	static int16_t x526 = -1;
	int8_t x527 = INT8_MIN;
	uint64_t x528 = 6LLU;
	volatile uint64_t t129 = 40389901464LLU;

    t129 = (((x525<=x526)+x527)|x528);

    if (t129 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x529 = INT16_MAX;
	int64_t x530 = -8555LL;
	static uint32_t x531 = 4877694U;

    t130 = (((x529<=x530)+x531)|x532);

    if (t130 != 4877695U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x534 = INT8_MAX;
	uint32_t x535 = 40551U;
	uint32_t t131 = 0U;

    t131 = (((x533<=x534)+x535)|x536);

    if (t131 != 2147524199U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x537 = 1005805LLU;
	uint64_t x538 = UINT64_MAX;
	uint16_t x539 = UINT16_MAX;
	volatile int64_t t132 = -1606605401381LL;

    t132 = (((x537<=x538)+x539)|x540);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x543 = INT64_MIN;
	volatile uint64_t x544 = UINT64_MAX;
	volatile uint64_t t133 = UINT64_MAX;

    t133 = (((x541<=x542)+x543)|x544);

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x545 = INT16_MIN;
	static volatile int8_t x548 = INT8_MIN;
	int64_t t134 = 668291367502LL;

    t134 = (((x545<=x546)+x547)|x548);

    if (t134 != -127LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile uint32_t x551 = 14U;
	volatile uint32_t t135 = 23492U;

    t135 = (((x549<=x550)+x551)|x552);

    if (t135 != 8111U) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x553 = -108885685;
	volatile int64_t x555 = -1LL;
	uint32_t x556 = 3380108U;
	int64_t t136 = 371549006LL;

    t136 = (((x553<=x554)+x555)|x556);

    if (t136 != 3380108LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x558 = -13847;
	static uint64_t x559 = 28426599368LLU;
	volatile int8_t x560 = 3;
	volatile uint64_t t137 = 28072LLU;

    t137 = (((x557<=x558)+x559)|x560);

    if (t137 != 28426599371LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	volatile int32_t x562 = -1;
	volatile int64_t x563 = INT64_MAX;
	uint8_t x564 = UINT8_MAX;
	static int64_t t138 = INT64_MAX;

    t138 = (((x561<=x562)+x563)|x564);

    if (t138 != INT64_MAX) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = 3474;
	uint8_t x567 = 0U;
	int64_t x568 = 6LL;
	volatile int64_t t139 = 500LL;

    t139 = (((x565<=x566)+x567)|x568);

    if (t139 != 7LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x570 = -1;
	uint16_t x571 = 160U;
	uint16_t x572 = 15157U;

    t140 = (((x569<=x570)+x571)|x572);

    if (t140 != 15285) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x573 = 14U;
	static int64_t x575 = -1LL;
	int32_t x576 = INT32_MIN;
	volatile int64_t t141 = -1157032114909LL;

    t141 = (((x573<=x574)+x575)|x576);

    if (t141 != -2147483648LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x578 = -138834;
	int64_t x579 = INT64_MIN;

    t142 = (((x577<=x578)+x579)|x580);

    if (t142 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x581 = INT64_MIN;
	int64_t x584 = INT64_MAX;
	volatile int64_t t143 = 3597053LL;

    t143 = (((x581<=x582)+x583)|x584);

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x585 = UINT32_MAX;
	static int64_t x586 = INT64_MIN;
	int16_t x588 = -1;

    t144 = (((x585<=x586)+x587)|x588);

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x589 = 7341923725LLU;
	int16_t x590 = -3228;
	uint16_t x591 = 3U;
	uint8_t x592 = 1U;
	volatile int32_t t145 = 213;

    t145 = (((x589<=x590)+x591)|x592);

    if (t145 != 5) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x593 = 56918U;
	volatile int8_t x594 = INT8_MAX;
	static uint16_t x595 = 0U;
	int64_t x596 = -51711526LL;

    t146 = (((x593<=x594)+x595)|x596);

    if (t146 != -51711526LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x597 = -125171723;
	int64_t x598 = -1LL;
	static uint32_t x599 = UINT32_MAX;
	static int32_t x600 = INT32_MIN;

    t147 = (((x597<=x598)+x599)|x600);

    if (t147 != 2147483648U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x602 = INT8_MIN;
	int16_t x603 = INT16_MIN;
	uint8_t x604 = UINT8_MAX;
	volatile int32_t t148 = 3;

    t148 = (((x601<=x602)+x603)|x604);

    if (t148 != -32513) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x605 = INT8_MIN;
	int16_t x606 = -1;
	uint64_t x608 = 7178577LLU;

    t149 = (((x605<=x606)+x607)|x608);

    if (t149 != 16776689LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x613 = INT8_MAX;
	static int64_t x614 = INT64_MIN;
	int32_t x615 = INT32_MAX;
	static int32_t x616 = INT32_MIN;
	int32_t t150 = 6;

    t150 = (((x613<=x614)+x615)|x616);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	int16_t x620 = 512;
	static volatile int32_t t151 = 113572083;

    t151 = (((x617<=x618)+x619)|x620);

    if (t151 != 7741) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x621 = -1;
	uint64_t x622 = 421573LLU;
	static int8_t x623 = 3;
	volatile int32_t t152 = 0;

    t152 = (((x621<=x622)+x623)|x624);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x625 = UINT16_MAX;
	static int64_t x626 = INT64_MIN;
	int8_t x627 = INT8_MAX;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t153 = -1;

    t153 = (((x625<=x626)+x627)|x628);

    if (t153 != -32641) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x629 = INT32_MAX;
	int32_t x630 = INT32_MAX;
	volatile int32_t x632 = 234605;

    t154 = (((x629<=x630)+x631)|x632);

    if (t154 != -28662418654099LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x633 = 204LL;
	int32_t x634 = INT32_MIN;
	volatile int16_t x635 = 1979;
	int8_t x636 = 0;
	int32_t t155 = -63;

    t155 = (((x633<=x634)+x635)|x636);

    if (t155 != 1979) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x638 = -24;
	uint64_t x639 = 3749660LLU;
	static int32_t x640 = INT32_MAX;

    t156 = (((x637<=x638)+x639)|x640);

    if (t156 != 2147483647LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x641 = -1LL;
	int8_t x642 = INT8_MIN;
	int32_t x643 = -9;
	int32_t t157 = -2546;

    t157 = (((x641<=x642)+x643)|x644);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x646 = INT16_MIN;
	static volatile int16_t x647 = -1;
	int32_t t158 = -248742647;

    t158 = (((x645<=x646)+x647)|x648);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x649 = INT32_MAX;
	int16_t x651 = INT16_MAX;
	volatile int16_t x652 = INT16_MIN;
	static int32_t t159 = 3428;

    t159 = (((x649<=x650)+x651)|x652);

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x653 = -1;
	int16_t x655 = INT16_MIN;
	volatile int32_t t160 = -70737;

    t160 = (((x653<=x654)+x655)|x656);

    if (t160 != -22557) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x657 = INT32_MAX;
	int32_t x658 = -23;
	int32_t t161 = INT32_MIN;

    t161 = (((x657<=x658)+x659)|x660);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x661 = -1;

    t162 = (((x661<=x662)+x663)|x664);

    if (t162 != 258485095LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x665 = INT32_MIN;
	volatile int16_t x667 = -1815;
	int32_t x668 = INT32_MIN;

    t163 = (((x665<=x666)+x667)|x668);

    if (t163 != -1814) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x669 = 6U;
	uint16_t x670 = 3U;
	int32_t x671 = 36;
	int64_t x672 = INT64_MIN;

    t164 = (((x669<=x670)+x671)|x672);

    if (t164 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x677 = 77932888888953LLU;
	static uint64_t x678 = 77LLU;
	int64_t x679 = -1LL;
	int16_t x680 = INT16_MAX;

    t165 = (((x677<=x678)+x679)|x680);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x681 = 1U;
	static uint32_t t166 = 1U;

    t166 = (((x681<=x682)+x683)|x684);

    if (t166 != 2303U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x686 = UINT8_MAX;
	uint8_t x687 = 14U;
	int64_t x688 = INT64_MIN;
	int64_t t167 = -22840084LL;

    t167 = (((x685<=x686)+x687)|x688);

    if (t167 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x689 = INT32_MAX;
	uint64_t x690 = UINT64_MAX;
	static uint32_t x691 = UINT32_MAX;
	static uint8_t x692 = 2U;
	volatile uint32_t t168 = 92U;

    t168 = (((x689<=x690)+x691)|x692);

    if (t168 != 2U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint8_t x693 = 1U;
	uint16_t x694 = UINT16_MAX;
	int16_t x695 = INT16_MIN;
	int8_t x696 = 0;
	static int32_t t169 = 1130;

    t169 = (((x693<=x694)+x695)|x696);

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x698 = UINT16_MAX;
	int8_t x699 = INT8_MAX;
	int16_t x700 = -19;
	static int32_t t170 = 6;

    t170 = (((x697<=x698)+x699)|x700);

    if (t170 != -19) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x701 = 464U;
	int32_t x704 = -1;
	volatile int32_t t171 = 2;

    t171 = (((x701<=x702)+x703)|x704);

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x706 = UINT32_MAX;
	uint64_t x707 = 407LLU;
	static uint16_t x708 = 19U;
	static volatile uint64_t t172 = 130442076LLU;

    t172 = (((x705<=x706)+x707)|x708);

    if (t172 != 411LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x709 = INT8_MIN;
	int32_t x710 = -1;
	int64_t x711 = INT64_MIN;
	int32_t x712 = 1;
	static volatile int64_t t173 = 3LL;

    t173 = (((x709<=x710)+x711)|x712);

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x714 = UINT64_MAX;
	int8_t x715 = INT8_MIN;

    t174 = (((x713<=x714)+x715)|x716);

    if (t174 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x717 = INT32_MAX;
	int16_t x719 = 0;
	int16_t x720 = -210;

    t175 = (((x717<=x718)+x719)|x720);

    if (t175 != -210) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x721 = 1U;
	int8_t x722 = 3;
	uint64_t x723 = 537514229164LLU;
	volatile int16_t x724 = -2246;

    t176 = (((x721<=x722)+x723)|x724);

    if (t176 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x725 = -50;
	uint16_t x726 = UINT16_MAX;
	volatile int16_t x727 = -1;
	int8_t x728 = INT8_MIN;
	int32_t t177 = -1010324457;

    t177 = (((x725<=x726)+x727)|x728);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x729 = 13953438U;
	uint8_t x730 = 18U;
	int16_t x731 = -1;
	static uint8_t x732 = UINT8_MAX;
	volatile int32_t t178 = 10;

    t178 = (((x729<=x730)+x731)|x732);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x734 = INT8_MIN;
	volatile uint8_t x736 = 0U;
	volatile int32_t t179 = 3;

    t179 = (((x733<=x734)+x735)|x736);

    if (t179 != 14) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x737 = 1U;
	int64_t x738 = -1LL;
	int64_t x739 = -98210235892292LL;
	int64_t x740 = -1LL;
	volatile int64_t t180 = 739515219099675241LL;

    t180 = (((x737<=x738)+x739)|x740);

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x741 = UINT64_MAX;
	int32_t x742 = INT32_MIN;
	int32_t x744 = INT32_MIN;

    t181 = (((x741<=x742)+x743)|x744);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x745 = -1;
	uint64_t x746 = UINT64_MAX;
	static volatile int16_t x748 = -1;
	volatile int32_t t182 = 37;

    t182 = (((x745<=x746)+x747)|x748);

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x749 = INT16_MIN;
	static uint32_t x750 = 3256940U;
	volatile uint32_t x751 = 2080U;

    t183 = (((x749<=x750)+x751)|x752);

    if (t183 != 65535U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x753 = 1;
	static int8_t x754 = INT8_MIN;
	int32_t x755 = INT32_MIN;
	volatile int32_t x756 = -1;

    t184 = (((x753<=x754)+x755)|x756);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x762 = INT32_MIN;
	volatile int64_t x763 = -1LL;
	uint64_t x764 = 1083LLU;
	uint64_t t185 = UINT64_MAX;

    t185 = (((x761<=x762)+x763)|x764);

    if (t185 != UINT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x765 = 769U;
	volatile uint32_t x766 = 217U;
	uint8_t x767 = 67U;
	volatile int64_t x768 = -1LL;
	int64_t t186 = -29189263664384059LL;

    t186 = (((x765<=x766)+x767)|x768);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x769 = INT8_MAX;
	int64_t x771 = -28862LL;
	uint64_t x772 = 96968442726LLU;
	volatile uint64_t t187 = 86632511870LLU;

    t187 = (((x769<=x770)+x771)|x772);

    if (t187 != 18446744073709522790LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x774 = UINT16_MAX;
	uint16_t x775 = 478U;
	static int8_t x776 = INT8_MAX;
	volatile int32_t t188 = 1;

    t188 = (((x773<=x774)+x775)|x776);

    if (t188 != 511) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	static volatile uint32_t x778 = 2U;
	uint32_t x779 = 645401U;
	volatile int16_t x780 = INT16_MIN;
	volatile uint32_t t189 = 660927U;

    t189 = (((x777<=x778)+x779)|x780);

    if (t189 != 4294957337U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x782 = INT8_MAX;
	uint32_t x783 = 128770212U;
	volatile uint32_t x784 = UINT32_MAX;
	static volatile uint32_t t190 = UINT32_MAX;

    t190 = (((x781<=x782)+x783)|x784);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x786 = -6789;
	volatile int8_t x787 = INT8_MIN;
	volatile int64_t t191 = -717194LL;

    t191 = (((x785<=x786)+x787)|x788);

    if (t191 != -127LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x791 = 59648U;
	volatile int16_t x792 = 13;
	uint32_t t192 = 593U;

    t192 = (((x789<=x790)+x791)|x792);

    if (t192 != 59661U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x793 = INT64_MAX;
	volatile int16_t x794 = INT16_MAX;
	int64_t x795 = INT64_MIN;
	int64_t x796 = -188412833801LL;
	int64_t t193 = 25LL;

    t193 = (((x793<=x794)+x795)|x796);

    if (t193 != -188412833801LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x797 = UINT8_MAX;
	uint8_t x798 = UINT8_MAX;
	static int64_t x799 = INT64_MIN;
	static int64_t x800 = 7141341471366LL;
	int64_t t194 = 721359872542460LL;

    t194 = (((x797<=x798)+x799)|x800);

    if (t194 != -9223364895513304441LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x801 = 2U;
	int16_t x802 = -9399;
	uint64_t x804 = UINT64_MAX;
	volatile uint64_t t195 = UINT64_MAX;

    t195 = (((x801<=x802)+x803)|x804);

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x809 = 36;
	int16_t x810 = INT16_MIN;
	uint8_t x811 = 31U;
	uint32_t x812 = 39U;

    t196 = (((x809<=x810)+x811)|x812);

    if (t196 != 63U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x813 = 2904405U;
	int64_t x816 = INT64_MAX;
	static int64_t t197 = 5107244LL;

    t197 = (((x813<=x814)+x815)|x816);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x818 = -1;
	volatile int32_t x819 = -2;
	int8_t x820 = INT8_MIN;
	int32_t t198 = -5754449;

    t198 = (((x817<=x818)+x819)|x820);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x821 = 23;
	static int8_t x822 = 0;
	int32_t x823 = INT32_MAX;

    t199 = (((x821<=x822)+x823)|x824);

    if (t199 != -1) { NG(); } else { ; }
	
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

