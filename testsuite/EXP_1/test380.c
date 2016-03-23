
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

static int64_t x3 = INT64_MAX;
uint64_t x5 = UINT64_MAX;
uint32_t x8 = 515U;
int8_t x16 = INT8_MAX;
volatile int64_t t4 = -10LL;
uint64_t t5 = 5867LLU;
static int64_t x33 = 841LL;
uint8_t x36 = 0U;
uint64_t t7 = 10454097282559191LLU;
int32_t x39 = -1;
int8_t x52 = -1;
int16_t x54 = -1;
uint16_t x59 = 127U;
volatile int32_t t13 = -68862972;
uint8_t x74 = 84U;
static uint64_t x94 = 25363798LLU;
uint64_t t19 = 264532265963317592LLU;
uint32_t x101 = 123U;
uint32_t t23 = 10U;
int32_t t28 = -331;
static int64_t x145 = INT64_MIN;
static int64_t x147 = -1LL;
int16_t x149 = INT16_MIN;
int64_t x156 = INT64_MAX;
static int64_t t31 = 34003536LL;
uint32_t x158 = 1017U;
static volatile int32_t t33 = 43;
volatile int8_t x170 = INT8_MIN;
volatile int64_t t35 = -8546380262LL;
int32_t x183 = -1122384;
volatile int32_t t37 = -1811622;
int8_t x187 = INT8_MIN;
static volatile uint64_t x190 = 36LLU;
static uint64_t t41 = 23050LLU;
uint64_t x212 = UINT64_MAX;
int8_t x219 = INT8_MAX;
static volatile int64_t t46 = 897312258549351618LL;
uint64_t x230 = 80731938590555LLU;
uint64_t t47 = 7LLU;
int64_t x233 = 4460291464527LL;
volatile int32_t t49 = -3;
uint64_t x247 = 30984LLU;
volatile uint32_t x255 = 8U;
uint8_t x257 = UINT8_MAX;
uint32_t x260 = UINT32_MAX;
volatile int16_t x267 = INT16_MIN;
volatile int8_t x269 = INT8_MIN;
uint64_t x270 = 22971LLU;
uint8_t x276 = 3U;
int32_t x277 = 625749;
int16_t x278 = INT16_MIN;
static int32_t x281 = 2;
uint64_t x283 = 24821421LLU;
uint64_t x300 = UINT64_MAX;
volatile uint64_t t62 = 19973112LLU;
int64_t x324 = 562767746676573317LL;
volatile uint32_t x335 = 96374881U;
volatile int8_t x342 = INT8_MIN;
static int32_t x353 = INT32_MIN;
uint32_t x354 = 18105590U;
static volatile uint32_t t69 = 994963U;
static int8_t x361 = -1;
static uint8_t x363 = 1U;
int32_t x365 = INT32_MIN;
uint8_t x368 = UINT8_MAX;
int32_t t72 = -695;
int32_t x377 = INT32_MIN;
volatile int8_t x383 = INT8_MAX;
static volatile uint64_t t74 = 1893991LLU;
uint16_t x398 = 6134U;
int16_t x399 = INT16_MIN;
static uint64_t t77 = 13043277453956LLU;
static int8_t x413 = INT8_MAX;
int16_t x414 = INT16_MIN;
volatile int32_t t80 = -641156483;
int32_t x435 = -1;
static uint64_t t83 = 16640284LLU;
int8_t x438 = INT8_MIN;
uint8_t x448 = 2U;
int32_t t86 = -4547215;
int8_t x450 = INT8_MIN;
volatile int16_t x452 = -11588;
static volatile int32_t x454 = -1;
static volatile int8_t x458 = -1;
int16_t x462 = INT16_MIN;
int8_t x464 = INT8_MIN;
volatile uint64_t x466 = 229803462240587LLU;
static int16_t x468 = INT16_MIN;
int32_t x470 = -148;
uint32_t t94 = 99U;
uint32_t x486 = 15814105U;
volatile int64_t t96 = -31925759023451LL;
int64_t x498 = INT64_MIN;
static uint8_t x500 = 4U;
volatile int32_t t98 = 5212196;
static int64_t x511 = -14199740939024234LL;
int8_t x513 = INT8_MIN;
uint64_t x521 = 32LLU;
static volatile uint64_t t102 = 99609138LLU;
int64_t x534 = 378798632505LL;
int8_t x555 = INT8_MAX;
int32_t t108 = 0;
uint64_t x568 = 840379438355702703LLU;
uint64_t t111 = 184057988797LLU;
int16_t x574 = INT16_MIN;
uint64_t x575 = 95971370692116LLU;
int64_t x583 = 791083613963835LL;
uint8_t x590 = UINT8_MAX;
int16_t x592 = -1;
static int64_t t118 = 29292196521LL;
static volatile int8_t x600 = -1;
uint8_t x607 = UINT8_MAX;
int8_t x613 = INT8_MAX;
uint64_t x622 = UINT64_MAX;
volatile uint64_t t123 = 1017LLU;
uint64_t x630 = 11883LLU;
volatile uint32_t x634 = 3U;
uint64_t x636 = 4017252537771LLU;
int16_t x638 = INT16_MAX;
uint8_t x641 = UINT8_MAX;
int64_t t127 = -13402953390LL;
volatile uint16_t x647 = 468U;
uint64_t t128 = 804534LLU;
int64_t x652 = INT64_MIN;
volatile int16_t x655 = INT16_MIN;
volatile uint16_t x656 = 1209U;
volatile int16_t x660 = INT16_MIN;
volatile uint16_t x668 = UINT16_MAX;
volatile uint64_t x677 = 135677923832LLU;
static volatile int32_t x680 = INT32_MIN;
int64_t x682 = -13341221LL;
int64_t x690 = INT64_MIN;
static int16_t x695 = -9;
int8_t x698 = -1;
static volatile int32_t x700 = INT32_MIN;
static volatile uint32_t t141 = 398U;
uint64_t x707 = UINT64_MAX;
volatile uint16_t x708 = 3097U;
volatile uint64_t t143 = 18133047890396753LLU;
static volatile uint16_t x715 = 57U;
uint16_t x718 = 1970U;
int8_t x727 = INT8_MIN;
volatile uint16_t x730 = 3137U;
int64_t x745 = INT64_MAX;
volatile int32_t t151 = -1486;
static int64_t x753 = -464899312LL;
volatile uint16_t x754 = UINT16_MAX;
uint64_t x756 = UINT64_MAX;
volatile uint32_t x757 = 0U;
int32_t x759 = -126131;
static int32_t x760 = INT32_MIN;
int32_t x763 = INT32_MIN;
uint64_t t154 = 16263321548LLU;
volatile uint16_t x765 = UINT16_MAX;
volatile int64_t x773 = INT64_MIN;
volatile uint64_t x774 = 4249569560943LLU;
int16_t x780 = INT16_MIN;
static volatile int32_t x786 = 163;
static int64_t x789 = -315677351011625LL;
uint16_t x801 = UINT16_MAX;
static uint64_t x805 = UINT64_MAX;
volatile int16_t x806 = INT16_MAX;
uint32_t x815 = 201U;
int64_t x819 = INT64_MAX;
uint64_t t166 = 624LLU;
static int32_t x822 = -13;
uint32_t x830 = 1930U;
volatile int32_t x845 = INT32_MIN;
static uint64_t x859 = 49325182LLU;
int64_t x861 = 170LL;
int8_t x862 = INT8_MIN;
volatile int8_t x864 = -53;
static int8_t x866 = -1;
int64_t x873 = INT64_MIN;
int64_t t179 = 11LL;
volatile uint64_t x881 = 411611556900897070LLU;
uint8_t x892 = 76U;
int32_t t182 = 4;
uint64_t t183 = 103379LLU;
int32_t x902 = -1;
uint8_t x904 = 2U;
int32_t x908 = -1;
uint32_t x919 = UINT32_MAX;
volatile uint64_t x926 = 359254230LLU;
uint32_t t191 = 101U;
uint8_t x941 = 13U;
int32_t x944 = -1;
volatile uint64_t t193 = 64327089249LLU;
int16_t x957 = INT16_MIN;
uint8_t x961 = 42U;
static int64_t x974 = -1LL;
uint64_t t198 = 14941374804574LLU;


