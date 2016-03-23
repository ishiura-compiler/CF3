
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

uint32_t x4 = 754545585U;
static uint16_t x5 = 18254U;
uint8_t x8 = 111U;
int64_t x10 = -1LL;
static volatile int8_t x15 = 45;
int8_t x20 = 62;
int32_t x27 = 14688;
uint32_t x31 = 58U;
int32_t x32 = -1;
volatile int16_t x35 = 114;
uint64_t x42 = 15839350906LLU;
volatile uint32_t t11 = 1490453269U;
int8_t x54 = INT8_MAX;
volatile uint32_t t13 = 48874192U;
int16_t x58 = -14389;
uint8_t x61 = 5U;
static uint64_t t16 = 3722965LLU;
int64_t x71 = INT64_MIN;
uint64_t x76 = 171942474132310854LLU;
int64_t t19 = -6093500036LL;
volatile uint32_t t21 = 48392U;
int16_t x102 = INT16_MIN;
static int32_t x103 = INT32_MIN;
static int8_t x117 = INT8_MAX;
int32_t x118 = -1;
volatile uint64_t x128 = 51204LLU;
int16_t x129 = 1;
uint8_t x133 = UINT8_MAX;
int32_t x141 = -10453;
int8_t x145 = INT8_MAX;
int32_t x146 = INT32_MAX;
volatile int64_t x148 = 26LL;
uint64_t x150 = 349773799LLU;
volatile int64_t x151 = 127LL;
uint32_t t33 = 2141157U;
int8_t x168 = INT8_MAX;
uint8_t x169 = 30U;
static uint64_t t36 = UINT64_MAX;
int32_t x178 = INT32_MIN;
uint64_t t37 = 1LLU;
static int8_t x191 = INT8_MAX;
static volatile int64_t x197 = INT64_MIN;
uint32_t x201 = 669570996U;
static int16_t x211 = INT16_MIN;
volatile int16_t x214 = 5441;
int64_t x216 = -16238LL;
uint64_t x226 = 14251734875186619LLU;
uint32_t x231 = UINT32_MAX;
static int8_t x232 = -1;
int32_t x234 = INT32_MIN;
static volatile int64_t t48 = -163334LL;
static int64_t x262 = 384LL;
int64_t x278 = INT64_MAX;
volatile uint64_t x285 = 518798100LLU;
volatile uint8_t x287 = 13U;
volatile int32_t x288 = INT32_MIN;
uint32_t x303 = 30U;
static uint32_t x304 = UINT32_MAX;
static int32_t x305 = -1;
volatile int8_t x306 = INT8_MIN;
int32_t t60 = INT32_MIN;
int32_t x340 = INT32_MIN;
static volatile uint32_t t65 = 4U;
static int16_t x353 = -1;
int16_t x358 = -1;
int16_t x361 = INT16_MAX;
volatile int8_t x362 = 36;
uint64_t x367 = 444661023491784LLU;
volatile int16_t x388 = INT16_MAX;
static int64_t x408 = INT64_MIN;
static int8_t x412 = -1;
volatile uint64_t t80 = 20800747322676LLU;
uint64_t t81 = 7653676LLU;
volatile int16_t x423 = -1007;
volatile int32_t t82 = -1;
int64_t x432 = 472927LL;
uint64_t t85 = UINT64_MAX;
int64_t x447 = INT64_MIN;
static uint64_t x454 = UINT64_MAX;
uint64_t x455 = 5035746LLU;
int64_t x460 = INT64_MAX;
int64_t x475 = INT64_MIN;
int16_t x493 = INT16_MAX;
int32_t x496 = -40;
volatile int64_t t96 = -232223338LL;
int32_t x506 = INT32_MAX;
int64_t t97 = 241865540704159127LL;
uint32_t x509 = 7106U;
int8_t x529 = INT8_MIN;
int32_t x534 = INT32_MIN;
int64_t x535 = INT64_MAX;
static volatile int64_t x536 = INT64_MIN;
int64_t t103 = INT64_MIN;
volatile int64_t x542 = INT64_MAX;
int8_t x551 = -27;
static int32_t t107 = -8;
volatile int8_t x573 = INT8_MIN;
int16_t x574 = INT16_MIN;
volatile int32_t x587 = INT32_MIN;
uint32_t t112 = 40U;
int64_t x611 = INT64_MIN;
uint64_t t115 = 2581742036102585845LLU;
int8_t x623 = 56;
int8_t x631 = 60;
volatile int64_t x633 = INT64_MIN;
int16_t x636 = INT16_MIN;
static volatile int16_t x662 = 7;
volatile int32_t x666 = 197;
uint16_t x673 = 63U;
int16_t x678 = INT16_MIN;
volatile int64_t t126 = -4540LL;
volatile int64_t x689 = -26023303312882LL;
uint64_t x695 = 71020366714491LLU;
uint16_t x699 = 9U;
static uint16_t x713 = 0U;
volatile int8_t x722 = -32;
uint32_t x737 = UINT32_MAX;
volatile uint64_t x738 = 5873975883LLU;
uint64_t x750 = UINT64_MAX;
int8_t x754 = INT8_MIN;
int8_t x766 = 56;
static int16_t x769 = -1;
int8_t x770 = -1;
volatile uint64_t x791 = UINT64_MAX;
static int16_t x808 = -77;
volatile int64_t t150 = 2719093450LL;
static int32_t x823 = INT32_MAX;
int64_t x834 = INT64_MIN;
int8_t x836 = -46;
volatile int32_t t154 = INT32_MAX;
static uint8_t x848 = 15U;
volatile uint32_t t156 = 97847U;
volatile int8_t x858 = -1;
uint64_t t157 = UINT64_MAX;
uint64_t x869 = 55863036488399LLU;
int64_t t162 = -1726736084433924664LL;
int8_t x891 = INT8_MIN;
int16_t x909 = INT16_MIN;
int64_t x910 = INT64_MAX;
static uint32_t x916 = UINT32_MAX;
static int64_t t168 = 0LL;
int16_t x926 = INT16_MIN;
int32_t x927 = INT32_MIN;
uint64_t x933 = 2LLU;
int64_t t172 = 9843581LL;
volatile uint32_t t173 = 50035595U;
uint64_t x958 = 198391LLU;
volatile int32_t x975 = -228;
int8_t x981 = INT8_MIN;
volatile uint64_t t178 = 1533906LLU;
int32_t t179 = 30681715;
uint64_t x1001 = 6803LLU;
int64_t x1015 = -183LL;
static volatile uint32_t x1016 = UINT32_MAX;
volatile uint64_t t186 = 541838LLU;
volatile uint32_t x1025 = 9U;
uint32_t x1027 = 206854U;
uint16_t x1028 = UINT16_MAX;
int64_t x1029 = -4468765LL;
volatile uint32_t x1030 = 46U;
static int32_t x1047 = -1;
uint64_t x1053 = UINT64_MAX;
uint64_t x1070 = 535991812724LLU;
int8_t x1081 = -37;
int8_t x1087 = INT8_MIN;
volatile int32_t x1093 = 19192067;
volatile int16_t x1098 = -1;


