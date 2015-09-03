#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = 12875254094473LLU;
int32_t t3 = -529352782;
uint32_t x26 = UINT32_MAX;
int32_t x32 = INT32_MIN;
volatile int32_t t7 = -1;
static int8_t x33 = -1;
int32_t x34 = INT32_MAX;
uint64_t x35 = 941248868LLU;
volatile uint64_t x38 = UINT64_MAX;
uint64_t x47 = 1150798LLU;
volatile int16_t x55 = -847;
static int64_t x56 = INT64_MAX;
int16_t x63 = INT16_MIN;
volatile int64_t t15 = -7216592228156LL;
static int64_t x65 = INT64_MIN;
static volatile int32_t x69 = 508160;
int16_t x71 = INT16_MAX;
int32_t t17 = 936977;
volatile int16_t x75 = 0;
int32_t x78 = INT32_MIN;
int16_t x82 = 14399;
volatile int32_t x84 = INT32_MIN;
volatile int32_t x89 = INT32_MAX;
uint32_t x96 = UINT32_MAX;
int8_t x98 = 1;
int16_t x108 = INT16_MAX;
volatile int64_t x115 = -1LL;
int64_t t28 = -577950LL;
volatile int64_t x122 = -1LL;
int32_t x125 = -118654509;
volatile int64_t t31 = -858669170935LL;
static int8_t x131 = -1;
volatile int8_t x132 = INT8_MAX;
static int8_t x134 = 4;
int64_t x139 = INT64_MIN;
int32_t t36 = -3;
int16_t x150 = 3;
volatile uint64_t t38 = 408604117178LLU;
volatile uint64_t t41 = 760227LLU;
int8_t x171 = INT8_MIN;
int32_t t42 = 414907076;
volatile uint8_t x176 = 14U;
int64_t x177 = -1LL;
static int16_t x180 = -1;
int32_t x183 = INT32_MAX;
volatile int64_t x200 = -668165364030154621LL;
int64_t t49 = 119962677LL;
uint16_t x202 = 1U;
volatile uint64_t x209 = 1LLU;
int32_t x211 = INT32_MAX;
int32_t t52 = -293660240;
int32_t x216 = INT32_MIN;
volatile int32_t t53 = -277900;
int64_t x217 = -1LL;
int64_t x220 = -33807LL;
int8_t x227 = 58;
volatile int64_t t57 = 68766625145655680LL;
int64_t x233 = -7LL;
int64_t x235 = INT64_MIN;
volatile int64_t t58 = 99LL;
volatile int32_t t59 = 0;
static uint32_t x244 = 15132358U;
int8_t x252 = INT8_MIN;
volatile uint32_t x254 = 1602U;
uint32_t x255 = UINT32_MAX;
static int8_t x260 = INT8_MIN;
static int32_t x267 = -447172;
static int32_t x272 = INT32_MAX;
volatile uint32_t t69 = 576062U;
int8_t x281 = -1;
int32_t t71 = -6;
int8_t x296 = INT8_MAX;
uint8_t x300 = UINT8_MAX;
uint32_t x303 = 1309U;
volatile int16_t x307 = INT16_MIN;
static uint32_t x308 = 1132U;
int64_t x311 = -440149752919030215LL;
static int64_t x312 = INT64_MAX;
int64_t t77 = -328842255LL;
int64_t x320 = -31580797027LL;
int16_t x323 = INT16_MIN;
int32_t x325 = 6;
uint64_t x326 = 193097814512692194LLU;
int64_t x327 = INT64_MIN;
int8_t x331 = INT8_MIN;
uint64_t x332 = 4521167523598072329LLU;
int32_t t83 = 0;
int64_t t86 = -177894456961LL;
int64_t x349 = INT64_MIN;
static int32_t x364 = INT32_MIN;
int64_t x368 = INT64_MIN;
volatile int32_t t94 = 46;
static int16_t x390 = INT16_MIN;
int32_t t97 = -44;


