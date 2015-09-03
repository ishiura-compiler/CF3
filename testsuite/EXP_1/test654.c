#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 193U;
static volatile int64_t t0 = 291LL;
volatile int32_t t1 = 485;
int64_t x13 = INT64_MIN;
int64_t x14 = -138419169515606LL;
volatile int32_t x17 = -330241170;
int8_t x18 = -1;
static int16_t x27 = -1980;
uint16_t x38 = UINT16_MAX;
volatile int32_t t9 = -317;
uint16_t x46 = 178U;
int64_t t11 = 109353278700LL;
volatile int8_t x50 = -3;
static int64_t t12 = 14803163LL;
uint16_t x56 = UINT16_MAX;
uint64_t x62 = 809894404908LLU;
int8_t x67 = INT8_MIN;
static int32_t x68 = -1;
static int8_t x72 = INT8_MIN;
int8_t x78 = -1;
volatile uint64_t x82 = UINT64_MAX;
volatile int16_t x86 = INT16_MIN;
int32_t t21 = 7286879;
uint8_t x91 = 1U;
volatile int64_t t22 = -3751262LL;
uint32_t x94 = 2074U;
static int64_t x112 = INT64_MIN;
uint64_t x119 = UINT64_MAX;
static uint64_t t29 = 24366892496833LLU;
uint32_t t35 = 1246320U;
uint32_t x155 = 94342775U;
static uint64_t x167 = UINT64_MAX;
int16_t x169 = -226;
volatile int64_t x171 = 234606173930LL;
int64_t x175 = -1235852678330253196LL;
int16_t x176 = INT16_MAX;
volatile int32_t t44 = -14241724;
static volatile int64_t t45 = -476758635666LL;
static uint8_t x189 = 3U;
int64_t t47 = 935801122708LL;
volatile uint32_t x195 = UINT32_MAX;
uint32_t t49 = 941U;
int64_t x201 = 4LL;
int8_t x204 = -1;
int16_t x210 = -1535;
static volatile uint32_t x217 = 33025838U;
static uint32_t x227 = 20370U;
uint32_t t56 = 39176259U;
uint16_t x232 = 56U;
volatile uint16_t x234 = UINT16_MAX;
int64_t t59 = 0LL;
static int16_t x243 = -1;
uint32_t t60 = 9267226U;
int16_t x247 = -1;
int16_t x254 = -2995;
int16_t x255 = INT16_MAX;
volatile int32_t t63 = 2;
uint32_t x266 = UINT32_MAX;
uint32_t x273 = UINT32_MAX;
int32_t x279 = 221350978;
volatile int16_t x280 = 61;
uint32_t x282 = 21U;
volatile uint8_t x283 = UINT8_MAX;
int16_t x288 = INT16_MAX;
uint16_t x293 = 8245U;
static int32_t t74 = 39771106;
static int16_t x307 = -503;
static int64_t x314 = -78640526LL;
static int64_t x316 = INT64_MIN;
volatile uint8_t x318 = UINT8_MAX;
int16_t x328 = INT16_MAX;
uint16_t x332 = 25U;
static volatile uint64_t t81 = 41LLU;
static int32_t x337 = INT32_MAX;
int64_t x338 = 159338873975764349LL;
int8_t x343 = 5;
volatile int64_t x344 = INT64_MIN;
int64_t x355 = INT64_MAX;
static volatile int8_t x358 = 9;
uint16_t x360 = 937U;
uint64_t t88 = 3047574LLU;
int64_t x378 = -18631465374LL;
int32_t x382 = INT32_MIN;
static volatile int8_t x389 = 7;
int32_t x390 = INT32_MIN;
int16_t x394 = INT16_MIN;
volatile int32_t t94 = 45261;
int32_t x401 = 7;
static int64_t x402 = INT64_MAX;
volatile uint32_t x404 = UINT32_MAX;
int32_t x406 = -1;


