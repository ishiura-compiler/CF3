
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

uint16_t x1 = 1U;
int32_t x3 = 3;
uint16_t x7 = 658U;
uint8_t x11 = UINT8_MAX;
volatile int32_t x12 = -116;
uint32_t x33 = 279U;
volatile int32_t t8 = -24;
int16_t x48 = INT16_MAX;
volatile int32_t x49 = -22;
int32_t x50 = INT32_MIN;
static volatile int8_t x52 = INT8_MIN;
int32_t t11 = -29227276;
static int16_t x63 = -1;
int64_t x64 = -1LL;
int32_t t13 = 12;
static int8_t x75 = -1;
int8_t x77 = -54;
uint8_t x82 = 0U;
static volatile int32_t t17 = 11;
int16_t x92 = -149;
int32_t x102 = -34693;
volatile uint64_t t21 = 9994045006LLU;
int16_t x105 = -1;
static int64_t x112 = -1LL;
volatile int64_t x113 = 11817053045041LL;
int8_t x118 = -2;
int64_t x122 = -1LL;
volatile uint32_t t26 = 8591215U;
int32_t x126 = 3772;
static int16_t x128 = -1;
volatile uint32_t x147 = 3190U;
int8_t x149 = INT8_MIN;
uint32_t x151 = 1299844U;
volatile uint64_t x152 = UINT64_MAX;
int16_t x153 = -6;
volatile int64_t x160 = 16842650332202361LL;
int8_t x165 = INT8_MIN;
volatile uint64_t x166 = UINT64_MAX;
int64_t x168 = INT64_MIN;
uint64_t x169 = 5818LLU;
static int8_t x170 = INT8_MIN;
uint32_t x172 = 14U;
volatile int32_t t39 = -7588;
int8_t x177 = -3;
uint64_t x180 = UINT64_MAX;
int8_t x188 = -1;
uint32_t x208 = 768231330U;
uint32_t x220 = 11U;
uint16_t x232 = UINT16_MAX;
volatile uint64_t x248 = 115511155697148LLU;
int8_t x249 = INT8_MAX;
static volatile uint16_t x251 = 4797U;
volatile int8_t x253 = 1;
uint32_t x254 = UINT32_MAX;
int32_t t54 = -472;
static int32_t t56 = 11;
volatile int32_t x270 = -1;
static int32_t x271 = -15810;
int8_t x273 = -1;
static int8_t x281 = -43;
volatile int64_t x288 = -1LL;
int8_t x291 = 0;
int16_t x300 = INT16_MIN;
int32_t x303 = -1;
static uint32_t x304 = 3850U;
uint16_t x305 = 1U;
uint8_t x310 = UINT8_MAX;
static volatile uint8_t x311 = 12U;
uint32_t x313 = UINT32_MAX;
static volatile int64_t x314 = -1LL;
volatile int32_t x320 = 17854517;
volatile uint16_t x326 = 5646U;
int8_t x328 = 31;
volatile int8_t x332 = -1;
volatile int32_t x336 = INT32_MIN;
uint16_t x342 = 11120U;
int8_t x343 = INT8_MIN;
int8_t x344 = INT8_MIN;
int8_t x347 = -1;
static int8_t x364 = -1;
uint8_t x367 = 121U;
uint32_t t78 = 92426133U;
volatile int64_t x376 = INT64_MIN;
int16_t x380 = INT16_MIN;
volatile int16_t x387 = 43;
static uint32_t x392 = 4853626U;
static volatile uint64_t t84 = 344960846473695LLU;
int32_t x405 = -1;
int32_t t85 = 31;
uint64_t x418 = 4069456156168945LLU;
static volatile int8_t x427 = -7;
int16_t x430 = 3217;
volatile uint64_t x440 = 385LLU;
int32_t x442 = INT32_MAX;
int8_t x443 = INT8_MAX;
int32_t x444 = INT32_MAX;
static int16_t x452 = INT16_MIN;
volatile int32_t t94 = -583732742;
uint64_t x460 = 3142010LLU;
static int32_t x461 = -1;
int64_t x467 = -15167068821974LL;
static int64_t x469 = 123374367996LL;
volatile int64_t t99 = 40LL;
int8_t x492 = -1;
volatile int32_t t102 = 118857039;
uint64_t x496 = UINT64_MAX;
int64_t x501 = 795006LL;
static int16_t x503 = 1;
int8_t x504 = INT8_MAX;
uint16_t x508 = 9U;
int64_t x515 = INT64_MAX;
uint16_t x530 = 23U;
int64_t t109 = -567703166722LL;
volatile uint64_t t110 = 32425652739860432LLU;
static int32_t x540 = INT32_MIN;
volatile int8_t x541 = INT8_MAX;
uint64_t x543 = 13908289145245LLU;
uint32_t x545 = UINT32_MAX;
int16_t x546 = -9;
uint32_t t114 = 18936081U;
int32_t t115 = -2565206;
uint64_t x557 = 3469085LLU;
volatile uint64_t x558 = UINT64_MAX;
volatile uint64_t t116 = 482872LLU;
volatile uint64_t x562 = 73757LLU;
uint16_t x563 = 0U;
int16_t x573 = -1;
static int8_t x574 = INT8_MIN;
int8_t x576 = INT8_MIN;
int32_t t118 = -239251;
static uint32_t x578 = UINT32_MAX;
static volatile int16_t x582 = INT16_MIN;
static int64_t x601 = -1LL;
volatile int64_t t124 = 3359978LL;
volatile int8_t x607 = INT8_MIN;
uint16_t x610 = 254U;
uint16_t x612 = 2532U;
int64_t x616 = INT64_MIN;
int64_t t127 = -23443093630393061LL;
int32_t x619 = -1;
static int8_t x620 = -1;
static int64_t x627 = -1632772422169191LL;
uint8_t x631 = UINT8_MAX;
uint64_t t130 = 2257139265892LLU;
int64_t x635 = -4931744053934113LL;
int32_t x636 = -1;
int16_t x638 = -1;
uint64_t x644 = 1068LLU;
static volatile int32_t x645 = INT32_MAX;
uint64_t x648 = 6943272605LLU;
uint32_t x654 = 955U;
int8_t x662 = INT8_MIN;
uint8_t x663 = UINT8_MAX;
static uint32_t x667 = 1022736U;
uint16_t x668 = 1507U;
volatile int32_t t141 = 48;
int32_t x682 = INT32_MIN;
int32_t t142 = -51;
volatile int64_t t144 = -12LL;
int16_t x697 = INT16_MAX;
uint64_t x698 = 131LLU;
uint8_t x699 = UINT8_MAX;
uint16_t x709 = UINT16_MAX;
volatile uint8_t x711 = UINT8_MAX;
uint8_t x716 = 51U;
static volatile int8_t x717 = INT8_MIN;
static int32_t x719 = INT32_MAX;
int64_t x720 = -569798382LL;
int64_t t150 = -4643LL;
volatile int8_t x725 = 0;
volatile int32_t x739 = INT32_MIN;
int16_t x749 = 135;
static int32_t x750 = INT32_MIN;
int32_t x751 = INT32_MIN;
uint16_t x752 = 13185U;
int32_t x758 = -1;
uint64_t x760 = 7845917LLU;
int8_t x762 = INT8_MIN;
static uint64_t t161 = 541253LLU;
int64_t t162 = 784712433LL;
volatile uint8_t x789 = UINT8_MAX;
static int32_t t164 = -362;
volatile int8_t x794 = INT8_MAX;
int8_t x819 = INT8_MAX;
static int64_t t168 = -2LL;
volatile int64_t x831 = 580899606412LL;
volatile int32_t t170 = -3241609;
uint8_t x862 = 41U;
int32_t x865 = INT32_MAX;
static volatile int32_t t177 = -22;
int64_t x878 = INT64_MAX;
uint32_t x879 = UINT32_MAX;
static int16_t x893 = -1;
uint64_t t181 = 127731342130LLU;
uint32_t x908 = 302U;
static int64_t x909 = -4238205785666LL;
uint16_t x910 = 8U;
static volatile int64_t t184 = -4912810LL;
int64_t t185 = 1570487834385LL;
static int32_t t187 = 303101;
volatile uint8_t x925 = UINT8_MAX;
int64_t x927 = 20817600160708LL;
volatile uint32_t x937 = 340622051U;
uint64_t t193 = 2330089364450LLU;
int64_t t194 = 22436711989LL;
int16_t x957 = INT16_MIN;
volatile int16_t x961 = -1;
volatile uint16_t x962 = 4U;
int8_t x963 = INT8_MIN;
uint32_t x965 = 4938089U;
uint8_t x967 = UINT8_MAX;
static volatile int64_t t198 = 12980430045336846LL;
int16_t x969 = 115;
uint16_t x971 = UINT16_MAX;


