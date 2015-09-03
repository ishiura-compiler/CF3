#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
uint32_t x7 = UINT32_MAX;
volatile int64_t t1 = -1LL;
int8_t x27 = INT8_MIN;
static uint32_t x32 = 1U;
volatile uint64_t x36 = 87148322501512LLU;
volatile uint64_t t7 = 39567910LLU;
int64_t x39 = -2714934137122477504LL;
int64_t x40 = INT64_MIN;
int64_t x41 = INT64_MIN;
volatile int8_t x50 = 0;
volatile int64_t t10 = 0LL;
volatile int8_t x54 = -11;
uint32_t x57 = 9U;
uint64_t t12 = 178244LLU;
uint8_t x61 = 2U;
uint16_t x64 = 11891U;
volatile uint64_t t13 = 190614107395915347LLU;
int32_t x65 = -1;
int64_t t14 = -4958047588181LL;
int64_t t15 = -6523LL;
volatile uint32_t x73 = 6235586U;
volatile int8_t x75 = 4;
int16_t x76 = INT16_MIN;
int16_t x77 = -7092;
uint8_t x82 = 17U;
uint64_t x87 = 244817636475385LLU;
int16_t x93 = -1;
uint64_t x97 = 87533418LLU;
uint64_t t23 = 504LLU;
uint32_t t24 = 16857U;
volatile int16_t x114 = -1;
uint16_t x117 = 71U;
static int16_t x124 = -1;
int64_t x126 = 511061LL;
static volatile int8_t x127 = -1;
int64_t t29 = -98520928700479508LL;
volatile uint32_t t30 = 1U;
volatile int16_t x145 = -1;
int64_t t31 = -24315351001965308LL;
int8_t x161 = INT8_MIN;
static volatile int32_t x163 = -1;
int32_t x172 = -1;
int16_t x173 = -10623;
static int8_t x174 = INT8_MIN;
int64_t t37 = -73339062LL;
static uint8_t x178 = 6U;
uint32_t t38 = 14837369U;
static int16_t x181 = 16;
volatile int32_t x184 = INT32_MAX;
int64_t x189 = INT64_MAX;
int64_t x191 = 2067701105535865LL;
volatile int64_t t40 = -7LL;
uint32_t x197 = 3874367U;
uint64_t x199 = UINT64_MAX;
uint64_t t42 = 25672LLU;
volatile int32_t t43 = INT32_MIN;
int8_t x211 = -1;
volatile int16_t x214 = -1;
volatile int32_t x229 = -1;
int16_t x243 = INT16_MAX;
static uint8_t x252 = UINT8_MAX;
volatile int64_t t52 = 3707500087920730153LL;
int16_t x262 = -13;
uint32_t x264 = 89895451U;
int64_t x279 = -1054638729471LL;
int64_t x284 = INT64_MAX;
uint8_t x286 = 8U;
int32_t x288 = -12571;
int8_t x297 = -2;
int64_t x298 = 147LL;
uint32_t x309 = UINT32_MAX;
static volatile uint64_t x310 = 569644300956LLU;
uint16_t x311 = 12016U;
static int8_t x312 = 4;
static int8_t x316 = -2;
uint32_t t64 = 297U;
uint16_t x318 = 52U;
uint32_t t65 = 1U;
uint16_t x321 = 5808U;
volatile int32_t x324 = -99726010;
uint32_t x325 = 140280435U;
int8_t x327 = INT8_MIN;
int32_t x328 = INT32_MIN;
volatile int8_t x329 = -1;
int32_t x330 = -1;
uint16_t x335 = UINT16_MAX;
uint64_t x338 = 1916043364LLU;
int32_t x347 = -1;
int16_t x351 = -85;
uint32_t x354 = UINT32_MAX;
static volatile uint32_t x357 = 41U;
volatile uint32_t t74 = 8U;
static int32_t x367 = INT32_MAX;
static uint16_t x379 = 3171U;
int32_t x388 = -29811221;
volatile int64_t t80 = 14342293970LL;
static int32_t x390 = 5618757;
uint8_t x406 = 0U;
int16_t x411 = INT16_MIN;
int32_t x418 = -1;
int8_t x420 = INT8_MAX;
volatile int8_t x431 = 0;
int8_t x433 = 0;
volatile int8_t x450 = INT8_MIN;
static volatile uint8_t x462 = 55U;
uint32_t x466 = 139872U;
static int16_t x470 = INT16_MIN;
int8_t x472 = INT8_MIN;
uint32_t t99 = 69169575U;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint8_t x2 = 6U;
	volatile int64_t x3 = INT64_MIN;
	volatile uint32_t x4 = 6875313U;
	static volatile int64_t t0 = 11LL;

	t0 = (x1^((x2+x3)%x4));

	if (t0 != -2142056368LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int64_t x8 = INT64_MIN;

	t1 = (x5^((x6+x7)%x8));

	if (t1 != 2147516416LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	int16_t x10 = 14208;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MAX;
	volatile uint64_t t2 = 84701LLU;

	t2 = (x9^((x10+x11)%x12));

	if (t2 != 2147469439LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int8_t x14 = INT8_MAX;
	uint16_t x15 = 5U;
	uint64_t x16 = 2039788880LLU;
	uint64_t t3 = 32972169826LLU;

	t3 = (x13^((x14+x15)%x16));

	if (t3 != 18446744073709551364LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 26U;
	uint8_t x18 = 1U;
	static volatile uint32_t x19 = 1385971U;
	static volatile int32_t x20 = INT32_MIN;
	uint32_t t4 = 2087085843U;

	t4 = (x17^((x18+x19)%x20));

	if (t4 != 1385966U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile uint8_t x26 = 12U;
	int32_t x28 = -32;
	static int32_t t5 = 444962;

	t5 = (x25^((x26+x27)%x28));

	if (t5 != 32748) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x29 = 28U;
	int64_t x30 = INT64_MAX;
	int8_t x31 = INT8_MIN;
	static volatile int64_t t6 = 2804LL;

	t6 = (x29^((x30+x31)%x32));

	if (t6 != 28LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 5U;
	uint16_t x34 = 569U;
	int32_t x35 = 1;

	t7 = (x33^((x34+x35)%x36));

	if (t7 != 575LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int32_t x38 = INT32_MAX;
	int64_t t8 = 64148915039194LL;

	t8 = (x37^((x38+x39)%x40));

	if (t8 != -2714934134974993856LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x42 = -4;
	uint8_t x43 = 90U;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int64_t t9 = -70LL;

	t9 = (x41^((x42+x43)%x44));

	if (t9 != -9223372036854775722LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 16252U;
	int64_t x51 = 6963244263622997LL;
	int64_t x52 = INT64_MAX;

	t10 = (x49^((x50+x51)%x52));

	if (t10 != 6963244263634473LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MIN;
	int32_t x55 = -12950730;
	int8_t x56 = INT8_MIN;
	volatile int64_t t11 = 127LL;

	t11 = (x53^((x54+x55)%x56));

	if (t11 != 9223372036854775723LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = -349645796;
	uint64_t x59 = 3727588LLU;
	static uint32_t x60 = UINT32_MAX;

	t12 = (x57^((x58+x59)%x60));

	if (t12 != 3949049097LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x62 = -19112999256496805LL;
	uint64_t x63 = 8729216297343864315LLU;

	t13 = (x61^((x62+x63)%x64));

	if (t13 != 233LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x66 = -1LL;
	int8_t x67 = -1;
	int32_t x68 = -6691555;

	t14 = (x65^((x66+x67)%x68));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 1426U;
	uint32_t x70 = 794195U;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;

	t15 = (x69^((x70+x71)%x72));

	if (t15 != -1471LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = INT32_MIN;
	uint32_t t16 = 92316253U;

	t16 = (x73^((x74+x75)%x76));

	if (t16 != 4288718278U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x78 = -4687;
	int32_t x79 = 0;
	volatile int64_t x80 = INT64_MAX;
	volatile int64_t t17 = 37715LL;

	t17 = (x77^((x78+x79)%x80));

	if (t17 != 2557LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	uint16_t x83 = 5810U;
	volatile int64_t x84 = -2882LL;
	static volatile int64_t t18 = -115083071909748105LL;

	t18 = (x81^((x82+x83)%x84));

	if (t18 != 32704LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile uint64_t t19 = 68844LLU;

	t19 = (x85^((x86+x87)%x88));

	if (t19 != 18446744073709518865LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	int16_t x92 = 2;
	volatile int32_t t20 = -10294885;

	t20 = (x89^((x90+x91)%x92));

	if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x94 = INT64_MIN;
	static int64_t x95 = INT64_MAX;
	volatile int64_t x96 = -11208792627687LL;
	volatile int64_t t21 = 132211669391LL;

	t21 = (x93^((x94+x95)%x96));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = INT64_MAX;
	volatile int8_t x99 = INT8_MIN;
	uint8_t x100 = 70U;
	volatile uint64_t t22 = 1102LLU;

	t22 = (x97^((x98+x99)%x100));

	if (t22 != 87533433LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = -144357577;
	static uint8_t x103 = 7U;
	uint64_t x104 = 494180803545LLU;

	t23 = (x101^((x102+x103)%x104));

	if (t23 != 9223372139252475729LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = 29;

	t24 = (x105^((x106+x107)%x108));

	if (t24 != 4294934545U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 53U;
	int64_t x110 = -1LL;
	uint8_t x111 = 93U;
	int32_t x112 = -31161067;
	static int64_t t25 = 75382257417779020LL;

	t25 = (x109^((x110+x111)%x112));

	if (t25 != 105LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -127231352662965LL;
	uint64_t x115 = 25LLU;
	volatile int16_t x116 = -27;
	static uint64_t t26 = 6697340LLU;

	t26 = (x113^((x114+x115)%x116));

	if (t26 != 18446616842356888659LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x118 = 63914U;
	volatile int8_t x119 = -1;
	int8_t x120 = -1;
	volatile uint32_t t27 = 1658U;

	t27 = (x117^((x118+x119)%x120));

	if (t27 != 63982U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	uint64_t x123 = 130186LLU;
	volatile uint64_t t28 = 700980373794307LLU;

	t28 = (x121^((x122+x123)%x124));

	if (t28 != 9223372036854645514LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = 1U;
	uint16_t x128 = 3U;

	t29 = (x125^((x126+x127)%x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 37145807U;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 30U;
	uint8_t x136 = 56U;

	t30 = (x133^((x134+x135)%x136));

	if (t30 != 4257821465U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x146 = -1;
	int64_t x147 = -1LL;
	volatile int64_t x148 = 1008745888770335253LL;

	t31 = (x145^((x146+x147)%x148));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x153 = UINT64_MAX;
	volatile uint32_t x154 = 436601U;
	static int16_t x155 = -1;
	int8_t x156 = INT8_MIN;
	uint64_t t32 = 171471824LLU;

	t32 = (x153^((x154+x155)%x156));

	if (t32 != 18446744073709115015LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x157 = INT8_MIN;
	static uint32_t x158 = 23U;
	int8_t x159 = INT8_MIN;
	static int8_t x160 = INT8_MIN;
	static volatile uint32_t t33 = 84751U;

	t33 = (x157^((x158+x159)%x160));

	if (t33 != 4294967191U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x162 = 34804521129685LLU;
	uint64_t x164 = UINT64_MAX;
	uint64_t t34 = 14140LLU;

	t34 = (x161^((x162+x163)%x164));

	if (t34 != 18446709269188421972LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MAX;
	uint16_t x166 = 13U;
	int32_t x167 = INT32_MIN;
	uint32_t x168 = 3396404U;
	uint32_t t35 = 64279U;

	t35 = (x165^((x166+x167)%x168));

	if (t35 != 2146527314U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	volatile uint64_t t36 = 1336203631000927LLU;

	t36 = (x169^((x170+x171)%x172));

	if (t36 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x175 = 1;
	static int64_t x176 = INT64_MIN;

	t37 = (x173^((x174+x175)%x176));

	if (t37 != 10496LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	static int32_t x179 = -1;
	uint32_t x180 = 15305U;

	t38 = (x177^((x178+x179)%x180));

	if (t38 != 4294934533U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MAX;
	uint64_t t39 = 3499983LLU;

	t39 = (x181^((x182+x183)%x184));

	if (t39 != 110LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x190 = -29;
	int64_t x192 = INT64_MIN;

	t40 = (x189^((x190+x191)%x192));

	if (t40 != 9221304335749239971LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MAX;
	volatile uint16_t x194 = 40U;
	static uint64_t x195 = 10LLU;
	uint16_t x196 = 142U;
	static volatile uint64_t t41 = 23LLU;

	t41 = (x193^((x194+x195)%x196));

	if (t41 != 9223372036854775757LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x198 = 703U;
	int32_t x200 = -1;

	t42 = (x197^((x198+x199)%x200));

	if (t42 != 3873921LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	static uint8_t x202 = 2U;
	int32_t x203 = -4982313;
	uint8_t x204 = 1U;

	t43 = (x201^((x202+x203)%x204));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	static uint8_t x207 = 7U;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t44 = 9033957991LLU;

	t44 = (x205^((x206+x207)%x208));

	if (t44 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x209 = -1;
	static int16_t x210 = INT16_MAX;
	uint32_t x212 = 6790303U;
	uint32_t t45 = 14239U;

	t45 = (x209^((x210+x211)%x212));

	if (t45 != 4294934529U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x213 = -1;
	static int8_t x215 = -2;
	volatile uint32_t x216 = UINT32_MAX;
	volatile uint32_t t46 = 0U;

	t46 = (x213^((x214+x215)%x216));

	if (t46 != 2U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x217 = 1U;
	uint16_t x218 = UINT16_MAX;
	volatile int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t47 = -4;

	t47 = (x217^((x218+x219)%x220));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x230 = 1;
	int16_t x231 = 219;
	uint16_t x232 = 1U;
	static int32_t t48 = -1;

	t48 = (x229^((x230+x231)%x232));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x237 = -1;
	volatile int64_t x238 = 1858440737672LL;
	int16_t x239 = -1;
	int16_t x240 = INT16_MAX;
	volatile int64_t t49 = -5916666387409LL;

	t49 = (x237^((x238+x239)%x240));

	if (t49 != -8625LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x241 = INT64_MAX;
	int8_t x242 = INT8_MIN;
	uint64_t x244 = 63858LLU;
	static uint64_t t50 = 904LLU;

	t50 = (x241^((x242+x243)%x244));

	if (t50 != 9223372036854743168LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x245 = -1LL;
	int32_t x246 = INT32_MIN;
	uint8_t x247 = 9U;
	uint8_t x248 = UINT8_MAX;
	int64_t t51 = 1582950878306687028LL;

	t51 = (x245^((x246+x247)%x248));

	if (t51 != 118LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x249 = INT32_MAX;
	int8_t x250 = INT8_MIN;
	int64_t x251 = 221LL;

	t52 = (x249^((x250+x251)%x252));

	if (t52 != 2147483554LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x257 = 41U;
	volatile uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 4U;
	static int8_t x260 = INT8_MIN;
	volatile uint32_t t53 = 415914464U;

	t53 = (x257^((x258+x259)%x260));

	if (t53 != 298U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = INT32_MIN;
	uint8_t x263 = 2U;
	static uint32_t t54 = 242U;

	t54 = (x261^((x262+x263)%x264));

	if (t54 != 2217364736U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x273 = 39U;
	volatile uint64_t x274 = 3314744272445180095LLU;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile uint64_t t55 = 277154681220206LLU;

	t55 = (x273^((x274+x275)%x276));

	if (t55 != 3314744276740147353LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = 74;
	int64_t x278 = -8954930519163287LL;
	volatile int16_t x280 = INT16_MAX;
	int64_t t56 = -70901393475600609LL;

	t56 = (x277^((x278+x279)%x280));

	if (t56 != -1380LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x281 = -4;
	static int16_t x282 = INT16_MAX;
	uint64_t x283 = UINT64_MAX;
	uint64_t t57 = 20485841465LLU;

	t57 = (x281^((x282+x283)%x284));

	if (t57 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = -1LL;
	uint8_t x287 = UINT8_MAX;
	static int64_t t58 = 6545370887573LL;

	t58 = (x285^((x286+x287)%x288));

	if (t58 != -264LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x293 = -1;
	static uint16_t x294 = 499U;
	static volatile int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MAX;
	int32_t t59 = 13511674;

	t59 = (x293^((x294+x295)%x296));

	if (t59 != -372) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x299 = 33433LLU;
	static volatile int16_t x300 = 2597;
	volatile uint64_t t60 = 961008LLU;

	t60 = (x297^((x298+x299)%x300));

	if (t60 != 18446744073709549198LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = -86080;
	int8_t x304 = 10;
	volatile int64_t t61 = 64357597424488LL;

	t61 = (x301^((x302+x303)%x304));

	if (t61 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x305 = 94087473LL;
	int8_t x306 = 4;
	int32_t x307 = -14958361;
	int8_t x308 = INT8_MIN;
	volatile int64_t t62 = -509424897979LL;

	t62 = (x305^((x306+x307)%x308));

	if (t62 != -94087462LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t t63 = 1209975LLU;

	t63 = (x309^((x310+x311)%x312));

	if (t63 != 4294967295LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x313 = 61U;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 6923U;

	t64 = (x313^((x314+x315)%x316));

	if (t64 != 60U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x317 = INT32_MIN;
	int8_t x319 = INT8_MIN;
	uint32_t x320 = UINT32_MAX;

	t65 = (x317^((x318+x319)%x320));

	if (t65 != 2147483572U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	int32_t t66 = 468453;

	t66 = (x321^((x322+x323)%x324));

	if (t66 != 27087) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x326 = INT8_MAX;
	volatile uint32_t t67 = 571U;

	t67 = (x325^((x326+x327)%x328));

	if (t67 != 4154686860U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x331 = 0;
	volatile int32_t x332 = -1;
	int32_t t68 = 2271649;

	t68 = (x329^((x330+x331)%x332));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x333 = -1LL;
	volatile int64_t x334 = -1LL;
	int32_t x336 = -2395;
	int64_t t69 = 4024045LL;

	t69 = (x333^((x334+x335)%x336));

	if (t69 != -870LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x337 = -3;
	static int32_t x339 = -1;
	int64_t x340 = INT64_MIN;
	static volatile uint64_t t70 = 5563537407LLU;

	t70 = (x337^((x338+x339)%x340));

	if (t70 != 18446744071793508254LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	int64_t x348 = INT64_MIN;
	volatile int64_t t71 = 6591389449LL;

	t71 = (x345^((x346+x347)%x348));

	if (t71 != -4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x349 = INT8_MIN;
	uint8_t x350 = 1U;
	static uint8_t x352 = UINT8_MAX;
	int32_t t72 = -8209026;

	t72 = (x349^((x350+x351)%x352));

	if (t72 != 44) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x353 = INT16_MAX;
	int16_t x355 = -18;
	static int64_t x356 = INT64_MIN;
	volatile int64_t t73 = -141998545886817LL;

	t73 = (x353^((x354+x355)%x356));

	if (t73 != 4294934546LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x358 = 15;
	static int8_t x359 = INT8_MIN;
	static uint8_t x360 = 54U;

	t74 = (x357^((x358+x359)%x360));

	if (t74 != 4294967250U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = -1;
	static int32_t x363 = 17211;
	int16_t x364 = -4662;
	int32_t t75 = 722302;

	t75 = (x361^((x362+x363)%x364));

	if (t75 != -2147480424) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = -1;
	int8_t x366 = INT8_MIN;
	int64_t x368 = 12017970LL;
	int64_t t76 = 22LL;

	t76 = (x365^((x366+x367)%x368));

	if (t76 != -8284860LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = 239;
	uint16_t x370 = 29898U;
	int16_t x371 = INT16_MAX;
	uint8_t x372 = 126U;
	volatile int32_t t77 = 220620;

	t77 = (x369^((x370+x371)%x372));

	if (t77 != 196) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x373 = 9163817512006LLU;
	static int16_t x374 = -3428;
	volatile uint16_t x375 = UINT16_MAX;
	int32_t x376 = -4;
	uint64_t t78 = 3LLU;

	t78 = (x373^((x374+x375)%x376));

	if (t78 != 9163817512005LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x377 = UINT32_MAX;
	volatile uint16_t x378 = 171U;
	int64_t x380 = INT64_MAX;
	static int64_t t79 = 20LL;

	t79 = (x377^((x378+x379)%x380));

	if (t79 != 4294963953LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x385 = -1LL;
	int8_t x386 = INT8_MIN;
	int16_t x387 = -1;

	t80 = (x385^((x386+x387)%x388));

	if (t80 != 128LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x389 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	uint64_t x392 = 330791LLU;
	uint64_t t81 = 0LLU;

	t81 = (x389^((x390+x391)%x392));

	if (t81 != 4294669712LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = 569208;
	static volatile int16_t x394 = INT16_MAX;
	int32_t x395 = INT32_MIN;
	int8_t x396 = -1;
	int32_t t82 = -25254644;

	t82 = (x393^((x394+x395)%x396));

	if (t82 != 569208) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x401 = 44022U;
	uint16_t x402 = 26884U;
	uint64_t x403 = UINT64_MAX;
	volatile uint8_t x404 = 63U;
	volatile uint64_t t83 = 550468LLU;

	t83 = (x401^((x402+x403)%x404));

	if (t83 != 43995LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x405 = 20U;
	static int32_t x407 = -1;
	static int64_t x408 = -24060LL;
	volatile int64_t t84 = -2147498872288522619LL;

	t84 = (x405^((x406+x407)%x408));

	if (t84 != -21LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x409 = -4;
	int8_t x410 = INT8_MIN;
	volatile int64_t x412 = -1LL;
	volatile int64_t t85 = 228314704806553LL;

	t85 = (x409^((x410+x411)%x412));

	if (t85 != -4LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = INT16_MIN;
	volatile int32_t x414 = -27;
	uint8_t x415 = UINT8_MAX;
	volatile int16_t x416 = INT16_MIN;
	volatile int32_t t86 = -10076975;

	t86 = (x413^((x414+x415)%x416));

	if (t86 != -32540) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x417 = 49588488867LLU;
	uint32_t x419 = 7591265U;
	volatile uint64_t t87 = 14154646346978LLU;

	t87 = (x417^((x418+x419)%x420));

	if (t87 != 49588488958LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x421 = 104U;
	uint16_t x422 = 1756U;
	uint16_t x423 = 3241U;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t88 = -500969;

	t88 = (x421^((x422+x423)%x424));

	if (t88 != 5101) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = INT64_MIN;
	uint8_t x426 = UINT8_MAX;
	int8_t x427 = INT8_MAX;
	int32_t x428 = -20090;
	static int64_t t89 = -81809423012483LL;

	t89 = (x425^((x426+x427)%x428));

	if (t89 != -9223372036854775426LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x429 = UINT8_MAX;
	int8_t x430 = 0;
	static volatile uint16_t x432 = 5788U;
	volatile int32_t t90 = -3;

	t90 = (x429^((x430+x431)%x432));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x434 = 1;
	uint64_t x435 = 6170650LLU;
	uint32_t x436 = UINT32_MAX;
	static volatile uint64_t t91 = 509363309263LLU;

	t91 = (x433^((x434+x435)%x436));

	if (t91 != 6170651LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x437 = UINT8_MAX;
	volatile int8_t x438 = INT8_MAX;
	volatile int16_t x439 = 13;
	static int8_t x440 = 11;
	int32_t t92 = -181487840;

	t92 = (x437^((x438+x439)%x440));

	if (t92 != 247) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x445 = INT16_MAX;
	volatile int8_t x446 = -1;
	volatile int16_t x447 = INT16_MAX;
	static int8_t x448 = -1;
	volatile int32_t t93 = -781;

	t93 = (x445^((x446+x447)%x448));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x449 = 94U;
	int32_t x451 = 1477;
	int32_t x452 = INT32_MAX;
	static volatile uint32_t t94 = 82868U;

	t94 = (x449^((x450+x451)%x452));

	if (t94 != 1307U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x453 = INT8_MIN;
	static int16_t x454 = -5776;
	int32_t x455 = 50577332;
	volatile uint32_t x456 = UINT32_MAX;
	uint32_t t95 = 404856373U;

	t95 = (x453^((x454+x455)%x456));

	if (t95 != 4244395684U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x457 = INT8_MIN;
	int16_t x458 = -1;
	static uint16_t x459 = 345U;
	int16_t x460 = 1978;
	int32_t t96 = 19448;

	t96 = (x457^((x458+x459)%x460));

	if (t96 != -296) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x461 = -1LL;
	uint64_t x463 = 3653501503081LLU;
	volatile int64_t x464 = INT64_MIN;
	volatile uint64_t t97 = 1007461209917LLU;

	t97 = (x461^((x462+x463)%x464));

	if (t97 != 18446740420208048479LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = 35;
	int16_t x467 = 1;
	int64_t x468 = -1LL;
	static volatile int64_t t98 = 27LL;

	t98 = (x465^((x466+x467)%x468));

	if (t98 != 35LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x469 = 7U;
	uint32_t x471 = 11U;

	t99 = (x469^((x470+x471)%x472));

	if (t99 != 4294934540U) { NG(); } else { ; }
	
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

