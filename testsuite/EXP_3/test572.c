#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 8U;
int8_t x13 = INT8_MIN;
uint8_t x15 = 30U;
int16_t x21 = INT16_MIN;
volatile int16_t x22 = INT16_MIN;
static volatile uint8_t x24 = UINT8_MAX;
uint64_t x31 = 2529347883162423748LLU;
int8_t x32 = -1;
int16_t x34 = INT16_MIN;
static volatile int64_t x38 = -929457269LL;
int64_t x44 = -1LL;
int8_t x45 = INT8_MAX;
static int8_t x48 = INT8_MIN;
int16_t x49 = -1;
uint64_t t10 = 34117018911677LLU;
uint16_t x64 = 1U;
static volatile uint64_t t15 = 253918719LLU;
int32_t x73 = 1;
volatile uint8_t x75 = UINT8_MAX;
int16_t x77 = INT16_MIN;
int64_t x80 = 11877521LL;
int8_t x89 = INT8_MIN;
int8_t x91 = INT8_MIN;
volatile int64_t x92 = INT64_MIN;
volatile int8_t x98 = -1;
static int16_t x108 = -14;
static volatile uint32_t t23 = 14U;
int32_t x109 = -1;
static volatile uint16_t x110 = UINT16_MAX;
int64_t x117 = -1LL;
volatile int16_t x122 = INT16_MAX;
uint32_t x124 = 35165402U;
static uint32_t t27 = 924856U;
volatile int64_t t29 = 53917244895994692LL;
int16_t x139 = INT16_MAX;
static int16_t x140 = -1;
int16_t x145 = 0;
volatile int64_t x147 = INT64_MAX;
uint8_t x148 = UINT8_MAX;
int8_t x149 = INT8_MAX;
int64_t x154 = INT64_MAX;
static volatile uint32_t x155 = 27482U;
int16_t x156 = INT16_MIN;
int64_t x165 = -1LL;
volatile int64_t t37 = -129651812148044LL;
volatile int8_t x173 = INT8_MIN;
volatile uint64_t t41 = 231978460843486777LLU;
static int16_t x186 = INT16_MAX;
volatile uint32_t x200 = 57U;
static volatile uint64_t t45 = 1021292770792934LLU;
static int8_t x204 = 26;
int32_t t48 = -90194637;
uint8_t x218 = 4U;
volatile uint64_t t50 = 824896860568316525LLU;
int32_t x235 = -1;
volatile int64_t x236 = INT64_MIN;
int64_t t54 = -48617597274496LL;
int8_t x241 = -5;
static volatile int32_t x244 = INT32_MIN;
int32_t x250 = INT32_MIN;
int32_t x253 = INT32_MAX;
int64_t x256 = INT64_MIN;
int64_t t59 = 101753LL;
int64_t x261 = INT64_MIN;
static volatile int64_t x266 = 38506701864663LL;
uint8_t x281 = 1U;
int32_t t66 = 375392061;
static volatile int32_t x286 = INT32_MIN;
int8_t x293 = INT8_MIN;
static uint64_t x299 = UINT64_MAX;
static int8_t x306 = INT8_MIN;
int16_t x309 = INT16_MIN;
volatile int64_t x313 = INT64_MIN;
volatile uint32_t x324 = UINT32_MAX;
volatile uint32_t t76 = 10321501U;
int8_t x333 = -1;
int32_t x340 = INT32_MAX;
int64_t t80 = -12328164LL;
int32_t x342 = -1;
volatile int64_t x343 = -36090373142622LL;
volatile int64_t t81 = -3244673653987LL;
int64_t x346 = INT64_MAX;
int16_t x350 = INT16_MAX;
int64_t x354 = INT64_MAX;
uint16_t x356 = 198U;
int8_t x359 = 0;
static int64_t x363 = INT64_MAX;
static int64_t t86 = 32152624748LL;
static int32_t x368 = -3;
int16_t x370 = INT16_MIN;
int64_t t88 = -1503261LL;
static int8_t x373 = 0;
volatile int64_t x377 = INT64_MAX;
int8_t x381 = -28;
int16_t x384 = INT16_MAX;
volatile int64_t x385 = -2380838LL;
uint8_t x388 = UINT8_MAX;
uint64_t x391 = 29347LLU;
uint16_t x393 = 1U;
int32_t t94 = -5228;
int64_t x402 = -186436245435803LL;
int32_t t99 = -934989;


