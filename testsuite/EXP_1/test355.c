
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

static int32_t x6 = INT32_MIN;
int16_t x9 = INT16_MIN;
int16_t x25 = INT16_MAX;
static uint32_t x35 = 49335521U;
volatile uint32_t t6 = 45997548U;
int32_t x39 = INT32_MAX;
volatile uint32_t x47 = 742U;
uint32_t t9 = 7500U;
uint64_t x60 = 2757715397221LLU;
int64_t x61 = 994LL;
static int32_t x62 = 115;
uint64_t x71 = 57740936914LLU;
int32_t x77 = -1;
int8_t x87 = 2;
volatile uint32_t t19 = 341U;
int16_t x90 = -185;
volatile uint16_t x95 = UINT16_MAX;
int32_t x104 = INT32_MIN;
int64_t x107 = INT64_MAX;
int64_t t24 = 7782144LL;
uint16_t x111 = 4U;
int8_t x113 = -1;
uint16_t x115 = UINT16_MAX;
volatile uint32_t t26 = 1603U;
uint8_t x121 = 1U;
uint32_t x125 = 55802U;
int16_t x126 = INT16_MIN;
int64_t x133 = -1LL;
int16_t x139 = INT16_MIN;
int16_t x143 = -14540;
static uint16_t x146 = 10U;
int16_t x150 = INT16_MIN;
uint32_t x160 = 102U;
uint64_t t36 = 1716162772083LLU;
volatile int64_t t37 = -51655319865881247LL;
int32_t x169 = INT32_MAX;
uint16_t x177 = 3988U;
int16_t x179 = 955;
int16_t x188 = INT16_MAX;
int8_t x190 = INT8_MIN;
uint64_t x194 = 12305282718104706LLU;
uint32_t x195 = UINT32_MAX;
int64_t x196 = -362LL;
static uint16_t x200 = 25648U;
int32_t x209 = INT32_MIN;
static volatile uint16_t x217 = UINT16_MAX;
int16_t x218 = INT16_MAX;
int16_t x223 = -1;
int8_t x226 = INT8_MAX;
uint32_t x229 = UINT32_MAX;
uint16_t x230 = UINT16_MAX;
uint8_t x235 = UINT8_MAX;
int16_t x238 = INT16_MAX;
int8_t x239 = INT8_MIN;
static volatile uint64_t t54 = 27332LLU;
uint16_t x241 = 432U;
int16_t x244 = INT16_MIN;
int8_t x247 = INT8_MAX;
int64_t x248 = 3795LL;
int32_t x249 = -1;
int16_t x250 = 14027;
int8_t x257 = -1;
volatile uint64_t x261 = 2963154632133646LLU;
int16_t x266 = -1;
int16_t x273 = 25;
uint16_t x276 = 8128U;
int64_t t62 = 26LL;
int64_t x277 = INT64_MAX;
uint16_t x280 = 7040U;
volatile int64_t x282 = 484299LL;
uint8_t x300 = UINT8_MAX;
static uint16_t x309 = 30U;
static volatile uint64_t x314 = UINT64_MAX;
uint8_t x318 = 60U;
uint32_t x320 = 28U;
int32_t x325 = -1;
static uint32_t x335 = 246161U;
uint64_t x344 = 1161250322609941332LLU;
uint64_t t76 = 4LLU;
static volatile int16_t x367 = INT16_MIN;
int64_t x369 = 4261971430268LL;
volatile uint16_t x372 = 4U;
volatile int64_t t82 = -120672LL;
uint8_t x373 = UINT8_MAX;
int8_t x374 = INT8_MIN;
int8_t x384 = -1;
int16_t x387 = -1;
uint32_t x388 = UINT32_MAX;
int64_t x390 = -1LL;
volatile int64_t x392 = INT64_MAX;
uint64_t x401 = 175397675LLU;
uint64_t t89 = 120179946896270LLU;
int8_t x405 = -1;
volatile uint32_t x411 = UINT32_MAX;
volatile int64_t x417 = INT64_MAX;
uint8_t x420 = 5U;
int8_t x427 = INT8_MIN;
volatile int64_t t95 = 433099982526269LL;
uint32_t x433 = 25U;
int64_t x436 = INT64_MIN;
int32_t t99 = 177;
static int8_t x449 = 1;
uint32_t x451 = 3079047U;
uint64_t x462 = 4421445844300527889LLU;
static int16_t x463 = -9;
static volatile int64_t x470 = -1LL;
volatile int8_t x472 = 1;
static volatile uint32_t x473 = 2230U;
int32_t x474 = INT32_MIN;
int16_t x475 = INT16_MIN;
int16_t x483 = 14;
int64_t t108 = 151138LL;
static int8_t x493 = -1;
uint64_t x494 = 322LLU;
uint64_t x499 = 170350493LLU;
int64_t x509 = -1LL;
uint64_t x512 = UINT64_MAX;
int16_t x518 = INT16_MAX;
int16_t x522 = -1;
volatile uint32_t t115 = 3841587U;
uint8_t x533 = 1U;
uint64_t x545 = 85924381075LLU;
volatile uint64_t x546 = 3314011185108LLU;
uint32_t x547 = UINT32_MAX;
static int8_t x555 = 60;
volatile uint16_t x560 = UINT16_MAX;
static uint64_t x561 = 535LLU;
static int8_t x578 = INT8_MIN;
uint32_t x599 = 889U;
int16_t x604 = -1;
static int64_t x606 = -1293747642LL;
int8_t x608 = 6;
int32_t x612 = INT32_MIN;
int16_t x613 = 1;
static volatile int64_t x625 = -1LL;
int32_t x637 = -117;
static volatile int64_t x644 = INT64_MAX;
int8_t x647 = INT8_MAX;
volatile int32_t t140 = 1;
int8_t x659 = -2;
uint8_t x661 = UINT8_MAX;
volatile int64_t t143 = -76701308LL;
static int64_t x665 = INT64_MIN;
uint16_t x700 = 178U;
int32_t x701 = 596;
uint16_t x702 = UINT16_MAX;
uint32_t t151 = 1039U;
static uint16_t x705 = 655U;
uint16_t x707 = UINT16_MAX;
int64_t t152 = -1750327864558577529LL;
int16_t x710 = -453;
volatile int16_t x718 = -1;
int16_t x719 = -418;
uint32_t x721 = 184428U;
uint32_t x723 = 171820U;
static int16_t x728 = INT16_MIN;
int8_t x733 = INT8_MIN;
volatile uint64_t x735 = 2LLU;
int32_t x741 = 91;
uint32_t x744 = 29U;
volatile uint32_t t162 = 7114U;
volatile uint32_t t163 = 5U;
uint64_t x753 = UINT64_MAX;
int16_t x763 = INT16_MIN;
int64_t x767 = -399781796101672007LL;
uint32_t x769 = 498U;
volatile uint32_t x775 = UINT32_MAX;
int16_t x776 = INT16_MAX;
uint8_t x777 = UINT8_MAX;
int64_t x781 = 47630LL;
volatile int64_t t171 = -12070LL;
int32_t x795 = INT32_MIN;
int32_t x796 = INT32_MIN;
uint32_t x805 = UINT32_MAX;
uint32_t x807 = UINT32_MAX;
int8_t x808 = INT8_MAX;
volatile int32_t x812 = 85422239;
int64_t x822 = -1753804927593288573LL;
int8_t x827 = -3;
volatile uint8_t x828 = 98U;
volatile uint64_t x851 = UINT64_MAX;
int32_t x869 = -50;
static volatile int16_t x871 = 1;
volatile int32_t x872 = INT32_MIN;
static int8_t x875 = INT8_MIN;
int64_t t189 = 1LL;
volatile uint64_t x879 = 4925632106474047LLU;
uint64_t t190 = 2967LLU;
int64_t x886 = -22LL;
uint64_t x890 = UINT64_MAX;
static uint64_t t193 = 223743LLU;
volatile uint8_t x893 = 1U;
static int64_t x895 = 13429513221231050LL;
volatile int16_t x902 = -1;
uint64_t x911 = 11078332185958462LLU;
volatile int16_t x913 = INT16_MIN;