void f0(void) {
    	uint16_t x1 = UINT16_MAX;
	int32_t x2 = -27;
	static uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = -48159019LL;

    t0 = (((x1-x2)^x3)-x4);

    if (t0 != 9223372032559742950LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x6 = 1U;
	static uint8_t x7 = UINT8_MAX;
	uint64_t t1 = 4584999LLU;

    t1 = (((x5-x6)^x7)-x8);

    if (t1 != 18446744073709550846LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	uint64_t x15 = UINT64_MAX;
	volatile uint64_t t2 = 9157428219LLU;

    t2 = (((x13-x14)^x15)-x16);

    if (t2 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	static int16_t x19 = -1;
	static volatile int8_t x20 = -1;
	static int64_t t3 = 2579370693272LL;

    t3 = (((x17-x18)^x19)-x20);

    if (t3 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 20;
	int32_t x22 = -1;
	static int64_t x23 = 2LL;
	static int8_t x24 = -1;

    t4 = (((x21-x22)^x23)-x24);

    if (t4 != 24LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x25 = UINT32_MAX;
	uint64_t x26 = UINT64_MAX;
	static uint16_t x27 = UINT16_MAX;
	int64_t x28 = 258666608945LL;

    t5 = (((x25-x26)^x27)-x28);

    if (t5 != 18446743819337975502LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x29 = 28;
	int8_t x30 = -1;
	int64_t x31 = -1LL;
	static int16_t x32 = -3861;
	volatile int64_t t6 = 99158LL;

    t6 = (((x29-x30)^x31)-x32);

    if (t6 != 3831LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x34 = UINT16_MAX;
	uint64_t x35 = UINT64_MAX;

    t7 = (((x33-x34)^x35)-x36);

    if (t7 != 64693LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	int64_t x40 = -1LL;
	volatile int64_t t8 = 30495898370698LL;

    t8 = (((x37-x38)^x39)-x40);

    if (t8 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	static int16_t x42 = INT16_MAX;
	int32_t x43 = INT32_MAX;
	volatile uint32_t x44 = 58790334U;
	static volatile uint32_t t9 = 10604U;

    t9 = (((x41-x42)^x43)-x44);

    if (t9 != 2088726081U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x45 = -103LL;
	int8_t x46 = -1;
	int8_t x47 = -1;
	volatile uint32_t x48 = 7867U;
	int64_t t10 = -2549938617LL;

    t10 = (((x45-x46)^x47)-x48);

    if (t10 != -7766LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = 72U;
	volatile uint32_t t11 = 251U;

    t11 = (((x49-x50)^x51)-x52);

    if (t11 != 98232U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x53 = -1;
	int16_t x55 = -3266;
	uint64_t x56 = UINT64_MAX;
	volatile uint64_t t12 = 14193645LLU;

    t12 = (((x53-x54)^x55)-x56);

    if (t12 != 18446744073709548351LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	volatile uint16_t x58 = 7U;
	static int32_t x60 = -4157;

    t13 = (((x57-x58)^x59)-x60);

    if (t13 != 4164) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x61 = -1;
	int64_t x62 = -228LL;
	volatile int64_t x63 = 104044530720LL;
	volatile int32_t x64 = INT32_MIN;
	volatile int64_t t14 = 659545974LL;

    t14 = (((x61-x62)^x63)-x64);

    if (t14 != 106192014531LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = -29;
	static uint64_t x70 = 18111513520624594LLU;
	volatile uint64_t x71 = 59187345203LLU;
	uint8_t x72 = 13U;
	volatile uint64_t t15 = 332975LLU;

    t15 = (((x69-x70)^x71)-x72);

    if (t15 != 18428632511792093973LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 1LLU;
	int8_t x75 = 0;
	uint16_t x76 = 12900U;
	uint64_t t16 = 1418378635065243LLU;

    t16 = (((x73-x74)^x75)-x76);

    if (t16 != 18446744073709538633LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MIN;
	static int64_t x86 = -3882233LL;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;
	int64_t t17 = 437634092610104804LL;

    t17 = (((x85-x86)^x87)-x88);

    if (t17 != -2143601414LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = INT32_MIN;
	uint32_t x90 = 4997429U;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = -8;
	volatile uint32_t t18 = 0U;

    t18 = (((x89-x90)^x91)-x92);

    if (t18 != 2152480467U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x93 = 3;
	uint16_t x95 = 1U;
	int8_t x96 = INT8_MAX;

    t19 = (((x93-x94)^x95)-x96);

    if (t19 != 18446744073684187693LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = INT8_MIN;
	uint64_t x98 = 1046LLU;
	int32_t x99 = INT32_MAX;
	uint32_t x100 = UINT32_MAX;
	static volatile uint64_t t20 = 82893654LLU;

    t20 = (((x97-x98)^x99)-x100);

    if (t20 != 18446744067267101846LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x102 = -1;
	int8_t x103 = -1;
	int64_t x104 = -1LL;
	volatile int64_t t21 = 58332362LL;

    t21 = (((x101-x102)^x103)-x104);

    if (t21 != 4294967172LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = -1;
	uint16_t x110 = 21U;
	uint8_t x111 = 49U;
	int8_t x112 = INT8_MIN;
	int32_t t22 = -671121;

    t22 = (((x109-x110)^x111)-x112);

    if (t22 != 91) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x113 = 3;
	int32_t x114 = -1;
	uint32_t x115 = 234426774U;
	static uint8_t x116 = 29U;

    t23 = (((x113-x114)^x115)-x116);

    if (t23 != 234426741U) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x121 = 19;
	int32_t x122 = 8;
	int64_t x123 = INT64_MAX;
	uint8_t x124 = 1U;
	volatile int64_t t24 = -12459338884LL;

    t24 = (((x121-x122)^x123)-x124);

    if (t24 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x125 = 202745488272LLU;
	volatile uint16_t x126 = 8U;
	uint8_t x127 = 11U;
	int64_t x128 = 107864560LL;
	volatile uint64_t t25 = 560641708816449854LLU;

    t25 = (((x125-x126)^x127)-x128);

    if (t25 != 202637623699LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x129 = 100U;
	int16_t x130 = 140;
	int64_t x131 = INT64_MAX;
	volatile uint16_t x132 = 3U;
	volatile int64_t t26 = -1645315005578LL;

    t26 = (((x129-x130)^x131)-x132);

    if (t26 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x137 = UINT8_MAX;
	int8_t x138 = INT8_MAX;
	static uint16_t x139 = UINT16_MAX;
	int16_t x140 = -1;
	int32_t t27 = -1;

    t27 = (((x137-x138)^x139)-x140);

    if (t27 != 65408) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x141 = 12783;
	int8_t x142 = INT8_MAX;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 4U;

    t28 = (((x141-x142)^x143)-x144);

    if (t28 != -20116) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x146 = INT8_MIN;
	static int8_t x148 = INT8_MIN;
	volatile int64_t t29 = INT64_MAX;

    t29 = (((x145-x146)^x147)-x148);

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x150 = -1LL;
	volatile int64_t x151 = -1LL;
	int8_t x152 = INT8_MAX;
	int64_t t30 = -834539LL;

    t30 = (((x149-x150)^x151)-x152);

    if (t30 != 32639LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x153 = INT64_MIN;
	volatile int16_t x154 = INT16_MIN;
	volatile int64_t x155 = INT64_MIN;

    t31 = (((x153-x154)^x155)-x156);

    if (t31 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x157 = 1U;
	uint64_t x159 = 2136102330710685602LLU;
	int32_t x160 = 16;
	volatile uint64_t t32 = 3829LLU;

    t32 = (((x157-x158)^x159)-x160);

    if (t32 != 2136102330110249882LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x165 = 0;
	static int8_t x166 = INT8_MAX;
	static int8_t x167 = INT8_MIN;
	uint16_t x168 = 1248U;

    t33 = (((x165-x166)^x167)-x168);

    if (t33 != -1247) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x169 = UINT64_MAX;
	uint64_t x171 = 628LLU;
	int64_t x172 = INT64_MAX;
	static volatile uint64_t t34 = 903101239603952LLU;

    t34 = (((x169-x170)^x171)-x172);

    if (t34 != 9223372036854776332LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x173 = INT16_MIN;
	volatile int16_t x174 = INT16_MIN;
	int64_t x175 = -129154561462439LL;
	volatile int8_t x176 = INT8_MIN;

    t35 = (((x173-x174)^x175)-x176);

    if (t35 != -129154561462311LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x177 = 7U;
	static int32_t x178 = -1;
	int32_t x179 = -1;
	volatile int16_t x180 = INT16_MAX;
	int32_t t36 = -990059;

    t36 = (((x177-x178)^x179)-x180);

    if (t36 != -32776) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x181 = -3318;
	int16_t x182 = -1;
	uint16_t x184 = 466U;

    t37 = (((x181-x182)^x183)-x184);

    if (t37 != 1125097) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x185 = 51036364LLU;
	int32_t x186 = -1;
	static int8_t x188 = -1;
	uint64_t t38 = 73LLU;

    t38 = (((x185-x186)^x187)-x188);

    if (t38 != 18446744073658515278LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x189 = INT32_MIN;
	uint32_t x191 = 12716U;
	int16_t x192 = INT16_MAX;
	static uint64_t t39 = 10LLU;

    t39 = (((x189-x190)^x191)-x192);

    if (t39 != 18446744071562022513LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x193 = 103U;
	int8_t x194 = INT8_MIN;
	uint16_t x195 = UINT16_MAX;
	uint16_t x196 = UINT16_MAX;
	static uint32_t t40 = 21U;

    t40 = (((x193-x194)^x195)-x196);

    if (t40 != 4294967065U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x197 = 5377U;
	static int16_t x198 = INT16_MIN;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = INT16_MIN;

    t41 = (((x197-x198)^x199)-x200);

    if (t41 != 18446744073709546238LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x205 = -9111;
	volatile int64_t x206 = INT64_MIN;
	uint16_t x207 = UINT16_MAX;
	uint16_t x208 = UINT16_MAX;
	int64_t t42 = -6616217139LL;

    t42 = (((x205-x206)^x207)-x208);

    if (t42 != 9223372036854653847LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x209 = 5328U;
	static int8_t x210 = -1;
	uint32_t x211 = 1146U;
	volatile uint64_t t43 = 13407LLU;

    t43 = (((x209-x210)^x211)-x212);

    if (t43 != 4268LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x213 = 40;
	volatile int16_t x214 = -3;
	int64_t x215 = -1LL;
	volatile uint16_t x216 = UINT16_MAX;
	int64_t t44 = -834608111LL;

    t44 = (((x213-x214)^x215)-x216);

    if (t44 != -65579LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x217 = 24490264LLU;
	uint64_t x218 = 30LLU;
	int8_t x220 = INT8_MIN;
	volatile uint64_t t45 = 7LLU;

    t45 = (((x217-x218)^x219)-x220);

    if (t45 != 24490245LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x221 = UINT16_MAX;
	volatile int32_t x222 = -26790077;
	static uint32_t x223 = UINT32_MAX;
	int64_t x224 = INT64_MAX;

    t46 = (((x221-x222)^x223)-x224);

    if (t46 != -9223372032586664124LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x229 = 1;
	volatile int8_t x231 = INT8_MIN;
	static int8_t x232 = INT8_MIN;

    t47 = (((x229-x230)^x231)-x232);

    if (t47 != 80731938590630LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x234 = 2860517660LLU;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1273190157131LL;
	uint64_t t48 = 5907516LLU;

    t48 = (((x233-x234)^x235)-x236);

    if (t48 != 18446740889468761879LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x237 = -6;
	volatile int16_t x238 = INT16_MIN;
	int8_t x239 = 0;
	uint8_t x240 = UINT8_MAX;

    t49 = (((x237-x238)^x239)-x240);

    if (t49 != 32507) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x241 = -1;
	int64_t x242 = 4834LL;
	uint32_t x243 = UINT32_MAX;
	static int16_t x244 = INT16_MAX;
	volatile int64_t t50 = -2067LL;

    t50 = (((x241-x242)^x243)-x244);

    if (t50 != -4294995229LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x245 = 15116242LL;
	int32_t x246 = INT32_MAX;
	volatile int32_t x248 = INT32_MIN;
	volatile uint64_t t51 = 34682200267413LLU;

    t51 = (((x245-x246)^x247)-x248);

    if (t51 != 15130331LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x253 = -1;
	uint16_t x254 = 74U;
	int64_t x256 = -44273LL;
	volatile int64_t t52 = -209796LL;

    t52 = (((x253-x254)^x255)-x256);

    if (t52 != 4295011502LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x258 = INT16_MIN;
	int16_t x259 = -1;
	uint32_t t53 = 432U;

    t53 = (((x257-x258)^x259)-x260);

    if (t53 != 4294934273U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x261 = 2136723926U;
	volatile int64_t x262 = 29043434LL;
	static uint8_t x263 = UINT8_MAX;
	static int64_t x264 = 56195270272311LL;
	int64_t t54 = -402918617899LL;

    t54 = (((x261-x262)^x263)-x264);

    if (t54 != -56193162592036LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x265 = -46352;
	static uint64_t x266 = UINT64_MAX;
	int64_t x268 = -1LL;
	volatile uint64_t t55 = 2LLU;

    t55 = (((x265-x266)^x267)-x268);

    if (t55 != 51954LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x271 = INT16_MAX;
	volatile uint16_t x272 = UINT16_MAX;
	volatile uint64_t t56 = 1653839605253636LLU;

    t56 = (((x269-x270)^x271)-x272);

    if (t56 != 18446744073709476411LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x273 = -1LL;
	uint8_t x274 = 7U;
	int64_t x275 = 122LL;
	volatile int64_t t57 = -64223547274113671LL;

    t57 = (((x273-x274)^x275)-x276);

    if (t57 != -129LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x279 = 115LLU;
	static volatile int16_t x280 = INT16_MAX;
	uint64_t t58 = 60492350107838LLU;

    t58 = (((x277-x278)^x279)-x280);

    if (t58 != 625703LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x282 = -6670;
	int16_t x284 = INT16_MAX;
	volatile uint64_t t59 = 935994548LLU;

    t59 = (((x281-x282)^x283)-x284);

    if (t59 != 24782014LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x289 = -533;
	volatile int32_t x290 = 932544;
	int64_t x291 = INT64_MIN;
	int32_t x292 = -1;
	int64_t t60 = -25832LL;

    t60 = (((x289-x290)^x291)-x292);

    if (t60 != 9223372036853842732LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x297 = UINT32_MAX;
	static uint64_t x298 = 2062361776835112106LLU;
	int32_t x299 = -1;
	uint64_t t61 = 247074740444669LLU;

    t61 = (((x297-x298)^x299)-x300);

    if (t61 != 2062361772540144811LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x305 = 59980U;
	uint64_t x306 = 242832851326381544LLU;
	int8_t x307 = INT8_MIN;
	volatile uint16_t x308 = 1U;

    t62 = (((x305-x306)^x307)-x308);

    if (t62 != 242832851326321635LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x313 = 890;
	int64_t x314 = -1LL;
	int32_t x315 = INT32_MAX;
	static int32_t x316 = 39389205;
	volatile int64_t t63 = 4485979500LL;

    t63 = (((x313-x314)^x315)-x316);

    if (t63 != 2108093551LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x321 = -1LL;
	volatile int64_t x322 = INT64_MIN;
	int64_t x323 = INT64_MAX;
	static int64_t t64 = 6929LL;

    t64 = (((x321-x322)^x323)-x324);

    if (t64 != -562767746676573317LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x333 = 1575160471899LLU;
	int32_t x334 = INT32_MIN;
	static int64_t x336 = INT64_MAX;
	volatile uint64_t t65 = 70LLU;

    t65 = (((x333-x334)^x335)-x336);

    if (t65 != 9223373614103916859LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int32_t x337 = INT32_MIN;
	static int8_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	static volatile int32_t t66 = -15;

    t66 = (((x337-x338)^x339)-x340);

    if (t66 != 2147450754) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x341 = INT8_MAX;
	volatile int8_t x343 = -1;
	volatile uint16_t x344 = 1736U;
	static int32_t t67 = 32456948;

    t67 = (((x341-x342)^x343)-x344);

    if (t67 != -1992) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x345 = -1;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -2153592181142LL;
	volatile int8_t x348 = 1;
	int64_t t68 = 64096LL;

    t68 = (((x345-x346)^x347)-x348);

    if (t68 != -2152112533100LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x355 = -1;
	uint16_t x356 = 418U;

    t69 = (((x353-x354)^x355)-x356);

    if (t69 != 2165588819U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x362 = 12U;
	int32_t x364 = INT32_MIN;
	int32_t t70 = 1937;

    t70 = (((x361-x362)^x363)-x364);

    if (t70 != 2147483634) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x366 = INT64_MIN;
	volatile int16_t x367 = INT16_MIN;
	int64_t t71 = -79352217755LL;

    t71 = (((x365-x366)^x367)-x368);

    if (t71 != -9223372034707325183LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x369 = 0U;
	int16_t x370 = -1;
	uint8_t x371 = UINT8_MAX;
	volatile uint16_t x372 = 29U;

    t72 = (((x369-x370)^x371)-x372);

    if (t72 != 225) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x378 = INT32_MIN;
	volatile int8_t x379 = -6;
	int32_t x380 = INT32_MIN;
	int32_t t73 = 11;

    t73 = (((x377-x378)^x379)-x380);

    if (t73 != 2147483642) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x381 = INT64_MIN;
	uint64_t x382 = UINT64_MAX;
	static int64_t x384 = INT64_MIN;

    t74 = (((x381-x382)^x383)-x384);

    if (t74 != 126LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x389 = INT64_MIN;
	uint64_t x390 = 935330325LLU;
	static int64_t x391 = 896976LL;
	volatile int32_t x392 = INT32_MIN;
	volatile uint64_t t75 = 272238453LLU;

    t75 = (((x389-x390)^x391)-x392);

    if (t75 != 9223372038066033211LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x393 = 333U;
	static int16_t x394 = INT16_MIN;
	static int32_t x395 = INT32_MIN;
	uint32_t x396 = 53997U;
	volatile uint32_t t76 = 10913U;

    t76 = (((x393-x394)^x395)-x396);

    if (t76 != 2147462752U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x397 = UINT64_MAX;
	static volatile int32_t x400 = 108;

    t77 = (((x397-x398)^x399)-x400);

    if (t77 != 26525LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x405 = 110716506U;
	volatile int8_t x406 = 24;
	static uint32_t x407 = UINT32_MAX;
	uint8_t x408 = 1U;
	volatile uint32_t t78 = 718576U;

    t78 = (((x405-x406)^x407)-x408);

    if (t78 != 4184250812U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x415 = -1;
	uint8_t x416 = 3U;
	int32_t t79 = 0;

    t79 = (((x413-x414)^x415)-x416);

    if (t79 != -32899) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x417 = -1;
	int32_t x418 = -919176;
	uint16_t x419 = 1888U;
	static uint16_t x420 = UINT16_MAX;

    t80 = (((x417-x418)^x419)-x420);

    if (t80 != 852456) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x421 = INT8_MAX;
	uint64_t x422 = 3695000LLU;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;
	uint64_t t81 = 22661055489LLU;

    t81 = (((x421-x422)^x423)-x424);

    if (t81 != 18446744073705873816LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x429 = 0U;
	int32_t x430 = -35529761;
	int16_t x431 = 0;
	static int8_t x432 = INT8_MAX;
	volatile int32_t t82 = 465041;

    t82 = (((x429-x430)^x431)-x432);

    if (t82 != 35529634) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x433 = 0;
	int16_t x434 = -7;
	uint64_t x436 = UINT64_MAX;

    t83 = (((x433-x434)^x435)-x436);

    if (t83 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x437 = 395503012348085411LLU;
	int64_t x439 = 19026LL;
	int16_t x440 = INT16_MIN;
	uint64_t t84 = 197678LLU;

    t84 = (((x437-x438)^x439)-x440);

    if (t84 != 395503012348104561LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x441 = -1;
	int32_t x442 = -1;
	static volatile uint8_t x443 = 5U;
	int32_t x444 = INT32_MAX;
	volatile int32_t t85 = -42461748;

    t85 = (((x441-x442)^x443)-x444);

    if (t85 != -2147483642) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x445 = 6U;
	uint16_t x446 = 6U;
	int16_t x447 = 2;

    t86 = (((x445-x446)^x447)-x448);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x449 = 505;
	uint16_t x451 = 11U;
	volatile int32_t t87 = -3;

    t87 = (((x449-x450)^x451)-x452);

    if (t87 != 12214) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x453 = 3U;
	int16_t x455 = -1;
	int8_t x456 = -1;
	volatile int32_t t88 = -479100;

    t88 = (((x453-x454)^x455)-x456);

    if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x457 = INT32_MIN;
	uint8_t x459 = 0U;
	volatile int16_t x460 = -1;
	int32_t t89 = 32726;

    t89 = (((x457-x458)^x459)-x460);

    if (t89 != -2147483646) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x461 = INT8_MAX;
	int8_t x463 = INT8_MIN;
	static int32_t t90 = 1554;

    t90 = (((x461-x462)^x463)-x464);

    if (t90 != -32641) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x465 = INT8_MIN;
	static volatile uint32_t x467 = 8579U;
	uint64_t t91 = 3163781LLU;

    t91 = (((x465-x466)^x467)-x468);

    if (t91 != 18446514270247352246LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x469 = UINT64_MAX;
	volatile int32_t x471 = 167;
	int16_t x472 = INT16_MIN;
	volatile uint64_t t92 = 258764LLU;

    t92 = (((x469-x470)^x471)-x472);

    if (t92 != 32820LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x473 = INT8_MAX;
	int32_t x474 = 8770464;
	int16_t x475 = -1;
	static volatile int16_t x476 = 0;
	int32_t t93 = -1438295;

    t93 = (((x473-x474)^x475)-x476);

    if (t93 != 8770336) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x477 = 250U;
	static int16_t x478 = -1;
	uint32_t x479 = UINT32_MAX;
	uint16_t x480 = 26U;

    t94 = (((x477-x478)^x479)-x480);

    if (t94 != 4294967018U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x481 = UINT64_MAX;
	uint8_t x482 = 6U;
	volatile int32_t x483 = INT32_MAX;
	uint8_t x484 = UINT8_MAX;
	uint64_t t95 = 3077LLU;

    t95 = (((x481-x482)^x483)-x484);

    if (t95 != 18446744071562067719LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x485 = UINT32_MAX;
	volatile int64_t x487 = -163466074LL;
	int8_t x488 = INT8_MIN;

    t96 = (((x485-x486)^x487)-x488);

    if (t96 != -4138793216LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x497 = INT64_MIN;
	int16_t x499 = -1;
	volatile int64_t t97 = 60530LL;

    t97 = (((x497-x498)^x499)-x500);

    if (t97 != -5LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x505 = -1;
	volatile int32_t x506 = INT32_MIN;
	int8_t x507 = INT8_MIN;
	static int32_t x508 = 3;

    t98 = (((x505-x506)^x507)-x508);

    if (t98 != -2147483524) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x509 = INT32_MAX;
	static int32_t x510 = 14;
	int16_t x512 = INT16_MIN;
	int64_t t99 = -65231425LL;

    t99 = (((x509-x510)^x511)-x512);

    if (t99 != -14199740315781273LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x514 = -1LL;
	static int16_t x515 = INT16_MIN;
	static volatile int64_t x516 = 13LL;
	volatile int64_t t100 = 49375LL;

    t100 = (((x513-x514)^x515)-x516);

    if (t100 != 32628LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x517 = 8189;
	static volatile int8_t x518 = INT8_MIN;
	static volatile int8_t x519 = -1;
	static int16_t x520 = -836;
	int32_t t101 = 15;

    t101 = (((x517-x518)^x519)-x520);

    if (t101 != -7482) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x522 = -11LL;
	int8_t x523 = INT8_MAX;
	int16_t x524 = INT16_MIN;

    t102 = (((x521-x522)^x523)-x524);

    if (t102 != 32852LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = -1;
	volatile int8_t x531 = INT8_MAX;
	volatile int16_t x532 = 23;
	volatile int32_t t103 = -460362179;

    t103 = (((x529-x530)^x531)-x532);

    if (t103 != -32665) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x533 = -1;
	int32_t x535 = 41273916;
	int64_t x536 = -1LL;
	int64_t t104 = 4483160695037257LL;

    t104 = (((x533-x534)^x535)-x536);

    if (t104 != -378768565253LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x537 = 2U;
	volatile uint16_t x538 = 253U;
	uint16_t x539 = 8650U;
	uint64_t x540 = UINT64_MAX;
	volatile uint64_t t105 = 104208914580LLU;

    t105 = (((x537-x538)^x539)-x540);

    if (t105 != 18446744073709543120LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x545 = 7480LLU;
	uint32_t x546 = 25867U;
	int64_t x547 = -840LL;
	int32_t x548 = INT32_MIN;
	volatile uint64_t t106 = 1747279LLU;

    t106 = (((x545-x546)^x547)-x548);

    if (t106 != 2147501205LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x549 = UINT64_MAX;
	int64_t x550 = INT64_MIN;
	uint8_t x551 = 0U;
	uint64_t x552 = UINT64_MAX;
	volatile uint64_t t107 = 121981LLU;

    t107 = (((x549-x550)^x551)-x552);

    if (t107 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x553 = UINT16_MAX;
	int8_t x554 = -1;
	int8_t x556 = -1;

    t108 = (((x553-x554)^x555)-x556);

    if (t108 != 65664) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x557 = 1;
	volatile uint8_t x558 = 1U;
	static int32_t x559 = INT32_MIN;
	volatile int64_t x560 = INT64_MIN;
	int64_t t109 = -121831837756116LL;

    t109 = (((x557-x558)^x559)-x560);

    if (t109 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x561 = UINT32_MAX;
	uint32_t x562 = 3894U;
	int64_t x563 = INT64_MAX;
	int8_t x564 = INT8_MAX;
	static volatile int64_t t110 = 3423484LL;

    t110 = (((x561-x562)^x563)-x564);

    if (t110 != 9223372032559812279LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x565 = 71U;
	int64_t x566 = INT64_MAX;
	int8_t x567 = INT8_MIN;

    t111 = (((x565-x566)^x567)-x568);

    if (t111 != 8382992598499073049LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x569 = 392;
	uint8_t x570 = UINT8_MAX;
	int32_t x571 = -1;
	static int8_t x572 = -1;
	int32_t t112 = -21780;

    t112 = (((x569-x570)^x571)-x572);

    if (t112 != -137) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x573 = UINT8_MAX;
	static int8_t x576 = INT8_MIN;
	volatile uint64_t t113 = 303257833155LLU;

    t113 = (((x573-x574)^x575)-x576);

    if (t113 != 95971370725227LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x577 = 2U;
	uint32_t x578 = 28U;
	static int8_t x579 = 2;
	static volatile uint16_t x580 = 2472U;
	volatile uint32_t t114 = 16053U;

    t114 = (((x577-x578)^x579)-x580);

    if (t114 != 4294964796U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x581 = UINT64_MAX;
	int64_t x582 = INT64_MAX;
	uint64_t x584 = 3917523LLU;
	volatile uint64_t t115 = 330617LLU;

    t115 = (((x581-x582)^x583)-x584);

    if (t115 != 9224163120464822120LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x585 = -238414LL;
	uint64_t x586 = 67517717981702LLU;
	volatile int64_t x587 = -1LL;
	int64_t x588 = -2468LL;
	volatile uint64_t t116 = 2323LLU;

    t116 = (((x585-x586)^x587)-x588);

    if (t116 != 67517718222583LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x589 = -1LL;
	uint8_t x591 = 36U;
	int64_t t117 = 3808597728253LL;

    t117 = (((x589-x590)^x591)-x592);

    if (t117 != -219LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x593 = INT32_MIN;
	int64_t x594 = -4188589732271LL;
	static int16_t x595 = INT16_MIN;
	int32_t x596 = 11559;

    t118 = (((x593-x594)^x595)-x596);

    if (t118 != -4186442267512LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x597 = 7567;
	volatile int8_t x598 = -1;
	static int8_t x599 = 1;
	volatile int32_t t119 = -1520;

    t119 = (((x597-x598)^x599)-x600);

    if (t119 != 7570) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x605 = 57779651801152LL;
	int32_t x606 = -53608;
	uint8_t x608 = UINT8_MAX;
	volatile int64_t t120 = -163424381840421LL;

    t120 = (((x605-x606)^x607)-x608);

    if (t120 != 57779651854424LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x614 = INT16_MAX;
	volatile int64_t x615 = 30943LL;
	uint16_t x616 = 929U;
	int64_t t121 = 473LL;

    t121 = (((x613-x614)^x615)-x616);

    if (t121 != -2882LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x621 = -1;
	int64_t x623 = -17861703883146419LL;
	int32_t x624 = INT32_MIN;
	volatile uint64_t t122 = 881796316719LLU;

    t122 = (((x621-x622)^x623)-x624);

    if (t122 != 18428882371973888845LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x625 = 644989475LLU;
	int32_t x626 = -1;
	int16_t x627 = -462;
	static uint32_t x628 = 64U;

    t123 = (((x625-x626)^x627)-x628);

    if (t123 != 18446744073064561622LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x629 = 0;
	uint16_t x631 = 3U;
	static int64_t x632 = -28629683682579LL;
	volatile uint64_t t124 = 6878085923274863LLU;

    t124 = (((x629-x630)^x631)-x632);

    if (t124 != 28629683670697LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x633 = UINT64_MAX;
	int8_t x635 = INT8_MIN;
	static uint64_t t125 = 11610080927468348LLU;

    t125 = (((x633-x634)^x635)-x636);

    if (t125 != 18446740056457013969LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x637 = 476855918855038947LL;
	static int16_t x639 = -1;
	uint64_t x640 = 4650666649552LLU;
	uint64_t t126 = 241063LLU;

    t126 = (((x637-x638)^x639)-x640);

    if (t126 != 17969883504187895883LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x642 = -6516;
	uint32_t x643 = 20387776U;
	static int64_t x644 = -1LL;

    t127 = (((x641-x642)^x643)-x644);

    if (t127 != 20385204LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x645 = -15LL;
	uint64_t x646 = UINT64_MAX;
	uint64_t x648 = 20973580LLU;

    t128 = (((x645-x646)^x647)-x648);

    if (t128 != 18446744073688577562LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x649 = 1U;
	int32_t x650 = -5;
	static volatile int16_t x651 = INT16_MIN;
	volatile int64_t t129 = 898869LL;

    t129 = (((x649-x650)^x651)-x652);

    if (t129 != 9223372036854743046LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x653 = 812295354;
	uint16_t x654 = 126U;
	int32_t t130 = 194743566;

    t130 = (((x653-x654)^x655)-x656);

    if (t130 != -812310653) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x657 = UINT32_MAX;
	static uint32_t x658 = UINT32_MAX;
	int32_t x659 = INT32_MAX;
	volatile uint32_t t131 = 23146322U;

    t131 = (((x657-x658)^x659)-x660);

    if (t131 != 2147516415U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x661 = -1;
	int64_t x662 = INT64_MAX;
	static int64_t x663 = -1LL;
	int16_t x664 = INT16_MAX;
	static int64_t t132 = -198425450920029LL;

    t132 = (((x661-x662)^x663)-x664);

    if (t132 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x665 = INT8_MIN;
	int16_t x666 = -39;
	volatile uint64_t x667 = UINT64_MAX;
	uint64_t t133 = 1917LLU;

    t133 = (((x665-x666)^x667)-x668);

    if (t133 != 18446744073709486169LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x669 = -488565182169604231LL;
	static int64_t x670 = -16343LL;
	int64_t x671 = INT64_MIN;
	int32_t x672 = -156;
	int64_t t134 = -16391134429888LL;

    t134 = (((x669-x670)^x671)-x672);

    if (t134 != 8734806854685188076LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x673 = INT32_MIN;
	int64_t x674 = INT64_MIN;
	int64_t x675 = -28LL;
	uint64_t x676 = 60837818643192886LLU;
	volatile uint64_t t135 = 113575734336524LLU;

    t135 = (((x673-x674)^x675)-x676);

    if (t135 != 9162534220359066542LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x678 = 0;
	volatile int64_t x679 = INT64_MAX;
	uint64_t t136 = 527791540809422LLU;

    t136 = (((x677-x678)^x679)-x680);

    if (t136 != 9223371903324335623LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x681 = UINT64_MAX;
	int16_t x683 = INT16_MIN;
	int64_t x684 = INT64_MIN;
	static volatile uint64_t t137 = 66492371044LLU;

    t137 = (((x681-x682)^x683)-x684);

    if (t137 != 9223372036841411108LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x685 = INT16_MIN;
	uint64_t x686 = 2310714255740961025LLU;
	static volatile uint32_t x687 = UINT32_MAX;
	int32_t x688 = INT32_MAX;
	uint64_t t138 = 1LLU;

    t138 = (((x685-x686)^x687)-x688);

    if (t138 != 16136029815514824961LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x689 = INT16_MIN;
	int64_t x691 = -14037071067986LL;
	int64_t x692 = -1LL;
	volatile int64_t t139 = -337953420LL;

    t139 = (((x689-x690)^x691)-x692);

    if (t139 != -9223357999783738193LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x693 = UINT8_MAX;
	static int8_t x694 = INT8_MIN;
	volatile int16_t x696 = INT16_MAX;
	int32_t t140 = 1758;

    t140 = (((x693-x694)^x695)-x696);

    if (t140 != -33143) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x697 = -3246;
	uint32_t x699 = 2025605342U;

    t141 = (((x697-x698)^x699)-x700);

    if (t141 != 121879437U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x705 = 3U;
	int16_t x706 = INT16_MIN;
	volatile uint64_t t142 = 7942498LLU;

    t142 = (((x705-x706)^x707)-x708);

    if (t142 != 18446744073709515747LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x709 = INT32_MIN;
	static volatile uint64_t x710 = 546LLU;
	volatile int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MIN;

    t143 = (((x709-x710)^x711)-x712);

    if (t143 != 4294966878LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x713 = -7;
	uint8_t x714 = 0U;
	volatile int64_t x716 = INT64_MIN;
	static int64_t t144 = 1316937806121726656LL;

    t144 = (((x713-x714)^x715)-x716);

    if (t144 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x717 = UINT32_MAX;
	volatile uint32_t x719 = UINT32_MAX;
	int16_t x720 = INT16_MIN;
	uint32_t t145 = 247210U;

    t145 = (((x717-x718)^x719)-x720);

    if (t145 != 34738U) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x721 = INT32_MAX;
	volatile uint16_t x722 = 995U;
	static volatile uint16_t x723 = 1U;
	int32_t x724 = 5966517;
	volatile int32_t t146 = 101;

    t146 = (((x721-x722)^x723)-x724);

    if (t146 != 2141516136) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x725 = 117;
	uint64_t x726 = UINT64_MAX;
	volatile int64_t x728 = INT64_MIN;
	uint64_t t147 = 46227LLU;

    t147 = (((x725-x726)^x727)-x728);

    if (t147 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x729 = 6U;
	int8_t x731 = -11;
	static int8_t x732 = -1;
	volatile uint32_t t148 = 642567675U;

    t148 = (((x729-x730)^x731)-x732);

    if (t148 != 3121U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x741 = 2718U;
	uint64_t x742 = 53527384284382LLU;
	int16_t x743 = -1;
	int16_t x744 = INT16_MIN;
	volatile uint64_t t149 = 91182LLU;

    t149 = (((x741-x742)^x743)-x744);

    if (t149 != 53527384314431LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x746 = UINT16_MAX;
	int8_t x747 = -4;
	volatile int16_t x748 = INT16_MIN;
	volatile int64_t t150 = 2875017LL;

    t150 = (((x745-x746)^x747)-x748);

    if (t150 != -9223372036854677508LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x749 = -1;
	static int32_t x750 = INT32_MIN;
	uint16_t x751 = 15U;
	int8_t x752 = -2;

    t151 = (((x749-x750)^x751)-x752);

    if (t151 != 2147483634) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x755 = 6U;
	uint64_t t152 = 1953338116167821689LLU;

    t152 = (((x753-x754)^x755)-x756);

    if (t152 != 18446744073244586776LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x758 = INT16_MIN;
	uint32_t t153 = 158U;

    t153 = (((x757-x758)^x759)-x760);

    if (t153 != 2147390285U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x761 = 5659574354282LLU;
	static int8_t x762 = INT8_MAX;
	int16_t x764 = INT16_MAX;

    t154 = (((x761-x762)^x763)-x764);

    if (t154 != 18446738413897564396LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x766 = 44;
	int8_t x767 = INT8_MAX;
	uint16_t x768 = 48U;
	static int32_t t155 = -15321343;

    t155 = (((x765-x766)^x767)-x768);

    if (t155 != 65404) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x769 = -13057;
	uint32_t x770 = 251U;
	int32_t x771 = INT32_MAX;
	int16_t x772 = -1;
	static uint32_t t156 = 118076U;

    t156 = (((x769-x770)^x771)-x772);

    if (t156 != 2147496956U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x775 = -1;
	static int8_t x776 = -1;
	static uint64_t t157 = 3295918LLU;

    t157 = (((x773-x774)^x775)-x776);

    if (t157 != 9223376286424336751LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x777 = INT64_MIN;
	uint64_t x778 = 38LLU;
	volatile int32_t x779 = -1;
	uint64_t t158 = 9885LLU;

    t158 = (((x777-x778)^x779)-x780);

    if (t158 != 9223372036854808613LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x781 = UINT32_MAX;
	int8_t x782 = INT8_MIN;
	int8_t x783 = INT8_MIN;
	int8_t x784 = 27;
	uint32_t t159 = 103689U;

    t159 = (((x781-x782)^x783)-x784);

    if (t159 != 4294967268U) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint32_t x785 = UINT32_MAX;
	int32_t x787 = INT32_MAX;
	volatile uint8_t x788 = 10U;
	uint32_t t160 = 44327517U;

    t160 = (((x785-x786)^x787)-x788);

    if (t160 != 2147483801U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int64_t x790 = INT64_MIN;
	uint8_t x791 = 8U;
	int32_t x792 = -1;
	volatile int64_t t161 = -309169998LL;

    t161 = (((x789-x790)^x791)-x792);

    if (t161 != 9223056359503764192LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x793 = UINT64_MAX;
	int16_t x794 = INT16_MAX;
	uint64_t x795 = UINT64_MAX;
	int16_t x796 = INT16_MIN;
	uint64_t t162 = 61232LLU;

    t162 = (((x793-x794)^x795)-x796);

    if (t162 != 65535LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x802 = -192;
	uint32_t x803 = 258095076U;
	static int8_t x804 = INT8_MAX;
	volatile uint32_t t163 = 641772U;

    t163 = (((x801-x802)^x803)-x804);

    if (t163 != 258160348U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x807 = 4834450368LLU;
	static uint8_t x808 = UINT8_MAX;
	uint64_t t164 = 2LLU;

    t164 = (((x805-x806)^x807)-x808);

    if (t164 != 18446744068875115201LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x813 = INT16_MAX;
	static volatile int16_t x814 = 4;
	int64_t x816 = -1LL;
	int64_t t165 = -9LL;

    t165 = (((x813-x814)^x815)-x816);

    if (t165 != 32563LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x817 = 0U;
	volatile int8_t x818 = -1;
	static volatile uint64_t x820 = UINT64_MAX;

    t166 = (((x817-x818)^x819)-x820);

    if (t166 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x821 = INT32_MIN;
	int8_t x823 = INT8_MAX;
	volatile int32_t x824 = INT32_MIN;
	volatile int32_t t167 = -471189;

    t167 = (((x821-x822)^x823)-x824);

    if (t167 != 114) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x829 = INT8_MAX;
	uint16_t x831 = 996U;
	volatile int32_t x832 = INT32_MIN;
	volatile uint32_t t168 = 3U;

    t168 = (((x829-x830)^x831)-x832);

    if (t168 != 2147482385U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x833 = 29780376194LL;
	int8_t x834 = INT8_MIN;
	volatile int32_t x835 = -1;
	uint32_t x836 = 895464U;
	int64_t t169 = 514539589LL;

    t169 = (((x833-x834)^x835)-x836);

    if (t169 != -29781271787LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x837 = INT32_MIN;
	int8_t x838 = -1;
	uint16_t x839 = 8U;
	uint16_t x840 = 7U;
	static int32_t t170 = -419;

    t170 = (((x837-x838)^x839)-x840);

    if (t170 != -2147483646) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x841 = INT32_MIN;
	uint64_t x842 = UINT64_MAX;
	uint64_t x843 = 92800638LLU;
	int16_t x844 = INT16_MAX;
	static volatile uint64_t t171 = 3236751LLU;

    t171 = (((x841-x842)^x843)-x844);

    if (t171 != 18446744071654835840LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x846 = -42419;
	volatile int8_t x847 = -1;
	uint32_t x848 = UINT32_MAX;
	volatile uint32_t t172 = 31U;

    t172 = (((x845-x846)^x847)-x848);

    if (t172 != 2147441229U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x853 = UINT16_MAX;
	uint8_t x854 = 1U;
	int8_t x855 = -1;
	volatile int32_t x856 = INT32_MIN;
	volatile int32_t t173 = 4071;

    t173 = (((x853-x854)^x855)-x856);

    if (t173 != 2147418113) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x857 = UINT16_MAX;
	static uint64_t x858 = UINT64_MAX;
	volatile int8_t x860 = 0;
	volatile uint64_t t174 = 1889197632047462584LLU;

    t174 = (((x857-x858)^x859)-x860);

    if (t174 != 49390718LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x863 = 573197U;
	volatile int64_t t175 = -42841617547690924LL;

    t175 = (((x861-x862)^x863)-x864);

    if (t175 != 573020LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x865 = INT16_MIN;
	static uint32_t x867 = UINT32_MAX;
	int16_t x868 = INT16_MIN;
	uint32_t t176 = 1U;

    t176 = (((x865-x866)^x867)-x868);

    if (t176 != 65534U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x869 = INT32_MIN;
	int32_t x870 = INT32_MIN;
	int32_t x871 = -1;
	static int16_t x872 = -1;
	volatile int32_t t177 = 8929;

    t177 = (((x869-x870)^x871)-x872);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x874 = UINT64_MAX;
	int8_t x875 = INT8_MIN;
	uint64_t x876 = 226967LLU;
	uint64_t t178 = 24259971659044973LLU;

    t178 = (((x873-x874)^x875)-x876);

    if (t178 != 9223372036854548714LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x877 = 11949982633LL;
	int8_t x878 = -1;
	static uint8_t x879 = 6U;
	int64_t x880 = INT64_MAX;

    t179 = (((x877-x878)^x879)-x880);

    if (t179 != -9223372024904793171LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x882 = 1U;
	static volatile int64_t x883 = INT64_MAX;
	uint32_t x884 = UINT32_MAX;
	uint64_t t180 = 29986597810789LLU;

    t180 = (((x881-x882)^x883)-x884);

    if (t180 != 8811760475658911443LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x885 = INT16_MAX;
	uint32_t x886 = 2016U;
	volatile int16_t x887 = -1;
	int16_t x888 = -3;
	uint32_t t181 = 2545U;

    t181 = (((x885-x886)^x887)-x888);

    if (t181 != 4294936547U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x889 = 0;
	volatile uint16_t x890 = 291U;
	int32_t x891 = 6493616;

    t182 = (((x889-x890)^x891)-x892);

    if (t182 != -6493407) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x897 = 3LLU;
	volatile uint8_t x898 = 0U;
	uint64_t x899 = UINT64_MAX;
	uint32_t x900 = 17U;

    t183 = (((x897-x898)^x899)-x900);

    if (t183 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x901 = 1;
	int8_t x903 = INT8_MIN;
	int32_t t184 = 0;

    t184 = (((x901-x902)^x903)-x904);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x905 = UINT8_MAX;
	volatile int64_t x906 = INT64_MAX;
	int32_t x907 = INT32_MIN;
	volatile int64_t t185 = 122550958LL;

    t185 = (((x905-x906)^x907)-x908);

    if (t185 != 9223372034707292417LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x909 = INT32_MAX;
	static uint32_t x910 = UINT32_MAX;
	volatile uint16_t x911 = UINT16_MAX;
	int8_t x912 = INT8_MIN;
	volatile uint32_t t186 = 1301U;

    t186 = (((x909-x910)^x911)-x912);

    if (t186 != 2147549311U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x917 = UINT8_MAX;
	static int32_t x918 = 13128536;
	volatile int16_t x920 = INT16_MIN;
	static volatile uint32_t t187 = 54491U;

    t187 = (((x917-x918)^x919)-x920);

    if (t187 != 13161048U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x921 = UINT32_MAX;
	int64_t x922 = -463989LL;
	uint64_t x923 = UINT64_MAX;
	uint64_t x924 = 448049448088265LLU;
	volatile uint64_t t188 = 7637LLU;

    t188 = (((x921-x922)^x923)-x924);

    if (t188 != 18446296019966032066LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x925 = INT64_MIN;
	uint8_t x927 = 20U;
	volatile int32_t x928 = INT32_MIN;
	uint64_t t189 = 178395040503455LLU;

    t189 = (((x925-x926)^x927)-x928);

    if (t189 != 9223372038643005246LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x929 = -7;
	int8_t x930 = INT8_MIN;
	int32_t x931 = 95024;
	int8_t x932 = INT8_MIN;
	int32_t t190 = 52;

    t190 = (((x929-x930)^x931)-x932);

    if (t190 != 95177) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x933 = 62U;
	int16_t x934 = -2589;
	static int16_t x935 = INT16_MAX;
	int8_t x936 = 63;

    t191 = (((x933-x934)^x935)-x936);

    if (t191 != 30053U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x942 = -2111737982814LL;
	volatile uint16_t x943 = UINT16_MAX;
	volatile int64_t t192 = -534979128161703723LL;

    t192 = (((x941-x942)^x943)-x944);

    if (t192 != 2111737991317LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x945 = INT8_MIN;
	uint64_t x946 = UINT64_MAX;
	volatile int32_t x947 = 242283;
	static uint16_t x948 = 9U;

    t193 = (((x945-x946)^x947)-x948);

    if (t193 != 18446744073709309409LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x949 = INT64_MIN;
	int8_t x950 = -1;
	static volatile int64_t x951 = -1LL;
	volatile uint64_t x952 = 719830865LLU;
	static uint64_t t194 = 1902LLU;

    t194 = (((x949-x950)^x951)-x952);

    if (t194 != 9223372036134944941LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x958 = INT8_MIN;
	volatile int32_t x959 = -768;
	int16_t x960 = INT16_MIN;
	volatile int32_t t195 = 7983890;

    t195 = (((x957-x958)^x959)-x960);

    if (t195 != 64896) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x962 = 7U;
	volatile uint8_t x963 = UINT8_MAX;
	int8_t x964 = 3;
	volatile int32_t t196 = 0;

    t196 = (((x961-x962)^x963)-x964);

    if (t196 != 217) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x969 = INT16_MAX;
	int8_t x970 = -1;
	static volatile int32_t x971 = 3926618;
	int16_t x972 = INT16_MAX;
	int32_t t197 = -3;

    t197 = (((x969-x970)^x971)-x972);

    if (t197 != 3861083) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x973 = INT16_MIN;
	int8_t x975 = -14;
	volatile uint64_t x976 = 61395212094981LLU;

    t198 = (((x973-x974)^x975)-x976);

    if (t198 != 18446682678497489390LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x981 = INT32_MIN;
	uint64_t x982 = 102908335710LLU;
	uint16_t x983 = 84U;
	volatile int16_t x984 = 7;
	static uint64_t t199 = 6222011LLU;

    t199 = (((x981-x982)^x983)-x984);

    if (t199 != 18446743968653732335LLU) { NG(); } else { ; }
	
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

