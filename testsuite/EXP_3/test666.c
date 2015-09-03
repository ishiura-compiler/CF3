#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = 177953793549922824LL;
volatile int64_t x8 = INT64_MIN;
volatile int16_t x11 = INT16_MIN;
int32_t t2 = -154;
uint64_t x13 = 388686213LLU;
volatile int64_t x18 = INT64_MIN;
int64_t x23 = INT64_MIN;
int32_t x27 = INT32_MIN;
static int16_t x30 = INT16_MIN;
volatile uint32_t x50 = UINT32_MAX;
static uint8_t x57 = 47U;
int32_t t13 = 203;
static int32_t x73 = -1;
int16_t x78 = -1;
int64_t x83 = -1LL;
int32_t x90 = INT32_MIN;
uint64_t x91 = 1340250852LLU;
int8_t x93 = -1;
int32_t x96 = -1;
int16_t x102 = -1;
uint32_t x112 = UINT32_MAX;
int64_t x115 = -1LL;
int16_t x122 = 0;
volatile uint64_t x131 = UINT64_MAX;
volatile int16_t x137 = -1;
int8_t x139 = -1;
int64_t t33 = 31272464542735LL;
uint64_t x149 = 5641677LLU;
volatile int8_t x152 = -3;
int64_t x153 = -1LL;
volatile int32_t x154 = INT32_MIN;
uint32_t t39 = 19319166U;
volatile int64_t t41 = 7835615664LL;
uint32_t x188 = UINT32_MAX;
uint32_t x194 = 66U;
static int8_t x195 = INT8_MIN;
volatile uint16_t x196 = 5364U;
int8_t x207 = INT8_MAX;
static volatile uint64_t t49 = 5383LLU;
int8_t x210 = -2;
int8_t x211 = INT8_MIN;
int32_t t50 = 201;
int32_t x221 = INT32_MIN;
volatile int8_t x225 = -1;
int32_t x229 = -109524930;
int64_t x235 = -13501LL;
uint64_t t60 = 8811328472829906039LLU;
uint8_t x266 = 5U;
int64_t x268 = INT64_MAX;
volatile uint8_t x271 = 32U;
uint64_t t64 = 1258742830LLU;
static int8_t x287 = INT8_MIN;
volatile uint32_t t65 = 317118U;
uint8_t x301 = 1U;
int64_t x302 = -1LL;
int64_t x304 = INT64_MIN;
int64_t t67 = -6971572591159820LL;
volatile int64_t t68 = -98396LL;
static uint64_t x317 = UINT64_MAX;
volatile uint64_t x331 = 141839351502LLU;
int64_t x334 = INT64_MAX;
uint32_t x339 = UINT32_MAX;
int16_t x341 = INT16_MIN;
static int8_t x342 = -1;
uint64_t x344 = 2458LLU;
volatile uint64_t t75 = 252594LLU;
uint32_t x346 = UINT32_MAX;
int16_t x347 = -1;
static int64_t t76 = 2LL;
int64_t x349 = 368311691031LL;
uint16_t x364 = 29450U;
int32_t x379 = -1;
volatile int8_t x386 = INT8_MIN;
int64_t x403 = -3245353550LL;
static int64_t x412 = INT64_MAX;
static volatile int64_t t92 = -98201884LL;
uint8_t x417 = 0U;
int64_t x421 = -57854935402423LL;
uint32_t x424 = 29672502U;
static int64_t x425 = INT64_MIN;
uint32_t x428 = UINT32_MAX;
uint64_t x444 = 3782465245715440LLU;