void f0(void) {
    	volatile uint16_t x1 = 1U;
	volatile uint8_t x2 = 11U;
	volatile int16_t x3 = INT16_MIN;
	volatile uint32_t t0 = 15209U;

    t0 = ((x1/(x2%x3))+x4);

    if (t0 != 754545585U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MIN;
	static volatile int64_t x7 = -918478641LL;
	int64_t t1 = -7148LL;

    t1 = ((x5/(x6%x7))+x8);

    if (t1 != -31LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	int16_t x11 = INT16_MIN;
	int32_t x12 = 1;
	int64_t t2 = 226804772120503672LL;

    t2 = ((x9/(x10%x11))+x12);

    if (t2 != 2LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	volatile uint16_t x14 = 5U;
	int64_t x16 = 1179273826435388LL;
	int64_t t3 = 92944316315587388LL;

    t3 = ((x13/(x14%x15))+x16);

    if (t3 != 1179273826435439LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MIN;
	int64_t x18 = -354389365LL;
	uint32_t x19 = UINT32_MAX;
	static volatile int64_t t4 = 292250908610LL;

    t4 = ((x17/(x18%x19))+x20);

    if (t4 != 68LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 1291U;
	uint8_t x22 = 7U;
	static int16_t x23 = INT16_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t5 = -201569941177LL;

    t5 = ((x21/(x22%x23))+x24);

    if (t5 != 183LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	volatile uint16_t x26 = 1U;
	int64_t x28 = INT64_MIN;
	static int64_t t6 = -6950282LL;

    t6 = ((x25/(x26%x27))+x28);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MAX;
	int64_t t7 = -29204530604LL;

    t7 = ((x29/(x30%x31))+x32);

    if (t7 != 838488366986797799LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = -1;
	static volatile int64_t x34 = INT64_MIN;
	static volatile int16_t x36 = 6;
	volatile int64_t t8 = -644815651LL;

    t8 = ((x33/(x34%x35))+x36);

    if (t8 != 6LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 463401LL;
	volatile uint8_t x38 = 63U;
	int64_t x39 = -655509727840LL;
	static uint16_t x40 = UINT16_MAX;
	static int64_t t9 = -2505LL;

    t9 = ((x37/(x38%x39))+x40);

    if (t9 != 72890LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 3U;
	int32_t x43 = INT32_MIN;
	static uint32_t x44 = 4559U;
	static uint64_t t10 = 14404180LLU;

    t10 = ((x41/(x42%x43))+x44);

    if (t10 != 4559LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MIN;
	static int8_t x46 = INT8_MIN;
	uint32_t x47 = 481762U;
	static uint16_t x48 = UINT16_MAX;

    t11 = ((x45/(x46%x47))+x48);

    if (t11 != 138407U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 387002499U;
	volatile int16_t x50 = -13;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = 2U;
	volatile uint32_t t12 = 20245U;

    t12 = ((x49/(x50%x51))+x52);

    if (t12 != 2U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x53 = INT16_MAX;
	int32_t x55 = INT32_MAX;
	uint32_t x56 = 82U;

    t13 = ((x53/(x54%x55))+x56);

    if (t13 != 340U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	uint64_t x59 = 4337376304LLU;
	int64_t x60 = INT64_MAX;
	volatile uint64_t t14 = 497119642720541LLU;

    t14 = ((x57/(x58%x59))+x60);

    if (t14 != 9223372072782389788LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x62 = UINT64_MAX;
	int16_t x63 = 8096;
	int16_t x64 = -9;
	static volatile uint64_t t15 = 3312807546LLU;

    t15 = ((x61/(x62%x63))+x64);

    if (t15 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MIN;
	uint64_t x67 = 210LLU;
	int16_t x68 = -39;

    t16 = ((x65/(x66%x67))+x68);

    if (t16 != 2305843008945258457LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	static uint8_t x70 = UINT8_MAX;
	volatile int64_t x72 = INT64_MIN;
	int64_t t17 = INT64_MIN;

    t17 = ((x69/(x70%x71))+x72);

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 62662343133LLU;
	static int32_t x74 = -1;
	int32_t x75 = INT32_MIN;
	volatile uint64_t t18 = 7LLU;

    t18 = ((x73/(x74%x75))+x76);

    if (t18 != 171942474132310854LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	static int16_t x78 = INT16_MIN;
	int64_t x79 = 109810311339395LL;
	int64_t x80 = -1LL;

    t19 = ((x77/(x78%x79))+x80);

    if (t19 != 65535LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 138490;
	int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	volatile uint32_t x84 = 38664349U;
	volatile int64_t t20 = 22487185484113LL;

    t20 = ((x81/(x82%x83))+x84);

    if (t20 != 38525859LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MIN;
	int16_t x86 = -62;
	uint32_t x87 = UINT32_MAX;
	int16_t x88 = INT16_MIN;

    t21 = ((x85/(x86%x87))+x88);

    if (t21 != 4294934528U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x101 = 1;
	volatile int8_t x104 = INT8_MIN;
	static int32_t t22 = -86663;

    t22 = ((x101/(x102%x103))+x104);

    if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = INT16_MAX;
	volatile int8_t x110 = INT8_MAX;
	uint64_t x111 = UINT64_MAX;
	int32_t x112 = -265624;
	uint64_t t23 = 2948206063808052LLU;

    t23 = ((x109/(x110%x111))+x112);

    if (t23 != 18446744073709286250LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x113 = INT8_MIN;
	int64_t x114 = 7408LL;
	int8_t x115 = INT8_MIN;
	volatile int32_t x116 = INT32_MAX;
	volatile int64_t t24 = 1194033LL;

    t24 = ((x113/(x114%x115))+x116);

    if (t24 != 2147483646LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x119 = INT32_MAX;
	int32_t x120 = -29319686;
	volatile int32_t t25 = 1;

    t25 = ((x117/(x118%x119))+x120);

    if (t25 != -29319813) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x125 = INT32_MIN;
	uint16_t x126 = 32566U;
	int8_t x127 = INT8_MIN;
	static volatile uint64_t t26 = 3LLU;

    t26 = ((x125/(x126%x127))+x128);

    if (t26 != 18446744073669834605LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x130 = 13726628895LLU;
	static volatile uint8_t x131 = UINT8_MAX;
	int64_t x132 = -6108748387275215LL;
	uint64_t t27 = 15262LLU;

    t27 = ((x129/(x130%x131))+x132);

    if (t27 != 18440635325322276401LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x134 = -300;
	static uint64_t x135 = 405LLU;
	static uint32_t x136 = UINT32_MAX;
	volatile uint64_t t28 = 0LLU;

    t28 = ((x133/(x134%x135))+x136);

    if (t28 != 4294967298LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x137 = 3;
	int16_t x138 = 1;
	volatile int8_t x139 = INT8_MIN;
	int8_t x140 = 35;
	volatile int32_t t29 = -850803546;

    t29 = ((x137/(x138%x139))+x140);

    if (t29 != 38) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x142 = -1;
	static uint64_t x143 = 219033877286336LLU;
	volatile int8_t x144 = -38;
	uint64_t t30 = 7138093202599261990LLU;

    t30 = ((x141/(x142%x143))+x144);

    if (t30 != 123768LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x147 = INT8_MAX;
	volatile int64_t t31 = -2030743843LL;

    t31 = ((x145/(x146%x147))+x148);

    if (t31 != 44LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x149 = UINT32_MAX;
	int8_t x152 = INT8_MAX;
	volatile uint64_t t32 = 123LLU;

    t32 = ((x149/(x150%x151))+x152);

    if (t32 != 84215172LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x153 = INT8_MIN;
	volatile int32_t x154 = -1;
	uint32_t x155 = 1525U;
	int32_t x156 = 35702070;

    t33 = ((x153/(x154%x155))+x156);

    if (t33 != 38527706U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x157 = UINT8_MAX;
	static int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;
	static volatile uint32_t t34 = 11U;

    t34 = ((x157/(x158%x159))+x160);

    if (t34 != 4294967294U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x165 = INT16_MAX;
	static volatile int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	int32_t t35 = 920697732;

    t35 = ((x165/(x166%x167))+x168);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x170 = INT16_MIN;
	static int64_t x171 = -138738309LL;
	uint64_t x172 = UINT64_MAX;

    t36 = ((x169/(x170%x171))+x172);

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x177 = -1LL;
	int32_t x179 = INT32_MAX;
	uint64_t x180 = 728LLU;

    t37 = ((x177/(x178%x179))+x180);

    if (t37 != 729LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x185 = INT32_MIN;
	static uint32_t x186 = 768U;
	uint8_t x187 = UINT8_MAX;
	int64_t x188 = INT64_MIN;
	int64_t t38 = -7415LL;

    t38 = ((x185/(x186%x187))+x188);

    if (t38 != -9223372036138947926LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x189 = -1;
	static volatile uint64_t x190 = UINT64_MAX;
	static int64_t x192 = INT64_MIN;
	volatile uint64_t t39 = 8452004324321LLU;

    t39 = ((x189/(x190%x191))+x192);

    if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x198 = 60379273U;
	int64_t x199 = 24163269LL;
	int16_t x200 = INT16_MIN;
	int64_t t40 = 10LL;

    t40 = ((x197/(x198%x199))+x200);

    if (t40 != -765251408232LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x202 = INT8_MIN;
	uint32_t x203 = 9378590U;
	uint32_t x204 = 47675588U;
	uint32_t t41 = 528296087U;

    t41 = ((x201/(x202%x203))+x204);

    if (t41 != 47675662U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x209 = -274989474LL;
	static int16_t x210 = 1;
	int64_t x212 = INT64_MAX;
	volatile int64_t t42 = 55258275542972689LL;

    t42 = ((x209/(x210%x211))+x212);

    if (t42 != 9223372036579786333LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x213 = INT64_MIN;
	uint16_t x215 = 8259U;
	volatile int64_t t43 = -57956814LL;

    t43 = ((x213/(x214%x215))+x216);

    if (t43 != -1695161190395722LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x217 = 244U;
	int32_t x218 = INT32_MIN;
	uint32_t x219 = 56027U;
	int8_t x220 = -1;
	volatile uint32_t t44 = UINT32_MAX;

    t44 = ((x217/(x218%x219))+x220);

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x225 = INT8_MAX;
	int32_t x227 = -1;
	int8_t x228 = INT8_MIN;
	static volatile uint64_t t45 = 3412832LLU;

    t45 = ((x225/(x226%x227))+x228);

    if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x229 = 79LLU;
	int16_t x230 = -1245;
	uint64_t t46 = UINT64_MAX;

    t46 = ((x229/(x230%x231))+x232);

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x233 = -1;
	uint16_t x235 = 8553U;
	static int32_t x236 = -33043694;
	volatile int32_t t47 = 24;

    t47 = ((x233/(x234%x235))+x236);

    if (t47 != -33043694) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	int64_t x243 = -10707656279LL;
	static uint16_t x244 = UINT16_MAX;

    t48 = ((x241/(x242%x243))+x244);

    if (t48 != -72057594037862400LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x245 = INT64_MIN;
	static volatile uint16_t x246 = UINT16_MAX;
	volatile int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	static volatile int64_t t49 = -22007886026479238LL;

    t49 = ((x245/(x246%x247))+x248);

    if (t49 != -72624976668147842LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x249 = INT16_MIN;
	volatile int64_t x250 = -1LL;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;
	int64_t t50 = 247968619270LL;

    t50 = ((x249/(x250%x251))+x252);

    if (t50 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	volatile int16_t x259 = 10;
	int64_t x260 = -1LL;
	volatile int64_t t51 = 0LL;

    t51 = ((x257/(x258%x259))+x260);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x261 = INT32_MAX;
	static int32_t x263 = -441;
	int16_t x264 = INT16_MIN;
	volatile int64_t t52 = -43354LL;

    t52 = ((x261/(x262%x263))+x264);

    if (t52 != 5559637LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x269 = INT8_MIN;
	volatile uint8_t x270 = UINT8_MAX;
	int16_t x271 = INT16_MIN;
	int32_t x272 = -2929;
	static volatile int32_t t53 = -111;

    t53 = ((x269/(x270%x271))+x272);

    if (t53 != -2929) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint32_t x277 = 2U;
	static int64_t x279 = -4075LL;
	int32_t x280 = -263199;
	volatile int64_t t54 = 1LL;

    t54 = ((x277/(x278%x279))+x280);

    if (t54 != -263199LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x286 = 3U;
	volatile uint64_t t55 = 1LLU;

    t55 = ((x285/(x286%x287))+x288);

    if (t55 != 18446744071735000668LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x289 = 66765069LLU;
	static int64_t x290 = -1LL;
	uint32_t x291 = 38615443U;
	volatile uint8_t x292 = 110U;
	uint64_t t56 = 610045707083LLU;

    t56 = ((x289/(x290%x291))+x292);

    if (t56 != 110LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x293 = 121U;
	static uint32_t x294 = 287525U;
	static int32_t x295 = -1;
	volatile int64_t x296 = -1LL;
	int64_t t57 = -16427883415950LL;

    t57 = ((x293/(x294%x295))+x296);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x297 = UINT64_MAX;
	int16_t x298 = -1;
	int32_t x299 = -4;
	int16_t x300 = -3;
	uint64_t t58 = 0LLU;

    t58 = ((x297/(x298%x299))+x300);

    if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x301 = 3;
	uint8_t x302 = 25U;
	uint32_t t59 = UINT32_MAX;

    t59 = ((x301/(x302%x303))+x304);

    if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x307 = 31U;
	int32_t x308 = INT32_MIN;

    t60 = ((x305/(x306%x307))+x308);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x309 = INT64_MIN;
	int16_t x310 = INT16_MAX;
	int64_t x311 = INT64_MAX;
	static int16_t x312 = 42;
	int64_t t61 = -5430049222LL;

    t61 = ((x309/(x310%x311))+x312);

    if (t61 != -281483566907358LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x313 = -2437;
	int8_t x314 = 54;
	int64_t x315 = 410453397789926857LL;
	static int32_t x316 = 7405977;
	volatile int64_t t62 = -5941625741673422LL;

    t62 = ((x313/(x314%x315))+x316);

    if (t62 != 7405932LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = INT8_MAX;
	static int8_t x319 = INT8_MIN;
	int64_t x320 = 15299189433LL;
	uint64_t t63 = 585143407LLU;

    t63 = ((x317/(x318%x319))+x320);

    if (t63 != 145249968635485115LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x321 = 550063867224911557LLU;
	uint16_t x322 = 4065U;
	int32_t x323 = 16823043;
	uint64_t x324 = 67517241994597LLU;
	volatile uint64_t t64 = 8350622355628087187LLU;

    t64 = ((x321/(x322%x323))+x324);

    if (t64 != 202834306502570LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x337 = -1;
	uint32_t x338 = 315U;
	volatile int16_t x339 = -48;

    t65 = ((x337/(x338%x339))+x340);

    if (t65 != 2161118464U) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x345 = INT8_MIN;
	uint32_t x346 = 104699616U;
	int16_t x347 = INT16_MIN;
	static volatile int32_t x348 = INT32_MIN;
	volatile uint32_t t66 = 32032U;

    t66 = ((x345/(x346%x347))+x348);

    if (t66 != 2147483689U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x354 = INT64_MAX;
	static int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	volatile int64_t t67 = INT64_MIN;

    t67 = ((x353/(x354%x355))+x356);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x357 = 29001U;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 234666975U;
	volatile int64_t t68 = -27LL;

    t68 = ((x357/(x358%x359))+x360);

    if (t68 != 234637974LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x363 = 324862007315111LLU;
	int64_t x364 = -1LL;
	uint64_t t69 = 44522853589724LLU;

    t69 = ((x361/(x362%x363))+x364);

    if (t69 != 909LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x365 = INT16_MAX;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x368 = -74004768LL;
	static volatile uint64_t t70 = 32473257601780LLU;

    t70 = ((x365/(x366%x367))+x368);

    if (t70 != 18446744073635546976LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x369 = INT16_MIN;
	static volatile int32_t x370 = INT32_MIN;
	static int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	static int64_t t71 = -18885LL;

    t71 = ((x369/(x370%x371))+x372);

    if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x377 = -1LL;
	int64_t x378 = INT64_MIN;
	static int16_t x379 = -25;
	static uint8_t x380 = 13U;
	volatile int64_t t72 = 24460005LL;

    t72 = ((x377/(x378%x379))+x380);

    if (t72 != 13LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x381 = -1;
	uint32_t x382 = 6U;
	uint8_t x383 = 7U;
	int32_t x384 = INT32_MAX;
	static uint32_t t73 = 1888825263U;

    t73 = ((x381/(x382%x383))+x384);

    if (t73 != 2863311529U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x385 = 1U;
	int64_t x386 = 17587179810264LL;
	int32_t x387 = INT32_MIN;
	volatile int64_t t74 = 56143922LL;

    t74 = ((x385/(x386%x387))+x388);

    if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x389 = 0;
	int16_t x390 = -1;
	static volatile int8_t x391 = 6;
	volatile int32_t x392 = INT32_MIN;
	static volatile int32_t t75 = INT32_MIN;

    t75 = ((x389/(x390%x391))+x392);

    if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x393 = 133;
	static int16_t x394 = INT16_MIN;
	uint64_t x395 = 532823802300LLU;
	static volatile int8_t x396 = -1;
	uint64_t t76 = UINT64_MAX;

    t76 = ((x393/(x394%x395))+x396);

    if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x401 = 207626680824374LLU;
	uint32_t x402 = 58471995U;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -3;
	volatile uint64_t t77 = 114517LLU;

    t77 = ((x401/(x402%x403))+x404);

    if (t77 != 3550870LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x405 = 3U;
	int16_t x406 = INT16_MIN;
	uint16_t x407 = 30195U;
	static volatile int64_t t78 = INT64_MIN;

    t78 = ((x405/(x406%x407))+x408);

    if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x409 = INT8_MIN;
	int32_t x410 = 134;
	int8_t x411 = -25;
	int32_t t79 = 0;

    t79 = ((x409/(x410%x411))+x412);

    if (t79 != -15) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x413 = 420;
	int8_t x414 = INT8_MIN;
	int32_t x415 = INT32_MIN;
	volatile uint64_t x416 = 306035367170315507LLU;

    t80 = ((x413/(x414%x415))+x416);

    if (t80 != 306035367170315504LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MAX;
	static volatile int16_t x419 = INT16_MIN;
	int64_t x420 = INT64_MIN;

    t81 = ((x417/(x418%x419))+x420);

    if (t81 != 9223935003988590608LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x421 = INT16_MAX;
	int8_t x422 = INT8_MAX;
	int16_t x424 = -1;

    t82 = ((x421/(x422%x423))+x424);

    if (t82 != 257) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x425 = -1;
	uint32_t x426 = 1316451837U;
	int8_t x427 = INT8_MIN;
	static uint16_t x428 = 1U;
	uint32_t t83 = 30U;

    t83 = ((x425/(x426%x427))+x428);

    if (t83 != 4U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x429 = 821747382508370926LL;
	volatile uint64_t x430 = 1518341940LLU;
	int8_t x431 = INT8_MIN;
	uint64_t t84 = 479131LLU;

    t84 = ((x429/(x430%x431))+x432);

    if (t84 != 541686576LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x433 = INT32_MIN;
	int64_t x434 = 55403706017LL;
	int64_t x435 = 1211969590060LL;
	static volatile uint64_t x436 = UINT64_MAX;

    t85 = ((x433/(x434%x435))+x436);

    if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x441 = INT64_MAX;
	int8_t x442 = 2;
	uint32_t x443 = UINT32_MAX;
	static int32_t x444 = -1905221;
	int64_t t86 = -28LL;

    t86 = ((x441/(x442%x443))+x444);

    if (t86 != 4611686018425482682LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x445 = 33402198695203LL;
	int16_t x446 = 10;
	int32_t x448 = 977;
	int64_t t87 = -840276355LL;

    t87 = ((x445/(x446%x447))+x448);

    if (t87 != 3340219870497LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x449 = -41;
	volatile int32_t x450 = 1040510242;
	uint16_t x451 = 5799U;
	int64_t x452 = INT64_MAX;
	int64_t t88 = INT64_MAX;

    t88 = ((x449/(x450%x451))+x452);

    if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x453 = -1;
	int16_t x456 = INT16_MIN;
	uint64_t t89 = 43LLU;

    t89 = ((x453/(x454%x455))+x456);

    if (t89 != 28581922272208LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x457 = INT64_MIN;
	static volatile int16_t x458 = INT16_MIN;
	static uint64_t x459 = UINT64_MAX;
	volatile uint64_t t90 = 6793846365LLU;

    t90 = ((x457/(x458%x459))+x460);

    if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x465 = -1;
	uint16_t x466 = 9U;
	int64_t x467 = INT64_MAX;
	int8_t x468 = 3;
	volatile int64_t t91 = 5LL;

    t91 = ((x465/(x466%x467))+x468);

    if (t91 != 3LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x469 = -1;
	int64_t x470 = -1LL;
	uint64_t x471 = 321LLU;
	int32_t x472 = -53;
	uint64_t t92 = 3559291746929LLU;

    t92 = ((x469/(x470%x471))+x472);

    if (t92 != 93165374109644147LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x473 = INT32_MIN;
	int16_t x474 = INT16_MIN;
	volatile int64_t x476 = 781145154218430LL;
	int64_t t93 = -124352331021777LL;

    t93 = ((x473/(x474%x475))+x476);

    if (t93 != 781145154283966LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x485 = INT8_MIN;
	static uint8_t x486 = UINT8_MAX;
	uint32_t x487 = UINT32_MAX;
	volatile int64_t x488 = -3769LL;
	volatile int64_t t94 = -8728765194536067LL;

    t94 = ((x485/(x486%x487))+x488);

    if (t94 != 16839239LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x494 = 6;
	int64_t x495 = -2601054541012797823LL;
	volatile int64_t t95 = 23998385746165213LL;

    t95 = ((x493/(x494%x495))+x496);

    if (t95 != 5421LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x501 = -597133485253LL;
	volatile int32_t x502 = -12727239;
	int8_t x503 = INT8_MAX;
	uint8_t x504 = 67U;

    t96 = ((x501/(x502%x503))+x504);

    if (t96 != 9789073595LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x505 = UINT32_MAX;
	int8_t x507 = 5;
	volatile int64_t x508 = -1LL;

    t97 = ((x505/(x506%x507))+x508);

    if (t97 != 2147483646LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x510 = -4;
	volatile uint16_t x511 = 1898U;
	int32_t x512 = INT32_MIN;
	uint32_t t98 = 6063901U;

    t98 = ((x509/(x510%x511))+x512);

    if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x517 = 3;
	static uint64_t x518 = 36954425274436564LLU;
	static uint32_t x519 = UINT32_MAX;
	uint16_t x520 = 16753U;
	uint64_t t99 = 1911LLU;

    t99 = ((x517/(x518%x519))+x520);

    if (t99 != 16753LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x521 = -386520423;
	int32_t x522 = 74643;
	uint8_t x523 = 46U;
	int64_t x524 = 14LL;
	int64_t t100 = 774148862475075LL;

    t100 = ((x521/(x522%x523))+x524);

    if (t100 != -12468386LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x525 = INT8_MAX;
	uint16_t x526 = 31U;
	uint32_t x527 = 366700U;
	int32_t x528 = -535;
	uint32_t t101 = 8188U;

    t101 = ((x525/(x526%x527))+x528);

    if (t101 != 4294966765U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x530 = -1;
	int32_t x531 = INT32_MIN;
	static int16_t x532 = INT16_MIN;
	int32_t t102 = 1041945853;

    t102 = ((x529/(x530%x531))+x532);

    if (t102 != -32640) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x533 = 198U;

    t103 = ((x533/(x534%x535))+x536);

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x541 = INT64_MIN;
	static int64_t x543 = INT64_MIN;
	uint64_t x544 = 12284889LLU;
	volatile uint64_t t104 = 408371LLU;

    t104 = ((x541/(x542%x543))+x544);

    if (t104 != 12284888LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x550 = INT8_MIN;
	int32_t x552 = INT32_MIN;
	volatile int64_t t105 = -28291163511LL;

    t105 = ((x549/(x550%x551))+x552);

    if (t105 != 461168599695255142LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x553 = -1;
	int8_t x554 = 19;
	int64_t x555 = INT64_MIN;
	volatile uint32_t x556 = 51U;
	volatile int64_t t106 = -2546383981349078LL;

    t106 = ((x553/(x554%x555))+x556);

    if (t106 != 51LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x557 = -24;
	int8_t x558 = -1;
	volatile int16_t x559 = 10385;
	static int16_t x560 = INT16_MIN;

    t107 = ((x557/(x558%x559))+x560);

    if (t107 != -32744) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x569 = INT64_MIN;
	int8_t x570 = -16;
	static int16_t x571 = 12535;
	static uint64_t x572 = 1279718484LLU;
	uint64_t t108 = 3109005960491116212LLU;

    t108 = ((x569/(x570%x571))+x572);

    if (t108 != 576460753583141972LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x575 = INT8_MAX;
	int32_t x576 = INT32_MIN;
	int32_t t109 = 11596686;

    t109 = ((x573/(x574%x575))+x576);

    if (t109 != -2147483584) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x581 = 3LL;
	int64_t x582 = INT64_MAX;
	static uint16_t x583 = 2U;
	int8_t x584 = INT8_MAX;
	int64_t t110 = -7910LL;

    t110 = ((x581/(x582%x583))+x584);

    if (t110 != 130LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x585 = -1;
	int8_t x586 = -2;
	uint16_t x588 = 4U;
	int32_t t111 = -169064920;

    t111 = ((x585/(x586%x587))+x588);

    if (t111 != 4) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x589 = 1U;
	int32_t x590 = -1;
	volatile int16_t x591 = INT16_MIN;
	int8_t x592 = -3;

    t112 = ((x589/(x590%x591))+x592);

    if (t112 != 4294967293U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x605 = 19U;
	volatile int32_t x606 = -1;
	static int32_t x607 = -322673760;
	volatile uint32_t x608 = 48U;
	uint32_t t113 = 2U;

    t113 = ((x605/(x606%x607))+x608);

    if (t113 != 29U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = INT32_MIN;
	uint64_t x612 = 10798418LLU;
	static volatile uint64_t t114 = 27126151LLU;

    t114 = ((x609/(x610%x611))+x612);

    if (t114 != 4305765714LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x613 = 6998U;
	uint32_t x614 = 528086914U;
	volatile uint64_t x615 = 1078482944698441221LLU;
	int64_t x616 = INT64_MIN;

    t115 = ((x613/(x614%x615))+x616);

    if (t115 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x617 = INT32_MAX;
	uint32_t x618 = 2U;
	static uint64_t x619 = 48198687516496LLU;
	uint16_t x620 = 44U;
	uint64_t t116 = 253902442468611442LLU;

    t116 = ((x617/(x618%x619))+x620);

    if (t116 != 1073741867LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x621 = UINT64_MAX;
	uint8_t x622 = 19U;
	static volatile uint8_t x624 = 2U;
	uint64_t t117 = 89407504237LLU;

    t117 = ((x621/(x622%x623))+x624);

    if (t117 != 970881267037344823LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x629 = 6U;
	int16_t x630 = -1;
	int16_t x632 = 1;
	volatile int32_t t118 = 1;

    t118 = ((x629/(x630%x631))+x632);

    if (t118 != -5) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x634 = UINT32_MAX;
	volatile int64_t x635 = INT64_MIN;
	volatile int64_t t119 = 297076881LL;

    t119 = ((x633/(x634%x635))+x636);

    if (t119 != -2147516416LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x653 = INT8_MAX;
	volatile uint16_t x654 = UINT16_MAX;
	int64_t x655 = -262LL;
	uint64_t x656 = 6545909231937LLU;
	static uint64_t t120 = 13602LLU;

    t120 = ((x653/(x654%x655))+x656);

    if (t120 != 6545909231940LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x657 = 44U;
	static int16_t x658 = -442;
	int32_t x659 = 16051;
	static int32_t x660 = INT32_MIN;
	volatile int32_t t121 = INT32_MIN;

    t121 = ((x657/(x658%x659))+x660);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x661 = -1;
	int8_t x663 = INT8_MAX;
	static volatile int8_t x664 = 3;
	int32_t t122 = 64096;

    t122 = ((x661/(x662%x663))+x664);

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x665 = 878U;
	static int64_t x667 = INT64_MIN;
	uint16_t x668 = 192U;
	static volatile int64_t t123 = 77490246679053399LL;

    t123 = ((x665/(x666%x667))+x668);

    if (t123 != 196LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	uint8_t x670 = 5U;
	volatile uint64_t x671 = UINT64_MAX;
	static int32_t x672 = INT32_MAX;
	uint64_t t124 = 52747511452LLU;

    t124 = ((x669/(x670%x671))+x672);

    if (t124 != 2147496754LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x674 = -1LL;
	uint64_t x675 = 187469542509757056LLU;
	static int32_t x676 = INT32_MIN;
	static volatile uint64_t t125 = 26355512069LLU;

    t125 = ((x673/(x674%x675))+x676);

    if (t125 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x677 = INT64_MIN;
	uint32_t x679 = 97U;
	int32_t x680 = 115332;

    t126 = ((x677/(x678%x679))+x680);

    if (t126 != -174025887487710626LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x681 = INT16_MIN;
	int8_t x682 = INT8_MAX;
	int16_t x683 = INT16_MIN;
	int16_t x684 = 129;
	int32_t t127 = -101189172;

    t127 = ((x681/(x682%x683))+x684);

    if (t127 != -129) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x690 = -64LL;
	uint8_t x691 = 7U;
	volatile int16_t x692 = INT16_MAX;
	int64_t t128 = 3473547182907604LL;

    t128 = ((x689/(x690%x691))+x692);

    if (t128 != 26023303345649LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x693 = 2;
	int32_t x694 = INT32_MIN;
	int64_t x696 = -1LL;
	uint64_t t129 = UINT64_MAX;

    t129 = ((x693/(x694%x695))+x696);

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x697 = 672893857U;
	int8_t x698 = -1;
	uint32_t x700 = 239514585U;
	static uint32_t t130 = 1933U;

    t130 = ((x697/(x698%x699))+x700);

    if (t130 != 239514585U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x701 = -1;
	uint16_t x702 = UINT16_MAX;
	uint16_t x703 = 2153U;
	volatile int8_t x704 = -4;
	int32_t t131 = 141;

    t131 = ((x701/(x702%x703))+x704);

    if (t131 != -4) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x705 = 2295690697858079LLU;
	volatile int16_t x706 = -2407;
	int8_t x707 = 25;
	static int64_t x708 = -1LL;
	volatile uint64_t t132 = UINT64_MAX;

    t132 = ((x705/(x706%x707))+x708);

    if (t132 != UINT64_MAX) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x714 = INT32_MIN;
	uint16_t x715 = UINT16_MAX;
	static int8_t x716 = 2;
	static volatile int32_t t133 = 1;

    t133 = ((x713/(x714%x715))+x716);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x721 = -1LL;
	int16_t x723 = INT16_MIN;
	int16_t x724 = 0;
	static volatile int64_t t134 = -149133000846851974LL;

    t134 = ((x721/(x722%x723))+x724);

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x725 = 3;
	uint16_t x726 = UINT16_MAX;
	static int16_t x727 = INT16_MIN;
	int8_t x728 = INT8_MIN;
	volatile int32_t t135 = 20;

    t135 = ((x725/(x726%x727))+x728);

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x733 = 50U;
	int32_t x734 = 14551;
	uint8_t x735 = 2U;
	int32_t x736 = -1;
	int32_t t136 = -1;

    t136 = ((x733/(x734%x735))+x736);

    if (t136 != 49) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x739 = 1644241218682LLU;
	uint64_t x740 = 353946776LLU;
	static volatile uint64_t t137 = 547061809158904236LLU;

    t137 = ((x737/(x738%x739))+x740);

    if (t137 != 353946776LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x745 = INT8_MAX;
	int64_t x746 = 6LL;
	volatile int32_t x747 = 444712;
	int16_t x748 = -7872;
	static int64_t t138 = 1062117077319954859LL;

    t138 = ((x745/(x746%x747))+x748);

    if (t138 != -7851LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x749 = 510688897LLU;
	static int64_t x751 = -429LL;
	int16_t x752 = 194;
	volatile uint64_t t139 = 813569545LLU;

    t139 = ((x749/(x750%x751))+x752);

    if (t139 != 1193392LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x753 = 11U;
	int32_t x755 = INT32_MIN;
	int16_t x756 = INT16_MAX;
	volatile int32_t t140 = 221;

    t140 = ((x753/(x754%x755))+x756);

    if (t140 != 32767) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x757 = 0;
	volatile int8_t x758 = INT8_MIN;
	static int64_t x759 = -154LL;
	static int16_t x760 = INT16_MAX;
	int64_t t141 = 0LL;

    t141 = ((x757/(x758%x759))+x760);

    if (t141 != 32767LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x765 = INT64_MAX;
	static uint32_t x767 = UINT32_MAX;
	uint8_t x768 = 0U;
	static volatile int64_t t142 = -30913690LL;

    t142 = ((x765/(x766%x767))+x768);

    if (t142 != 164703072086692425LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x771 = INT64_MIN;
	volatile uint16_t x772 = 10U;
	volatile int64_t t143 = -80477LL;

    t143 = ((x769/(x770%x771))+x772);

    if (t143 != 11LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x773 = INT32_MIN;
	volatile int32_t x774 = -1;
	volatile uint32_t x775 = 901457180U;
	uint64_t x776 = 274022LLU;
	volatile uint64_t t144 = 226065LLU;

    t144 = ((x773/(x774%x775))+x776);

    if (t144 != 274025LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x777 = 54;
	static int8_t x778 = INT8_MIN;
	uint64_t x779 = 1710092251359LLU;
	static int8_t x780 = INT8_MIN;
	volatile uint64_t t145 = 2699206062844170149LLU;

    t145 = ((x777/(x778%x779))+x780);

    if (t145 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x781 = INT64_MAX;
	int8_t x782 = -1;
	static volatile int64_t x783 = 2LL;
	int32_t x784 = 3594;
	volatile int64_t t146 = -39920LL;

    t146 = ((x781/(x782%x783))+x784);

    if (t146 != -9223372036854772213LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x785 = INT16_MAX;
	int32_t x786 = -551515;
	volatile int8_t x787 = -25;
	static uint8_t x788 = 38U;
	int32_t t147 = -2423;

    t147 = ((x785/(x786%x787))+x788);

    if (t147 != -2146) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x789 = -1;
	volatile int32_t x790 = INT32_MAX;
	static int32_t x792 = INT32_MIN;
	volatile uint64_t t148 = 2413919474557883LLU;

    t148 = ((x789/(x790%x791))+x792);

    if (t148 != 6442450948LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x793 = 13976U;
	uint64_t x794 = UINT64_MAX;
	int64_t x795 = INT64_MIN;
	int16_t x796 = -1;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = ((x793/(x794%x795))+x796);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x805 = INT64_MAX;
	int16_t x806 = INT16_MIN;
	volatile int64_t x807 = INT64_MIN;

    t150 = ((x805/(x806%x807))+x808);

    if (t150 != -281474976710732LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x821 = 1611899LL;
	uint64_t x822 = 49700709745025LLU;
	uint64_t x824 = 31LLU;
	volatile uint64_t t151 = 1072731452502LLU;

    t151 = ((x821/(x822%x823))+x824);

    if (t151 != 31LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x833 = 12862616LLU;
	static int16_t x835 = INT16_MAX;
	uint64_t t152 = 4177792861768929LLU;

    t152 = ((x833/(x834%x835))+x836);

    if (t152 != 18446744073709551570LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x837 = 72U;
	int32_t x838 = INT32_MIN;
	uint64_t x839 = 618721313939639LLU;
	uint8_t x840 = 7U;
	uint64_t t153 = 1LLU;

    t153 = ((x837/(x838%x839))+x840);

    if (t153 != 7LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x841 = 1U;
	static uint16_t x842 = 16736U;
	volatile int16_t x843 = -280;
	int32_t x844 = INT32_MAX;

    t154 = ((x841/(x842%x843))+x844);

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x845 = 116U;
	int16_t x846 = INT16_MIN;
	static uint8_t x847 = UINT8_MAX;
	volatile int32_t t155 = -3686;

    t155 = ((x845/(x846%x847))+x848);

    if (t155 != 15) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x853 = 526;
	static int32_t x854 = -1397;
	uint32_t x855 = UINT32_MAX;
	uint16_t x856 = 3U;

    t156 = ((x853/(x854%x855))+x856);

    if (t156 != 3U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x857 = UINT8_MAX;
	uint64_t x859 = 1977587561473672LLU;
	int16_t x860 = -1;

    t157 = ((x857/(x858%x859))+x860);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x861 = UINT32_MAX;
	static int32_t x862 = 225239567;
	uint64_t x863 = 16815409236887552LLU;
	volatile int32_t x864 = 4;
	static volatile uint64_t t158 = 730387633434LLU;

    t158 = ((x861/(x862%x863))+x864);

    if (t158 != 23LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x870 = INT64_MIN;
	static uint32_t x871 = 179206903U;
	int32_t x872 = -213;
	volatile uint64_t t159 = 5632LLU;

    t159 = ((x869/(x870%x871))+x872);

    if (t159 != 18446744073709551403LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x873 = 1013474U;
	int32_t x874 = INT32_MIN;
	volatile int32_t x875 = INT32_MAX;
	uint8_t x876 = UINT8_MAX;
	volatile uint32_t t160 = 548U;

    t160 = ((x873/(x874%x875))+x876);

    if (t160 != 255U) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x881 = UINT8_MAX;
	static int8_t x882 = 1;
	uint16_t x883 = 4U;
	volatile int32_t x884 = -1;
	volatile int32_t t161 = 26096380;

    t161 = ((x881/(x882%x883))+x884);

    if (t161 != 254) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x885 = 0;
	int64_t x886 = INT64_MIN;
	uint8_t x887 = 23U;
	int32_t x888 = INT32_MAX;

    t162 = ((x885/(x886%x887))+x888);

    if (t162 != 2147483647LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x889 = -2;
	int32_t x890 = INT32_MAX;
	int16_t x892 = 870;
	volatile int32_t t163 = 3;

    t163 = ((x889/(x890%x891))+x892);

    if (t163 != 870) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x901 = -1318;
	int64_t x902 = -1290627616078789LL;
	int8_t x903 = -7;
	volatile uint32_t x904 = 2U;
	int64_t t164 = 2259721LL;

    t164 = ((x901/(x902%x903))+x904);

    if (t164 != 661LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x905 = INT64_MIN;
	uint8_t x906 = UINT8_MAX;
	volatile int64_t x907 = INT64_MAX;
	uint64_t x908 = 3830189989523262574LLU;
	static volatile uint64_t t165 = 8248702022153LLU;

    t165 = ((x905/(x906%x907))+x908);

    if (t165 != 3794019903104224238LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x911 = 12156LL;
	int32_t x912 = -12812883;
	int64_t t166 = -1529LL;

    t166 = ((x909/(x910%x911))+x912);

    if (t166 != -12812886LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x913 = INT16_MAX;
	int32_t x914 = INT32_MAX;
	uint16_t x915 = 4429U;
	volatile uint32_t t167 = 124969U;

    t167 = ((x913/(x914%x915))+x916);

    if (t167 != 9U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x921 = 1365812658U;
	static int32_t x922 = INT32_MAX;
	uint8_t x923 = 18U;
	static int64_t x924 = INT64_MIN;

    t168 = ((x921/(x922%x923))+x924);

    if (t168 != -9223372035488963150LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x925 = -1LL;
	static int64_t x928 = -11204954159LL;
	int64_t t169 = -187308323LL;

    t169 = ((x925/(x926%x927))+x928);

    if (t169 != -11204954159LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x934 = -1;
	int16_t x935 = INT16_MAX;
	int16_t x936 = -1;
	uint64_t t170 = UINT64_MAX;

    t170 = ((x933/(x934%x935))+x936);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x937 = 28U;
	static int64_t x938 = -1LL;
	uint32_t x939 = UINT32_MAX;
	static uint16_t x940 = UINT16_MAX;
	int64_t t171 = 13226223LL;

    t171 = ((x937/(x938%x939))+x940);

    if (t171 != 65507LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x949 = INT64_MIN;
	static int8_t x950 = INT8_MIN;
	uint16_t x951 = 4316U;
	int8_t x952 = 2;

    t172 = ((x949/(x950%x951))+x952);

    if (t172 != 72057594037927938LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x953 = UINT16_MAX;
	uint32_t x954 = UINT32_MAX;
	uint32_t x955 = 12497U;
	int16_t x956 = 194;

    t173 = ((x953/(x954%x955))+x956);

    if (t173 != 200U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x957 = INT64_MAX;
	volatile uint64_t x959 = UINT64_MAX;
	static uint32_t x960 = UINT32_MAX;
	volatile uint64_t t174 = 120273392258032LLU;

    t174 = ((x957/(x958%x959))+x960);

    if (t174 != 46495174275604LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x973 = 3463U;
	volatile int64_t x974 = -1LL;
	int8_t x976 = INT8_MIN;
	static volatile int64_t t175 = 2346517LL;

    t175 = ((x973/(x974%x975))+x976);

    if (t175 != -3591LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x977 = INT16_MAX;
	uint32_t x978 = UINT32_MAX;
	static volatile int16_t x979 = INT16_MAX;
	uint8_t x980 = 14U;
	volatile uint32_t t176 = 0U;

    t176 = ((x977/(x978%x979))+x980);

    if (t176 != 10936U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x982 = INT8_MIN;
	static uint16_t x983 = 13U;
	int16_t x984 = 5094;
	volatile int32_t t177 = 31935382;

    t177 = ((x981/(x982%x983))+x984);

    if (t177 != 5105) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x985 = 1513981957569064LLU;
	int8_t x986 = INT8_MAX;
	uint64_t x987 = 512LLU;
	uint8_t x988 = UINT8_MAX;

    t178 = ((x985/(x986%x987))+x988);

    if (t178 != 11921117776389LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x989 = INT8_MAX;
	static int32_t x990 = INT32_MAX;
	static int16_t x991 = INT16_MAX;
	int8_t x992 = INT8_MAX;

    t179 = ((x989/(x990%x991))+x992);

    if (t179 != 254) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x993 = -1LL;
	static int32_t x994 = -908;
	uint64_t x995 = 239636LLU;
	volatile uint32_t x996 = 246515U;
	volatile uint64_t t180 = 43LLU;

    t180 = ((x993/(x994%x995))+x996);

    if (t180 != 83646564344739LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x997 = 777U;
	static int64_t x998 = -7LL;
	uint8_t x999 = 92U;
	int8_t x1000 = INT8_MIN;
	int64_t t181 = -1LL;

    t181 = ((x997/(x998%x999))+x1000);

    if (t181 != -239LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1002 = INT32_MAX;
	static int32_t x1003 = -1602;
	static int8_t x1004 = INT8_MIN;
	volatile uint64_t t182 = 187LLU;

    t182 = ((x1001/(x1002%x1003))+x1004);

    if (t182 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1005 = -1LL;
	int32_t x1006 = -12673622;
	int64_t x1007 = -14697LL;
	uint16_t x1008 = UINT16_MAX;
	volatile int64_t t183 = -286570838938293833LL;

    t183 = ((x1005/(x1006%x1007))+x1008);

    if (t183 != 65535LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x1009 = INT32_MIN;
	int16_t x1010 = -1;
	int64_t x1011 = INT64_MIN;
	uint64_t x1012 = UINT64_MAX;
	volatile uint64_t t184 = 67132791718606115LLU;

    t184 = ((x1009/(x1010%x1011))+x1012);

    if (t184 != 2147483647LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1013 = -10;
	uint8_t x1014 = UINT8_MAX;
	static int64_t t185 = 31067913130LL;

    t185 = ((x1013/(x1014%x1015))+x1016);

    if (t185 != 4294967295LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1017 = UINT64_MAX;
	int32_t x1018 = INT32_MAX;
	int8_t x1019 = INT8_MIN;
	volatile int32_t x1020 = -1;

    t186 = ((x1017/(x1018%x1019))+x1020);

    if (t186 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1026 = 1LL;
	volatile int64_t t187 = -2000234564278928LL;

    t187 = ((x1025/(x1026%x1027))+x1028);

    if (t187 != 65544LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1031 = -21;
	int32_t x1032 = 19;
	volatile int64_t t188 = -5036186390633LL;

    t188 = ((x1029/(x1030%x1031))+x1032);

    if (t188 != -97128LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x1033 = UINT32_MAX;
	int16_t x1034 = -79;
	uint8_t x1035 = 6U;
	volatile uint16_t x1036 = UINT16_MAX;
	uint32_t t189 = 653549U;

    t189 = ((x1033/(x1034%x1035))+x1036);

    if (t189 != 65536U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1037 = INT8_MIN;
	uint64_t x1038 = 379231621LLU;
	volatile uint32_t x1039 = 7U;
	uint32_t x1040 = UINT32_MAX;
	uint64_t t190 = 263842099919203263LLU;

    t190 = ((x1037/(x1038%x1039))+x1040);

    if (t190 != 3074457349913225876LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1045 = INT16_MIN;
	uint64_t x1046 = 37LLU;
	uint8_t x1048 = UINT8_MAX;
	static uint64_t t191 = 275208318640963LLU;

    t191 = ((x1045/(x1046%x1047))+x1048);

    if (t191 != 498560650640798061LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1054 = -11;
	uint8_t x1055 = 82U;
	volatile int32_t x1056 = 24;
	uint64_t t192 = 2572180092740037257LLU;

    t192 = ((x1053/(x1054%x1055))+x1056);

    if (t192 != 25LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1057 = INT64_MIN;
	uint8_t x1058 = UINT8_MAX;
	uint16_t x1059 = 78U;
	uint8_t x1060 = 73U;
	volatile int64_t t193 = 5650786479LL;

    t193 = ((x1057/(x1058%x1059))+x1060);

    if (t193 != -439208192231179727LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x1069 = 58U;
	static uint8_t x1071 = 7U;
	volatile int32_t x1072 = INT32_MAX;
	uint64_t t194 = 29035026023773727LLU;

    t194 = ((x1069/(x1070%x1071))+x1072);

    if (t194 != 2147483661LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1073 = 24339376537LL;
	uint16_t x1074 = 43U;
	static int16_t x1075 = INT16_MIN;
	int32_t x1076 = -8383;
	int64_t t195 = -56121417620LL;

    t195 = ((x1073/(x1074%x1075))+x1076);

    if (t195 != 566023629LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1082 = 162U;
	volatile uint8_t x1083 = UINT8_MAX;
	volatile uint32_t x1084 = 4131521U;
	volatile uint32_t t196 = 37342U;

    t196 = ((x1081/(x1082%x1083))+x1084);

    if (t196 != 30643664U) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1085 = INT64_MIN;
	uint32_t x1086 = UINT32_MAX;
	uint32_t x1088 = 30821U;
	int64_t t197 = 173153703384038LL;

    t197 = ((x1085/(x1086%x1087))+x1088);

    if (t197 != -72624976668117020LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1094 = 772544048U;
	int16_t x1095 = -6;
	int8_t x1096 = 1;
	static uint32_t t198 = 989U;

    t198 = ((x1093/(x1094%x1095))+x1096);

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1097 = 1U;
	static uint32_t x1099 = 314U;
	static volatile int32_t x1100 = INT32_MIN;
	volatile uint32_t t199 = 37U;

    t199 = ((x1097/(x1098%x1099))+x1100);

    if (t199 != 2147483648U) { NG(); } else { ; }
	
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