void f0(void) {
	static int64_t x1 = -1LL;
	int8_t x3 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;

	t0 = (((x1/x2)|x3)/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 111U;
	uint16_t x8 = 112U;

	t1 = (((x5/x6)|x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	uint32_t x10 = 1U;
	volatile uint16_t x11 = 3U;
	int64_t x12 = 31667428397319885LL;
	static uint64_t t2 = 128199551957237617LLU;

	t2 = (((x9/x10)|x11)/x12);

	if (t2 != 582LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x15 = INT32_MAX;
	int16_t x16 = -311;
	volatile int64_t t3 = 227469363526602254LL;

	t3 = (((x13/x14)|x15)/x16);

	if (t3 != -6905092LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x19 = UINT16_MAX;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 5222085276127147399LLU;

	t4 = (((x17/x18)|x19)/x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint64_t x22 = 65132834834855LLU;
	volatile int32_t x23 = 745316;
	static int64_t x24 = -1LL;
	uint64_t t5 = 8544412232033291LLU;

	t5 = (((x21/x22)|x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -7974567;
	int16_t x26 = INT16_MIN;
	int32_t x28 = -1;
	volatile int32_t t6 = 1824;

	t6 = (((x25/x26)|x27)/x28);

	if (t6 != 1801) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 41148152U;
	int8_t x30 = -5;
	int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	static uint32_t t7 = 205173942U;

	t7 = (((x29/x30)|x31)/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static uint8_t x34 = UINT8_MAX;
	int16_t x35 = INT16_MAX;
	uint16_t x36 = 27371U;
	volatile int32_t t8 = -15;

	t8 = (((x33/x34)|x35)/x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 4;
	volatile uint8_t x39 = 48U;
	static int16_t x40 = INT16_MAX;

	t9 = (((x37/x38)|x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x41 = 0U;
	int16_t x42 = 6682;
	int64_t x43 = INT64_MAX;
	uint32_t x44 = 92503U;
	int64_t t10 = 111477856LL;

	t10 = (((x41/x42)|x43)/x44);

	if (t10 != 99708896326116LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -552;
	static int32_t x47 = -1;
	int64_t x48 = 998501510828LL;

	t11 = (((x45/x46)|x47)/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = -1LL;
	static volatile uint16_t x51 = 1448U;
	volatile uint8_t x52 = UINT8_MAX;

	t12 = (((x49/x50)|x51)/x52);

	if (t12 != 5LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint16_t x54 = 14640U;
	static uint8_t x55 = UINT8_MAX;
	static int32_t t13 = 331;

	t13 = (((x53/x54)|x55)/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MAX;
	static volatile uint32_t x59 = UINT32_MAX;
	int8_t x60 = 34;
	volatile int64_t t14 = -253105LL;

	t14 = (((x57/x58)|x59)/x60);

	if (t14 != 126322567LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -12037;
	int32_t x63 = -1612902;
	static int32_t x64 = 51;
	volatile uint64_t t15 = 1LLU;

	t15 = (((x61/x62)|x63)/x64);

	if (t15 != 361700864190383262LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MAX;
	int16_t x66 = -1;
	int32_t t16 = 41808972;

	t16 = (((x65/x66)|x67)/x68);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = INT8_MIN;
	static int16_t x71 = -1;
	int32_t t17 = 1;

	t17 = (((x69/x70)|x71)/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -269575701LL;
	int16_t x74 = -5508;
	static volatile int8_t x75 = INT8_MIN;
	int16_t x76 = -31;
	int64_t t18 = 235336LL;

	t18 = (((x73/x74)|x75)/x76);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = 706923236LL;
	uint32_t x79 = UINT32_MAX;
	uint32_t x80 = 4951581U;
	int64_t t19 = 1LL;

	t19 = (((x77/x78)|x79)/x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 9150U;
	static int16_t x83 = INT16_MAX;
	int64_t x84 = -98319286822412597LL;
	static volatile uint64_t t20 = 8219999092050LLU;

	t20 = (((x81/x82)|x83)/x84);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 8088U;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = INT16_MIN;

	t21 = (((x85/x86)|x87)/x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 136971871;
	static int64_t x90 = -1LL;
	uint16_t x92 = UINT16_MAX;

	t22 = (((x89/x90)|x91)/x92);

	if (t22 != -2090LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x93 = 14173961114110144LLU;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MIN;
	uint64_t t23 = 5LLU;

	t23 = (((x93/x94)|x95)/x96);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 3U;
	int8_t x98 = 23;
	uint32_t x99 = 1U;
	int64_t x100 = INT64_MIN;
	int64_t t24 = -9795415LL;

	t24 = (((x97/x98)|x99)/x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	volatile uint64_t x103 = 869092503686909LLU;
	int64_t x104 = 60153980LL;
	uint64_t t25 = 7175LLU;

	t25 = (((x101/x102)|x103)/x104);

	if (t25 != 306658746000LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MIN;
	int16_t x107 = INT16_MIN;
	static volatile uint64_t x108 = UINT64_MAX;
	volatile uint64_t t26 = 2842712LLU;

	t26 = (((x105/x106)|x107)/x108);

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	uint8_t x110 = 29U;
	int16_t x111 = 931;
	volatile int64_t t27 = -1875712LL;

	t27 = (((x109/x110)|x111)/x112);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = 474253522633503LL;
	int64_t x115 = INT64_MAX;
	static int8_t x116 = INT8_MAX;
	int64_t t28 = -8366494045951740LL;

	t28 = (((x113/x114)|x115)/x116);

	if (t28 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -11;
	volatile int8_t x118 = -1;
	uint8_t x120 = 69U;

	t29 = (((x117/x118)|x119)/x120);

	if (t29 != 267344117010283356LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	uint8_t x122 = 3U;
	int64_t x123 = INT64_MAX;
	static int32_t x124 = -1;
	volatile int64_t t30 = -643516LL;

	t30 = (((x121/x122)|x123)/x124);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MAX;
	static int64_t x126 = INT64_MAX;
	static volatile uint8_t x127 = UINT8_MAX;
	volatile uint32_t x128 = 26U;
	volatile int64_t t31 = -470429679252858948LL;

	t31 = (((x125/x126)|x127)/x128);

	if (t31 != 9LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 12907U;
	uint8_t x130 = 1U;
	int8_t x131 = 1;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 48;

	t32 = (((x129/x130)|x131)/x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static int64_t x134 = -1LL;
	uint8_t x135 = 15U;
	int64_t x136 = INT64_MAX;
	volatile int64_t t33 = 382021LL;

	t33 = (((x133/x134)|x135)/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -59LL;
	uint32_t x138 = 1365036U;
	static uint8_t x139 = 3U;
	volatile uint64_t x140 = 2572010887LLU;
	uint64_t t34 = 3191536357470908954LLU;

	t34 = (((x137/x138)|x139)/x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;

	t35 = (((x141/x142)|x143)/x144);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 471283LLU;
	uint32_t x146 = 93U;
	int8_t x147 = INT8_MAX;
	uint64_t x148 = 24949323970968665LLU;
	uint64_t t36 = 5472064650055LLU;

	t36 = (((x145/x146)|x147)/x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MAX;
	int64_t x150 = -192LL;
	int64_t x151 = 17671846876356536LL;
	uint32_t x152 = 11095822U;
	volatile int64_t t37 = 1LL;

	t37 = (((x149/x150)|x151)/x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x153 = -1LL;
	int8_t x154 = -1;
	uint16_t x156 = UINT16_MAX;
	int64_t t38 = -42337594LL;

	t38 = (((x153/x154)|x155)/x156);

	if (t38 != 1439LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static int16_t x158 = INT16_MIN;
	static uint8_t x159 = UINT8_MAX;
	volatile uint32_t x160 = UINT32_MAX;
	uint32_t t39 = 131598417U;

	t39 = (((x157/x158)|x159)/x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = INT64_MAX;
	int32_t x163 = -262202;
	uint16_t x164 = 6U;
	int64_t t40 = -48934974440LL;

	t40 = (((x161/x162)|x163)/x164);

	if (t40 != -43700LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 182U;
	int8_t x166 = -3;
	int8_t x168 = INT8_MIN;
	uint64_t t41 = 119579013244225227LLU;

	t41 = (((x165/x166)|x167)/x168);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = -1LL;
	int8_t x172 = INT8_MIN;
	static volatile int64_t t42 = -100890315419088811LL;

	t42 = (((x169/x170)|x171)/x172);

	if (t42 != -1832860733LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	static int8_t x174 = INT8_MAX;
	int64_t t43 = 15904633021LL;

	t43 = (((x173/x174)|x175)/x176);

	if (t43 != -37716381674558LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MIN;
	static int8_t x180 = INT8_MIN;

	t44 = (((x177/x178)|x179)/x180);

	if (t44 != 256) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	int64_t x182 = INT64_MAX;
	int16_t x183 = 491;
	int64_t x184 = INT64_MAX;

	t45 = (((x181/x182)|x183)/x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile int32_t x186 = 3860;
	int32_t x187 = -1;
	volatile int8_t x188 = INT8_MIN;
	static volatile int32_t t46 = -66;

	t46 = (((x185/x186)|x187)/x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = -7LL;
	volatile uint32_t x191 = 0U;
	int64_t x192 = INT64_MIN;

	t47 = (((x189/x190)|x191)/x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 4060LLU;
	uint32_t x194 = 8U;
	int64_t x196 = 2698680673188LL;
	volatile uint64_t t48 = 6352608095285LLU;

	t48 = (((x193/x194)|x195)/x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = 81;
	volatile uint32_t x198 = 7435U;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;

	t49 = (((x197/x198)|x199)/x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x202 = INT16_MIN;
	uint32_t x203 = 1U;
	int64_t t50 = 182216015LL;

	t50 = (((x201/x202)|x203)/x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = 307;
	int32_t x206 = INT32_MAX;
	static int8_t x207 = -7;
	int16_t x208 = 14;
	static int32_t t51 = 5020;

	t51 = (((x205/x206)|x207)/x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MAX;
	int8_t x211 = -26;
	int64_t x212 = -1LL;
	volatile int64_t t52 = -5074207481185LL;

	t52 = (((x209/x210)|x211)/x212);

	if (t52 != 2LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 266;
	uint32_t x214 = 6266683U;
	int16_t x215 = -1;
	int64_t x216 = 3093160563702355LL;
	volatile int64_t t53 = -637241LL;

	t53 = (((x213/x214)|x215)/x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x218 = -1;
	volatile uint64_t x219 = UINT64_MAX;
	uint32_t x220 = UINT32_MAX;
	uint64_t t54 = 19834405213077841LLU;

	t54 = (((x217/x218)|x219)/x220);

	if (t54 != 4294967297LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -1;
	uint64_t x222 = 100470690696LLU;
	int32_t x223 = INT32_MAX;
	volatile int8_t x224 = INT8_MAX;
	uint64_t t55 = 2LLU;

	t55 = (((x221/x222)|x223)/x224);

	if (t55 != 16909320LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -1;
	int8_t x226 = INT8_MAX;
	uint32_t x228 = 30U;

	t56 = (((x225/x226)|x227)/x228);

	if (t56 != 679U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	static uint8_t x230 = UINT8_MAX;
	volatile int8_t x231 = -1;
	volatile uint64_t t57 = 7319LLU;

	t57 = (((x229/x230)|x231)/x232);

	if (t57 != 329406144173384850LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -15537126;
	volatile int8_t x235 = INT8_MIN;
	volatile int8_t x236 = -18;
	int32_t t58 = 2106;

	t58 = (((x233/x234)|x235)/x236);

	if (t58 != 6) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 93U;
	uint32_t x238 = 7U;
	volatile uint32_t x239 = 117364U;
	volatile int64_t x240 = -1LL;

	t59 = (((x237/x238)|x239)/x240);

	if (t59 != -117373LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	volatile uint8_t x242 = UINT8_MAX;
	static int8_t x244 = 7;

	t60 = (((x241/x242)|x243)/x244);

	if (t60 != 613566756U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 486190173LLU;
	int8_t x246 = 7;
	int16_t x248 = INT16_MAX;
	uint64_t t61 = 243LLU;

	t61 = (((x245/x246)|x247)/x248);

	if (t61 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -281753LL;
	uint64_t x250 = 116559432672561LLU;
	static volatile int8_t x251 = INT8_MIN;
	int16_t x252 = -114;
	uint64_t t62 = 28357LLU;

	t62 = (((x249/x250)|x251)/x252);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	static int16_t x256 = -1;

	t63 = (((x253/x254)|x255)/x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = 9925401598LLU;
	uint8_t x258 = 50U;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = 77U;
	uint64_t t64 = 119667260226065177LLU;

	t64 = (((x257/x258)|x259)/x260);

	if (t64 != 2578033LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = UINT64_MAX;
	int64_t x262 = 859164850LL;
	int8_t x263 = 0;
	int32_t x264 = INT32_MAX;
	uint64_t t65 = 53999455LLU;

	t65 = (((x261/x262)|x263)/x264);

	if (t65 != 9LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = 1LL;
	static int32_t x267 = -1;
	static uint32_t x268 = UINT32_MAX;
	int64_t t66 = -15LL;

	t66 = (((x265/x266)|x267)/x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = -1LL;
	uint64_t x271 = 103927874361741LLU;
	int16_t x272 = INT16_MAX;
	uint64_t t67 = 511279LLU;

	t67 = (((x269/x270)|x271)/x272);

	if (t67 != 3171723818LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = -1;
	int64_t x275 = -1LL;
	int64_t x276 = -1LL;
	volatile int64_t t68 = -2481867973751590LL;

	t68 = (((x273/x274)|x275)/x276);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	static uint32_t x278 = UINT32_MAX;
	volatile uint32_t t69 = 3608750U;

	t69 = (((x277/x278)|x279)/x280);

	if (t69 != 3628704U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	int16_t x284 = -1;
	uint32_t t70 = 71U;

	t70 = (((x281/x282)|x283)/x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	int16_t x287 = INT16_MIN;
	volatile int32_t t71 = -75730036;

	t71 = (((x285/x286)|x287)/x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = 2LL;
	int8_t x290 = -1;
	int8_t x291 = INT8_MAX;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = 33482774LLU;

	t72 = (((x289/x290)|x291)/x292);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x294 = 491326;
	static volatile int8_t x295 = INT8_MIN;
	static int16_t x296 = INT16_MIN;
	int32_t t73 = 411;

	t73 = (((x293/x294)|x295)/x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int16_t x299 = -103;
	static int8_t x300 = INT8_MAX;

	t74 = (((x297/x298)|x299)/x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = INT32_MAX;
	static volatile uint16_t x304 = 330U;
	static volatile int32_t t75 = 12681;

	t75 = (((x301/x302)|x303)/x304);

	if (t75 != 6507526) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = -9;

	t76 = (((x305/x306)|x307)/x308);

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MAX;
	static volatile int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MAX;
	volatile int32_t x312 = -1;
	volatile int64_t t77 = -119294518502042LL;

	t77 = (((x309/x310)|x311)/x312);

	if (t77 != -32767LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 9500U;
	volatile int64_t x315 = -986786899776LL;
	static int64_t t78 = 1818038192373LL;

	t78 = (((x313/x314)|x315)/x316);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 9198482U;
	volatile int32_t x319 = -18;
	int64_t x320 = 9LL;
	int64_t t79 = -2LL;

	t79 = (((x317/x318)|x319)/x320);

	if (t79 != 477218586LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 3;
	int64_t x326 = -1LL;
	int16_t x327 = INT16_MIN;
	static int64_t t80 = -1084097LL;

	t80 = (((x325/x326)|x327)/x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x329 = 28;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 177LLU;

	t81 = (((x329/x330)|x331)/x332);

	if (t81 != 7LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x339 = UINT64_MAX;
	int64_t x340 = 3782155LL;
	uint64_t t82 = 5514310549465248LLU;

	t82 = (((x337/x338)|x339)/x340);

	if (t82 != 4877310441721LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x341 = UINT16_MAX;
	volatile uint8_t x342 = UINT8_MAX;
	volatile int64_t t83 = 540450240003LL;

	t83 = (((x341/x342)|x343)/x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 60133567U;
	static volatile uint32_t t84 = 39414U;

	t84 = (((x349/x350)|x351)/x352);

	if (t84 != 71U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	uint32_t x356 = 307674702U;
	int64_t t85 = 155LL;

	t85 = (((x353/x354)|x355)/x356);

	if (t85 != 29977674397LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = INT64_MIN;
	static int8_t x359 = -1;
	volatile int64_t t86 = 161157699386792503LL;

	t86 = (((x357/x358)|x359)/x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = -56;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = INT64_MAX;
	volatile int64_t t87 = -135956699016221076LL;

	t87 = (((x361/x362)|x363)/x364);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	int32_t x366 = -52067;
	static uint8_t x367 = UINT8_MAX;
	volatile uint64_t x368 = 104156368799LLU;

	t88 = (((x365/x366)|x367)/x368);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = 16U;
	static int16_t x370 = -23;
	static int16_t x371 = INT16_MIN;
	int8_t x372 = -1;
	int32_t t89 = 23;

	t89 = (((x369/x370)|x371)/x372);

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x377 = -1LL;
	int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MIN;
	static volatile int64_t t90 = -512751LL;

	t90 = (((x377/x378)|x379)/x380);

	if (t90 != 65536LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x381 = 1U;
	static uint32_t x383 = 1985612U;
	int64_t x384 = -14535413881759727LL;
	int64_t t91 = -24LL;

	t91 = (((x381/x382)|x383)/x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x385 = 13U;
	int16_t x386 = -1;
	uint64_t x387 = 111863429LLU;
	static uint8_t x388 = 26U;
	uint64_t t92 = 559838613414355LLU;

	t92 = (((x385/x386)|x387)/x388);

	if (t92 != 709490156681136600LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x391 = 2975U;
	static int16_t x392 = -1981;
	int32_t t93 = 0;

	t93 = (((x389/x390)|x391)/x392);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x393 = -1;
	uint8_t x395 = 0U;
	int32_t x396 = INT32_MAX;

	t94 = (((x393/x394)|x395)/x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x398 = INT16_MAX;
	int16_t x399 = -1;
	static volatile int64_t x400 = 387482914LL;
	volatile int64_t t95 = 118432893596876221LL;

	t95 = (((x397/x398)|x399)/x400);

	if (t95 != 11LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x403 = -2283910164460046545LL;
	int64_t t96 = -41155376934003LL;

	t96 = (((x401/x402)|x403)/x404);

	if (t96 != -531764273LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = -1;
	uint32_t x407 = UINT32_MAX;
	uint16_t x408 = UINT16_MAX;
	volatile uint32_t t97 = 26656U;

	t97 = (((x405/x406)|x407)/x408);

	if (t97 != 65537U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = -3;
	int16_t x410 = -1;
	uint8_t x411 = 3U;
	int16_t x412 = -1;
	static volatile int32_t t98 = 6591;

	t98 = (((x409/x410)|x411)/x412);

	if (t98 != -3) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x413 = -96075;
	uint32_t x414 = 11985917U;
	uint32_t x415 = 31513568U;
	static int32_t x416 = INT32_MAX;
	volatile uint32_t t99 = 13U;

	t99 = (((x413/x414)|x415)/x416);

	if (t99 != 0U) { NG(); } else { ; }
	
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