void f0(void) {
	volatile int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MAX;
	uint32_t x7 = UINT32_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t0 = 6923624LL;

	t0 = ((x5%x6)^(x7/x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = 1;
	static int64_t x11 = INT64_MAX;
	int16_t x12 = INT16_MIN;
	static volatile int64_t t1 = 144LL;

	t1 = ((x9%x10)^(x11/x12));

	if (t1 != -281474976710656LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x14 = -25569;
	uint8_t x16 = 24U;
	int32_t t2 = 199101;

	t2 = ((x13%x14)^(x15/x16));

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x23 = INT32_MIN;
	volatile int32_t t3 = 8967884;

	t3 = ((x21%x22)^(x23/x24));

	if (t3 != -8421504) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = UINT64_MAX;
	int32_t x28 = -2;
	static uint64_t t4 = 596LLU;

	t4 = ((x25%x26)^(x27/x28));

	if (t4 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x29 = 954U;
	uint64_t x30 = 45971254213067337LLU;
	static uint64_t t5 = 52438257602168542LLU;

	t5 = ((x29%x30)^(x31/x32));

	if (t5 != 954LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x33 = UINT64_MAX;
	int32_t x35 = -1;
	volatile int16_t x36 = INT16_MIN;
	static uint64_t t6 = 25783978LLU;

	t6 = ((x33%x34)^(x35/x36));

	if (t6 != 32767LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = 73553100186318492LL;
	int64_t x39 = -1LL;
	int32_t x40 = -2011;
	static volatile int64_t t7 = -8182845LL;

	t7 = ((x37%x38)^(x39/x40));

	if (t7 != 85450039LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint32_t x42 = 3U;
	uint8_t x43 = UINT8_MAX;
	static volatile int64_t t8 = -6295499541LL;

	t8 = ((x41%x42)^(x43/x44));

	if (t8 != -255LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MIN;
	static int16_t x47 = INT16_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x45%x46)^(x47/x48));

	if (t9 != 383) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x50 = 7968;
	volatile uint64_t x51 = UINT64_MAX;
	int8_t x52 = -1;

	t10 = ((x49%x50)^(x51/x52));

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	static volatile int8_t x54 = -1;
	int8_t x55 = 0;
	int16_t x56 = INT16_MAX;
	volatile int32_t t11 = -310348;

	t11 = ((x53%x54)^(x55/x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int64_t x58 = INT64_MIN;
	volatile int32_t x59 = INT32_MAX;
	volatile int8_t x60 = 1;
	int64_t t12 = -516056779739LL;

	t12 = ((x57%x58)^(x59/x60));

	if (t12 != 2147483392LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 1U;
	uint32_t x62 = 293385U;
	static volatile int16_t x63 = INT16_MIN;
	static uint32_t t13 = 417858925U;

	t13 = ((x61%x62)^(x63/x64));

	if (t13 != 4294934529U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	uint8_t x66 = UINT8_MAX;
	static int16_t x67 = -1;
	static uint64_t x68 = 106853489265LLU;
	volatile uint64_t t14 = 798633458013037555LLU;

	t14 = ((x65%x66)^(x67/x68));

	if (t14 != 18446744073536915796LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x69 = UINT64_MAX;
	int8_t x70 = -1;
	static int8_t x71 = INT8_MIN;
	int8_t x72 = -52;

	t15 = ((x69%x70)^(x71/x72));

	if (t15 != 2LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t16 = 2102267007807346071LL;

	t16 = ((x73%x74)^(x75/x76));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MAX;
	int8_t x79 = -5;
	int64_t t17 = 2503399049LL;

	t17 = ((x77%x78)^(x79/x80));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 7U;
	volatile uint16_t x84 = 378U;
	int32_t t18 = -472192;

	t18 = ((x81%x82)^(x83/x84));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MAX;
	static uint64_t x88 = 6950100200174908LLU;
	static uint64_t t19 = 42716505225856958LLU;

	t19 = ((x85%x86)^(x87/x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MAX;
	int64_t t20 = -41180LL;

	t20 = ((x89%x90)^(x91/x92));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x97 = 2U;
	static int8_t x99 = -7;
	int8_t x100 = -1;
	int32_t t21 = -52770337;

	t21 = ((x97%x98)^(x99/x100));

	if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MAX;
	volatile uint32_t x103 = 18U;
	volatile uint64_t x104 = 211319175021LLU;
	uint64_t t22 = 573578405455697LLU;

	t22 = ((x101%x102)^(x103/x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MAX;
	static volatile int16_t x106 = 1;
	uint32_t x107 = 621661U;

	t23 = ((x105%x106)^(x107/x108));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x111 = -1LL;
	uint64_t x112 = 530146804483LLU;
	volatile uint64_t t24 = 26519LLU;

	t24 = ((x109%x110)^(x111/x112));

	if (t24 != 18446744073674756076LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = 6794933LLU;
	volatile int64_t x115 = 7399524934762LL;
	uint8_t x116 = 5U;
	uint64_t t25 = 3199LLU;

	t25 = ((x113%x114)^(x115/x116));

	if (t25 != 1479909198162LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 367U;
	int8_t x120 = -1;
	int64_t t26 = 183894563225719LL;

	t26 = ((x117%x118)^(x119/x120));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = 1;
	int32_t x123 = INT32_MIN;

	t27 = ((x121%x122)^(x123/x124));

	if (t27 != 60U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = 1;
	volatile int64_t x126 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;
	static int32_t x128 = -90;
	int64_t t28 = 1089535381LL;

	t28 = ((x125%x126)^(x127/x128));

	if (t28 != -727LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = INT16_MAX;
	int64_t x130 = -1LL;
	static int32_t x131 = INT32_MIN;
	int16_t x132 = -1001;

	t29 = ((x129%x130)^(x131/x132));

	if (t29 != 2145338LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint64_t x134 = UINT64_MAX;
	static volatile int8_t x135 = INT8_MAX;
	uint8_t x136 = 32U;
	static volatile uint64_t t30 = 14902LLU;

	t30 = ((x133%x134)^(x135/x136));

	if (t30 != 65532LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x137 = INT32_MIN;
	static volatile int8_t x138 = INT8_MAX;
	volatile int32_t t31 = 372;

	t31 = ((x137%x138)^(x139/x140));

	if (t31 != 32761) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x146 = INT64_MIN;
	static volatile int64_t t32 = 14121904860168LL;

	t32 = ((x145%x146)^(x147/x148));

	if (t32 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x150 = INT32_MIN;
	static uint16_t x151 = 44U;
	uint8_t x152 = 1U;
	int32_t t33 = 283721;

	t33 = ((x149%x150)^(x151/x152));

	if (t33 != 83) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 974277251402LLU;
	volatile uint64_t t34 = 29828LLU;

	t34 = ((x153%x154)^(x155/x156));

	if (t34 != 974277251402LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = 924;
	static int32_t x158 = INT32_MIN;
	uint8_t x159 = 25U;
	int32_t x160 = -2;
	int32_t t35 = -5;

	t35 = ((x157%x158)^(x159/x160));

	if (t35 != -920) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 0;
	static volatile int8_t x162 = -1;
	uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	uint64_t t36 = 1431807LLU;

	t36 = ((x161%x162)^(x163/x164));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -58;
	int16_t x167 = INT16_MIN;
	uint16_t x168 = 19U;

	t37 = ((x165%x166)^(x167/x168));

	if (t37 != 1723LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MAX;
	volatile int8_t x171 = 0;
	int16_t x172 = 61;
	volatile int32_t t38 = 100396605;

	t38 = ((x169%x170)^(x171/x172));

	if (t38 != -8) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x174 = 1057751225LLU;
	volatile int32_t x175 = INT32_MIN;
	uint8_t x176 = 5U;
	volatile uint64_t t39 = 1131440075211974988LLU;

	t39 = ((x173%x174)^(x175/x176));

	if (t39 != 18446744073129139023LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 101U;
	int64_t x178 = INT64_MAX;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = -1645856;
	volatile int64_t t40 = 123430779303978963LL;

	t40 = ((x177%x178)^(x179/x180));

	if (t40 != 101LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	uint64_t x182 = 4124390797LLU;
	volatile uint8_t x183 = UINT8_MAX;
	static uint64_t x184 = UINT64_MAX;

	t41 = ((x181%x182)^(x183/x184));

	if (t41 != 2255501100LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MAX;
	uint32_t x187 = UINT32_MAX;
	static volatile uint16_t x188 = UINT16_MAX;
	uint32_t t42 = 3582U;

	t42 = ((x185%x186)^(x187/x188));

	if (t42 != 65536U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x189 = INT16_MAX;
	static int16_t x190 = -67;
	int64_t x191 = -3LL;
	int64_t x192 = INT64_MAX;
	static volatile int64_t t43 = -96036LL;

	t43 = ((x189%x190)^(x191/x192));

	if (t43 != 4LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = 538LL;
	uint32_t x194 = UINT32_MAX;
	volatile int16_t x195 = -453;
	int16_t x196 = INT16_MIN;
	volatile int64_t t44 = -14803804879LL;

	t44 = ((x193%x194)^(x195/x196));

	if (t44 != 538LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x197 = 293005001839230LLU;
	static int32_t x198 = -1;
	static int8_t x199 = INT8_MIN;

	t45 = ((x197%x198)^(x199/x200));

	if (t45 != 293005075452771LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	uint16_t x203 = 860U;
	volatile int32_t t46 = 814042;

	t46 = ((x201%x202)^(x203/x204));

	if (t46 != 33) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MIN;
	static volatile uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	static uint32_t x208 = 784103U;
	static volatile uint32_t t47 = 30145493U;

	t47 = ((x205%x206)^(x207/x208));

	if (t47 != 4294940005U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = 0;
	int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int16_t x212 = -1;

	t48 = ((x209%x210)^(x211/x212));

	if (t48 != 128) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x213 = UINT16_MAX;
	static volatile int16_t x214 = INT16_MIN;
	static uint32_t x215 = UINT32_MAX;
	static int64_t x216 = 59042377998949444LL;
	int64_t t49 = 1021915601439561LL;

	t49 = ((x213%x214)^(x215/x216));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	static uint8_t x219 = 7U;
	uint64_t x220 = 5704235759309289729LLU;

	t50 = ((x217%x218)^(x219/x220));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = INT64_MIN;
	volatile uint16_t x224 = 82U;
	int64_t t51 = 226670006LL;

	t51 = ((x221%x222)^(x223/x224));

	if (t51 != -112480146790903909LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -6;
	int32_t x226 = -1;
	int32_t x227 = 17882092;
	static int8_t x228 = -26;
	volatile int32_t t52 = 47470467;

	t52 = ((x225%x226)^(x227/x228));

	if (t52 != -687772) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x229 = -1LL;
	int16_t x230 = INT16_MIN;
	volatile int16_t x231 = -5;
	int8_t x232 = 5;
	volatile int64_t t53 = -1231280898828624308LL;

	t53 = ((x229%x230)^(x231/x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x233 = INT32_MIN;
	int64_t x234 = -9LL;

	t54 = ((x233%x234)^(x235/x236));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x237 = UINT64_MAX;
	uint64_t x238 = 28929LLU;
	int8_t x239 = -1;
	static uint32_t x240 = 187338U;
	volatile uint64_t t55 = 1827709693169LLU;

	t55 = ((x237%x238)^(x239/x240));

	if (t55 != 22542LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x242 = -136;
	int64_t x243 = 2032388409259408LL;
	volatile int64_t t56 = 179971225042LL;

	t56 = ((x241%x242)^(x243/x244));

	if (t56 != 946407LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	uint16_t x247 = 19151U;
	uint16_t x248 = 201U;
	volatile int32_t t57 = 2536;

	t57 = ((x245%x246)^(x247/x248));

	if (t57 != -96) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x249 = -9052;
	int8_t x251 = -1;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t58 = 1;

	t58 = ((x249%x250)^(x251/x252));

	if (t58 != -9052) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MIN;

	t59 = ((x253%x254)^(x255/x256));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = INT8_MAX;
	volatile uint32_t x258 = 13036U;
	int8_t x259 = INT8_MIN;
	volatile int8_t x260 = INT8_MAX;
	volatile uint32_t t60 = 924766274U;

	t60 = ((x257%x258)^(x259/x260));

	if (t60 != 4294967168U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x262 = 42;
	int64_t x263 = -1LL;
	uint8_t x264 = 14U;
	volatile int64_t t61 = 64636789692LL;

	t61 = ((x261%x262)^(x263/x264));

	if (t61 != -8LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x265 = 1;
	int64_t x267 = -1LL;
	volatile int16_t x268 = INT16_MIN;
	static int64_t t62 = -6519883095239LL;

	t62 = ((x265%x266)^(x267/x268));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x269 = INT8_MIN;
	int32_t x270 = 226;
	int8_t x271 = -23;
	uint8_t x272 = 3U;
	volatile int32_t t63 = 1909;

	t63 = ((x269%x270)^(x271/x272));

	if (t63 != 121) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x273 = 159028327U;
	int32_t x274 = INT32_MAX;
	static volatile uint64_t x275 = UINT64_MAX;
	int64_t x276 = -1LL;
	static uint64_t t64 = 16300237171116LLU;

	t64 = ((x273%x274)^(x275/x276));

	if (t64 != 159028326LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = -1;
	int16_t x278 = INT16_MIN;
	static int64_t x279 = 4639LL;
	volatile uint32_t x280 = 12492847U;
	int64_t t65 = 2121619LL;

	t65 = ((x277%x278)^(x279/x280));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x282 = 10U;
	int32_t x283 = -1;
	uint8_t x284 = 11U;

	t66 = ((x281%x282)^(x283/x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MIN;
	int32_t x287 = 7232189;
	int16_t x288 = -1;
	int64_t t67 = -98296049LL;

	t67 = ((x285%x286)^(x287/x288));

	if (t67 != -7232189LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x289 = UINT8_MAX;
	static uint16_t x290 = 5123U;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	volatile int64_t t68 = 316347262927LL;

	t68 = ((x289%x290)^(x291/x292));

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x294 = INT64_MIN;
	static int64_t x295 = INT64_MIN;
	volatile uint64_t x296 = 188LLU;
	uint64_t t69 = 833LLU;

	t69 = ((x293%x294)^(x295/x296));

	if (t69 != 18397683584151813433LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = 2962LL;
	int16_t x298 = INT16_MIN;
	uint64_t x300 = 513139020030884911LLU;
	uint64_t t70 = 175320814LLU;

	t70 = ((x297%x298)^(x299/x300));

	if (t70 != 2993LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x301 = INT16_MAX;
	int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	static int64_t x304 = 24573LL;
	volatile int64_t t71 = -271LL;

	t71 = ((x301%x302)^(x303/x304));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x305 = INT64_MAX;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 20U;
	int64_t t72 = -87498020710LL;

	t72 = ((x305%x306)^(x307/x308));

	if (t72 != -461168601842738715LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x310 = INT16_MIN;
	int32_t x311 = -1;
	uint32_t x312 = 36U;
	volatile uint32_t t73 = 7868U;

	t73 = ((x309%x310)^(x311/x312));

	if (t73 != 119304647U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x314 = UINT32_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t74 = 4034783135LLU;

	t74 = ((x313%x314)^(x315/x316));

	if (t74 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x317 = 13297609U;
	uint16_t x318 = 19482U;
	int16_t x319 = INT16_MIN;
	volatile int32_t x320 = -1;
	volatile uint32_t t75 = 33221U;

	t75 = ((x317%x318)^(x319/x320));

	if (t75 != 43653U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x321 = 1200U;
	static volatile int16_t x322 = 9;
	int16_t x323 = INT16_MAX;

	t76 = ((x321%x322)^(x323/x324));

	if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x325 = INT8_MIN;
	int32_t x326 = -8027;
	volatile int8_t x327 = -1;
	uint8_t x328 = 17U;
	static int32_t t77 = -103125;

	t77 = ((x325%x326)^(x327/x328));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x329 = 131874766649LL;
	volatile int16_t x330 = INT16_MIN;
	uint16_t x331 = 2519U;
	int8_t x332 = 25;
	int64_t t78 = 2110753605851673726LL;

	t78 = ((x329%x330)^(x331/x332));

	if (t78 != 16221LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x334 = -6480447LL;
	int32_t x335 = INT32_MIN;
	uint32_t x336 = 2473U;
	int64_t t79 = -15449825884319LL;

	t79 = ((x333%x334)^(x335/x336));

	if (t79 != -868372LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = 8;
	static int32_t x338 = -5809;
	int64_t x339 = -1LL;

	t80 = ((x337%x338)^(x339/x340));

	if (t80 != 8LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -910128;
	int32_t x344 = INT32_MIN;

	t81 = ((x341%x342)^(x343/x344));

	if (t81 != 16805LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x345 = INT32_MIN;
	uint16_t x347 = UINT16_MAX;
	uint64_t x348 = 1097244LLU;
	static uint64_t t82 = 184LLU;

	t82 = ((x345%x346)^(x347/x348));

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = -1LL;
	static int8_t x351 = 0;
	int32_t x352 = -87143063;
	volatile int64_t t83 = 678637046752LL;

	t83 = ((x349%x350)^(x351/x352));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = 84U;
	int16_t x355 = -1;
	volatile int64_t t84 = 1LL;

	t84 = ((x353%x354)^(x355/x356));

	if (t84 != 84LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x357 = 1U;
	int16_t x358 = INT16_MAX;
	uint64_t x360 = 6565182450LLU;
	uint64_t t85 = 3900387091879660159LLU;

	t85 = ((x357%x358)^(x359/x360));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x361 = -14786;
	int8_t x362 = INT8_MAX;
	uint32_t x364 = 672081867U;

	t86 = ((x361%x362)^(x363/x364));

	if (t86 != -13723584067LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int64_t x367 = -314291968LL;
	volatile int64_t t87 = -732961466277653LL;

	t87 = ((x365%x366)^(x367/x368));

	if (t87 != -104787371LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x369 = 19763U;
	static int16_t x371 = INT16_MAX;
	int64_t x372 = -1LL;

	t88 = ((x369%x370)^(x371/x372));

	if (t88 != -13006LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x374 = 1LLU;
	volatile uint8_t x375 = 7U;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t89 = 8168125LLU;

	t89 = ((x373%x374)^(x375/x376));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x378 = INT32_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	volatile int64_t x380 = -1LL;
	uint64_t t90 = 13287803LLU;

	t90 = ((x377%x378)^(x379/x380));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x382 = -2;
	static uint32_t x383 = 973054285U;
	static volatile uint32_t t91 = 31143024U;

	t91 = ((x381%x382)^(x383/x384));

	if (t91 != 29696U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x386 = UINT64_MAX;
	uint32_t x387 = 561U;
	static uint64_t t92 = 420LLU;

	t92 = ((x385%x386)^(x387/x388));

	if (t92 != 18446744073707170776LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 17382539953405LLU;
	volatile int16_t x390 = -1;
	volatile int64_t x392 = INT64_MIN;
	static uint64_t t93 = 1971LLU;

	t93 = ((x389%x390)^(x391/x392));

	if (t93 != 17382539953405LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x394 = INT16_MIN;
	static uint16_t x395 = UINT16_MAX;
	volatile int16_t x396 = INT16_MAX;

	t94 = ((x393%x394)^(x395/x396));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -1LL;
	uint32_t x398 = UINT32_MAX;
	uint64_t x399 = UINT64_MAX;
	int64_t x400 = INT64_MAX;
	uint64_t t95 = 1080653665948750269LLU;

	t95 = ((x397%x398)^(x399/x400));

	if (t95 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int8_t x403 = -1;
	int32_t x404 = INT32_MIN;
	static volatile int64_t t96 = 6334052914LL;

	t96 = ((x401%x402)^(x403/x404));

	if (t96 != -128LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	static uint16_t x406 = 589U;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = -860828625472090714LL;
	static int64_t t97 = -10919746081124LL;

	t97 = ((x405%x406)^(x407/x408));

	if (t97 != -383LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = INT64_MAX;
	uint8_t x410 = UINT8_MAX;
	volatile uint16_t x411 = 911U;
	int32_t x412 = 38;
	int64_t t98 = 2LL;

	t98 = ((x409%x410)^(x411/x412));

	if (t98 != 104LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	int8_t x414 = -1;
	volatile int16_t x415 = INT16_MIN;
	uint16_t x416 = 14U;

	t99 = ((x413%x414)^(x415/x416));

	if (t99 != -2340) { NG(); } else { ; }
	
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