void f0(void) {
    	uint16_t x2 = 26U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -597912166;

    t0 = ((x1-(x2!=x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 10946564338965LLU;
	volatile int16_t x6 = -1;
	volatile int8_t x8 = INT8_MAX;
	uint64_t t1 = 35104653LLU;

    t1 = ((x5-(x6!=x7))/x8);

    if (t1 != 86193419991LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 117U;
	static int64_t x10 = INT64_MIN;
	static volatile int32_t t2 = -746;

    t2 = ((x9-(x10!=x11))/x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static volatile int16_t x14 = -11;
	volatile int16_t x15 = INT16_MIN;
	static int32_t x16 = -1;
	int32_t t3 = 20364;

    t3 = ((x13-(x14!=x15))/x16);

    if (t3 != -2147483646) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 21U;
	static int32_t x18 = INT32_MAX;
	volatile uint32_t x19 = 933143U;
	volatile int16_t x20 = -3;
	volatile int32_t t4 = -373130746;

    t4 = ((x17-(x18!=x19))/x20);

    if (t4 != -6) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x25 = 119149453565980LLU;
	uint16_t x26 = 6U;
	volatile int32_t x27 = 228088;
	volatile int32_t x28 = INT32_MIN;
	volatile uint64_t t5 = 18LLU;

    t5 = ((x25-(x26!=x27))/x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 7;
	uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = INT8_MIN;
	static uint8_t x32 = UINT8_MAX;
	int32_t t6 = 29;

    t6 = ((x29-(x30!=x31))/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = INT64_MAX;
	int8_t x35 = INT8_MIN;
	static int16_t x36 = 216;
	static volatile uint32_t t7 = 47424U;

    t7 = ((x33-(x34!=x35))/x36);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -1;
	int32_t x42 = -1;
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;

    t8 = ((x41-(x42!=x43))/x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = -3LL;
	int8_t x46 = -1;
	volatile uint16_t x47 = UINT16_MAX;
	volatile int64_t t9 = -307212490LL;

    t9 = ((x45-(x46!=x47))/x48);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x51 = 2975152LL;
	volatile int32_t t10 = 21;

    t10 = ((x49-(x50!=x51))/x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MAX;
	volatile int32_t x54 = INT32_MIN;
	int8_t x55 = 0;
	static uint16_t x56 = UINT16_MAX;

    t11 = ((x53-(x54!=x55))/x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = 47U;
	int32_t x62 = -1;
	int64_t t12 = -902LL;

    t12 = ((x61-(x62!=x63))/x64);

    if (t12 != -47LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = INT8_MAX;
	int32_t x66 = INT32_MAX;
	static uint8_t x67 = 93U;
	int16_t x68 = INT16_MIN;

    t13 = ((x65-(x66!=x67))/x68);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x69 = -1;
	static volatile int8_t x70 = INT8_MIN;
	int64_t x71 = -36473319689LL;
	static uint8_t x72 = 4U;
	volatile int32_t t14 = 1926;

    t14 = ((x69-(x70!=x71))/x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x73 = 128073LL;
	int16_t x74 = 0;
	volatile int16_t x76 = 887;
	volatile int64_t t15 = -1926LL;

    t15 = ((x73-(x74!=x75))/x76);

    if (t15 != 144LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x78 = -1986;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = 1549U;
	uint32_t t16 = 409511084U;

    t16 = ((x77-(x78!=x79))/x80);

    if (t16 != 2772735U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x81 = 16230U;
	int16_t x83 = -164;
	static volatile int32_t x84 = INT32_MIN;

    t17 = ((x81-(x82!=x83))/x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x85 = 2LL;
	int32_t x86 = INT32_MAX;
	int8_t x87 = INT8_MIN;
	int32_t x88 = -163;
	volatile int64_t t18 = -490327LL;

    t18 = ((x85-(x86!=x87))/x88);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x89 = INT16_MAX;
	static uint8_t x90 = UINT8_MAX;
	static uint32_t x91 = 29349601U;
	int32_t t19 = -1;

    t19 = ((x89-(x90!=x91))/x92);

    if (t19 != -219) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = 92U;
	volatile uint8_t x98 = 2U;
	volatile int64_t x99 = INT64_MIN;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t20 = -1078365977216792LL;

    t20 = ((x97-(x98!=x99))/x100);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x101 = UINT64_MAX;
	volatile uint32_t x103 = 15622U;
	int16_t x104 = 10;

    t21 = ((x101-(x102!=x103))/x104);

    if (t21 != 1844674407370955161LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x106 = INT16_MIN;
	uint16_t x107 = 226U;
	static int16_t x108 = -36;
	volatile int32_t t22 = -179;

    t22 = ((x105-(x106!=x107))/x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x109 = 6U;
	int32_t x110 = INT32_MAX;
	uint8_t x111 = 44U;
	volatile int64_t t23 = 345LL;

    t23 = ((x109-(x110!=x111))/x112);

    if (t23 != -5LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	volatile int8_t x116 = INT8_MIN;
	static volatile int64_t t24 = -9356283367LL;

    t24 = ((x113-(x114!=x115))/x116);

    if (t24 != -92320726914LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	int16_t x119 = -1;
	static int32_t x120 = INT32_MIN;
	volatile int32_t t25 = 1;

    t25 = ((x117-(x118!=x119))/x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x121 = 1744U;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;

    t26 = ((x121-(x122!=x123))/x124);

    if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x125 = -1;
	volatile int64_t x127 = INT64_MIN;
	int32_t t27 = 215670;

    t27 = ((x125-(x126!=x127))/x128);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x129 = INT8_MAX;
	int32_t x130 = -227;
	static int64_t x131 = INT64_MIN;
	static int16_t x132 = -3163;
	int32_t t28 = 125688;

    t28 = ((x129-(x130!=x131))/x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x133 = -215945989;
	static int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t29 = 1;

    t29 = ((x133-(x134!=x135))/x136);

    if (t29 != -846847) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x137 = 3U;
	int32_t x138 = INT32_MIN;
	static uint32_t x139 = UINT32_MAX;
	int16_t x140 = INT16_MIN;
	int32_t t30 = -9295035;

    t30 = ((x137-(x138!=x139))/x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = INT16_MIN;
	volatile int16_t x142 = -1;
	int64_t x143 = 521LL;
	int64_t x144 = INT64_MIN;
	volatile int64_t t31 = -355334968904129LL;

    t31 = ((x141-(x142!=x143))/x144);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x145 = UINT8_MAX;
	int16_t x146 = -10236;
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t32 = 264014447;

    t32 = ((x145-(x146!=x147))/x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x150 = -2;
	uint64_t t33 = 18557443915154385LLU;

    t33 = ((x149-(x150!=x151))/x152);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x154 = INT16_MIN;
	uint8_t x155 = 0U;
	int64_t x156 = -444163214909849LL;
	int64_t t34 = -328968731279LL;

    t34 = ((x153-(x154!=x155))/x156);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MIN;
	int8_t x159 = 7;
	volatile int64_t t35 = -4199806214280079LL;

    t35 = ((x157-(x158!=x159))/x160);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x161 = -1;
	uint8_t x162 = UINT8_MAX;
	volatile int16_t x163 = 51;
	int64_t x164 = INT64_MIN;
	int64_t t36 = 166867353868668LL;

    t36 = ((x161-(x162!=x163))/x164);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x167 = INT16_MAX;
	volatile int64_t t37 = 29739277531922LL;

    t37 = ((x165-(x166!=x167))/x168);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x171 = INT64_MIN;
	volatile uint64_t t38 = 3990383LLU;

    t38 = ((x169-(x170!=x171))/x172);

    if (t38 != 415LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x173 = INT16_MIN;
	volatile uint16_t x174 = UINT16_MAX;
	int32_t x175 = INT32_MAX;
	static volatile uint8_t x176 = UINT8_MAX;

    t39 = ((x173-(x174!=x175))/x176);

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x178 = 378U;
	int16_t x179 = INT16_MIN;
	volatile uint64_t t40 = 516414373LLU;

    t40 = ((x177-(x178!=x179))/x180);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x181 = 1U;
	int16_t x182 = -143;
	static uint8_t x183 = UINT8_MAX;
	int8_t x184 = INT8_MAX;
	int32_t t41 = -119813;

    t41 = ((x181-(x182!=x183))/x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x185 = -83;
	volatile int16_t x186 = INT16_MIN;
	uint16_t x187 = 3848U;
	static volatile int32_t t42 = 51405;

    t42 = ((x185-(x186!=x187))/x188);

    if (t42 != 84) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	volatile uint32_t x199 = 11858518U;
	int32_t x200 = 506788;
	int32_t t43 = 959047454;

    t43 = ((x197-(x198!=x199))/x200);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x201 = 12U;
	int32_t x202 = INT32_MIN;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = 1274914742757LL;
	static int64_t t44 = -1519578837499538233LL;

    t44 = ((x201-(x202!=x203))/x204);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = 27565965408LL;
	int8_t x206 = -44;
	int32_t x207 = 90718163;
	volatile int64_t t45 = 0LL;

    t45 = ((x205-(x206!=x207))/x208);

    if (t45 != 35LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x209 = 22376U;
	int8_t x210 = -1;
	int16_t x211 = INT16_MAX;
	int32_t x212 = INT32_MAX;
	uint32_t t46 = 1566777U;

    t46 = ((x209-(x210!=x211))/x212);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x213 = UINT8_MAX;
	static volatile uint8_t x214 = 2U;
	static int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int64_t t47 = 3706211682024LL;

    t47 = ((x213-(x214!=x215))/x216);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x217 = 415U;
	int64_t x218 = INT64_MIN;
	volatile int64_t x219 = INT64_MIN;
	uint32_t t48 = 32U;

    t48 = ((x217-(x218!=x219))/x220);

    if (t48 != 37U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x221 = 432851021LLU;
	volatile uint8_t x222 = 20U;
	volatile int8_t x223 = -1;
	int64_t x224 = 66475818623469073LL;
	volatile uint64_t t49 = 1007405402636LLU;

    t49 = ((x221-(x222!=x223))/x224);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x225 = 6232927U;
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MAX;
	uint64_t x228 = 786778LLU;
	uint64_t t50 = 1465222622424954856LLU;

    t50 = ((x225-(x226!=x227))/x228);

    if (t50 != 7LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x229 = 11;
	volatile uint64_t x230 = UINT64_MAX;
	static int16_t x231 = -1;
	volatile int32_t t51 = 11450;

    t51 = ((x229-(x230!=x231))/x232);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x245 = INT8_MIN;
	uint8_t x246 = 0U;
	int8_t x247 = -1;
	volatile uint64_t t52 = 61440430103LLU;

    t52 = ((x245-(x246!=x247))/x248);

    if (t52 != 159696LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x250 = INT8_MIN;
	static int32_t x252 = 121;
	int32_t t53 = 85550;

    t53 = ((x249-(x250!=x251))/x252);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x255 = INT8_MAX;
	static int8_t x256 = INT8_MIN;

    t54 = ((x253-(x254!=x255))/x256);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x261 = 2;
	uint16_t x262 = 8U;
	int32_t x263 = INT32_MIN;
	int64_t x264 = 9040526175168LL;
	int64_t t55 = -7408043543842LL;

    t55 = ((x261-(x262!=x263))/x264);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = 511;
	static int32_t x266 = INT32_MIN;
	int32_t x267 = 401;
	volatile int16_t x268 = 1;

    t56 = ((x265-(x266!=x267))/x268);

    if (t56 != 510) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x269 = 158819500243565883LLU;
	volatile int64_t x272 = 231LL;
	uint64_t t57 = 329LLU;

    t57 = ((x269-(x270!=x271))/x272);

    if (t57 != 687530304084700LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x274 = 232U;
	volatile uint32_t x275 = UINT32_MAX;
	volatile uint16_t x276 = 1057U;
	static int32_t t58 = -1;

    t58 = ((x273-(x274!=x275))/x276);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x282 = INT16_MIN;
	volatile int8_t x283 = -17;
	int64_t x284 = 53266320758431LL;
	int64_t t59 = 15374547886LL;

    t59 = ((x281-(x282!=x283))/x284);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x285 = INT8_MIN;
	int64_t x286 = INT64_MAX;
	static uint32_t x287 = UINT32_MAX;
	volatile int64_t t60 = -53349LL;

    t60 = ((x285-(x286!=x287))/x288);

    if (t60 != 129LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x289 = -1;
	int16_t x290 = 6;
	uint64_t x292 = 246LLU;
	uint64_t t61 = 53LLU;

    t61 = ((x289-(x290!=x291))/x292);

    if (t61 != 74986764527274600LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	static uint64_t x294 = UINT64_MAX;
	int32_t x295 = -1;
	uint16_t x296 = 1U;
	uint64_t t62 = UINT64_MAX;

    t62 = ((x293-(x294!=x295))/x296);

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x297 = 2265U;
	uint64_t x298 = 69168993078229LLU;
	int16_t x299 = INT16_MIN;
	static volatile int32_t t63 = 3099;

    t63 = ((x297-(x298!=x299))/x300);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x301 = 54U;
	int64_t x302 = -1LL;
	volatile uint32_t t64 = 689U;

    t64 = ((x301-(x302!=x303))/x304);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x306 = 3U;
	static volatile int64_t x307 = 8651412022LL;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t65 = 1;

    t65 = ((x305-(x306!=x307))/x308);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x309 = -2055836550832384LL;
	uint64_t x312 = UINT64_MAX;
	uint64_t t66 = 383635577427LLU;

    t66 = ((x309-(x310!=x311))/x312);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x315 = 6730720LL;
	uint32_t x316 = 204706848U;
	uint32_t t67 = 1453U;

    t67 = ((x313-(x314!=x315))/x316);

    if (t67 != 20U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x317 = 7U;
	uint64_t x318 = 431409608LLU;
	volatile int64_t x319 = INT64_MIN;
	int32_t t68 = 233264;

    t68 = ((x317-(x318!=x319))/x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x321 = UINT32_MAX;
	static uint16_t x322 = 1951U;
	static uint64_t x323 = 170362369670888LLU;
	uint16_t x324 = 8230U;
	volatile uint32_t t69 = 1U;

    t69 = ((x321-(x322!=x323))/x324);

    if (t69 != 521867U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x325 = 42100699962768185LLU;
	uint16_t x327 = 11U;
	uint64_t t70 = 90014LLU;

    t70 = ((x325-(x326!=x327))/x328);

    if (t70 != 1358087095573167LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x329 = -4741;
	static int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	int32_t t71 = -364595712;

    t71 = ((x329-(x330!=x331))/x332);

    if (t71 != 4742) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x333 = INT64_MAX;
	int16_t x334 = INT16_MIN;
	int64_t x335 = -1LL;
	int64_t t72 = -11LL;

    t72 = ((x333-(x334!=x335))/x336);

    if (t72 != -4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 3359U;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t73 = 1LLU;

    t73 = ((x337-(x338!=x339))/x340);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x341 = INT8_MIN;
	int32_t t74 = -381703;

    t74 = ((x341-(x342!=x343))/x344);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x345 = 17650LLU;
	volatile uint64_t x346 = 8164502944LLU;
	uint64_t x348 = 3LLU;
	uint64_t t75 = 522507781159483194LLU;

    t75 = ((x345-(x346!=x347))/x348);

    if (t75 != 5883LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = INT32_MAX;
	static int64_t x350 = INT64_MIN;
	static uint8_t x351 = 12U;
	int32_t x352 = 4;
	int32_t t76 = 12;

    t76 = ((x349-(x350!=x351))/x352);

    if (t76 != 536870911) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x361 = INT32_MAX;
	int16_t x362 = -1;
	uint64_t x363 = 14LLU;
	static volatile int32_t t77 = -1;

    t77 = ((x361-(x362!=x363))/x364);

    if (t77 != -2147483646) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x365 = 1U;
	volatile uint8_t x366 = 6U;
	int8_t x368 = INT8_MAX;

    t78 = ((x365-(x366!=x367))/x368);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MIN;
	volatile uint16_t x372 = 1U;
	static volatile int32_t t79 = -310814429;

    t79 = ((x369-(x370!=x371))/x372);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x373 = -1;
	static int16_t x374 = INT16_MIN;
	static uint64_t x375 = 43987LLU;
	int64_t t80 = 66639732LL;

    t80 = ((x373-(x374!=x375))/x376);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x377 = INT8_MAX;
	int8_t x378 = INT8_MIN;
	static int16_t x379 = INT16_MIN;
	volatile int32_t t81 = 5;

    t81 = ((x377-(x378!=x379))/x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x381 = -1;
	uint64_t x382 = 3102076469707LLU;
	uint64_t x383 = 1052LLU;
	int32_t x384 = INT32_MIN;
	volatile int32_t t82 = 0;

    t82 = ((x381-(x382!=x383))/x384);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = 1;
	int8_t x388 = INT8_MAX;
	volatile int32_t t83 = 6911419;

    t83 = ((x385-(x386!=x387))/x388);

    if (t83 != -258) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x389 = UINT64_MAX;
	volatile int64_t x390 = INT64_MAX;
	volatile uint8_t x391 = UINT8_MAX;

    t84 = ((x389-(x390!=x391))/x392);

    if (t84 != 3800610939884LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x406 = 3U;
	uint8_t x407 = 3U;
	int32_t x408 = INT32_MIN;

    t85 = ((x405-(x406!=x407))/x408);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x409 = -1;
	static uint16_t x410 = 965U;
	volatile uint16_t x411 = 1U;
	volatile uint16_t x412 = 478U;
	volatile int32_t t86 = 4;

    t86 = ((x409-(x410!=x411))/x412);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x413 = INT16_MIN;
	volatile int8_t x414 = INT8_MIN;
	int64_t x415 = -21074676708632LL;
	int16_t x416 = INT16_MAX;
	int32_t t87 = -197;

    t87 = ((x413-(x414!=x415))/x416);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x417 = UINT32_MAX;
	int16_t x419 = 28;
	int8_t x420 = -1;
	uint32_t t88 = 1011U;

    t88 = ((x417-(x418!=x419))/x420);

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x425 = 25582978;
	int16_t x426 = -1529;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t89 = 226U;

    t89 = ((x425-(x426!=x427))/x428);

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x429 = 1U;
	int8_t x431 = 0;
	int64_t x432 = -1LL;
	volatile int64_t t90 = -25930568085LL;

    t90 = ((x429-(x430!=x431))/x432);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x433 = -4LL;
	uint64_t x434 = 1921545114462LLU;
	int32_t x435 = INT32_MIN;
	uint16_t x436 = UINT16_MAX;
	volatile int64_t t91 = 1LL;

    t91 = ((x433-(x434!=x435))/x436);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x437 = -1LL;
	int16_t x438 = 0;
	int8_t x439 = INT8_MAX;
	uint64_t t92 = 124267929225139128LLU;

    t92 = ((x437-(x438!=x439))/x440);

    if (t92 != 47913620970674160LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint32_t x441 = UINT32_MAX;
	uint32_t t93 = 1222U;

    t93 = ((x441-(x442!=x443))/x444);

    if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x449 = -152;
	static int8_t x450 = INT8_MAX;
	static volatile int64_t x451 = 268627LL;

    t94 = ((x449-(x450!=x451))/x452);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x453 = -1;
	volatile int8_t x454 = INT8_MAX;
	int8_t x455 = INT8_MIN;
	uint16_t x456 = UINT16_MAX;
	int32_t t95 = -3135;

    t95 = ((x453-(x454!=x455))/x456);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x457 = 1558489838539LLU;
	volatile uint8_t x458 = 13U;
	volatile uint16_t x459 = 0U;
	uint64_t t96 = 15LLU;

    t96 = ((x457-(x458!=x459))/x460);

    if (t96 != 496016LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x462 = UINT16_MAX;
	int16_t x463 = INT16_MAX;
	static int32_t x464 = -1;
	volatile int32_t t97 = 229268;

    t97 = ((x461-(x462!=x463))/x464);

    if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x465 = 271;
	int8_t x466 = INT8_MIN;
	static uint16_t x468 = 7160U;
	int32_t t98 = -3221;

    t98 = ((x465-(x466!=x467))/x468);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x470 = UINT64_MAX;
	static volatile uint64_t x471 = 79886979059LLU;
	uint8_t x472 = 12U;

    t99 = ((x469-(x470!=x471))/x472);

    if (t99 != 10281197332LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x477 = INT8_MAX;
	int64_t x478 = INT64_MAX;
	uint32_t x479 = 58007205U;
	static uint64_t x480 = 7723939252LLU;
	static volatile uint64_t t100 = 469101225537LLU;

    t100 = ((x477-(x478!=x479))/x480);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x485 = 711U;
	int8_t x486 = 3;
	volatile uint64_t x487 = 892730LLU;
	volatile int16_t x488 = INT16_MIN;
	int32_t t101 = -836;

    t101 = ((x485-(x486!=x487))/x488);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x489 = 1985;
	static int8_t x490 = -1;
	uint16_t x491 = UINT16_MAX;

    t102 = ((x489-(x490!=x491))/x492);

    if (t102 != -1984) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x493 = INT8_MIN;
	uint32_t x494 = UINT32_MAX;
	volatile int16_t x495 = INT16_MIN;
	volatile uint64_t t103 = 103587475302063LLU;

    t103 = ((x493-(x494!=x495))/x496);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x502 = INT64_MIN;
	volatile int64_t t104 = -28872337305427057LL;

    t104 = ((x501-(x502!=x503))/x504);

    if (t104 != 6259LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x505 = INT16_MAX;
	int16_t x506 = 0;
	volatile uint8_t x507 = 1U;
	int32_t t105 = 0;

    t105 = ((x505-(x506!=x507))/x508);

    if (t105 != 3640) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x513 = -1;
	uint64_t x514 = 17133202553890121LLU;
	int32_t x516 = 336702;
	volatile int32_t t106 = 1977;

    t106 = ((x513-(x514!=x515))/x516);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x517 = INT32_MIN;
	int8_t x518 = -1;
	int64_t x519 = -1LL;
	uint32_t x520 = 6202U;
	uint32_t t107 = 237348U;

    t107 = ((x517-(x518!=x519))/x520);

    if (t107 != 346256U) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int16_t x525 = INT16_MAX;
	int32_t x526 = 26436327;
	int8_t x527 = INT8_MIN;
	int64_t x528 = INT64_MIN;
	volatile int64_t t108 = -1820952952793033LL;

    t108 = ((x525-(x526!=x527))/x528);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x529 = INT64_MAX;
	int32_t x531 = 1;
	static int32_t x532 = INT32_MIN;

    t109 = ((x529-(x530!=x531))/x532);

    if (t109 != -4294967295LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x533 = INT16_MIN;
	static int16_t x534 = -4775;
	uint32_t x535 = UINT32_MAX;
	uint64_t x536 = 480009776158320LLU;

    t110 = ((x533-(x534!=x535))/x536);

    if (t110 != 38429LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x537 = UINT64_MAX;
	volatile int16_t x538 = 5;
	int8_t x539 = INT8_MIN;
	uint64_t t111 = 2800LLU;

    t111 = ((x537-(x538!=x539))/x540);

    if (t111 != 1LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x542 = -1;
	int16_t x544 = INT16_MIN;
	static volatile int32_t t112 = 20703;

    t112 = ((x541-(x542!=x543))/x544);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x547 = INT32_MIN;
	volatile int32_t x548 = INT32_MIN;
	volatile uint32_t t113 = 190886360U;

    t113 = ((x545-(x546!=x547))/x548);

    if (t113 != 1U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = -1;
	int64_t x551 = INT64_MIN;
	static volatile uint32_t x552 = 1586U;

    t114 = ((x549-(x550!=x551))/x552);

    if (t114 != 2708049U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x553 = INT16_MIN;
	int32_t x554 = -13498003;
	int16_t x555 = -11043;
	int8_t x556 = INT8_MIN;

    t115 = ((x553-(x554!=x555))/x556);

    if (t115 != 256) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x559 = INT64_MAX;
	int64_t x560 = -1389792LL;

    t116 = ((x557-(x558!=x559))/x560);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x561 = 1;
	int64_t x564 = 644LL;
	static int64_t t117 = 1000684402104049246LL;

    t117 = ((x561-(x562!=x563))/x564);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x575 = INT64_MAX;

    t118 = ((x573-(x574!=x575))/x576);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x577 = -127233586636885559LL;
	volatile int32_t x579 = INT32_MAX;
	static uint64_t x580 = 3242405LLU;
	static uint64_t t119 = 29356889544LLU;

    t119 = ((x577-(x578!=x579))/x580);

    if (t119 != 5649976016898LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x581 = INT16_MIN;
	int64_t x583 = INT64_MIN;
	volatile int8_t x584 = INT8_MIN;
	static int32_t t120 = -79335;

    t120 = ((x581-(x582!=x583))/x584);

    if (t120 != 256) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x585 = -50;
	static int16_t x586 = 0;
	int16_t x587 = INT16_MIN;
	int16_t x588 = -1751;
	static int32_t t121 = -29133;

    t121 = ((x585-(x586!=x587))/x588);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x593 = INT64_MAX;
	static int64_t x594 = INT64_MAX;
	uint16_t x595 = UINT16_MAX;
	int64_t x596 = -1LL;
	int64_t t122 = -1316318306LL;

    t122 = ((x593-(x594!=x595))/x596);

    if (t122 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x597 = -1;
	static uint64_t x598 = 83LLU;
	uint32_t x599 = 1768386523U;
	int8_t x600 = INT8_MIN;
	static int32_t t123 = 1817;

    t123 = ((x597-(x598!=x599))/x600);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x602 = 37249295LL;
	volatile uint64_t x603 = UINT64_MAX;
	int32_t x604 = -1;

    t124 = ((x601-(x602!=x603))/x604);

    if (t124 != 2LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x605 = -1482;
	int32_t x606 = 1;
	static int32_t x608 = INT32_MIN;
	volatile int32_t t125 = -256881018;

    t125 = ((x605-(x606!=x607))/x608);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x609 = 25362567984115697LLU;
	int8_t x611 = 0;
	volatile uint64_t t126 = 5767051521884584LLU;

    t126 = ((x609-(x610!=x611))/x612);

    if (t126 != 10016812000045LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x613 = INT64_MAX;
	int8_t x614 = INT8_MIN;
	volatile int8_t x615 = 13;

    t127 = ((x613-(x614!=x615))/x616);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x617 = UINT16_MAX;
	uint64_t x618 = 1587LLU;
	volatile int32_t t128 = 2;

    t128 = ((x617-(x618!=x619))/x620);

    if (t128 != -65534) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x625 = 4768U;
	static int32_t x626 = INT32_MIN;
	volatile int16_t x628 = -17;
	volatile int32_t t129 = -45275917;

    t129 = ((x625-(x626!=x627))/x628);

    if (t129 != -280) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x629 = 63621U;
	int16_t x630 = 60;
	uint64_t x632 = 5LLU;

    t130 = ((x629-(x630!=x631))/x632);

    if (t130 != 12724LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x633 = 10;
	static uint8_t x634 = 1U;
	int32_t t131 = 1;

    t131 = ((x633-(x634!=x635))/x636);

    if (t131 != -9) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	uint32_t x639 = UINT32_MAX;
	int64_t x640 = INT64_MIN;
	volatile int64_t t132 = 1358419254LL;

    t132 = ((x637-(x638!=x639))/x640);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x641 = INT64_MAX;
	int8_t x642 = -1;
	static uint64_t x643 = 2090480185074557LLU;
	uint64_t t133 = 76157330019LLU;

    t133 = ((x641-(x642!=x643))/x644);

    if (t133 != 8636116139377130LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x646 = INT32_MIN;
	int8_t x647 = 1;
	static uint64_t t134 = 10818171220LLU;

    t134 = ((x645-(x646!=x647))/x648);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x649 = 5U;
	int64_t x650 = INT64_MIN;
	int8_t x651 = INT8_MIN;
	uint64_t x652 = 10LLU;
	uint64_t t135 = 6370078019LLU;

    t135 = ((x649-(x650!=x651))/x652);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x653 = 13600LL;
	int16_t x655 = INT16_MIN;
	static int32_t x656 = INT32_MAX;
	volatile int64_t t136 = -126510200770LL;

    t136 = ((x653-(x654!=x655))/x656);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x657 = -1;
	uint64_t x658 = 9139502452451LLU;
	int16_t x659 = -1;
	volatile int8_t x660 = -12;
	static volatile int32_t t137 = 45096457;

    t137 = ((x657-(x658!=x659))/x660);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x661 = 0;
	static uint16_t x664 = UINT16_MAX;
	volatile int32_t t138 = -1085332;

    t138 = ((x661-(x662!=x663))/x664);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x665 = -133776636;
	uint16_t x666 = UINT16_MAX;
	int32_t t139 = -1;

    t139 = ((x665-(x666!=x667))/x668);

    if (t139 != -88770) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x669 = -1;
	int64_t x670 = -1LL;
	int32_t x671 = -1;
	volatile int64_t x672 = INT64_MIN;
	int64_t t140 = 266943475306LL;

    t140 = ((x669-(x670!=x671))/x672);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x677 = INT16_MIN;
	uint8_t x678 = 1U;
	int16_t x679 = -1;
	static int16_t x680 = INT16_MAX;

    t141 = ((x677-(x678!=x679))/x680);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x681 = 22;
	volatile int8_t x683 = INT8_MIN;
	int32_t x684 = INT32_MAX;

    t142 = ((x681-(x682!=x683))/x684);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x685 = -45212564;
	int32_t x686 = 57607;
	static uint64_t x687 = 516713269154365LLU;
	int8_t x688 = INT8_MAX;
	int32_t t143 = -5478704;

    t143 = ((x685-(x686!=x687))/x688);

    if (t143 != -356004) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x693 = INT64_MAX;
	uint64_t x694 = UINT64_MAX;
	int16_t x695 = -1;
	static int32_t x696 = -1;

    t144 = ((x693-(x694!=x695))/x696);

    if (t144 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x700 = INT16_MIN;
	int32_t t145 = 101449961;

    t145 = ((x697-(x698!=x699))/x700);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x701 = 164U;
	int8_t x702 = INT8_MIN;
	int64_t x703 = INT64_MIN;
	volatile int16_t x704 = INT16_MIN;
	volatile int32_t t146 = 0;

    t146 = ((x701-(x702!=x703))/x704);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x705 = 1;
	static int64_t x706 = 1LL;
	volatile int8_t x707 = 0;
	int32_t x708 = INT32_MAX;
	int32_t t147 = 182344269;

    t147 = ((x705-(x706!=x707))/x708);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x710 = 16014;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t148 = -219464456;

    t148 = ((x709-(x710!=x711))/x712);

    if (t148 != 256) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x713 = 881068553;
	static int32_t x714 = INT32_MAX;
	int32_t x715 = -2012;
	static int32_t t149 = 1031752;

    t149 = ((x713-(x714!=x715))/x716);

    if (t149 != 17275853) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x718 = INT32_MIN;

    t150 = ((x717-(x718!=x719))/x720);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x726 = -1;
	int8_t x727 = INT8_MAX;
	volatile uint16_t x728 = UINT16_MAX;
	int32_t t151 = -28855;

    t151 = ((x725-(x726!=x727))/x728);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x729 = INT8_MIN;
	static int16_t x730 = -3666;
	volatile int32_t x731 = INT32_MIN;
	int16_t x732 = 2987;
	volatile int32_t t152 = 191;

    t152 = ((x729-(x730!=x731))/x732);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x737 = UINT8_MAX;
	volatile uint16_t x738 = 14U;
	uint16_t x740 = UINT16_MAX;
	int32_t t153 = 1959;

    t153 = ((x737-(x738!=x739))/x740);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x741 = INT8_MAX;
	uint32_t x742 = UINT32_MAX;
	uint16_t x743 = UINT16_MAX;
	volatile uint32_t x744 = UINT32_MAX;
	static uint32_t t154 = 29U;

    t154 = ((x741-(x742!=x743))/x744);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t t155 = 998963659;

    t155 = ((x749-(x750!=x751))/x752);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x753 = 232830;
	volatile uint8_t x754 = 1U;
	uint8_t x755 = 77U;
	int16_t x756 = INT16_MIN;
	int32_t t156 = -2;

    t156 = ((x753-(x754!=x755))/x756);

    if (t156 != -7) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x757 = INT8_MIN;
	volatile int8_t x759 = -1;
	volatile uint64_t t157 = 139208188223546180LLU;

    t157 = ((x757-(x758!=x759))/x760);

    if (t157 != 2351126588990LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x761 = UINT16_MAX;
	volatile int32_t x763 = INT32_MIN;
	uint32_t x764 = UINT32_MAX;
	volatile uint32_t t158 = 20642U;

    t158 = ((x761-(x762!=x763))/x764);

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x769 = -1904626917034LL;
	uint64_t x770 = 1446490524LLU;
	int64_t x771 = -1LL;
	int8_t x772 = INT8_MIN;
	static int64_t t159 = -66308967LL;

    t159 = ((x769-(x770!=x771))/x772);

    if (t159 != 14879897789LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x773 = 14;
	uint8_t x774 = 12U;
	static int8_t x775 = INT8_MAX;
	volatile int16_t x776 = 6244;
	static volatile int32_t t160 = -27702;

    t160 = ((x773-(x774!=x775))/x776);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x777 = -1;
	uint32_t x778 = UINT32_MAX;
	uint16_t x779 = UINT16_MAX;
	uint64_t x780 = UINT64_MAX;

    t161 = ((x777-(x778!=x779))/x780);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x781 = -2542332;
	static volatile uint8_t x782 = UINT8_MAX;
	int16_t x783 = 325;
	int64_t x784 = -27LL;

    t162 = ((x781-(x782!=x783))/x784);

    if (t162 != 94160LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x785 = 0LL;
	volatile uint16_t x786 = 14222U;
	int16_t x787 = INT16_MAX;
	int16_t x788 = INT16_MIN;
	static volatile int64_t t163 = -444012192LL;

    t163 = ((x785-(x786!=x787))/x788);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x790 = 1U;
	int16_t x791 = INT16_MIN;
	int8_t x792 = -11;

    t164 = ((x789-(x790!=x791))/x792);

    if (t164 != -23) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x793 = 13;
	int8_t x795 = -1;
	uint32_t x796 = 146U;
	volatile uint32_t t165 = 48U;

    t165 = ((x793-(x794!=x795))/x796);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x805 = -1;
	volatile uint8_t x806 = UINT8_MAX;
	int64_t x807 = 97663001LL;
	int8_t x808 = INT8_MIN;
	volatile int32_t t166 = 13;

    t166 = ((x805-(x806!=x807))/x808);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x809 = INT8_MAX;
	volatile uint32_t x810 = 160U;
	uint64_t x811 = UINT64_MAX;
	int64_t x812 = INT64_MIN;
	int64_t t167 = 0LL;

    t167 = ((x809-(x810!=x811))/x812);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x817 = 1617585;
	int32_t x818 = -1;
	volatile int64_t x820 = INT64_MIN;

    t168 = ((x817-(x818!=x819))/x820);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x825 = INT16_MIN;
	volatile int32_t x826 = 479936;
	uint32_t x827 = 7U;
	int8_t x828 = INT8_MIN;
	static volatile int32_t t169 = 8081;

    t169 = ((x825-(x826!=x827))/x828);

    if (t169 != 256) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x829 = 98;
	int32_t x830 = -29;
	int32_t x832 = INT32_MAX;

    t170 = ((x829-(x830!=x831))/x832);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x837 = INT16_MIN;
	int32_t x838 = INT32_MAX;
	uint32_t x839 = UINT32_MAX;
	static volatile uint64_t x840 = UINT64_MAX;
	static volatile uint64_t t171 = 182198364LLU;

    t171 = ((x837-(x838!=x839))/x840);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x841 = INT16_MIN;
	int32_t x842 = INT32_MAX;
	uint16_t x843 = 1U;
	int8_t x844 = -1;
	volatile int32_t t172 = 5477261;

    t172 = ((x841-(x842!=x843))/x844);

    if (t172 != 32769) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x845 = 1LL;
	static volatile int16_t x846 = INT16_MIN;
	static uint32_t x847 = 883U;
	uint32_t x848 = 2818365U;
	static volatile int64_t t173 = 13847439317LL;

    t173 = ((x845-(x846!=x847))/x848);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x849 = 2U;
	int64_t x850 = INT64_MIN;
	int16_t x851 = INT16_MIN;
	static uint64_t x852 = 2574401843207156971LLU;
	uint64_t t174 = 80418524LLU;

    t174 = ((x849-(x850!=x851))/x852);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x853 = -6;
	int16_t x854 = 40;
	int16_t x855 = 3136;
	static volatile int32_t x856 = -1;
	static volatile int32_t t175 = 111290;

    t175 = ((x853-(x854!=x855))/x856);

    if (t175 != 7) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x861 = -1;
	int32_t x863 = INT32_MIN;
	int32_t x864 = -126934;
	volatile int32_t t176 = -3;

    t176 = ((x861-(x862!=x863))/x864);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x866 = 6U;
	int16_t x867 = 5345;
	int8_t x868 = INT8_MAX;

    t177 = ((x865-(x866!=x867))/x868);

    if (t177 != 16909320) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x873 = -1;
	int32_t x874 = -2027;
	volatile int64_t x875 = INT64_MAX;
	static int16_t x876 = -1;
	volatile int32_t t178 = -2;

    t178 = ((x873-(x874!=x875))/x876);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x877 = INT32_MAX;
	uint64_t x880 = 1593329408445LLU;
	volatile uint64_t t179 = 39719373257LLU;

    t179 = ((x877-(x878!=x879))/x880);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x881 = -120081LL;
	int16_t x882 = 2;
	static int8_t x883 = -2;
	int8_t x884 = INT8_MAX;
	volatile int64_t t180 = -10877LL;

    t180 = ((x881-(x882!=x883))/x884);

    if (t180 != -945LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x894 = -72;
	uint8_t x895 = 0U;
	uint64_t x896 = 9516774352LLU;

    t181 = ((x893-(x894!=x895))/x896);

    if (t181 != 1938339965LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint16_t x901 = 9773U;
	int16_t x902 = -1;
	static int64_t x903 = -157276593387LL;
	uint64_t x904 = 10734LLU;
	volatile uint64_t t182 = 60438LLU;

    t182 = ((x901-(x902!=x903))/x904);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x905 = -1;
	int8_t x906 = INT8_MIN;
	uint16_t x907 = 966U;
	static volatile uint32_t t183 = 1759046108U;

    t183 = ((x905-(x906!=x907))/x908);

    if (t183 != 14221746U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x911 = -1;
	uint32_t x912 = 13198990U;

    t184 = ((x909-(x910!=x911))/x912);

    if (t184 != -321100LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x913 = -1LL;
	static int64_t x914 = 1028830462523161641LL;
	volatile int8_t x915 = 16;
	volatile uint16_t x916 = UINT16_MAX;

    t185 = ((x913-(x914!=x915))/x916);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x917 = INT8_MAX;
	uint8_t x918 = 18U;
	uint64_t x919 = UINT64_MAX;
	int8_t x920 = INT8_MIN;
	int32_t t186 = -94852549;

    t186 = ((x917-(x918!=x919))/x920);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x921 = 0U;
	int16_t x922 = -1;
	int16_t x923 = INT16_MAX;
	volatile uint8_t x924 = 20U;

    t187 = ((x921-(x922!=x923))/x924);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x926 = 1;
	int32_t x928 = INT32_MAX;
	volatile int32_t t188 = -1992025;

    t188 = ((x925-(x926!=x927))/x928);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x929 = -1;
	uint32_t x930 = 2184U;
	int32_t x931 = 5;
	volatile int32_t x932 = INT32_MIN;
	volatile int32_t t189 = -5822;

    t189 = ((x929-(x930!=x931))/x932);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint16_t x933 = 119U;
	uint8_t x934 = UINT8_MAX;
	uint16_t x935 = 239U;
	volatile uint64_t x936 = 249637LLU;
	volatile uint64_t t190 = 5143484803LLU;

    t190 = ((x933-(x934!=x935))/x936);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x938 = 0;
	static uint16_t x939 = 1U;
	int32_t x940 = INT32_MIN;
	uint32_t t191 = 1180U;

    t191 = ((x937-(x938!=x939))/x940);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x941 = UINT32_MAX;
	int32_t x942 = -1;
	static int8_t x943 = INT8_MAX;
	static int16_t x944 = INT16_MIN;
	uint32_t t192 = 712U;

    t192 = ((x941-(x942!=x943))/x944);

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x945 = 1715718280LLU;
	uint16_t x946 = 936U;
	static uint64_t x947 = 1738326064527LLU;
	int8_t x948 = INT8_MIN;

    t193 = ((x945-(x946!=x947))/x948);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint16_t x949 = 91U;
	static volatile int8_t x950 = -1;
	int64_t x951 = -5LL;
	int64_t x952 = INT64_MIN;

    t194 = ((x949-(x950!=x951))/x952);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x953 = INT8_MIN;
	uint16_t x954 = UINT16_MAX;
	static int16_t x955 = -10;
	int16_t x956 = -1;
	int32_t t195 = -513159877;

    t195 = ((x953-(x954!=x955))/x956);

    if (t195 != 129) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x958 = INT64_MAX;
	static uint16_t x959 = 16264U;
	int32_t x960 = INT32_MIN;
	volatile int32_t t196 = 1;

    t196 = ((x957-(x958!=x959))/x960);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x964 = INT32_MIN;
	volatile int32_t t197 = 136364;

    t197 = ((x961-(x962!=x963))/x964);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x966 = 0;
	volatile int64_t x968 = -1LL;

    t198 = ((x965-(x966!=x967))/x968);

    if (t198 != -4938088LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x970 = 5255;
	int8_t x972 = -1;
	int32_t t199 = -24155;

    t199 = ((x969-(x970!=x971))/x972);

    if (t199 != -114) { NG(); } else { ; }
	
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