void f0(void) {
    	volatile int16_t x5 = -1471;
	volatile int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t0 = 323;

    t0 = (((x5-x6)&x7)%x8);

    if (t0 != 65) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x10 = 744451;
	uint64_t x11 = 5045031LLU;
	volatile int32_t x12 = INT32_MIN;
	volatile uint64_t t1 = 48286725LLU;

    t1 = (((x9-x10)&x11)%x12);

    if (t1 != 4465445LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = -1;
	static int8_t x18 = INT8_MAX;
	int32_t x19 = -593290987;
	uint32_t x20 = UINT32_MAX;
	uint32_t t2 = 0U;

    t2 = (((x17-x18)&x19)%x20);

    if (t2 != 3701676288U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = 542627324244LL;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = UINT16_MAX;
	static int8_t x24 = INT8_MAX;
	volatile int64_t t3 = -10867401LL;

    t3 = (((x21-x22)&x23)%x24);

    if (t3 != 24LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x26 = 10U;
	uint32_t x27 = 223293783U;
	static volatile uint16_t x28 = 16U;
	uint32_t t4 = 236624070U;

    t4 = (((x25-x26)&x27)%x28);

    if (t4 != 5U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 92867346471271313LLU;
	int16_t x30 = INT16_MIN;
	static int32_t x31 = 26066;
	int16_t x32 = -1451;
	volatile uint64_t t5 = 878LLU;

    t5 = (((x29-x30)&x31)%x32);

    if (t5 != 8592LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x34 = 12;
	static int32_t x36 = INT32_MIN;

    t6 = (((x33-x34)&x35)%x36);

    if (t6 != 49335392U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -1;
	int16_t x38 = -1;
	uint16_t x40 = 449U;
	static volatile int32_t t7 = 6225306;

    t7 = (((x37-x38)&x39)%x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x41 = -180697066;
	static volatile int32_t x42 = INT32_MIN;
	uint32_t x43 = 20325U;
	static uint8_t x44 = UINT8_MAX;
	volatile uint32_t t8 = 11870U;

    t8 = (((x41-x42)&x43)%x44);

    if (t8 != 76U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = 0;
	int8_t x46 = INT8_MAX;
	uint32_t x48 = 49U;

    t9 = (((x45-x46)&x47)%x48);

    if (t9 != 3U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x49 = INT32_MAX;
	int32_t x50 = 7;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = INT64_MAX;
	volatile int64_t t10 = -678LL;

    t10 = (((x49-x50)&x51)%x52);

    if (t10 != 248LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x53 = UINT64_MAX;
	volatile uint64_t x54 = UINT64_MAX;
	volatile int64_t x55 = INT64_MIN;
	uint64_t x56 = 3926603910950264434LLU;
	volatile uint64_t t11 = 150LLU;

    t11 = (((x53-x54)&x55)%x56);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x57 = INT64_MIN;
	static int8_t x58 = -1;
	static int32_t x59 = INT32_MAX;
	volatile uint64_t t12 = 14536791209728385LLU;

    t12 = (((x57-x58)&x59)%x60);

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x63 = INT8_MAX;
	int32_t x64 = 230133171;
	volatile int64_t t13 = 38552120032LL;

    t13 = (((x61-x62)&x63)%x64);

    if (t13 != 111LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MIN;
	static int64_t x67 = INT64_MIN;
	int16_t x68 = -2;
	int64_t t14 = -1811662289789LL;

    t14 = (((x65-x66)&x67)%x68);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	int64_t x72 = 57LL;
	uint64_t t15 = 481106LLU;

    t15 = (((x69-x70)&x71)%x72);

    if (t15 != 25LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	static int32_t x75 = INT32_MAX;
	int8_t x76 = INT8_MAX;
	int64_t t16 = 38899524617651LL;

    t16 = (((x73-x74)&x75)%x76);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x78 = 0;
	int64_t x79 = -3931166394LL;
	volatile uint32_t x80 = 17052943U;
	int64_t t17 = 226199342110608549LL;

    t17 = (((x77-x78)&x79)%x80);

    if (t17 != -8989504LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x81 = UINT16_MAX;
	static uint8_t x82 = UINT8_MAX;
	static volatile int8_t x83 = INT8_MAX;
	volatile int64_t x84 = INT64_MIN;
	static int64_t t18 = 494987100006549963LL;

    t18 = (((x81-x82)&x83)%x84);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = -1;
	uint32_t x86 = 6645592U;
	int16_t x88 = -1;

    t19 = (((x85-x86)&x87)%x88);

    if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = INT64_MIN;
	static int64_t x91 = -1093366420LL;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t20 = 72845337855930LL;

    t20 = (((x89-x90)&x91)%x92);

    if (t20 != -88LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = -38LL;
	static int32_t x94 = INT32_MIN;
	int32_t x96 = -1;
	int64_t t21 = 3LL;

    t21 = (((x93-x94)&x95)%x96);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 3U;
	int32_t x98 = -641;
	volatile int8_t x99 = INT8_MAX;
	uint8_t x100 = UINT8_MAX;
	static int32_t t22 = -75;

    t22 = (((x97-x98)&x99)%x100);

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x101 = INT32_MIN;
	uint32_t x102 = 55U;
	int64_t x103 = 396LL;
	volatile int64_t t23 = 6535137690LL;

    t23 = (((x101-x102)&x103)%x104);

    if (t23 != 392LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = 333303;
	uint16_t x108 = UINT16_MAX;

    t24 = (((x105-x106)&x107)%x108);

    if (t24 != 59907LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x109 = 999U;
	int16_t x110 = INT16_MAX;
	volatile int64_t x112 = INT64_MIN;
	int64_t t25 = 0LL;

    t25 = (((x109-x110)&x111)%x112);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x114 = 1765463U;
	static volatile uint16_t x116 = UINT16_MAX;

    t26 = (((x113-x114)&x115)%x116);

    if (t26 != 4008U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint16_t x117 = 6036U;
	uint16_t x118 = UINT16_MAX;
	volatile int32_t x119 = INT32_MIN;
	volatile int32_t x120 = 7913788;
	volatile int32_t t27 = -868707660;

    t27 = (((x117-x118)&x119)%x120);

    if (t27 != -2847100) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x122 = -1LL;
	volatile uint64_t x123 = 320347874445382LLU;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t28 = 0LLU;

    t28 = (((x121-x122)&x123)%x124);

    if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x127 = -1;
	int64_t x128 = INT64_MAX;
	volatile int64_t t29 = 34302191524930LL;

    t29 = (((x125-x126)&x127)%x128);

    if (t29 != 88570LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x129 = -64041442;
	uint64_t x130 = 192651067175874LLU;
	int8_t x131 = INT8_MIN;
	static int8_t x132 = INT8_MAX;
	uint64_t t30 = 6LLU;

    t30 = (((x129-x130)&x131)%x132);

    if (t30 != 8LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x134 = -5;
	static int8_t x135 = 8;
	int64_t x136 = INT64_MIN;
	volatile int64_t t31 = 13173LL;

    t31 = (((x133-x134)&x135)%x136);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = UINT32_MAX;
	int16_t x138 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile uint32_t t32 = 1824134329U;

    t32 = (((x137-x138)&x139)%x140);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = INT32_MIN;
	static uint64_t x142 = 8761220529043912006LLU;
	uint32_t x144 = 18U;
	static uint64_t t33 = 8999466341076LLU;

    t33 = (((x141-x142)&x143)%x144);

    if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x145 = 6402959U;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = -1;
	static uint32_t t34 = 70U;

    t34 = (((x145-x146)&x147)%x148);

    if (t34 != 6402944U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x149 = INT16_MIN;
	int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	volatile int64_t t35 = -1293307LL;

    t35 = (((x149-x150)&x151)%x152);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x157 = 23362945593699316LLU;
	int64_t x158 = 25116907847LL;
	int16_t x159 = -1;

    t36 = (((x157-x158)&x159)%x160);

    if (t36 != 83LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = -1;
	int64_t x162 = INT64_MAX;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MIN;

    t37 = (((x161-x162)&x163)%x164);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x170 = 1918595344871LLU;
	static int64_t x171 = INT64_MAX;
	static int64_t x172 = INT64_MIN;
	volatile uint64_t t38 = 17103206691LLU;

    t38 = (((x169-x170)&x171)%x172);

    if (t38 != 9223370120406914584LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x178 = 2;
	int16_t x180 = INT16_MAX;
	int32_t t39 = -200;

    t39 = (((x177-x178)&x179)%x180);

    if (t39 != 914) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x181 = INT64_MAX;
	int32_t x182 = INT32_MAX;
	static volatile int16_t x183 = -455;
	int8_t x184 = INT8_MIN;
	volatile int64_t t40 = 50631391LL;

    t40 = (((x181-x182)&x183)%x184);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x185 = -20;
	int64_t x186 = INT64_MIN;
	int8_t x187 = 1;
	static volatile int64_t t41 = -8496072371903LL;

    t41 = (((x185-x186)&x187)%x188);

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x189 = 514325111879LLU;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = 4U;
	volatile uint64_t t42 = 15058304952LLU;

    t42 = (((x189-x190)&x191)%x192);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x193 = -1;
	uint64_t t43 = 1LLU;

    t43 = (((x193-x194)&x195)%x196);

    if (t43 != 448398205LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x197 = -1LL;
	int32_t x198 = 408142;
	static int64_t x199 = INT64_MIN;
	int64_t t44 = -740778062611LL;

    t44 = (((x197-x198)&x199)%x200);

    if (t44 != -22464LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x201 = -6918;
	int8_t x202 = -1;
	int8_t x203 = 1;
	uint8_t x204 = 1U;
	int32_t t45 = 13867;

    t45 = (((x201-x202)&x203)%x204);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x205 = 439426U;
	int32_t x206 = -1;
	volatile uint64_t x207 = 524754466LLU;
	static volatile int8_t x208 = -1;
	volatile uint64_t t46 = 6312713500057026LLU;

    t46 = (((x205-x206)&x207)%x208);

    if (t46 != 398338LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x210 = INT64_MIN;
	int64_t x211 = 6594425451828LL;
	static int16_t x212 = INT16_MAX;
	int64_t t47 = -15575480LL;

    t47 = (((x209-x210)&x211)%x212);

    if (t47 != 6140LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x213 = 24LLU;
	volatile uint16_t x214 = UINT16_MAX;
	int16_t x215 = 2;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t48 = 13809858768544603LLU;

    t48 = (((x213-x214)&x215)%x216);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x219 = -29;
	volatile int16_t x220 = INT16_MIN;
	static volatile int32_t t49 = -3;

    t49 = (((x217-x218)&x219)%x220);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x221 = 29U;
	uint32_t x222 = 10191370U;
	volatile int8_t x224 = INT8_MIN;
	volatile uint32_t t50 = 1U;

    t50 = (((x221-x222)&x223)%x224);

    if (t50 != 4284775955U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = 611756519LLU;
	uint8_t x227 = 90U;
	volatile uint8_t x228 = UINT8_MAX;
	uint64_t t51 = 2129284454433045338LLU;

    t51 = (((x225-x226)&x227)%x228);

    if (t51 != 72LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x231 = 1;
	static int32_t x232 = INT32_MIN;
	uint32_t t52 = 399U;

    t52 = (((x229-x230)&x231)%x232);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x233 = 4;
	uint8_t x234 = UINT8_MAX;
	uint64_t x236 = 1456327113223599LLU;
	static uint64_t t53 = 6LLU;

    t53 = (((x233-x234)&x235)%x236);

    if (t53 != 5LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x237 = 8526403893469LLU;
	volatile int8_t x240 = -1;

    t54 = (((x237-x238)&x239)%x240);

    if (t54 != 8526403860608LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x242 = -1;
	uint8_t x243 = 8U;
	int32_t t55 = 1837797;

    t55 = (((x241-x242)&x243)%x244);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = INT16_MIN;
	int8_t x246 = INT8_MAX;
	int64_t t56 = -8588951LL;

    t56 = (((x245-x246)&x247)%x248);

    if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x251 = UINT32_MAX;
	static int64_t x252 = INT64_MIN;
	int64_t t57 = -1477188832LL;

    t57 = (((x249-x250)&x251)%x252);

    if (t57 != 4294953268LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x258 = 50LL;
	static uint64_t x259 = 28774636LLU;
	int32_t x260 = INT32_MAX;
	uint64_t t58 = 1269LLU;

    t58 = (((x257-x258)&x259)%x260);

    if (t58 != 28774604LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x262 = UINT8_MAX;
	static int64_t x263 = -1LL;
	uint16_t x264 = 27U;
	volatile uint64_t t59 = 289613301505933LLU;

    t59 = (((x261-x262)&x263)%x264);

    if (t59 != 7LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x265 = 15217975;
	int64_t x267 = -3964899153462386LL;
	int32_t x268 = INT32_MIN;
	volatile int64_t t60 = 2304557118445483932LL;

    t60 = (((x265-x266)&x267)%x268);

    if (t60 != 6304008LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	int64_t x272 = INT64_MAX;
	int64_t t61 = 62LL;

    t61 = (((x269-x270)&x271)%x272);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x274 = 29U;
	static int64_t x275 = 6LL;

    t62 = (((x273-x274)&x275)%x276);

    if (t62 != 4LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x278 = UINT32_MAX;
	volatile int64_t x279 = INT64_MIN;
	int64_t t63 = -68475278727764971LL;

    t63 = (((x277-x278)&x279)%x280);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x281 = UINT8_MAX;
	volatile uint64_t x283 = 2537894079LLU;
	volatile uint8_t x284 = UINT8_MAX;
	uint64_t t64 = 178728289626715352LLU;

    t64 = (((x281-x282)&x283)%x284);

    if (t64 != 28LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x285 = UINT32_MAX;
	volatile int64_t x286 = 403241417345LL;
	uint8_t x287 = 11U;
	int8_t x288 = 10;
	volatile int64_t t65 = 455563464556677LL;

    t65 = (((x285-x286)&x287)%x288);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x289 = 67U;
	int8_t x290 = -5;
	uint64_t x291 = 1491912LLU;
	uint64_t x292 = UINT64_MAX;
	uint64_t t66 = 5982457LLU;

    t66 = (((x289-x290)&x291)%x292);

    if (t66 != 72LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x293 = 26626437LLU;
	uint16_t x294 = 90U;
	static volatile int8_t x295 = INT8_MIN;
	static int8_t x296 = INT8_MIN;
	static volatile uint64_t t67 = 233648611224255063LLU;

    t67 = (((x293-x294)&x295)%x296);

    if (t67 != 26626304LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x297 = 707697329134258LLU;
	static uint8_t x298 = 10U;
	volatile uint64_t x299 = 6533662454351LLU;
	volatile uint64_t t68 = 127328946LLU;

    t68 = (((x297-x298)&x299)%x300);

    if (t68 != 122LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x310 = -1;
	uint64_t x311 = 2834311757889LLU;
	int32_t x312 = INT32_MAX;
	uint64_t t69 = 49327764782LLU;

    t69 = (((x309-x310)&x311)%x312);

    if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x313 = UINT64_MAX;
	int64_t x315 = INT64_MIN;
	uint8_t x316 = 10U;
	static volatile uint64_t t70 = 1186483LLU;

    t70 = (((x313-x314)&x315)%x316);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x317 = 1LL;
	int8_t x319 = -1;
	int64_t t71 = -110226581474LL;

    t71 = (((x317-x318)&x319)%x320);

    if (t71 != -3LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x321 = UINT16_MAX;
	int32_t x322 = INT32_MAX;
	int8_t x323 = 0;
	volatile uint32_t x324 = UINT32_MAX;
	volatile uint32_t t72 = 1U;

    t72 = (((x321-x322)&x323)%x324);

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x326 = INT32_MAX;
	static uint64_t x327 = 95640925098475176LLU;
	volatile int32_t x328 = -1;
	static volatile uint64_t t73 = 1115295883025LLU;

    t73 = (((x325-x326)&x327)%x328);

    if (t73 != 95640924452814848LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x333 = 243302883758511LLU;
	int64_t x334 = -2103149455680LL;
	static uint16_t x336 = UINT16_MAX;
	volatile uint64_t t74 = 3223862534LLU;

    t74 = (((x333-x334)&x335)%x336);

    if (t74 != 16516LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x337 = 1245U;
	int8_t x338 = INT8_MIN;
	uint64_t x339 = 152553616350LLU;
	uint32_t x340 = 31U;
	volatile uint64_t t75 = 4586144LLU;

    t75 = (((x337-x338)&x339)%x340);

    if (t75 != 7LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x341 = -1;
	uint16_t x342 = 6U;
	int16_t x343 = 44;

    t76 = (((x341-x342)&x343)%x344);

    if (t76 != 40LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x349 = UINT32_MAX;
	static int16_t x350 = 58;
	uint64_t x351 = 54207775LLU;
	uint8_t x352 = UINT8_MAX;
	static volatile uint64_t t77 = 14LLU;

    t77 = (((x349-x350)&x351)%x352);

    if (t77 != 104LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x353 = 227U;
	int8_t x354 = INT8_MAX;
	uint64_t x355 = 15LLU;
	uint16_t x356 = 5975U;
	volatile uint64_t t78 = 19122163815926LLU;

    t78 = (((x353-x354)&x355)%x356);

    if (t78 != 4LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x357 = -20;
	uint8_t x358 = 5U;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -160;
	static int32_t t79 = -3191;

    t79 = (((x357-x358)&x359)%x360);

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x361 = 0U;
	uint16_t x362 = 1U;
	int64_t x363 = -1LL;
	volatile int64_t x364 = -1LL;
	static int64_t t80 = -830277018662299LL;

    t80 = (((x361-x362)&x363)%x364);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile uint64_t x365 = 1010770LLU;
	static volatile int8_t x366 = INT8_MAX;
	volatile uint8_t x368 = UINT8_MAX;
	static uint64_t t81 = 1939LLU;

    t81 = (((x365-x366)&x367)%x368);

    if (t81 != 15LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x370 = UINT8_MAX;
	int8_t x371 = -1;

    t82 = (((x369-x370)&x371)%x372);

    if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x375 = UINT16_MAX;
	int8_t x376 = -1;
	int32_t t83 = 1551;

    t83 = (((x373-x374)&x375)%x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x377 = 4251U;
	int64_t x378 = INT64_MAX;
	int16_t x379 = -1;
	int64_t x380 = -1023435590633LL;
	volatile int64_t t84 = 39978LL;

    t84 = (((x377-x378)&x379)%x380);

    if (t84 != -603762130478LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x381 = 2943U;
	int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	int32_t t85 = 470;

    t85 = (((x381-x382)&x383)%x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = -2590623452LL;
	int64_t t86 = 891766124472811502LL;

    t86 = (((x385-x386)&x387)%x388);

    if (t86 != 443139804LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = -1;
	int8_t x391 = INT8_MAX;
	volatile int64_t t87 = 516012306LL;

    t87 = (((x389-x390)&x391)%x392);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x397 = INT16_MIN;
	static volatile uint16_t x398 = 0U;
	static volatile int8_t x399 = INT8_MIN;
	int64_t x400 = -1LL;
	volatile int64_t t88 = -396751174LL;

    t88 = (((x397-x398)&x399)%x400);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x402 = INT32_MIN;
	static uint16_t x403 = 1U;
	uint32_t x404 = UINT32_MAX;

    t89 = (((x401-x402)&x403)%x404);

    if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x406 = -1LL;
	int16_t x407 = INT16_MIN;
	volatile int16_t x408 = INT16_MAX;
	int64_t t90 = -22699LL;

    t90 = (((x405-x406)&x407)%x408);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x409 = 54198LL;
	uint16_t x410 = 888U;
	static int64_t x412 = INT64_MIN;
	volatile int64_t t91 = -656155355070087706LL;

    t91 = (((x409-x410)&x411)%x412);

    if (t91 != 53310LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x418 = 14U;
	uint16_t x419 = 2U;
	volatile int64_t t92 = -60264142384236LL;

    t92 = (((x417-x418)&x419)%x420);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x421 = 211LLU;
	uint16_t x422 = 15U;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = 21149;
	static volatile uint64_t t93 = 119357LLU;

    t93 = (((x421-x422)&x423)%x424);

    if (t93 != 196LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x425 = INT32_MAX;
	static uint64_t x426 = UINT64_MAX;
	uint32_t x428 = 451188U;
	volatile uint64_t t94 = 29821426295016LLU;

    t94 = (((x425-x426)&x427)%x428);

    if (t94 != 279956LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x429 = INT64_MIN;
	int8_t x430 = -1;
	uint16_t x431 = UINT16_MAX;
	static uint8_t x432 = 25U;

    t95 = (((x429-x430)&x431)%x432);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x434 = -1;
	int32_t x435 = INT32_MIN;
	volatile int64_t t96 = -2568596622LL;

    t96 = (((x433-x434)&x435)%x436);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = -1LL;
	int32_t x439 = -1;
	int16_t x440 = INT16_MIN;
	static int64_t t97 = 106590991LL;

    t97 = (((x437-x438)&x439)%x440);

    if (t97 != -32767LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = -1LL;
	uint16_t x443 = 49U;
	int16_t x444 = INT16_MIN;
	static int64_t t98 = 730555899799893LL;

    t98 = (((x441-x442)&x443)%x444);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x445 = 1U;
	volatile int8_t x446 = -19;
	uint8_t x447 = 3U;
	static volatile int8_t x448 = INT8_MAX;

    t99 = (((x445-x446)&x447)%x448);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x450 = UINT32_MAX;
	static uint16_t x452 = 15995U;
	uint32_t t100 = 773895599U;

    t100 = (((x449-x450)&x451)%x452);

    if (t100 != 2U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x453 = INT32_MIN;
	volatile int64_t x454 = 398689623879LL;
	int8_t x455 = -1;
	int8_t x456 = 35;
	volatile int64_t t101 = -4361011790772826LL;

    t101 = (((x453-x454)&x455)%x456);

    if (t101 != -17LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x457 = INT16_MIN;
	static volatile int8_t x458 = INT8_MIN;
	uint16_t x459 = UINT16_MAX;
	int8_t x460 = INT8_MIN;
	volatile int32_t t102 = -75353728;

    t102 = (((x457-x458)&x459)%x460);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x461 = -199;
	int16_t x464 = INT16_MIN;
	uint64_t t103 = 104LLU;

    t103 = (((x461-x462)&x463)%x464);

    if (t103 != 14025298229409023520LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x465 = UINT32_MAX;
	static uint64_t x466 = 62LLU;
	int32_t x467 = INT32_MAX;
	int32_t x468 = INT32_MIN;
	static volatile uint64_t t104 = 1547246915363097178LLU;

    t104 = (((x465-x466)&x467)%x468);

    if (t104 != 2147483585LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x469 = INT32_MIN;
	int32_t x471 = 30173612;
	int64_t t105 = 543213186706008922LL;

    t105 = (((x469-x470)&x471)%x472);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x476 = -1;
	volatile uint32_t t106 = 6995U;

    t106 = (((x473-x474)&x475)%x476);

    if (t106 != 2147483648U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x477 = INT16_MIN;
	uint64_t x478 = 11LLU;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = 35;
	volatile uint64_t t107 = 1439562987599LLU;

    t107 = (((x477-x478)&x479)%x480);

    if (t107 != 32LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x481 = INT8_MIN;
	int32_t x482 = -7250931;
	int64_t x484 = INT64_MAX;

    t108 = (((x481-x482)&x483)%x484);

    if (t108 != 2LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x495 = -1;
	static uint64_t x496 = 756930LLU;
	volatile uint64_t t109 = 419895LLU;

    t109 = (((x493-x494)&x495)%x496);

    if (t109 != 37403LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x497 = 13U;
	uint16_t x498 = 103U;
	volatile int32_t x500 = INT32_MIN;
	uint64_t t110 = 5627802680051113LLU;

    t110 = (((x497-x498)&x499)%x500);

    if (t110 != 170350468LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x510 = INT16_MIN;
	int32_t x511 = INT32_MIN;
	volatile uint64_t t111 = 5476LLU;

    t111 = (((x509-x510)&x511)%x512);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x517 = 115929LLU;
	int64_t x519 = -1LL;
	volatile int8_t x520 = -1;
	volatile uint64_t t112 = 0LLU;

    t112 = (((x517-x518)&x519)%x520);

    if (t112 != 83162LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x521 = 0U;
	int32_t x523 = INT32_MIN;
	volatile int64_t x524 = 231124469445229LL;
	static int64_t t113 = 2080177030256042764LL;

    t113 = (((x521-x522)&x523)%x524);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x525 = INT32_MIN;
	volatile int32_t x526 = INT32_MIN;
	uint16_t x527 = 1327U;
	static int16_t x528 = INT16_MIN;
	int32_t t114 = -8987950;

    t114 = (((x525-x526)&x527)%x528);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x529 = -38;
	int16_t x530 = 555;
	uint32_t x531 = 18U;
	volatile int16_t x532 = INT16_MAX;

    t115 = (((x529-x530)&x531)%x532);

    if (t115 != 2U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x534 = 1034LLU;
	int64_t x535 = -1LL;
	int64_t x536 = INT64_MAX;
	volatile uint64_t t116 = 422882108661LLU;

    t116 = (((x533-x534)&x535)%x536);

    if (t116 != 9223372036854774776LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t117 = 7584211303LLU;

    t117 = (((x545-x546)&x547)%x548);

    if (t117 != 1728602559LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x553 = UINT8_MAX;
	uint32_t x554 = UINT32_MAX;
	uint32_t x556 = 892787U;
	uint32_t t118 = 39U;

    t118 = (((x553-x554)&x555)%x556);

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x557 = INT64_MIN;
	int8_t x558 = INT8_MIN;
	static int8_t x559 = 1;
	volatile int64_t t119 = -44331890125LL;

    t119 = (((x557-x558)&x559)%x560);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x562 = -1;
	static volatile int64_t x563 = 436188705LL;
	int32_t x564 = INT32_MIN;
	volatile uint64_t t120 = 20250386485LLU;

    t120 = (((x561-x562)&x563)%x564);

    if (t120 != 512LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x565 = 5U;
	int16_t x566 = INT16_MIN;
	uint64_t x567 = UINT64_MAX;
	static volatile uint16_t x568 = 217U;
	uint64_t t121 = 1014545218LLU;

    t121 = (((x565-x566)&x567)%x568);

    if (t121 != 6LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x569 = 3634;
	volatile uint64_t x570 = 109776777LLU;
	int32_t x571 = INT32_MAX;
	static int16_t x572 = -1;
	uint64_t t122 = 909656774LLU;

    t122 = (((x569-x570)&x571)%x572);

    if (t122 != 2037710505LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x573 = -1;
	int64_t x574 = INT64_MIN;
	static volatile int8_t x575 = -28;
	uint64_t x576 = UINT64_MAX;
	volatile uint64_t t123 = 7094LLU;

    t123 = (((x573-x574)&x575)%x576);

    if (t123 != 9223372036854775780LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x577 = INT32_MIN;
	static uint64_t x579 = 1835856LLU;
	uint16_t x580 = 1U;
	static volatile uint64_t t124 = 0LLU;

    t124 = (((x577-x578)&x579)%x580);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x581 = 79708U;
	volatile int64_t x582 = -158397853700696LL;
	uint64_t x583 = 1266374502LLU;
	volatile int32_t x584 = INT32_MIN;
	volatile uint64_t t125 = 2292776768429LLU;

    t125 = (((x581-x582)&x583)%x584);

    if (t125 != 1263157540LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x585 = 1U;
	static int8_t x586 = -1;
	volatile int64_t x587 = INT64_MAX;
	volatile int16_t x588 = INT16_MAX;
	int64_t t126 = 996LL;

    t126 = (((x585-x586)&x587)%x588);

    if (t126 != 2LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x589 = INT32_MIN;
	int32_t x590 = -31194476;
	int8_t x591 = -13;
	volatile int8_t x592 = 3;
	int32_t t127 = -315;

    t127 = (((x589-x590)&x591)%x592);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x593 = INT32_MIN;
	int16_t x594 = INT16_MIN;
	volatile uint32_t x595 = 1638026252U;
	volatile int64_t x596 = INT64_MAX;
	int64_t t128 = -206006710222462LL;

    t128 = (((x593-x594)&x595)%x596);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x597 = -1LL;
	int32_t x598 = INT32_MIN;
	static int16_t x600 = -4;
	volatile int64_t t129 = 4003367361084656LL;

    t129 = (((x597-x598)&x599)%x600);

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x601 = 6833;
	int64_t x602 = -543750LL;
	uint64_t x603 = 4465054980389LLU;
	uint64_t t130 = 41060LLU;

    t130 = (((x601-x602)&x603)%x604);

    if (t130 != 37LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x605 = 6U;
	int8_t x607 = -1;
	volatile int64_t t131 = 12LL;

    t131 = (((x605-x606)&x607)%x608);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x609 = 38666541LLU;
	int64_t x610 = -1LL;
	volatile uint8_t x611 = 12U;
	static uint64_t t132 = 110LLU;

    t132 = (((x609-x610)&x611)%x612);

    if (t132 != 12LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x614 = UINT64_MAX;
	int64_t x615 = -1LL;
	uint16_t x616 = UINT16_MAX;
	volatile uint64_t t133 = 134368641337763LLU;

    t133 = (((x613-x614)&x615)%x616);

    if (t133 != 2LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x617 = -6028;
	static uint16_t x618 = 23549U;
	static uint64_t x619 = UINT64_MAX;
	static int32_t x620 = -17386732;
	volatile uint64_t t134 = 5488241LLU;

    t134 = (((x617-x618)&x619)%x620);

    if (t134 != 17357155LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x626 = INT8_MIN;
	static volatile int64_t x627 = INT64_MIN;
	static int16_t x628 = -1;
	volatile int64_t t135 = 482LL;

    t135 = (((x625-x626)&x627)%x628);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x633 = INT32_MIN;
	volatile int64_t x634 = -18389517419622968LL;
	int32_t x635 = INT32_MIN;
	volatile uint8_t x636 = 18U;
	int64_t t136 = 213824391223LL;

    t136 = (((x633-x634)&x635)%x636);

    if (t136 != 2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x638 = 515627788LLU;
	volatile int32_t x639 = -1;
	int64_t x640 = 40210LL;
	volatile uint64_t t137 = 20912326LLU;

    t137 = (((x637-x638)&x639)%x640);

    if (t137 != 24241LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x641 = INT16_MAX;
	volatile int32_t x642 = -1;
	int32_t x643 = INT32_MAX;
	int64_t t138 = 864043194605498833LL;

    t138 = (((x641-x642)&x643)%x644);

    if (t138 != 32768LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MIN;
	int32_t x648 = INT32_MAX;
	int64_t t139 = -1787263940588673888LL;

    t139 = (((x645-x646)&x647)%x648);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x649 = -1;
	int32_t x650 = -1;
	static int16_t x651 = INT16_MIN;
	uint8_t x652 = UINT8_MAX;

    t140 = (((x649-x650)&x651)%x652);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x653 = 1883297;
	int32_t x654 = -1;
	volatile uint8_t x655 = 46U;
	int64_t x656 = -22401449078991185LL;
	volatile int64_t t141 = 525LL;

    t141 = (((x653-x654)&x655)%x656);

    if (t141 != 34LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x657 = INT16_MAX;
	uint64_t x658 = 119572298451541LLU;
	static int8_t x660 = 4;
	uint64_t t142 = 1954300343733375LLU;

    t142 = (((x657-x658)&x659)%x660);

    if (t142 != 2LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x662 = 10708801U;
	static int64_t x663 = INT64_MIN;
	static int8_t x664 = INT8_MIN;

    t143 = (((x661-x662)&x663)%x664);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x666 = -7253745;
	int8_t x667 = 4;
	static uint64_t x668 = 1602179501LLU;
	volatile uint64_t t144 = 4052237639584808LLU;

    t144 = (((x665-x666)&x667)%x668);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x669 = INT8_MIN;
	volatile int32_t x670 = INT32_MIN;
	int8_t x671 = INT8_MIN;
	int8_t x672 = 30;
	static int32_t t145 = 296924;

    t145 = (((x669-x670)&x671)%x672);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x673 = UINT32_MAX;
	uint16_t x674 = UINT16_MAX;
	int32_t x675 = -1;
	int16_t x676 = -1;
	uint32_t t146 = 590U;

    t146 = (((x673-x674)&x675)%x676);

    if (t146 != 4294901760U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x681 = 3321;
	int16_t x682 = 1;
	volatile int32_t x683 = INT32_MIN;
	volatile uint64_t x684 = 24745726562431367LLU;
	uint64_t t147 = 255LLU;

    t147 = (((x681-x682)&x683)%x684);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x685 = 162LL;
	int8_t x686 = INT8_MAX;
	static volatile int8_t x687 = INT8_MIN;
	static volatile int8_t x688 = INT8_MAX;
	volatile int64_t t148 = 59798827252974488LL;

    t148 = (((x685-x686)&x687)%x688);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x693 = -1;
	uint64_t x694 = UINT64_MAX;
	int8_t x695 = 8;
	int16_t x696 = 4472;
	uint64_t t149 = 95353723LLU;

    t149 = (((x693-x694)&x695)%x696);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x697 = UINT32_MAX;
	int64_t x698 = -1LL;
	uint64_t x699 = 1777346LLU;
	volatile uint64_t t150 = 837LLU;

    t150 = (((x697-x698)&x699)%x700);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x703 = UINT32_MAX;
	uint8_t x704 = 3U;

    t151 = (((x701-x702)&x703)%x704);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x706 = 132385219598867050LL;
	int32_t x708 = INT32_MIN;

    t152 = (((x705-x706)&x707)%x708);

    if (t152 != 10277LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x709 = INT8_MIN;
	static uint32_t x711 = 3995519U;
	volatile int8_t x712 = INT8_MAX;
	volatile uint32_t t153 = 1018U;

    t153 = (((x709-x710)&x711)%x712);

    if (t153 != 71U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x713 = 8482924491357LLU;
	static int16_t x714 = 979;
	int64_t x715 = INT64_MIN;
	volatile int16_t x716 = -1;
	uint64_t t154 = 1001LLU;

    t154 = (((x713-x714)&x715)%x716);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x717 = -1LL;
	volatile uint64_t x720 = UINT64_MAX;
	static uint64_t t155 = 24545066054LLU;

    t155 = (((x717-x718)&x719)%x720);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x722 = 3462;
	uint8_t x724 = 116U;
	uint32_t t156 = 1U;

    t156 = (((x721-x722)&x723)%x724);

    if (t156 != 16U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x725 = INT32_MAX;
	static uint16_t x726 = UINT16_MAX;
	uint8_t x727 = UINT8_MAX;
	volatile int32_t t157 = -273868;

    t157 = (((x725-x726)&x727)%x728);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x729 = INT8_MAX;
	volatile int8_t x730 = INT8_MIN;
	uint8_t x731 = 1U;
	int64_t x732 = -267969080022556416LL;
	static int64_t t158 = 2996195008540350454LL;

    t158 = (((x729-x730)&x731)%x732);

    if (t158 != 1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x734 = 40U;
	int32_t x736 = INT32_MIN;
	uint64_t t159 = 94211534372LLU;

    t159 = (((x733-x734)&x735)%x736);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x737 = -6007366673LL;
	int16_t x738 = INT16_MIN;
	int8_t x739 = -1;
	volatile uint64_t x740 = 1813995279LLU;
	static volatile uint64_t t160 = 11LLU;

    t160 = (((x737-x738)&x739)%x740);

    if (t160 != 947586499LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x742 = INT8_MIN;
	uint64_t x743 = 16LLU;
	volatile uint64_t t161 = 2LLU;

    t161 = (((x741-x742)&x743)%x744);

    if (t161 != 16LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x746 = -508026;
	int8_t x747 = -61;
	uint32_t x748 = 227U;

    t162 = (((x745-x746)&x747)%x748);

    if (t162 != 91U) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x749 = 460828U;
	int16_t x750 = INT16_MIN;
	int16_t x751 = INT16_MIN;
	static volatile int8_t x752 = INT8_MAX;

    t163 = (((x749-x750)&x751)%x752);

    if (t163 != 30U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x754 = INT32_MIN;
	int64_t x755 = INT64_MIN;
	int32_t x756 = INT32_MIN;
	uint64_t t164 = 24903539136299319LLU;

    t164 = (((x753-x754)&x755)%x756);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x757 = 7700628266480LL;
	static uint16_t x758 = UINT16_MAX;
	int64_t x759 = INT64_MAX;
	uint64_t x760 = 37LLU;
	static volatile uint64_t t165 = 138881LLU;

    t165 = (((x757-x758)&x759)%x760);

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x761 = 34731167914LLU;
	volatile uint64_t x762 = 1217501LLU;
	volatile uint16_t x764 = 38U;
	uint64_t t166 = 36LLU;

    t166 = (((x761-x762)&x763)%x764);

    if (t166 != 28LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x765 = -26;
	volatile uint16_t x766 = UINT16_MAX;
	int64_t x768 = -1954LL;
	int64_t t167 = 63895767697LL;

    t167 = (((x765-x766)&x767)%x768);

    if (t167 != -169LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x770 = UINT16_MAX;
	int32_t x771 = 34;
	uint32_t x772 = 1507950507U;
	uint32_t t168 = 0U;

    t168 = (((x769-x770)&x771)%x772);

    if (t168 != 34U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x773 = 1;
	int64_t x774 = 48197LL;
	volatile int64_t t169 = 142690557885510779LL;

    t169 = (((x773-x774)&x775)%x776);

    if (t169 != 17342LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x778 = INT16_MAX;
	uint8_t x779 = 14U;
	static int32_t x780 = -2;
	volatile int32_t t170 = -6784;

    t170 = (((x777-x778)&x779)%x780);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x782 = UINT16_MAX;
	int16_t x783 = -1;
	int64_t x784 = -1LL;

    t171 = (((x781-x782)&x783)%x784);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x785 = INT16_MAX;
	int16_t x786 = -1;
	int64_t x787 = -2410604412657970075LL;
	static int8_t x788 = INT8_MIN;
	int64_t t172 = -81461108079LL;

    t172 = (((x785-x786)&x787)%x788);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x793 = INT16_MIN;
	int16_t x794 = -1;
	int32_t t173 = 755613;

    t173 = (((x793-x794)&x795)%x796);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x797 = 15581U;
	int16_t x798 = INT16_MIN;
	uint64_t x799 = 3337168LLU;
	int64_t x800 = -186LL;
	uint64_t t174 = 3485LLU;

    t174 = (((x797-x798)&x799)%x800);

    if (t174 != 43216LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x801 = UINT8_MAX;
	int8_t x802 = -1;
	int16_t x803 = INT16_MIN;
	int16_t x804 = -3;
	int32_t t175 = -1;

    t175 = (((x801-x802)&x803)%x804);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x806 = -1;
	volatile uint32_t t176 = 84261724U;

    t176 = (((x805-x806)&x807)%x808);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x809 = INT64_MIN;
	int16_t x810 = -24;
	uint64_t x811 = 395396LLU;
	static volatile uint64_t t177 = 2LLU;

    t177 = (((x809-x810)&x811)%x812);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x813 = INT32_MIN;
	uint64_t x814 = 875131640777037LLU;
	static uint16_t x815 = 2U;
	int64_t x816 = -12LL;
	static uint64_t t178 = 7LLU;

    t178 = (((x813-x814)&x815)%x816);

    if (t178 != 2LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x817 = INT32_MAX;
	uint8_t x818 = 1U;
	static uint8_t x819 = UINT8_MAX;
	uint16_t x820 = 8133U;
	int32_t t179 = -460662425;

    t179 = (((x817-x818)&x819)%x820);

    if (t179 != 254) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x821 = 5U;
	static volatile int16_t x823 = INT16_MIN;
	int8_t x824 = INT8_MAX;
	static int64_t t180 = 168726123LL;

    t180 = (((x821-x822)&x823)%x824);

    if (t180 != 80LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x825 = INT8_MIN;
	int16_t x826 = INT16_MIN;
	int32_t t181 = 266146845;

    t181 = (((x825-x826)&x827)%x828);

    if (t181 != 6) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x841 = 12643259238LL;
	uint64_t x842 = 261715258LLU;
	uint16_t x843 = 913U;
	static uint64_t x844 = 177LLU;
	volatile uint64_t t182 = 31455589729653612LLU;

    t182 = (((x841-x842)&x843)%x844);

    if (t182 != 158LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x845 = INT64_MIN;
	int32_t x846 = -1;
	uint8_t x847 = 3U;
	int16_t x848 = 1;
	volatile int64_t t183 = 137367670887LL;

    t183 = (((x845-x846)&x847)%x848);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x849 = 831;
	static int8_t x850 = INT8_MAX;
	int16_t x852 = INT16_MIN;
	volatile uint64_t t184 = 13448221922414LLU;

    t184 = (((x849-x850)&x851)%x852);

    if (t184 != 704LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x853 = 509532966082LLU;
	int64_t x854 = INT64_MIN;
	volatile int16_t x855 = 4069;
	int32_t x856 = -523571;
	uint64_t t185 = 27889900838LLU;

    t185 = (((x853-x854)&x855)%x856);

    if (t185 != 3264LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x861 = INT64_MIN;
	int64_t x862 = INT64_MIN;
	int64_t x863 = INT64_MAX;
	int8_t x864 = INT8_MIN;
	volatile int64_t t186 = 55LL;

    t186 = (((x861-x862)&x863)%x864);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x865 = 31;
	int8_t x866 = -14;
	static int64_t x867 = -3793141545117LL;
	static uint32_t x868 = UINT32_MAX;
	volatile int64_t t187 = -2LL;

    t187 = (((x865-x866)&x867)%x868);

    if (t187 != 33LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x870 = INT8_MAX;
	static volatile int32_t t188 = -78904;

    t188 = (((x869-x870)&x871)%x872);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x873 = -1LL;
	int64_t x874 = INT64_MIN;
	int16_t x876 = 665;

    t189 = (((x873-x874)&x875)%x876);

    if (t189 != 650LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x877 = INT16_MIN;
	int16_t x878 = INT16_MAX;
	volatile int16_t x880 = 1;

    t190 = (((x877-x878)&x879)%x880);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x881 = INT8_MIN;
	volatile int8_t x882 = -1;
	uint64_t x883 = 885416377139563LLU;
	static int16_t x884 = INT16_MAX;
	volatile uint64_t t191 = 689119670976LLU;

    t191 = (((x881-x882)&x883)%x884);

    if (t191 != 30592LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x885 = 0U;
	volatile int8_t x887 = INT8_MAX;
	volatile uint32_t x888 = 969224279U;
	int64_t t192 = 191171527375841667LL;

    t192 = (((x885-x886)&x887)%x888);

    if (t192 != 22LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x889 = INT64_MIN;
	uint16_t x891 = 15490U;
	volatile int8_t x892 = INT8_MIN;

    t193 = (((x889-x890)&x891)%x892);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x894 = -1;
	uint64_t x896 = 492LLU;
	static uint64_t t194 = 11382584165708090LLU;

    t194 = (((x893-x894)&x895)%x896);

    if (t194 != 2LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x897 = INT8_MIN;
	int64_t x898 = 46734107883LL;
	int16_t x899 = INT16_MIN;
	volatile int32_t x900 = -1;
	volatile int64_t t195 = -1LL;

    t195 = (((x897-x898)&x899)%x900);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x901 = -1;
	int16_t x903 = INT16_MIN;
	int16_t x904 = -108;
	volatile int32_t t196 = 91985966;

    t196 = (((x901-x902)&x903)%x904);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x905 = INT16_MIN;
	volatile int32_t x906 = INT32_MIN;
	uint8_t x907 = 5U;
	uint16_t x908 = 7857U;
	int32_t t197 = -901274263;

    t197 = (((x905-x906)&x907)%x908);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x909 = -1;
	volatile int32_t x910 = 228867;
	uint8_t x912 = UINT8_MAX;
	volatile uint64_t t198 = 59425LLU;

    t198 = (((x909-x910)&x911)%x912);

    if (t198 != 201LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x914 = -136845881450LL;
	volatile uint16_t x915 = UINT16_MAX;
	volatile int32_t x916 = INT32_MAX;
	static int64_t t199 = -68928147545LL;

    t199 = (((x913-x914)&x915)%x916);

    if (t199 != 61546LL) { NG(); } else { ; }
	
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

