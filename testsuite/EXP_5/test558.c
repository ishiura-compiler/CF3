#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
static volatile int8_t x7 = INT8_MIN;
int8_t x8 = -2;
int8_t x12 = 27;
int64_t x14 = INT64_MIN;
int64_t x19 = -1LL;
int64_t t4 = -3211729335566389419LL;
static int8_t x23 = INT8_MAX;
int64_t t5 = INT64_MAX;
uint8_t x28 = UINT8_MAX;
int16_t x31 = 5;
volatile int8_t x32 = 1;
static int64_t x40 = 109976LL;
int64_t x42 = INT64_MAX;
volatile int64_t x44 = INT64_MAX;
int8_t x46 = INT8_MAX;
volatile uint64_t x47 = UINT64_MAX;
volatile int8_t x48 = INT8_MIN;
static volatile int16_t x51 = 3;
int64_t t12 = 3LL;
uint32_t x58 = 737U;
int32_t x63 = -1;
volatile uint16_t x68 = 1791U;
volatile int64_t x71 = 3297425LL;
int8_t x74 = -1;
int64_t x77 = -1LL;
volatile int64_t t19 = -12033LL;
int64_t x82 = -185593890181LL;
int16_t x91 = INT16_MIN;
int64_t x94 = -1LL;
static uint64_t x98 = 353724563LLU;
static uint64_t x103 = 6857400159042445737LLU;
volatile int32_t x110 = -1;
uint64_t x116 = 34638912880LLU;
uint32_t x118 = 1455U;
volatile uint16_t x120 = UINT16_MAX;
volatile uint32_t t28 = 668463355U;
uint8_t x121 = 13U;
int64_t x127 = INT64_MIN;
uint64_t x130 = 0LLU;
int16_t x136 = 1;
volatile uint64_t t32 = 48360069272913LLU;
uint32_t x142 = 3U;
uint32_t x151 = 18681U;
int32_t x152 = 6;
int8_t x153 = INT8_MAX;
int64_t x156 = INT64_MAX;
int64_t t39 = -3195206063LL;
volatile int64_t t40 = -6961638980413173LL;
static volatile uint32_t x170 = UINT32_MAX;
static int32_t x171 = INT32_MIN;
static volatile int16_t x175 = -4549;
int32_t t42 = -6494312;
uint32_t x177 = UINT32_MAX;
static uint64_t x178 = 1585517892679371LLU;
int8_t x179 = INT8_MIN;
volatile uint64_t t43 = 567LLU;
static volatile int32_t t44 = 5;
int64_t t46 = 3058499745LL;
volatile uint64_t t47 = 11127690564LLU;
uint16_t x197 = UINT16_MAX;
int32_t t50 = 89574;
volatile int8_t x215 = INT8_MIN;
int8_t x226 = INT8_MIN;
int8_t x229 = INT8_MIN;
int8_t x233 = INT8_MIN;
int64_t x236 = 53700662492LL;
static int8_t x240 = -58;
int32_t x241 = INT32_MIN;
volatile int32_t t59 = INT32_MIN;
static uint32_t x247 = 109U;
int16_t x251 = -1;
uint64_t x252 = 492LLU;
static volatile int32_t x259 = INT32_MAX;
int16_t x260 = -80;
static volatile int32_t x267 = -19;
int16_t x272 = INT16_MAX;
static int64_t x274 = -1LL;
volatile uint16_t x292 = 6572U;
uint16_t x294 = UINT16_MAX;
volatile int32_t t69 = 84843;
static uint32_t x306 = 1U;
uint64_t x309 = 2937LLU;
static int64_t x312 = INT64_MIN;
int16_t x317 = 12583;
static uint64_t t74 = 83307521500660833LLU;
volatile uint8_t x322 = 1U;
static int64_t x324 = INT64_MIN;
static int8_t x326 = 1;
int16_t x330 = INT16_MAX;
volatile int8_t x342 = 1;
static uint64_t x367 = UINT64_MAX;
int16_t x370 = 1246;
int64_t x371 = -2776977375LL;
int32_t x374 = -8666951;
int64_t x376 = INT64_MIN;
volatile int32_t x383 = INT32_MIN;
int16_t x384 = INT16_MAX;
uint64_t x387 = 262576453801493857LLU;
uint64_t t91 = 78895660421023LLU;
int32_t x393 = INT32_MIN;
int64_t x396 = INT64_MAX;
int16_t x397 = 49;
uint8_t x406 = 0U;
int32_t x407 = INT32_MIN;
int64_t x408 = -1LL;
volatile uint32_t t97 = 1043741508U;
volatile int32_t t98 = INT32_MIN;
int8_t x418 = INT8_MIN;
static volatile int32_t t99 = 1049061241;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	int16_t x3 = -1;
	int16_t x4 = INT16_MAX;
	static volatile int32_t t0 = 62842419;

	t0 = (x1|((x2/x3)/x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int32_t x6 = INT32_MAX;
	int32_t t1 = -1770;

	t1 = (x5|((x6/x7)/x8));

	if (t1 != 8388607) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	volatile uint16_t x10 = 815U;
	uint8_t x11 = 4U;
	static volatile int64_t t2 = INT64_MAX;

	t2 = (x9|((x10/x11)/x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int64_t x15 = INT64_MAX;
	int16_t x16 = 10;
	volatile int64_t t3 = INT64_MIN;

	t3 = (x13|((x14/x15)/x16));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 1U;
	uint32_t x18 = 1U;
	uint32_t x20 = 15U;

	t4 = (x17|((x18/x19)/x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int32_t x22 = INT32_MIN;
	int32_t x24 = INT32_MIN;

	t5 = (x21|((x22/x23)/x24));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -56028;
	int64_t x26 = -1039856616LL;
	uint8_t x27 = 1U;
	int64_t t6 = 27LL;

	t6 = (x25|((x26/x27)/x28));

	if (t6 != -6153LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 7862;
	static uint8_t x30 = 10U;
	int32_t t7 = 90845;

	t7 = (x29|((x30/x31)/x32));

	if (t7 != 7862) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	static int16_t x34 = INT16_MIN;
	uint32_t x35 = 23360324U;
	int64_t x36 = -1LL;
	int64_t t8 = -95644584017LL;

	t8 = (x33|((x34/x35)/x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x37 = -1;
	uint64_t x38 = 6047674764LLU;
	int16_t x39 = 321;
	uint64_t t9 = UINT64_MAX;

	t9 = (x37|((x38/x39)/x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = 69255570849462LLU;
	int16_t x43 = INT16_MIN;
	uint64_t t10 = 62324723819052LLU;

	t10 = (x41|((x42/x43)/x44));

	if (t10 != 69255570849462LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 8;
	static volatile uint64_t t11 = 6526504274545LLU;

	t11 = (x45|((x46/x47)/x48));

	if (t11 != 8LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint32_t x50 = UINT32_MAX;
	static uint32_t x52 = 213471U;

	t12 = (x49|((x50/x51)/x52));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	volatile int32_t x54 = INT32_MAX;
	static int32_t x55 = -1;
	uint64_t x56 = 3206805721668180752LLU;
	uint64_t t13 = 5391313113LLU;

	t13 = (x53|((x54/x55)/x56));

	if (t13 != 2147483647LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	uint8_t x59 = 1U;
	static int8_t x60 = 7;
	volatile uint32_t t14 = 838677U;

	t14 = (x57|((x58/x59)/x60));

	if (t14 != 4294967273U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 167606529U;
	static int32_t x62 = -61980;
	int64_t x64 = INT64_MIN;
	static int64_t t15 = 138310596047673LL;

	t15 = (x61|((x62/x63)/x64));

	if (t15 != 167606529LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	int64_t x66 = 25194LL;
	static volatile int16_t x67 = 3381;
	static volatile int64_t t16 = INT64_MIN;

	t16 = (x65|((x66/x67)/x68));

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int32_t x70 = INT32_MIN;
	uint32_t x72 = 48U;
	static volatile int64_t t17 = -7398988LL;

	t17 = (x69|((x70/x71)/x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	static uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MAX;
	volatile uint32_t t18 = 16326780U;

	t18 = (x73|((x74/x75)/x76));

	if (t18 != 65535U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = 35;
	volatile int64_t x79 = -1LL;
	int16_t x80 = 3793;

	t19 = (x77|((x78/x79)/x80));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 823277237477908LLU;
	uint64_t x83 = 23721530612LLU;
	static int16_t x84 = -9430;
	uint64_t t20 = 458560540LLU;

	t20 = (x81|((x82/x83)/x84));

	if (t20 != 823277237477908LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -48;
	static int64_t x90 = INT64_MIN;
	static int32_t x92 = -246;
	int64_t t21 = 1964720699LL;

	t21 = (x89|((x90/x91)/x92));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 3U;
	uint8_t x95 = 11U;
	uint64_t x96 = UINT64_MAX;
	uint64_t t22 = 127424959312284LLU;

	t22 = (x93|((x94/x95)/x96));

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t23 = 28060770LLU;

	t23 = (x97|((x98/x99)/x100));

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	uint32_t x102 = 160206760U;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t24 = 143723LLU;

	t24 = (x101|((x102/x103)/x104));

	if (t24 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 16U;
	int8_t x106 = -1;
	static volatile uint64_t x107 = 144LLU;
	volatile uint32_t x108 = 3350U;
	uint64_t t25 = 529LLU;

	t25 = (x105|((x106/x107)/x108));

	if (t25 != 38239519224123LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -1901088392LL;
	uint64_t x111 = 23179041885LLU;
	static uint16_t x112 = 984U;
	static volatile uint64_t t26 = 0LLU;

	t26 = (x109|((x110/x111)/x112));

	if (t26 != 18446744071808481145LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x113 = 1U;
	int64_t x114 = -1LL;
	uint16_t x115 = UINT16_MAX;
	uint64_t t27 = 16672LLU;

	t27 = (x113|((x114/x115)/x116));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x117 = INT8_MIN;
	volatile int8_t x119 = 9;

	t28 = (x117|((x118/x119)/x120));

	if (t28 != 4294967168U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x122 = UINT64_MAX;
	uint64_t x123 = 609143969485913LLU;
	static int64_t x124 = INT64_MAX;
	uint64_t t29 = 190097216006LLU;

	t29 = (x121|((x122/x123)/x124));

	if (t29 != 13LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	static volatile uint16_t x126 = 4758U;
	int16_t x128 = INT16_MIN;
	volatile int64_t t30 = -201101828LL;

	t30 = (x125|((x126/x127)/x128));

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = 2;
	uint16_t x131 = UINT16_MAX;
	volatile int32_t x132 = INT32_MIN;
	static volatile uint64_t t31 = 37305LLU;

	t31 = (x129|((x130/x131)/x132));

	if (t31 != 2LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	volatile uint64_t x134 = 51LLU;
	int64_t x135 = -5851360LL;

	t32 = (x133|((x134/x135)/x136));

	if (t32 != 255LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 147043409732848360LLU;
	volatile int8_t x138 = INT8_MIN;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t33 = 1874288402461904LLU;

	t33 = (x137|((x138/x139)/x140));

	if (t33 != 147043409732848360LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 97U;
	uint16_t x143 = 19732U;
	int32_t x144 = INT32_MIN;
	uint32_t t34 = 923U;

	t34 = (x141|((x142/x143)/x144));

	if (t34 != 97U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = UINT16_MAX;
	static uint16_t x146 = 921U;
	static int64_t x147 = INT64_MAX;
	volatile int8_t x148 = -1;
	volatile int64_t t35 = 3956356821648521700LL;

	t35 = (x145|((x146/x147)/x148));

	if (t35 != 65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 6721959U;
	int64_t x150 = 7208418LL;
	volatile int64_t t36 = 111LL;

	t36 = (x149|((x150/x151)/x152));

	if (t36 != 6722023LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x154 = -1LL;
	int8_t x155 = -4;
	int64_t t37 = 47219848LL;

	t37 = (x153|((x154/x155)/x156));

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x157 = -2;
	int16_t x158 = 245;
	uint8_t x159 = 35U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t38 = 12253700090705872LL;

	t38 = (x157|((x158/x159)/x160));

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = -1;
	int8_t x162 = 0;
	int64_t x163 = -1LL;
	int16_t x164 = -1;

	t39 = (x161|((x162/x163)/x164));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = 364604458779582LL;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;

	t40 = (x165|((x166/x167)/x168));

	if (t40 != -36LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 230546201775LLU;
	uint8_t x172 = 21U;
	volatile uint64_t t41 = 449LLU;

	t41 = (x169|((x170/x171)/x172));

	if (t41 != 230546201775LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = INT16_MAX;
	volatile int32_t x174 = 0;
	volatile uint8_t x176 = UINT8_MAX;

	t42 = (x173|((x174/x175)/x176));

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x180 = 4013U;

	t43 = (x177|((x178/x179)/x180));

	if (t43 != 4294967295LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = INT16_MIN;
	static volatile int16_t x182 = -252;
	int16_t x183 = INT16_MIN;
	uint8_t x184 = 1U;

	t44 = (x181|((x182/x183)/x184));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x185 = 2211749737878844126LL;
	int64_t x186 = 1289LL;
	uint64_t x187 = UINT64_MAX;
	static uint16_t x188 = 1287U;
	uint64_t t45 = 2218703275580269647LLU;

	t45 = (x185|((x186/x187)/x188));

	if (t45 != 2211749737878844126LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 240U;
	uint16_t x190 = UINT16_MAX;
	static int64_t x191 = 910596061961490657LL;
	int64_t x192 = INT64_MAX;

	t46 = (x189|((x190/x191)/x192));

	if (t46 != 240LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x193 = INT16_MIN;
	static volatile int32_t x194 = 1015;
	volatile int8_t x195 = -1;
	uint64_t x196 = 901LLU;

	t47 = (x193|((x194/x195)/x196));

	if (t47 != 18446744073709534994LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x198 = 3;
	int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MAX;
	int32_t t48 = -1065;

	t48 = (x197|((x198/x199)/x200));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = UINT8_MAX;
	int32_t x202 = INT32_MAX;
	uint16_t x203 = 360U;
	static volatile int32_t x204 = 3;
	static volatile int32_t t49 = -3354261;

	t49 = (x201|((x202/x203)/x204));

	if (t49 != 1988607) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 49;
	int32_t x206 = INT32_MIN;
	static uint16_t x207 = 15212U;
	uint8_t x208 = 20U;

	t50 = (x205|((x206/x207)/x208));

	if (t50 != -7041) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = INT32_MAX;
	uint8_t x210 = 1U;
	int8_t x211 = INT8_MIN;
	volatile int64_t x212 = 3714LL;
	int64_t t51 = -67LL;

	t51 = (x209|((x210/x211)/x212));

	if (t51 != 2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = INT32_MIN;
	uint64_t x214 = UINT64_MAX;
	static int16_t x216 = INT16_MAX;
	volatile uint64_t t52 = 534139967443604LLU;

	t52 = (x213|((x214/x215)/x216));

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = UINT64_MAX;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = INT16_MIN;
	static volatile int32_t x220 = 42175;
	static uint64_t t53 = UINT64_MAX;

	t53 = (x217|((x218/x219)/x220));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MAX;
	int64_t x222 = 4142043134977LL;
	uint16_t x223 = 211U;
	static int16_t x224 = INT16_MAX;
	volatile int64_t t54 = 1718634318950442LL;

	t54 = (x221|((x222/x223)/x224));

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int32_t x227 = -26;
	static uint32_t x228 = UINT32_MAX;
	volatile uint32_t t55 = 44755U;

	t55 = (x225|((x226/x227)/x228));

	if (t55 != 4294967168U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = UINT64_MAX;
	uint64_t t56 = 331LLU;

	t56 = (x229|((x230/x231)/x232));

	if (t56 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x234 = 0;
	int32_t x235 = -1;
	int64_t t57 = -102817936LL;

	t57 = (x233|((x234/x235)/x236));

	if (t57 != -128LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = INT32_MAX;
	volatile int16_t x238 = INT16_MAX;
	int64_t x239 = INT64_MIN;
	volatile int64_t t58 = 4263676380671004LL;

	t58 = (x237|((x238/x239)/x240));

	if (t58 != 2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x242 = INT8_MIN;
	static int32_t x243 = -1;
	static uint8_t x244 = UINT8_MAX;

	t59 = (x241|((x242/x243)/x244));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	static int64_t x246 = -4285731273532LL;
	int64_t x248 = -4LL;
	volatile int64_t t60 = 1005611714158832652LL;

	t60 = (x245|((x246/x247)/x248));

	if (t60 != -20220LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x249 = 7755U;
	uint32_t x250 = 963U;
	static uint64_t t61 = 21850257LLU;

	t61 = (x249|((x250/x251)/x252));

	if (t61 != 7755LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = INT32_MIN;
	static int8_t x258 = -3;
	int32_t t62 = INT32_MIN;

	t62 = (x257|((x258/x259)/x260));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = -37;
	int64_t x266 = -1LL;
	int8_t x268 = INT8_MIN;
	volatile int64_t t63 = -63326322475446505LL;

	t63 = (x265|((x266/x267)/x268));

	if (t63 != -37LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = 5U;
	uint64_t x270 = 45696918896LLU;
	uint64_t x271 = UINT64_MAX;
	uint64_t t64 = 1831224421136LLU;

	t64 = (x269|((x270/x271)/x272));

	if (t64 != 5LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	static volatile int8_t x275 = 15;
	int64_t x276 = 49522277239LL;
	int64_t t65 = 6731264269161517LL;

	t65 = (x273|((x274/x275)/x276));

	if (t65 != 65535LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x277 = 24756U;
	int16_t x278 = INT16_MAX;
	static int16_t x279 = INT16_MIN;
	int8_t x280 = -1;
	int32_t t66 = -5136680;

	t66 = (x277|((x278/x279)/x280));

	if (t66 != 24756) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1669;
	volatile int32_t x287 = -1905419;
	int32_t x288 = -8218;
	static volatile uint64_t t67 = UINT64_MAX;

	t67 = (x285|((x286/x287)/x288));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = UINT64_MAX;
	int64_t x290 = INT64_MAX;
	int16_t x291 = -14;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = (x289|((x290/x291)/x292));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x293 = INT8_MIN;
	volatile int8_t x295 = INT8_MAX;
	int32_t x296 = INT32_MIN;

	t69 = (x293|((x294/x295)/x296));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x297 = 12688U;
	static int64_t x298 = INT64_MAX;
	uint64_t x299 = 795480LLU;
	int64_t x300 = INT64_MIN;
	volatile uint64_t t70 = 13LLU;

	t70 = (x297|((x298/x299)/x300));

	if (t70 != 12688LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x301 = 0;
	int16_t x302 = -4;
	static volatile int64_t x303 = 134395059172586318LL;
	static volatile uint32_t x304 = 44U;
	static int64_t t71 = -135LL;

	t71 = (x301|((x302/x303)/x304));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x307 = -7;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x305|((x306/x307)/x308));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x310 = 2348U;
	uint32_t x311 = 298621U;
	uint64_t t73 = 646591759080155759LLU;

	t73 = (x309|((x310/x311)/x312));

	if (t73 != 2937LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = 195;
	uint64_t x319 = 158638010224376LLU;
	static int8_t x320 = INT8_MIN;

	t74 = (x317|((x318/x319)/x320));

	if (t74 != 12583LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x323 = INT8_MIN;
	int64_t t75 = -475065386867088LL;

	t75 = (x321|((x322/x323)/x324));

	if (t75 != 255LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x325 = 378U;
	int32_t x327 = -83735;
	uint16_t x328 = 8U;
	volatile int32_t t76 = 29318230;

	t76 = (x325|((x326/x327)/x328));

	if (t76 != 378) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x329 = 2112701720875328878LLU;
	volatile int64_t x331 = -854LL;
	static int64_t x332 = INT64_MAX;
	uint64_t t77 = 18LLU;

	t77 = (x329|((x330/x331)/x332));

	if (t77 != 2112701720875328878LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x333 = -1;
	volatile uint32_t x334 = UINT32_MAX;
	int32_t x335 = 1968;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = (x333|((x334/x335)/x336));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x337 = 10791476470073281LLU;
	int16_t x338 = INT16_MAX;
	int64_t x339 = 40925664314987032LL;
	static int32_t x340 = INT32_MIN;
	volatile uint64_t t79 = 202955893177918LLU;

	t79 = (x337|((x338/x339)/x340));

	if (t79 != 10791476470073281LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x341 = 0U;
	static int64_t x343 = -76842LL;
	static volatile int32_t x344 = INT32_MAX;
	int64_t t80 = -148065411561963LL;

	t80 = (x341|((x342/x343)/x344));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = INT8_MIN;
	uint8_t x346 = 17U;
	int64_t x347 = -1LL;
	volatile int64_t x348 = 1LL;
	int64_t t81 = -4043LL;

	t81 = (x345|((x346/x347)/x348));

	if (t81 != -17LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = 2LL;
	uint8_t x350 = 22U;
	volatile int32_t x351 = -1;
	int16_t x352 = INT16_MAX;
	static volatile int64_t t82 = -539667891200LL;

	t82 = (x349|((x350/x351)/x352));

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x353 = -1;
	int32_t x354 = INT32_MAX;
	volatile uint16_t x355 = 59U;
	static int32_t x356 = -236094884;
	volatile int32_t t83 = -51195;

	t83 = (x353|((x354/x355)/x356));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = 33640234LLU;
	static uint16_t x359 = UINT16_MAX;
	uint8_t x360 = 2U;
	volatile uint64_t t84 = 1289616LLU;

	t84 = (x357|((x358/x359)/x360));

	if (t84 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -1LL;
	int8_t x362 = -15;
	int64_t x363 = 2LL;
	int64_t x364 = -15LL;
	static volatile int64_t t85 = 1832227290LL;

	t85 = (x361|((x362/x363)/x364));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -1;
	volatile int32_t x366 = INT32_MAX;
	int32_t x368 = INT32_MIN;
	static volatile uint64_t t86 = UINT64_MAX;

	t86 = (x365|((x366/x367)/x368));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x369 = INT8_MIN;
	int16_t x372 = -9;
	int64_t t87 = -3997222225530LL;

	t87 = (x369|((x370/x371)/x372));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x373 = -32;
	uint64_t x375 = 241758714LLU;
	volatile uint64_t t88 = 191LLU;

	t88 = (x373|((x374/x375)/x376));

	if (t88 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;
	static int16_t x378 = INT16_MIN;
	volatile int64_t x379 = INT64_MIN;
	static int16_t x380 = -1;
	int64_t t89 = -2367LL;

	t89 = (x377|((x378/x379)/x380));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = -1;
	volatile uint16_t x382 = 5532U;
	int32_t t90 = 9077;

	t90 = (x381|((x382/x383)/x384));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = -1;
	int8_t x388 = INT8_MAX;

	t91 = (x385|((x386/x387)/x388));

	if (t91 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = INT64_MAX;
	volatile uint64_t x390 = 462509747952932LLU;
	int8_t x391 = -16;
	int32_t x392 = 47868;
	volatile uint64_t t92 = 8086LLU;

	t92 = (x389|((x390/x391)/x392));

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = -1;
	uint64_t t93 = 1715361600LLU;

	t93 = (x393|((x394/x395)/x396));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x398 = -8666625;
	int32_t x399 = 2033372;
	static int16_t x400 = -1;
	static volatile int32_t t94 = -3745701;

	t94 = (x397|((x398/x399)/x400));

	if (t94 != 53) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x401 = 13461241LLU;
	uint32_t x402 = 187805865U;
	volatile int64_t x403 = INT64_MIN;
	int64_t x404 = -14978LL;
	volatile uint64_t t95 = 228401817LLU;

	t95 = (x401|((x402/x403)/x404));

	if (t95 != 13461241LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x405 = -2;
	volatile int64_t t96 = 575753813977LL;

	t96 = (x405|((x406/x407)/x408));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = INT16_MIN;
	volatile int16_t x410 = 7;
	int32_t x411 = -2281;
	uint32_t x412 = UINT32_MAX;

	t97 = (x409|((x410/x411)/x412));

	if (t97 != 4294934528U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = 907U;
	int32_t x415 = INT32_MAX;
	volatile int8_t x416 = -1;

	t98 = (x413|((x414/x415)/x416));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MIN;
	uint16_t x419 = 4U;
	volatile uint16_t x420 = UINT16_MAX;

	t99 = (x417|((x418/x419)/x420));

	if (t99 != -32768) { NG(); } else { ; }
	
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