void f0(void) {
	int8_t x1 = 13;
	int64_t x2 = INT64_MIN;
	volatile int8_t x3 = 0;
	static uint8_t x4 = 2U;

	t0 = ((x1^x2)*(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile uint16_t x6 = 80U;
	static volatile int64_t x7 = INT64_MAX;
	static int64_t t1 = -354LL;

	t1 = ((x5^x6)*(x7/x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int8_t x10 = 58;
	int32_t x12 = INT32_MAX;

	t2 = ((x9^x10)*(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	uint64_t t3 = 265173325727382259LLU;

	t3 = ((x13^x14)*(x15/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x19 = -1;
	volatile uint16_t x20 = 8074U;
	volatile int64_t t4 = 202023037LL;

	t4 = ((x17^x18)*(x19/x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 1;
	int16_t x22 = -1;
	int32_t x24 = INT32_MIN;
	volatile int64_t t5 = 14LL;

	t5 = ((x21^x22)*(x23/x24));

	if (t5 != -8589934592LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = 13312991U;
	int32_t x26 = -1;
	int16_t x28 = 42;
	uint32_t t6 = 9U;

	t6 = ((x25^x26)*(x27/x28));

	if (t6 != 4294333344U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = UINT64_MAX;
	static int8_t x31 = INT8_MAX;
	uint16_t x32 = 1U;
	uint64_t t7 = 2287943138262303LLU;

	t7 = ((x29^x30)*(x31/x32));

	if (t7 != 4161409LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 5;
	volatile int16_t x34 = 3355;
	int64_t x35 = -1LL;
	uint16_t x36 = 1U;
	int64_t t8 = -4LL;

	t8 = ((x33^x34)*(x35/x36));

	if (t8 != -3358LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -307;
	int8_t x38 = INT8_MAX;
	uint32_t x39 = 2377U;
	int64_t x40 = INT64_MAX;
	static volatile int64_t t9 = -6LL;

	t9 = ((x37^x38)*(x39/x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 3295LLU;
	uint64_t t10 = 41445544759488054LLU;

	t10 = ((x41^x42)*(x43/x44));

	if (t10 != 7275127160744968192LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1980328256922LL;
	uint16_t x51 = UINT16_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile int64_t t11 = 128681314043107LL;

	t11 = ((x49^x50)*(x51/x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 1871914U;
	uint32_t x54 = 49U;
	int32_t x55 = INT32_MIN;
	int16_t x56 = -3;
	volatile uint32_t t12 = 2350738U;

	t12 = ((x53^x54)*(x55/x56));

	if (t12 != 714579950U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x58 = INT16_MAX;
	int16_t x59 = INT16_MIN;
	int16_t x60 = -1;

	t13 = ((x57^x58)*(x59/x60));

	if (t13 != 1072168960) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 15;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = -1;
	uint8_t x64 = UINT8_MAX;
	volatile uint32_t t14 = 966367U;

	t14 = ((x61^x62)*(x63/x64));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x65 = 22U;
	int8_t x66 = 13;
	volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 12LLU;
	uint64_t t15 = 0LLU;

	t15 = ((x65^x66)*(x67/x68));

	if (t15 != 4611686018427387598LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	int32_t x70 = -1;
	static uint8_t x71 = 1U;
	uint8_t x72 = 20U;
	volatile int64_t t16 = -3176869LL;

	t16 = ((x69^x70)*(x71/x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = -26246;
	int32_t x75 = INT32_MAX;
	int64_t x76 = 16827382LL;
	volatile int64_t t17 = -64313290549783741LL;

	t17 = ((x73^x74)*(x75/x76));

	if (t17 != 3333115LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	int16_t x79 = INT16_MAX;
	uint64_t x80 = 39352996673334342LLU;
	uint64_t t18 = 52493802163LLU;

	t18 = ((x77^x78)*(x79/x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = UINT32_MAX;
	uint16_t x82 = 21U;
	uint16_t x84 = UINT16_MAX;
	static volatile int64_t t19 = -9LL;

	t19 = ((x81^x82)*(x83/x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = 0;
	int32_t x86 = INT32_MIN;
	static volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = -10772;
	uint64_t t20 = 50129LLU;

	t20 = ((x85^x86)*(x87/x88));

	if (t20 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -1;
	int16_t x92 = INT16_MIN;
	uint64_t t21 = 88447830494LLU;

	t21 = ((x89^x90)*(x91/x92));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MAX;
	int64_t x95 = -22753LL;
	int64_t t22 = 662112059039273LL;

	t22 = ((x93^x94)*(x95/x96));

	if (t22 != -2912384LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MAX;
	uint8_t x98 = 1U;
	int16_t x99 = -11;
	int32_t x100 = INT32_MAX;
	static int32_t t23 = -507979;

	t23 = ((x97^x98)*(x99/x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = UINT16_MAX;
	static int8_t x103 = -1;
	volatile uint32_t x104 = 597429525U;
	uint32_t t24 = 6U;

	t24 = ((x101^x102)*(x103/x104));

	if (t24 != 4294508544U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	uint8_t x106 = 5U;
	static uint64_t x107 = 269271562662258535LLU;
	uint16_t x108 = 3474U;
	uint64_t t25 = 28093959827459554LLU;

	t25 = ((x105^x106)*(x107/x108));

	if (t25 != 7612009036845987242LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	volatile int16_t x110 = INT16_MIN;
	uint32_t x111 = UINT32_MAX;
	uint32_t t26 = 7823068U;

	t26 = ((x109^x110)*(x111/x112));

	if (t26 != 4294934655U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 666LLU;
	uint8_t x114 = 1U;
	int32_t x116 = INT32_MIN;
	uint64_t t27 = 43018723747844LLU;

	t27 = ((x113^x114)*(x115/x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x117 = -1LL;
	volatile uint16_t x118 = 89U;
	static uint32_t x119 = 2089373U;
	int8_t x120 = 1;
	int64_t t28 = 20382289371LL;

	t28 = ((x117^x118)*(x119/x120));

	if (t28 != -188043570LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = 143U;
	int8_t x123 = INT8_MIN;
	volatile int8_t x124 = INT8_MIN;
	static volatile int32_t t29 = -57078983;

	t29 = ((x121^x122)*(x123/x124));

	if (t29 != 143) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MIN;
	int16_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = -1LL;
	int64_t t30 = 14LL;

	t30 = ((x125^x126)*(x127/x128));

	if (t30 != -8355585LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = 1;
	uint64_t x130 = 6409LLU;
	int32_t x132 = -14705980;
	volatile uint64_t t31 = 452768LLU;

	t31 = ((x129^x130)*(x131/x132));

	if (t31 != 6408LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = -9;
	uint16_t x134 = 106U;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t32 = 1298851;

	t32 = ((x133^x134)*(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = 536398106148LL;
	int16_t x140 = INT16_MIN;

	t33 = ((x137^x138)*(x139/x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = 0;
	uint8_t x142 = 12U;
	static uint8_t x143 = 1U;
	static int16_t x144 = -1;
	static int32_t t34 = -16;

	t34 = ((x141^x142)*(x143/x144));

	if (t34 != -12) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = 0LL;
	static uint16_t x146 = 28U;
	int32_t x147 = -38198083;
	uint16_t x148 = 9333U;
	volatile int64_t t35 = -436326549LL;

	t35 = ((x145^x146)*(x147/x148));

	if (t35 != -114576LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x150 = -1;
	static uint64_t x151 = 11989028LLU;
	volatile uint64_t t36 = 886487119370046156LLU;

	t36 = ((x149^x150)*(x151/x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x155 = -1;
	volatile int16_t x156 = -3;
	int64_t t37 = -132793898710LL;

	t37 = ((x153^x154)*(x155/x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;
	static uint64_t t38 = 1583710552LLU;

	t38 = ((x157^x158)*(x159/x160));

	if (t38 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = 5U;
	static uint8_t x163 = 65U;
	int8_t x164 = -61;

	t39 = ((x161^x162)*(x163/x164));

	if (t39 != 2147483643U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 1U;
	int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = 6213U;
	int64_t x168 = 634256LL;
	volatile int64_t t40 = 202287277553855LL;

	t40 = ((x165^x166)*(x167/x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x169 = INT8_MIN;
	static int16_t x170 = INT16_MIN;
	static uint32_t x171 = UINT32_MAX;
	int64_t x172 = -11LL;

	t41 = ((x169^x170)*(x171/x172));

	if (t41 != -12744339310080LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	static uint64_t x176 = 200LLU;
	static uint64_t t42 = 9765892846704LLU;

	t42 = ((x173^x174)*(x175/x176));

	if (t42 != 3689348464272551552LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MIN;
	static uint32_t x178 = 4050U;
	static int8_t x179 = 52;
	int64_t x180 = 1742641LL;
	int64_t t43 = -12294652016766LL;

	t43 = ((x177^x178)*(x179/x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 1811LLU;
	volatile int16_t x182 = -3;
	uint8_t x183 = 21U;
	volatile uint16_t x184 = 31U;
	uint64_t t44 = 234076206650086299LLU;

	t44 = ((x181^x182)*(x183/x184));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x185 = 1;
	uint8_t x186 = 104U;
	int64_t x187 = INT64_MIN;
	static int64_t t45 = 42232819361411066LL;

	t45 = ((x185^x186)*(x187/x188));

	if (t45 != -225485783040LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 114U;
	static int32_t x190 = -1196;
	int16_t x191 = INT16_MAX;
	volatile int16_t x192 = 3;
	static int32_t t46 = 182;

	t46 = ((x189^x190)*(x191/x192));

	if (t46 != -13565124) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MIN;
	int64_t t47 = -9551090LL;

	t47 = ((x193^x194)*(x195/x196));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = 108546LL;
	static uint32_t x200 = UINT32_MAX;
	static uint64_t t48 = 101010064236LLU;

	t48 = ((x197^x198)*(x199/x200));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x205 = 79U;
	volatile int32_t x206 = -2030;
	static uint64_t x208 = 796485600LLU;

	t49 = ((x205^x206)*(x207/x208));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MAX;
	int8_t x212 = INT8_MIN;

	t50 = ((x209^x210)*(x211/x212));

	if (t50 != -2147483647) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = -515607395;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MIN;
	volatile int16_t x216 = INT16_MAX;
	static volatile uint64_t t51 = 2LLU;

	t51 = ((x213^x214)*(x215/x216));

	if (t51 != 18446744073193944222LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x222 = -1;
	static uint64_t x223 = 114726531748LLU;
	int16_t x224 = 353;
	uint64_t t52 = 3LLU;

	t52 = ((x221^x222)*(x223/x224));

	if (t52 != 697941503206544333LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x226 = 52859538925433LLU;
	int8_t x227 = -55;
	static int8_t x228 = INT8_MIN;
	static uint64_t t53 = 677956675553LLU;

	t53 = ((x225^x226)*(x227/x228));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x230 = UINT32_MAX;
	static int8_t x231 = INT8_MAX;
	int16_t x232 = -24;
	uint32_t t54 = 113U;

	t54 = ((x229^x230)*(x231/x232));

	if (t54 != 3747342651U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x233 = UINT16_MAX;
	static int64_t x234 = INT64_MIN;
	static uint32_t x236 = 9142U;
	volatile int64_t t55 = 218522699817943967LL;

	t55 = ((x233^x234)*(x235/x236));

	if (t55 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x237 = 44U;
	volatile int64_t x238 = -1LL;
	static volatile int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;
	int64_t t56 = 8299766624LL;

	t56 = ((x237^x238)*(x239/x240));

	if (t56 != -754974720LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x241 = 1138966358965832244LLU;
	static volatile uint8_t x242 = UINT8_MAX;
	uint8_t x243 = 35U;
	uint64_t x244 = UINT64_MAX;
	uint64_t t57 = 755363917956LLU;

	t57 = ((x241^x242)*(x243/x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MAX;
	static uint64_t x246 = 5215391538364LLU;
	int16_t x247 = INT16_MAX;
	static uint8_t x248 = UINT8_MAX;
	uint64_t t58 = 23654791755LLU;

	t58 = ((x245^x246)*(x247/x248));

	if (t58 != 667570115027328LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = INT8_MIN;
	static volatile int8_t x250 = INT8_MIN;
	int16_t x251 = 5152;
	volatile int64_t x252 = 190860LL;
	volatile int64_t t59 = -652693326038367026LL;

	t59 = ((x249^x250)*(x251/x252));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	static volatile uint64_t x255 = 18425870713860157LLU;
	static int64_t x256 = INT64_MIN;

	t60 = ((x253^x254)*(x255/x256));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x257 = 4608760048839681892LLU;
	uint64_t x258 = 728LLU;
	uint8_t x259 = 1U;
	static volatile int16_t x260 = INT16_MAX;
	uint64_t t61 = 5247839728510697130LLU;

	t61 = ((x257^x258)*(x259/x260));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = -1LL;
	int64_t x267 = INT64_MIN;
	static int64_t t62 = -1146558LL;

	t62 = ((x265^x266)*(x267/x268));

	if (t62 != 6LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x269 = UINT32_MAX;
	static uint32_t x270 = UINT32_MAX;
	int8_t x272 = 7;
	uint32_t t63 = 11U;

	t63 = ((x269^x270)*(x271/x272));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int32_t x282 = 78191;
	int16_t x283 = -1;
	volatile int32_t x284 = INT32_MAX;

	t64 = ((x281^x282)*(x283/x284));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = 1270U;
	static uint32_t x286 = UINT32_MAX;
	int16_t x288 = INT16_MIN;

	t65 = ((x285^x286)*(x287/x288));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	static int32_t x290 = -1;
	static uint16_t x291 = UINT16_MAX;
	volatile uint64_t x292 = 52599450LLU;
	static uint64_t t66 = 5LLU;

	t66 = ((x289^x290)*(x291/x292));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x303 = UINT16_MAX;

	t67 = ((x301^x302)*(x303/x304));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x305 = 3358691LL;
	static volatile int32_t x306 = INT32_MIN;
	uint8_t x307 = UINT8_MAX;
	int8_t x308 = -1;

	t68 = ((x305^x306)*(x307/x308));

	if (t68 != 546751864035LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	static int8_t x310 = INT8_MIN;
	volatile uint16_t x311 = 27U;
	int64_t x312 = -2377264LL;
	volatile int64_t t69 = 4LL;

	t69 = ((x309^x310)*(x311/x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x318 = 3U;
	uint16_t x319 = UINT16_MAX;
	static volatile uint32_t x320 = 403U;
	uint64_t t70 = 1621815866512076LLU;

	t70 = ((x317^x318)*(x319/x320));

	if (t70 != 18446744073709550968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	uint16_t x327 = 4U;
	uint8_t x328 = UINT8_MAX;
	static volatile int32_t t71 = -937964580;

	t71 = ((x325^x326)*(x327/x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = INT16_MAX;
	uint8_t x330 = 0U;
	int32_t x332 = -1;
	uint64_t t72 = 2738LLU;

	t72 = ((x329^x330)*(x331/x332));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x333 = -163;
	static uint32_t x335 = 2U;
	int32_t x336 = 935746;
	volatile int64_t t73 = 174235393616LL;

	t73 = ((x333^x334)*(x335/x336));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;
	int16_t x340 = INT16_MIN;
	static volatile uint32_t t74 = 2019708538U;

	t74 = ((x337^x338)*(x339/x340));

	if (t74 != 4294967167U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x343 = 8101;

	t75 = ((x341^x342)*(x343/x344));

	if (t75 != 98301LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = -1LL;
	int16_t x348 = INT16_MIN;

	t76 = ((x345^x346)*(x347/x348));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x350 = INT16_MIN;
	int32_t x351 = -1;
	int16_t x352 = INT16_MIN;
	static int64_t t77 = 2627426240LL;

	t77 = ((x349^x350)*(x351/x352));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x353 = -1;
	volatile int16_t x354 = -1;
	int16_t x355 = -1;
	uint8_t x356 = UINT8_MAX;
	int32_t t78 = 13545;

	t78 = ((x353^x354)*(x355/x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x357 = 2438;
	int32_t x358 = INT32_MIN;
	uint64_t x359 = UINT64_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile uint64_t t79 = 1063806001019LLU;

	t79 = ((x357^x358)*(x359/x360));

	if (t79 != 18446744071562070406LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = -736425519;
	static int64_t x362 = -57253114971097757LL;
	volatile uint16_t x363 = 9U;
	static volatile int64_t t80 = -915373539317914063LL;

	t80 = ((x361^x362)*(x363/x364));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	static volatile int8_t x366 = -1;
	volatile int64_t x367 = -138445388000116LL;
	uint32_t x368 = UINT32_MAX;
	static volatile int64_t t81 = 3826771730813LL;

	t81 = ((x365^x366)*(x367/x368));

	if (t81 != -1056211478LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x369 = UINT64_MAX;
	int8_t x370 = INT8_MIN;
	int16_t x371 = -4;
	int32_t x372 = -8187049;
	static volatile uint64_t t82 = 484LLU;

	t82 = ((x369^x370)*(x371/x372));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x373 = -3097973;
	int16_t x374 = INT16_MAX;
	uint32_t x375 = 3167936U;
	uint8_t x376 = 3U;
	volatile uint32_t t83 = 235U;

	t83 = ((x373^x374)*(x375/x376));

	if (t83 != 28126216U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x377 = INT16_MAX;
	int64_t x378 = INT64_MIN;
	uint8_t x380 = 116U;
	volatile int64_t t84 = 617314LL;

	t84 = ((x377^x378)*(x379/x380));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = -2336;
	volatile int8_t x382 = INT8_MIN;
	static int8_t x383 = -1;
	static uint8_t x384 = 14U;
	volatile int32_t t85 = 1581048;

	t85 = ((x381^x382)*(x383/x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x385 = 8U;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = 3;
	volatile uint32_t t86 = 73302097U;

	t86 = ((x385^x386)*(x387/x388));

	if (t86 != 40U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x389 = 26589U;
	int64_t x390 = 108630963064750LL;
	uint64_t x391 = 156008853126LLU;
	int16_t x392 = -1;
	volatile uint64_t t87 = 2679121714239291LLU;

	t87 = ((x389^x390)*(x391/x392));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x393 = INT8_MIN;
	volatile int8_t x394 = INT8_MAX;
	int64_t x395 = -1LL;
	int8_t x396 = INT8_MIN;
	volatile int64_t t88 = 230727641330618LL;

	t88 = ((x393^x394)*(x395/x396));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x397 = 2679009974017LLU;
	static int32_t x398 = INT32_MAX;
	int16_t x399 = -15;
	uint16_t x400 = 844U;
	volatile uint64_t t89 = 2507404279728206785LLU;

	t89 = ((x397^x398)*(x399/x400));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MIN;
	uint16_t x402 = 431U;
	int8_t x404 = INT8_MIN;
	static int64_t t90 = 10862358LL;

	t90 = ((x401^x402)*(x403/x404));

	if (t90 != -54447985268380308LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = INT64_MAX;
	int16_t x406 = 9;
	int8_t x407 = 1;
	int8_t x408 = INT8_MIN;
	int64_t t91 = 697351LL;

	t91 = ((x405^x406)*(x407/x408));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MIN;
	uint8_t x411 = UINT8_MAX;

	t92 = ((x409^x410)*(x411/x412));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = 7267;
	uint16_t x414 = 12U;
	int16_t x415 = -1217;
	int16_t x416 = 9743;
	static int32_t t93 = 883712;

	t93 = ((x413^x414)*(x415/x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x418 = INT8_MIN;
	uint8_t x419 = 7U;
	static volatile int8_t x420 = INT8_MIN;
	static int32_t t94 = -29;

	t94 = ((x417^x418)*(x419/x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = 285;
	int64_t t95 = -457052166205LL;

	t95 = ((x421^x422)*(x423/x424));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x426 = -1029;
	static int32_t x427 = -1;
	volatile int64_t t96 = 764260585015LL;

	t96 = ((x425^x426)*(x427/x428));

	if (t96 != 9223372036854774779LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x433 = 41U;
	uint32_t x434 = 5885807U;
	uint32_t x435 = UINT32_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t97 = 7772135465LLU;

	t97 = ((x433^x434)*(x435/x436));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x437 = 9;
	volatile int16_t x438 = 52;
	volatile uint64_t x439 = 33322885278224205LLU;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t98 = 270148232686150LLU;

	t98 = ((x437^x438)*(x439/x440));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x441 = -45;
	int8_t x442 = -1;
	uint64_t x443 = 195399173921753570LLU;
	uint64_t t99 = 35014164LLU;

	t99 = ((x441^x442)*(x443/x444));

	if (t99 != 2244LLU) { NG(); } else { ; }
	
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