void f0(void) {
	volatile uint32_t x1 = 2396U;
	int64_t x2 = INT64_MAX;
	int16_t x4 = 0;
	uint64_t t0 = 22222701158LLU;

	t0 = ((x1==x2)*(x3&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 727457772164972269LL;
	int64_t x6 = INT64_MIN;
	int8_t x7 = 7;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 7127912758LLU;

	t1 = ((x5==x6)*(x7&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = UINT16_MAX;
	int32_t x10 = 1;
	int64_t x11 = -919LL;
	static int32_t x12 = INT32_MIN;
	volatile int64_t t2 = 111611821221346379LL;

	t2 = ((x9==x10)*(x11&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static uint32_t x14 = 681659163U;
	uint16_t x15 = 240U;
	static volatile uint8_t x16 = 67U;

	t3 = ((x13==x14)*(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int64_t x18 = INT64_MIN;
	volatile int16_t x19 = -26;
	int8_t x20 = -13;
	int32_t t4 = 31984720;

	t4 = ((x17==x18)*(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	uint64_t x22 = 1120093151691914077LLU;
	int16_t x23 = INT16_MIN;
	static int8_t x24 = -1;
	volatile int32_t t5 = -16985;

	t5 = ((x21==x22)*(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MAX;
	int32_t t6 = 16066645;

	t6 = ((x25==x26)*(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 8804U;
	uint32_t x30 = UINT32_MAX;
	int8_t x31 = 4;

	t7 = ((x29==x30)*(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x36 = INT8_MIN;
	static uint64_t t8 = 24589181800LLU;

	t8 = ((x33==x34)*(x35&x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	uint16_t x39 = 3807U;
	int64_t x40 = INT64_MAX;
	volatile int64_t t9 = -1850360615881818012LL;

	t9 = ((x37==x38)*(x39&x40));

	if (t9 != 3807LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x42 = INT32_MIN;
	static volatile uint8_t x43 = 20U;
	uint64_t x44 = 1895605LLU;
	volatile uint64_t t10 = 2145917529LLU;

	t10 = ((x41==x42)*(x43&x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = -1;
	volatile int32_t x48 = INT32_MAX;
	volatile uint64_t t11 = 1LLU;

	t11 = ((x45==x46)*(x47&x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MIN;
	uint64_t x50 = 2501991LLU;
	volatile int32_t x51 = -1;
	uint8_t x52 = 1U;
	int32_t t12 = 98860429;

	t12 = ((x49==x50)*(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	int64_t t13 = 137404512517258LL;

	t13 = ((x53==x54)*(x55&x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = -2;
	int32_t x59 = -212922;
	uint32_t x60 = 11603U;
	uint32_t t14 = 35951U;

	t14 = ((x57==x58)*(x59&x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	static int64_t x64 = INT64_MIN;

	t15 = ((x61==x62)*(x63&x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MAX;
	volatile int64_t t16 = -9663015451LL;

	t16 = ((x65==x66)*(x67&x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -1LL;
	static int32_t x72 = INT32_MAX;

	t17 = ((x69==x70)*(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int8_t x74 = 1;
	static volatile uint16_t x76 = 199U;
	volatile int32_t t18 = 6291119;

	t18 = ((x73==x74)*(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 13906203946LLU;
	volatile int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 97059298;

	t19 = ((x77==x78)*(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = 4;
	int16_t x83 = INT16_MIN;
	int32_t t20 = -2765;

	t20 = ((x81==x82)*(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	uint32_t x86 = 121463U;
	int16_t x87 = -1;
	int32_t x88 = -27176;
	static volatile int32_t t21 = -60553;

	t21 = ((x85==x86)*(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = INT64_MIN;
	volatile int16_t x91 = INT16_MIN;
	static int8_t x92 = -6;
	volatile int32_t t22 = 14885774;

	t22 = ((x89==x90)*(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 5U;
	int64_t x94 = INT64_MIN;
	volatile int16_t x95 = -1;
	volatile uint32_t t23 = 1U;

	t23 = ((x93==x94)*(x95&x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	volatile int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MAX;
	static volatile int32_t t24 = 48703;

	t24 = ((x97==x98)*(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = 165;
	uint16_t x102 = 56U;
	static int64_t x103 = INT64_MIN;
	uint16_t x104 = 1U;
	int64_t t25 = -423911LL;

	t25 = ((x101==x102)*(x103&x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	static uint8_t x106 = UINT8_MAX;
	static int16_t x107 = 13915;
	int32_t t26 = -102029;

	t26 = ((x105==x106)*(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x109 = INT8_MAX;
	int16_t x110 = INT16_MAX;
	int16_t x111 = 14;
	int64_t x112 = INT64_MIN;
	int64_t t27 = -3LL;

	t27 = ((x109==x110)*(x111&x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -15;
	int16_t x114 = INT16_MIN;
	static int32_t x116 = -1;

	t28 = ((x113==x114)*(x115&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;
	static int32_t t29 = -23;

	t29 = ((x117==x118)*(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = 862;
	static uint64_t x123 = UINT64_MAX;
	uint16_t x124 = 32U;
	uint64_t t30 = 0LLU;

	t30 = ((x121==x122)*(x123&x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MAX;
	int16_t x128 = 1;

	t31 = ((x125==x126)*(x127&x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 94U;
	static volatile int8_t x130 = INT8_MIN;
	int32_t t32 = 31;

	t32 = ((x129==x130)*(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = INT8_MAX;
	int16_t x135 = -1;
	static volatile int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 165068623;

	t33 = ((x133==x134)*(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 676485383187LLU;
	uint32_t x138 = 3826U;
	volatile int16_t x140 = -1;
	volatile int64_t t34 = 2LL;

	t34 = ((x137==x138)*(x139&x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = UINT32_MAX;
	static volatile int8_t x142 = 18;
	int32_t x143 = INT32_MIN;
	int64_t x144 = -15LL;
	volatile int64_t t35 = 1412648746LL;

	t35 = ((x141==x142)*(x143&x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = INT32_MIN;
	int64_t x146 = -1LL;
	int32_t x147 = -129;
	uint8_t x148 = 49U;

	t36 = ((x145==x146)*(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = -31090517;
	volatile uint8_t x151 = 6U;
	int64_t x152 = 16015063LL;
	int64_t t37 = 1LL;

	t37 = ((x149==x150)*(x151&x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = 2079054984U;
	int8_t x154 = 4;
	uint8_t x155 = UINT8_MAX;
	uint64_t x156 = UINT64_MAX;

	t38 = ((x153==x154)*(x155&x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	static uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = 4LL;
	static uint64_t x160 = 533216110993LLU;
	uint64_t t39 = 22802712755051LLU;

	t39 = ((x157==x158)*(x159&x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 502;
	static int16_t x162 = INT16_MAX;
	static int32_t x163 = 15190490;
	uint8_t x164 = 3U;
	int32_t t40 = 47;

	t40 = ((x161==x162)*(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -812590;
	uint64_t x166 = 508LLU;
	uint16_t x167 = UINT16_MAX;
	uint64_t x168 = 8193597LLU;

	t41 = ((x165==x166)*(x167&x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x169 = 2963223251714533LLU;
	int64_t x170 = INT64_MAX;
	uint8_t x172 = 7U;

	t42 = ((x169==x170)*(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int32_t x174 = INT32_MIN;
	volatile uint64_t x175 = UINT64_MAX;
	volatile uint64_t t43 = 1297079439834LLU;

	t43 = ((x173==x174)*(x175&x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = UINT32_MAX;
	uint64_t x179 = 886712524595756279LLU;
	volatile uint64_t t44 = 1929896342LLU;

	t44 = ((x177==x178)*(x179&x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	static uint16_t x184 = UINT16_MAX;
	static volatile int32_t t45 = 240;

	t45 = ((x181==x182)*(x183&x184));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	int64_t x186 = 61816637LL;
	uint8_t x187 = UINT8_MAX;
	int8_t x188 = -13;
	int32_t t46 = -46183335;

	t46 = ((x185==x186)*(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -1LL;
	static int8_t x190 = -9;
	uint16_t x191 = 24U;
	static uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t47 = 2045U;

	t47 = ((x189==x190)*(x191&x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	static int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	uint16_t x196 = 5U;
	volatile int32_t t48 = -368292;

	t48 = ((x193==x194)*(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = 66;
	volatile int8_t x198 = INT8_MIN;
	static int32_t x199 = -161;

	t49 = ((x197==x198)*(x199&x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 122U;
	static int64_t x203 = INT64_MAX;
	volatile int16_t x204 = 488;
	static volatile int64_t t50 = 19589392LL;

	t50 = ((x201==x202)*(x203&x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x206 = 12105U;
	int64_t x207 = INT64_MIN;
	volatile int64_t x208 = INT64_MIN;
	static volatile int64_t t51 = 283834689700229417LL;

	t51 = ((x205==x206)*(x207&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = UINT32_MAX;
	static int8_t x212 = 1;

	t52 = ((x209==x210)*(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	int64_t x214 = 1099084123LL;
	int16_t x215 = 23;

	t53 = ((x213==x214)*(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x218 = 1;
	uint32_t x219 = 1577U;
	int64_t t54 = 47327453749LL;

	t54 = ((x217==x218)*(x219&x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -239;
	int32_t x222 = -674430862;
	static uint32_t x223 = UINT32_MAX;
	int64_t x224 = -1LL;
	static volatile int64_t t55 = 118438LL;

	t55 = ((x221==x222)*(x223&x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x226 = -201LL;
	int8_t x228 = 10;
	int32_t t56 = 63;

	t56 = ((x225==x226)*(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	static int32_t x230 = -1;
	int8_t x231 = 1;
	int64_t x232 = -2901916231LL;

	t57 = ((x229==x230)*(x231&x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x234 = 34U;
	uint32_t x236 = UINT32_MAX;

	t58 = ((x233==x234)*(x235&x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -43;
	volatile int8_t x238 = 24;
	static int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;

	t59 = ((x237==x238)*(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MAX;
	volatile uint8_t x242 = 76U;
	int16_t x243 = INT16_MIN;
	volatile uint32_t t60 = 26U;

	t60 = ((x241==x242)*(x243&x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -875;
	int16_t x246 = -1;
	uint64_t x247 = 963362171718LLU;
	volatile uint8_t x248 = 0U;
	static uint64_t t61 = 25366460LLU;

	t61 = ((x245==x246)*(x247&x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	volatile uint64_t x250 = UINT64_MAX;
	int8_t x251 = -3;
	int32_t t62 = -110988;

	t62 = ((x249==x250)*(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	volatile int8_t x256 = -15;
	uint32_t t63 = 230785166U;

	t63 = ((x253==x254)*(x255&x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MAX;
	uint16_t x258 = 1U;
	static volatile int64_t x259 = INT64_MIN;
	volatile int64_t t64 = -32517226885994971LL;

	t64 = ((x257==x258)*(x259&x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -487;
	volatile int32_t x262 = INT32_MAX;
	int32_t x263 = INT32_MIN;
	int32_t x264 = -1;
	int32_t t65 = -4;

	t65 = ((x261==x262)*(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = INT16_MIN;
	static int64_t x266 = INT64_MIN;
	int8_t x268 = INT8_MAX;
	volatile int32_t t66 = -5;

	t66 = ((x265==x266)*(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MAX;
	int8_t x270 = -1;
	uint32_t x271 = 210379845U;
	volatile uint32_t t67 = 392U;

	t67 = ((x269==x270)*(x271&x272));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 8548U;
	volatile uint64_t x274 = UINT64_MAX;
	static int64_t x275 = -43882LL;
	volatile int8_t x276 = INT8_MAX;
	volatile int64_t t68 = 215713040LL;

	t68 = ((x273==x274)*(x275&x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	int32_t x278 = INT32_MAX;
	static int8_t x279 = 10;
	static uint32_t x280 = 3366564U;

	t69 = ((x277==x278)*(x279&x280));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 0U;
	uint16_t x283 = 327U;
	static int32_t x284 = INT32_MIN;
	int32_t t70 = 6513362;

	t70 = ((x281==x282)*(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	uint16_t x286 = 3826U;
	int16_t x287 = 225;
	int8_t x288 = INT8_MAX;

	t71 = ((x285==x286)*(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 45U;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = INT8_MAX;
	int32_t t72 = -2807357;

	t72 = ((x289==x290)*(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = INT32_MIN;
	int64_t x295 = -64557LL;
	static volatile int64_t t73 = 6019LL;

	t73 = ((x293==x294)*(x295&x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = 457114;
	static int32_t x298 = -1;
	int64_t x299 = INT64_MIN;
	int64_t t74 = 23754872LL;

	t74 = ((x297==x298)*(x299&x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 2789430LL;
	static uint8_t x302 = 125U;
	uint32_t x304 = 701428484U;
	static uint32_t t75 = 5562714U;

	t75 = ((x301==x302)*(x303&x304));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int64_t x306 = 283038144666902LL;
	static uint32_t t76 = 2478U;

	t76 = ((x305==x306)*(x307&x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = -8173;
	volatile int8_t x310 = -1;

	t77 = ((x309==x310)*(x311&x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	static uint8_t x316 = 0U;
	volatile int64_t t78 = -2915898792935541567LL;

	t78 = ((x313==x314)*(x315&x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	static volatile int16_t x318 = INT16_MIN;
	int16_t x319 = INT16_MIN;
	volatile int64_t t79 = -1040223018385578LL;

	t79 = ((x317==x318)*(x319&x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int64_t x322 = -1LL;
	int64_t x324 = 2487565579083424081LL;
	int64_t t80 = 6701LL;

	t80 = ((x321==x322)*(x323&x324));

	if (t80 != 2487565579083415552LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x328 = INT64_MAX;
	volatile int64_t t81 = 13183697076295LL;

	t81 = ((x325==x326)*(x327&x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	uint64_t x330 = 1116586LLU;
	volatile uint64_t t82 = 129625678464800114LLU;

	t82 = ((x329==x330)*(x331&x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MIN;
	int8_t x334 = 34;
	int32_t x335 = -1;
	volatile int8_t x336 = INT8_MIN;

	t83 = ((x333==x334)*(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1712;
	int64_t x338 = -1LL;
	int16_t x339 = 1;
	static int16_t x340 = 1;
	int32_t t84 = 915;

	t84 = ((x337==x338)*(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	int16_t x342 = 532;
	int64_t x343 = -82012625199LL;
	int8_t x344 = INT8_MAX;
	volatile int64_t t85 = -94965471482LL;

	t85 = ((x341==x342)*(x343&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 162U;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = 0U;
	int64_t x348 = -35130LL;

	t86 = ((x345==x346)*(x347&x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x350 = 12093U;
	int64_t x351 = INT64_MIN;
	static int32_t x352 = INT32_MIN;
	static int64_t t87 = 1LL;

	t87 = ((x349==x350)*(x351&x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 56391173LLU;
	int64_t x354 = INT64_MIN;
	volatile uint8_t x355 = 19U;
	uint64_t x356 = UINT64_MAX;
	uint64_t t88 = 6441026547850516222LLU;

	t88 = ((x353==x354)*(x355&x356));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MAX;
	int64_t x358 = -1LL;
	int16_t x359 = -1;
	int8_t x360 = -1;
	volatile int32_t t89 = -1;

	t89 = ((x357==x358)*(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -11;
	int32_t x362 = -14828844;
	volatile int8_t x363 = -1;
	volatile int32_t t90 = 558;

	t90 = ((x361==x362)*(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 15110094U;
	volatile uint8_t x366 = 5U;
	uint8_t x367 = 48U;
	int64_t t91 = 2856807583076839579LL;

	t91 = ((x365==x366)*(x367&x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = -1;
	uint32_t x370 = 1516605U;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = INT16_MAX;
	int32_t t92 = 21;

	t92 = ((x369==x370)*(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 57469261LLU;
	int8_t x374 = -1;
	volatile int64_t x375 = INT64_MAX;
	volatile int16_t x376 = INT16_MIN;
	static volatile int64_t t93 = -1265455LL;

	t93 = ((x373==x374)*(x375&x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 7U;
	uint32_t x378 = 30588U;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = -2;

	t94 = ((x377==x378)*(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 696194;
	static int32_t x382 = 286;
	static uint8_t x383 = UINT8_MAX;
	uint8_t x384 = UINT8_MAX;
	int32_t t95 = 42;

	t95 = ((x381==x382)*(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = UINT32_MAX;
	volatile uint16_t x386 = 3758U;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = 6;
	int32_t t96 = 17;

	t96 = ((x385==x386)*(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 57930695379497068LLU;
	int8_t x391 = -12;
	int32_t x392 = INT32_MIN;

	t97 = ((x389==x390)*(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 74057LLU;
	uint8_t x394 = UINT8_MAX;
	uint64_t x395 = 8839157656130385565LLU;
	volatile int64_t x396 = 3471443993641880LL;
	volatile uint64_t t98 = 34820295846972LLU;

	t98 = ((x393==x394)*(x395&x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -1LL;
	static volatile uint16_t x398 = 7U;
	uint64_t x399 = UINT64_MAX;
	static int32_t x400 = INT32_MIN;
	static volatile uint64_t t99 = 481457563LLU;

	t99 = ((x397==x398)*(x399&x400));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

