#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = -118244737;
volatile uint8_t x8 = 33U;
volatile int64_t t2 = -2664906477655927898LL;
int32_t x14 = INT32_MAX;
uint32_t x16 = 1180869U;
volatile int32_t t3 = 2;
int32_t x22 = -1;
int64_t x25 = -1458081382473360527LL;
uint16_t x27 = 22U;
static uint16_t x30 = UINT16_MAX;
int8_t x33 = INT8_MIN;
int8_t x48 = INT8_MIN;
int8_t x51 = 17;
static uint16_t x56 = UINT16_MAX;
int32_t t13 = 59525640;
static volatile int8_t x61 = INT8_MAX;
uint16_t x69 = 13U;
int8_t x76 = 0;
static uint32_t x78 = 277734U;
uint64_t x91 = 2367748820LLU;
int8_t x92 = -12;
static volatile int32_t t22 = 1899;
int32_t x95 = INT32_MIN;
uint16_t x96 = 11288U;
int64_t x100 = INT64_MIN;
volatile int64_t x108 = -6854LL;
int32_t x113 = INT32_MAX;
static int8_t x124 = -1;
volatile int8_t x128 = INT8_MAX;
volatile int8_t x130 = INT8_MIN;
uint16_t x133 = 894U;
int64_t x136 = INT64_MIN;
static uint32_t x144 = 6335777U;
uint8_t x148 = UINT8_MAX;
volatile int64_t x165 = -1LL;
uint64_t x194 = 112897036277473474LLU;
int64_t x195 = -12LL;
volatile uint64_t t46 = 760326690228150LLU;
int32_t x198 = 1;
uint32_t t47 = 4530U;
volatile uint32_t x210 = 21561U;
uint8_t x215 = 0U;
volatile int8_t x222 = INT8_MAX;
static int64_t x232 = INT64_MIN;
int64_t x234 = INT64_MIN;
uint16_t x237 = 38U;
volatile int64_t t56 = 177430867098282LL;
int8_t x241 = 6;
int64_t x243 = 0LL;
volatile int8_t x244 = INT8_MIN;
static uint16_t x247 = 16218U;
int64_t x248 = -1LL;
static int16_t x249 = -14;
volatile int16_t x250 = 122;
int64_t x251 = INT64_MAX;
uint8_t x254 = 4U;
int32_t t60 = 599;
static volatile int32_t t62 = 923632;
int8_t x265 = -1;
uint8_t x271 = 4U;
static uint64_t x277 = UINT64_MAX;
int64_t x278 = INT64_MIN;
uint32_t x279 = 31232830U;
int64_t x294 = INT64_MAX;
int64_t x296 = -1326LL;
int64_t x297 = 1436719266LL;
int8_t x299 = INT8_MAX;
int8_t x300 = -42;
int32_t x302 = -3866566;
static int32_t x304 = INT32_MIN;
int64_t x305 = 7590541266978LL;
int8_t x306 = 40;
int32_t x314 = -1;
uint16_t x320 = 564U;
uint16_t x325 = 2U;
static int8_t x326 = INT8_MIN;
volatile int8_t x327 = 30;
int8_t x328 = 25;
static volatile int64_t x330 = INT64_MAX;
int8_t x331 = 0;
uint32_t x336 = UINT32_MAX;
volatile int64_t t79 = -118373370833692784LL;
volatile int64_t x341 = -325621653906407786LL;
int8_t x343 = -1;
volatile int64_t t81 = -13510LL;
int8_t x349 = INT8_MIN;
uint32_t x350 = 475491009U;
int32_t x352 = INT32_MIN;
volatile int64_t t84 = -5807247LL;
volatile int64_t x369 = INT64_MIN;
uint8_t x371 = 10U;
int32_t x372 = INT32_MAX;
static int32_t x374 = -1;
static int32_t x378 = -346319;
int32_t x382 = INT32_MIN;
volatile int64_t t89 = -2967116834LL;
int8_t x390 = 1;
int8_t x397 = INT8_MAX;
static uint16_t x399 = 5899U;
int32_t t93 = -100903;
int32_t x405 = -1;
volatile int32_t x408 = -1;
static volatile int64_t x409 = -5732305613319760LL;
int64_t t96 = 377809LL;
static uint64_t x420 = 798410420063513LLU;
static uint16_t x421 = 546U;
uint32_t x422 = UINT32_MAX;
static int64_t x424 = -1LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -90;
	int8_t x4 = -1;
	int64_t t0 = -44439LL;

	t0 = ((x1/x2)+(x3<=x4));

	if (t0 != 281474976710657LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = -6811;
	volatile int32_t t1 = -81;

	t1 = ((x5/x6)+(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MIN;
	volatile int8_t x11 = INT8_MIN;
	int64_t x12 = 97LL;

	t2 = ((x9/x10)+(x11<=x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint64_t x15 = 999816411LLU;

	t3 = ((x13/x14)+(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 44U;
	int8_t x18 = INT8_MIN;
	int32_t x19 = INT32_MIN;
	int8_t x20 = 1;
	int32_t t4 = 432686;

	t4 = ((x17/x18)+(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	int32_t x23 = -1;
	static int16_t x24 = INT16_MIN;
	int32_t t5 = 962972;

	t5 = ((x21/x22)+(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = UINT64_MAX;
	int64_t x28 = -58996912627LL;
	uint64_t t6 = 1LLU;

	t6 = ((x25/x26)+(x27<=x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 0;
	uint32_t x31 = 131001U;
	static volatile int16_t x32 = 14964;
	int32_t t7 = 361869604;

	t7 = ((x29/x30)+(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x34 = UINT16_MAX;
	int32_t x35 = -14259;
	int64_t x36 = -1267144916561LL;
	volatile int32_t t8 = -533538999;

	t8 = ((x33/x34)+(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 31U;
	int64_t x38 = INT64_MIN;
	int8_t x39 = -1;
	int32_t x40 = -1;
	int64_t t9 = 130852LL;

	t9 = ((x37/x38)+(x39<=x40));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 500906710997685570LLU;
	volatile uint8_t x42 = 3U;
	uint8_t x43 = 119U;
	uint64_t x44 = 2885979958398669638LLU;
	uint64_t t10 = 271LLU;

	t10 = ((x41/x42)+(x43<=x44));

	if (t10 != 166968903665895191LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 15151127U;
	static uint16_t x46 = 7U;
	volatile int8_t x47 = INT8_MIN;
	static volatile uint32_t t11 = 10368U;

	t11 = ((x45/x46)+(x47<=x48));

	if (t11 != 2164447U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static int64_t x50 = -62901162345060LL;
	int8_t x52 = INT8_MIN;
	int64_t t12 = -7258344016LL;

	t12 = ((x49/x50)+(x51<=x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MIN;
	int8_t x54 = 4;
	volatile int8_t x55 = INT8_MIN;

	t13 = ((x53/x54)+(x55<=x56));

	if (t13 != -8191) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 399897U;
	volatile int64_t x58 = 51710LL;
	uint64_t x59 = 122150LLU;
	static uint8_t x60 = 63U;
	volatile int64_t t14 = -134LL;

	t14 = ((x57/x58)+(x59<=x60));

	if (t14 != 7LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MIN;
	static int64_t x64 = 297053170LL;
	uint32_t t15 = 4856U;

	t15 = ((x61/x62)+(x63<=x64));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 109U;
	static int16_t x66 = INT16_MIN;
	volatile int32_t x67 = INT32_MIN;
	static uint32_t x68 = 883787588U;
	uint32_t t16 = 6821252U;

	t16 = ((x65/x66)+(x67<=x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = 5U;
	uint32_t t17 = 53130050U;

	t17 = ((x69/x70)+(x71<=x72));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 13357123U;
	int32_t x74 = INT32_MIN;
	uint8_t x75 = 11U;
	uint32_t t18 = 24U;

	t18 = ((x73/x74)+(x75<=x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static uint32_t x79 = 2882U;
	uint64_t x80 = UINT64_MAX;
	static uint32_t t19 = 242887288U;

	t19 = ((x77/x78)+(x79<=x80));

	if (t19 != 15465U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MIN;
	static int8_t x84 = 25;
	int32_t t20 = 1;

	t20 = ((x81/x82)+(x83<=x84));

	if (t20 != 258) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 2308;
	volatile int8_t x86 = -1;
	volatile int8_t x87 = INT8_MIN;
	uint8_t x88 = 111U;
	int32_t t21 = 11059343;

	t21 = ((x85/x86)+(x87<=x88));

	if (t21 != -2307) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -44;
	int8_t x90 = INT8_MAX;

	t22 = ((x89/x90)+(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	uint64_t t23 = 3880433179LLU;

	t23 = ((x93/x94)+(x95<=x96));

	if (t23 != 2LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x97 = 1339;
	int8_t x98 = INT8_MIN;
	uint8_t x99 = 23U;
	int32_t t24 = -1;

	t24 = ((x97/x98)+(x99<=x100));

	if (t24 != -10) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x106 = 897U;
	int64_t x107 = 187LL;
	static int32_t t25 = -3995;

	t25 = ((x105/x106)+(x107<=x108));

	if (t25 != -2394073) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = INT32_MIN;
	static int64_t x111 = 1950171099384679LL;
	static volatile int32_t x112 = INT32_MIN;
	int32_t t26 = 0;

	t26 = ((x109/x110)+(x111<=x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MAX;
	int32_t t27 = 214757;

	t27 = ((x113/x114)+(x115<=x116));

	if (t27 != -16777214) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -4482888998045129LL;
	int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MAX;
	uint8_t x120 = 109U;
	static volatile int64_t t28 = -1504197333516257LL;

	t28 = ((x117/x118)+(x119<=x120));

	if (t28 != -35298338567284LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x121 = 122U;
	uint64_t x122 = UINT64_MAX;
	static int64_t x123 = 850818863LL;
	uint64_t t29 = 1LLU;

	t29 = ((x121/x122)+(x123<=x124));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 15514782U;
	uint16_t x126 = 123U;
	int64_t x127 = -1LL;
	volatile uint32_t t30 = 6354U;

	t30 = ((x125/x126)+(x127<=x128));

	if (t30 != 126137U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = 53;
	volatile int8_t x131 = 1;
	uint64_t x132 = 441912743553LLU;
	int32_t t31 = 7757218;

	t31 = ((x129/x130)+(x131<=x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = 6U;
	uint32_t x135 = 1492475U;
	static volatile int32_t t32 = 462210407;

	t32 = ((x133/x134)+(x135<=x136));

	if (t32 != 149) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 3;
	int64_t x138 = 12LL;
	int8_t x139 = INT8_MIN;
	int64_t x140 = -3824457151583352111LL;
	int64_t t33 = 483138645LL;

	t33 = ((x137/x138)+(x139<=x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int16_t x142 = -22;
	static uint64_t x143 = 118023111369652LLU;
	int32_t t34 = 246;

	t34 = ((x141/x142)+(x143<=x144));

	if (t34 != -97612893) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 57752LL;
	int16_t x146 = 4252;
	uint64_t x147 = UINT64_MAX;
	int64_t t35 = 11LL;

	t35 = ((x145/x146)+(x147<=x148));

	if (t35 != 13LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MIN;
	uint16_t x150 = 25531U;
	int8_t x151 = INT8_MIN;
	int64_t x152 = -1LL;
	volatile int32_t t36 = 93083857;

	t36 = ((x149/x150)+(x151<=x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 4U;
	uint32_t x154 = 382U;
	uint64_t x155 = 31LLU;
	int64_t x156 = INT64_MIN;
	uint32_t t37 = 16106U;

	t37 = ((x153/x154)+(x155<=x156));

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = -2;
	static uint8_t x159 = 0U;
	volatile int8_t x160 = INT8_MIN;
	static int32_t t38 = -214016146;

	t38 = ((x157/x158)+(x159<=x160));

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x161 = INT16_MIN;
	volatile int32_t x162 = INT32_MAX;
	volatile uint16_t x163 = 1393U;
	uint32_t x164 = 27541378U;
	volatile int32_t t39 = 2;

	t39 = ((x161/x162)+(x163<=x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x166 = INT64_MIN;
	int16_t x167 = 31;
	volatile uint8_t x168 = 45U;
	int64_t t40 = 445310856857LL;

	t40 = ((x165/x166)+(x167<=x168));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = 7;
	int16_t x170 = INT16_MIN;
	volatile uint16_t x171 = UINT16_MAX;
	uint64_t x172 = 729779198123429630LLU;
	int32_t t41 = 3482;

	t41 = ((x169/x170)+(x171<=x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = 1;
	uint16_t x178 = UINT16_MAX;
	static int64_t x179 = 604LL;
	int8_t x180 = 61;
	int32_t t42 = 1;

	t42 = ((x177/x178)+(x179<=x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = INT64_MAX;
	int16_t x182 = 288;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	int64_t t43 = -1560206203618210356LL;

	t43 = ((x181/x182)+(x183<=x184));

	if (t43 != 32025597350190193LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -1;
	int8_t x186 = INT8_MIN;
	int32_t x187 = INT32_MIN;
	int32_t x188 = 28535480;
	int32_t t44 = 564829795;

	t44 = ((x185/x186)+(x187<=x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = -3141885LL;
	int16_t x190 = INT16_MIN;
	volatile uint64_t x191 = 155481134740LLU;
	static int8_t x192 = INT8_MIN;
	int64_t t45 = -12805LL;

	t45 = ((x189/x190)+(x191<=x192));

	if (t45 != 96LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 1765368LLU;
	volatile int8_t x196 = INT8_MAX;

	t46 = ((x193/x194)+(x195<=x196));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x199 = 129691LLU;
	int32_t x200 = -1;

	t47 = ((x197/x198)+(x199<=x200));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = -132133906619LL;
	int16_t x203 = INT16_MIN;
	static volatile int64_t x204 = INT64_MIN;
	int64_t t48 = -1816320226948342LL;

	t48 = ((x201/x202)+(x203<=x204));

	if (t48 != 69803219LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 25156U;
	int32_t x206 = 415172667;
	static volatile int32_t x207 = -1;
	int8_t x208 = INT8_MIN;
	int32_t t49 = 1;

	t49 = ((x205/x206)+(x207<=x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 539U;
	int32_t x211 = INT32_MIN;
	static volatile int16_t x212 = -196;
	volatile uint32_t t50 = 450741U;

	t50 = ((x209/x210)+(x211<=x212));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 12;
	static int32_t x214 = -3287;
	uint16_t x216 = UINT16_MAX;
	int32_t t51 = 225574039;

	t51 = ((x213/x214)+(x215<=x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = -1LL;
	int64_t x218 = -47775927435738485LL;
	int64_t x219 = -1LL;
	static uint16_t x220 = 5U;
	int64_t t52 = 486026746778854924LL;

	t52 = ((x217/x218)+(x219<=x220));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = INT16_MIN;
	uint8_t x223 = 1U;
	int8_t x224 = 3;
	static volatile int32_t t53 = 0;

	t53 = ((x221/x222)+(x223<=x224));

	if (t53 != -257) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x229 = INT8_MIN;
	int32_t x230 = -1;
	static volatile int64_t x231 = -149236947552995LL;
	int32_t t54 = -1;

	t54 = ((x229/x230)+(x231<=x232));

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	int64_t x235 = INT64_MAX;
	volatile uint8_t x236 = 14U;
	int64_t t55 = 5297446LL;

	t55 = ((x233/x234)+(x235<=x236));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x238 = -3404LL;
	static volatile int64_t x239 = INT64_MAX;
	int16_t x240 = INT16_MIN;

	t56 = ((x237/x238)+(x239<=x240));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x242 = 2526851;
	volatile int32_t t57 = 57;

	t57 = ((x241/x242)+(x243<=x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x245 = INT32_MAX;
	int16_t x246 = INT16_MIN;
	int32_t t58 = -240;

	t58 = ((x245/x246)+(x247<=x248));

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x252 = -1;
	volatile int32_t t59 = 0;

	t59 = ((x249/x250)+(x251<=x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	static int64_t x255 = -166558223159LL;
	static int32_t x256 = -531145911;

	t60 = ((x253/x254)+(x255<=x256));

	if (t60 != 16384) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 27U;
	int8_t x258 = INT8_MAX;
	volatile uint16_t x259 = 3047U;
	static int64_t x260 = INT64_MAX;
	volatile int32_t t61 = -792;

	t61 = ((x257/x258)+(x259<=x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = INT8_MIN;
	int8_t x262 = 19;
	uint8_t x263 = 3U;
	int32_t x264 = INT32_MAX;

	t62 = ((x261/x262)+(x263<=x264));

	if (t62 != -5) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x266 = 1U;
	uint64_t x267 = UINT64_MAX;
	int32_t x268 = -1;
	volatile int32_t t63 = -42;

	t63 = ((x265/x266)+(x267<=x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = -8417;
	int32_t x270 = INT32_MIN;
	static volatile uint16_t x272 = 0U;
	static int32_t t64 = 252819;

	t64 = ((x269/x270)+(x271<=x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MIN;
	uint16_t x274 = 274U;
	static int32_t x275 = INT32_MIN;
	volatile uint64_t x276 = UINT64_MAX;
	int32_t t65 = 11027;

	t65 = ((x273/x274)+(x275<=x276));

	if (t65 != -7837530) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x280 = INT8_MIN;
	static uint64_t t66 = 15929762LLU;

	t66 = ((x277/x278)+(x279<=x280));

	if (t66 != 2LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x281 = INT8_MIN;
	static volatile int8_t x282 = -1;
	int8_t x283 = 0;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t67 = -2072575;

	t67 = ((x281/x282)+(x283<=x284));

	if (t67 != 129) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = INT32_MAX;
	volatile uint16_t x290 = 316U;
	int8_t x291 = 0;
	static volatile int16_t x292 = 7834;
	static volatile int32_t t68 = -1;

	t68 = ((x289/x290)+(x291<=x292));

	if (t68 != 6795835) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	int64_t t69 = 237943262057865LL;

	t69 = ((x293/x294)+(x295<=x296));

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = INT8_MAX;
	static int64_t t70 = -1152LL;

	t70 = ((x297/x298)+(x299<=x300));

	if (t70 != 11312750LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = 1039474977626020506LLU;
	int32_t x303 = -36;
	uint64_t t71 = 94414LLU;

	t71 = ((x301/x302)+(x303<=x304));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x307 = UINT16_MAX;
	static volatile uint64_t x308 = UINT64_MAX;
	static volatile int64_t t72 = 22LL;

	t72 = ((x305/x306)+(x307<=x308));

	if (t72 != 189763531675LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	static int32_t x310 = INT32_MIN;
	volatile int8_t x311 = INT8_MIN;
	int16_t x312 = -1;
	int32_t t73 = -28;

	t73 = ((x309/x310)+(x311<=x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = INT8_MIN;
	int32_t x315 = -1;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t74 = -1404;

	t74 = ((x313/x314)+(x315<=x316));

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -5267067;
	uint32_t x318 = 6604U;
	uint64_t x319 = 176034LLU;
	static uint32_t t75 = 3U;

	t75 = ((x317/x318)+(x319<=x320));

	if (t75 != 649560U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x321 = UINT32_MAX;
	uint8_t x322 = 3U;
	int64_t x323 = -1LL;
	volatile int16_t x324 = INT16_MIN;
	uint32_t t76 = 229460240U;

	t76 = ((x321/x322)+(x323<=x324));

	if (t76 != 1431655765U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t t77 = 488956154;

	t77 = ((x325/x326)+(x327<=x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t78 = 78120LL;

	t78 = ((x329/x330)+(x331<=x332));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x333 = 131277938553635610LL;
	volatile int16_t x334 = -1;
	uint64_t x335 = 4797445LLU;

	t79 = ((x333/x334)+(x335<=x336));

	if (t79 != -131277938553635609LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 407U;
	int8_t x338 = INT8_MAX;
	static volatile uint8_t x339 = 29U;
	int64_t x340 = 15371711266LL;
	volatile int32_t t80 = -1;

	t80 = ((x337/x338)+(x339<=x340));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x342 = INT64_MIN;
	int64_t x344 = INT64_MAX;

	t81 = ((x341/x342)+(x343<=x344));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x345 = UINT32_MAX;
	static int64_t x346 = INT64_MIN;
	uint8_t x347 = 38U;
	static uint32_t x348 = 4291342U;
	static int64_t t82 = 9270620728206LL;

	t82 = ((x345/x346)+(x347<=x348));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x351 = UINT64_MAX;
	static volatile uint32_t t83 = 532286129U;

	t83 = ((x349/x350)+(x351<=x352));

	if (t83 != 9U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MIN;
	int64_t x354 = INT64_MAX;
	int16_t x355 = INT16_MIN;
	static int16_t x356 = INT16_MIN;

	t84 = ((x353/x354)+(x355<=x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x357 = -1514LL;
	uint16_t x358 = 2350U;
	int64_t x359 = INT64_MIN;
	static int16_t x360 = INT16_MIN;
	volatile int64_t t85 = 2197951LL;

	t85 = ((x357/x358)+(x359<=x360));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x370 = INT8_MIN;
	volatile int64_t t86 = 47988313LL;

	t86 = ((x369/x370)+(x371<=x372));

	if (t86 != 72057594037927937LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x373 = INT8_MAX;
	uint16_t x375 = 24U;
	int64_t x376 = 14LL;
	volatile int32_t t87 = 10261;

	t87 = ((x373/x374)+(x375<=x376));

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = -16365470198314973LL;
	uint32_t x379 = 127U;
	uint64_t x380 = UINT64_MAX;
	static volatile int64_t t88 = -6706698712577293LL;

	t88 = ((x377/x378)+(x379<=x380));

	if (t88 != 47255478904LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MIN;
	uint64_t x383 = 7772257LLU;
	volatile int8_t x384 = 11;

	t89 = ((x381/x382)+(x383<=x384));

	if (t89 != 4294967296LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile int32_t t90 = 0;

	t90 = ((x385/x386)+(x387<=x388));

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = -7;
	int16_t x391 = -1;
	static int16_t x392 = INT16_MIN;
	int32_t t91 = 17930764;

	t91 = ((x389/x390)+(x391<=x392));

	if (t91 != -7) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -1;
	static int32_t x394 = -1;
	int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MAX;
	int32_t t92 = 332;

	t92 = ((x393/x394)+(x395<=x396));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x398 = 40;
	static uint16_t x400 = 6U;

	t93 = ((x397/x398)+(x399<=x400));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x401 = 5796U;
	uint16_t x402 = 72U;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	volatile uint32_t t94 = 310947U;

	t94 = ((x401/x402)+(x403<=x404));

	if (t94 != 81U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x406 = 44U;
	int16_t x407 = INT16_MAX;
	volatile int32_t t95 = -378342;

	t95 = ((x405/x406)+(x407<=x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	static int8_t x412 = -1;

	t96 = ((x409/x410)+(x411<=x412));

	if (t96 != 44783637604061LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = 14487U;
	volatile uint8_t x414 = UINT8_MAX;
	int16_t x415 = 0;
	static int32_t x416 = -1;
	int32_t t97 = -15212;

	t97 = ((x413/x414)+(x415<=x416));

	if (t97 != 56) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x417 = 122U;
	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	int32_t t98 = -225;

	t98 = ((x417/x418)+(x419<=x420));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x423 = INT16_MIN;
	uint32_t t99 = 244U;

	t99 = ((x421/x422)+(x423<=x424));

	if (t99 != 1U) { NG(); } else { ; }
	
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

