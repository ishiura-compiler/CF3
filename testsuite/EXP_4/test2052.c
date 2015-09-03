#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = -6;
int64_t x5 = INT64_MIN;
volatile uint64_t t3 = 412LLU;
int32_t x23 = INT32_MIN;
uint64_t t6 = 3783117LLU;
int16_t x29 = INT16_MIN;
uint32_t t7 = 1U;
uint64_t t9 = 56786077485638942LLU;
int8_t x46 = INT8_MIN;
uint32_t x47 = 1U;
volatile int8_t x51 = INT8_MAX;
volatile int64_t x58 = -1LL;
volatile uint32_t x64 = 0U;
int8_t x65 = -1;
static volatile int32_t x66 = 12;
volatile uint32_t t15 = 361U;
uint64_t x74 = 13667462LLU;
uint16_t x81 = 36U;
volatile int32_t x82 = -2;
int8_t x93 = 1;
int32_t x96 = INT32_MIN;
volatile int64_t t22 = 515324LL;
volatile int64_t x103 = 187LL;
int32_t x105 = INT32_MIN;
int32_t t25 = INT32_MIN;
uint8_t x110 = 6U;
static int64_t x111 = INT64_MAX;
static volatile int64_t t27 = 49609LL;
int32_t x118 = 2666517;
uint32_t x119 = UINT32_MAX;
static volatile int16_t x120 = 76;
volatile uint64_t t29 = 515762LLU;
static volatile uint32_t t30 = 117312004U;
volatile int32_t x130 = 6;
uint64_t x134 = UINT64_MAX;
uint32_t x139 = 809U;
static int64_t x140 = -8395LL;
uint64_t x149 = 52193294460LLU;
int8_t x152 = 0;
int64_t x156 = -4597570931LL;
int64_t t37 = 0LL;
int8_t x158 = INT8_MIN;
int64_t t38 = 2378LL;
uint32_t x165 = 198U;
uint16_t x168 = UINT16_MAX;
static volatile int32_t t41 = 58925;
volatile uint8_t x178 = UINT8_MAX;
static uint8_t x179 = UINT8_MAX;
uint8_t x181 = 0U;
uint16_t x183 = UINT16_MAX;
volatile uint16_t x191 = UINT16_MAX;
static volatile uint64_t t47 = 6921297457LLU;
int32_t x212 = -1;
int8_t x218 = INT8_MAX;
int32_t x219 = -414738;
uint32_t t51 = 463U;
static int64_t x221 = INT64_MIN;
static volatile uint32_t x224 = UINT32_MAX;
uint64_t x226 = 15332874LLU;
static volatile uint32_t x227 = 1U;
uint32_t t58 = 10962U;
int64_t x261 = -1LL;
uint16_t x262 = 97U;
uint64_t x264 = UINT64_MAX;
volatile uint64_t x268 = 506492972585037780LLU;
uint16_t x279 = 536U;
volatile uint16_t x283 = 52U;
volatile int32_t x290 = INT32_MIN;
uint64_t x300 = UINT64_MAX;
uint16_t x302 = UINT16_MAX;
uint32_t x303 = UINT32_MAX;
static int16_t x305 = INT16_MIN;
static uint64_t x306 = 429LLU;
uint8_t x307 = UINT8_MAX;
int8_t x308 = -1;
volatile int16_t x311 = INT16_MAX;
int32_t x320 = INT32_MAX;
int32_t t74 = 14047141;
static uint32_t x324 = UINT32_MAX;
int64_t x328 = -1LL;
uint8_t x330 = 1U;
volatile int16_t x331 = -3;
volatile uint64_t x339 = 2LLU;
uint64_t t79 = 7540023LLU;
int16_t x344 = INT16_MIN;
int32_t x345 = INT32_MIN;
uint16_t x349 = 10U;
int64_t x365 = INT64_MIN;
static volatile int16_t x366 = 1722;
int64_t x367 = -1LL;
int64_t x378 = INT64_MIN;
volatile int16_t x379 = -1;
int32_t x395 = -1827611;
int8_t x398 = INT8_MIN;
volatile int16_t x404 = -1;
int32_t x419 = INT32_MIN;
int32_t x424 = INT32_MIN;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint8_t x3 = 30U;
	int16_t x4 = 7;
	static int64_t t0 = INT64_MIN;

	t0 = (x1&(x2-(x3^x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MAX;
	int64_t x8 = INT64_MAX;
	static uint64_t t1 = 55LLU;

	t1 = (x5&(x6-(x7^x8)));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	static volatile int8_t x10 = INT8_MIN;
	int8_t x11 = 9;
	int16_t x12 = 110;
	static int32_t t2 = -2;

	t2 = (x9&(x10-(x11^x12)));

	if (t2 != 25) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 4008249110LLU;
	volatile int64_t x14 = -1LL;
	static uint16_t x15 = 0U;
	int64_t x16 = 928553629403271LL;

	t3 = (x13&(x14-(x15^x16)));

	if (t3 != 1119946512LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int32_t x18 = INT32_MAX;
	int8_t x19 = -1;
	int8_t x20 = INT8_MIN;
	volatile int64_t t4 = -549258414376105LL;

	t4 = (x17&(x18-(x19^x20)));

	if (t4 != 2147483520LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = 11109U;
	volatile uint16_t x24 = 32330U;
	volatile uint64_t t5 = 241839017LLU;

	t5 = (x21&(x22-(x23^x24)));

	if (t5 != 2147462427LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 3;
	uint8_t x26 = 48U;
	int8_t x27 = -10;
	uint64_t x28 = 755503651184902874LLU;

	t6 = (x25&(x26-(x27^x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 2866U;

	t7 = (x29&(x30-(x31^x32)));

	if (t7 != 2147450880U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MIN;
	static volatile int8_t x35 = INT8_MAX;
	volatile uint8_t x36 = UINT8_MAX;
	static uint64_t t8 = 34652784560813263LLU;

	t8 = (x33&(x34-(x35^x36)));

	if (t8 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -45;
	volatile uint64_t x38 = 90225580554631586LLU;
	static uint64_t x39 = 1140768210655164709LLU;
	static uint64_t x40 = UINT64_MAX;

	t9 = (x37&(x38-(x39^x40)));

	if (t9 != 1230993791209796288LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	uint16_t x48 = 2U;
	volatile int64_t t10 = -821475LL;

	t10 = (x45&(x46-(x47^x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = INT16_MAX;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = 97019;

	t11 = (x49&(x50-(x51^x52)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int8_t x54 = -1;
	int64_t x55 = 30811474060LL;
	uint16_t x56 = UINT16_MAX;
	volatile uint64_t t12 = 3930302812770508356LLU;

	t12 = (x53&(x54-(x55^x56)));

	if (t12 != 18446744042898114700LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = 461303;
	static int16_t x59 = 0;
	uint8_t x60 = 10U;
	int64_t t13 = 63LL;

	t13 = (x57&(x58-(x59^x60)));

	if (t13 != 461301LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x61 = UINT16_MAX;
	volatile uint64_t x62 = 86LLU;
	uint32_t x63 = 6876307U;
	volatile uint64_t t14 = 3853060316296099LLU;

	t14 = (x61&(x62-(x63^x64)));

	if (t14 != 5059LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x67 = 3106;
	volatile uint32_t x68 = UINT32_MAX;

	t15 = (x65&(x66-(x67^x68)));

	if (t15 != 3119U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	volatile int64_t x70 = INT64_MIN;
	int64_t x71 = 845530283LL;
	int8_t x72 = INT8_MIN;
	int64_t t16 = 25796LL;

	t16 = (x69&(x70-(x71^x72)));

	if (t16 != -9223372036009245568LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 0U;
	static uint16_t x75 = 1144U;
	volatile uint32_t x76 = UINT32_MAX;
	uint64_t t17 = 1055LLU;

	t17 = (x73&(x74-(x75^x76)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = 14160;

	t18 = (x77&(x78-(x79^x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x83 = -1;
	int32_t x84 = -718770526;
	volatile int32_t t19 = -1311043;

	t19 = (x81&(x82-(x83^x84)));

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x85 = 5643944356LLU;
	int8_t x86 = 0;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = 1;
	uint64_t t20 = 147LLU;

	t20 = (x85&(x86-(x87^x88)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = -1;
	int64_t x92 = INT64_MIN;
	int64_t t21 = 30373344LL;

	t21 = (x89&(x90-(x91^x92)));

	if (t21 != 256LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = -1;
	int64_t x95 = INT64_MIN;

	t22 = (x93&(x94-(x95^x96)));

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MIN;
	int8_t x99 = 9;
	volatile int32_t x100 = 302034;
	volatile int32_t t23 = -2;

	t23 = (x97&(x98-(x99^x100)));

	if (t23 != -334848) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 12U;
	int32_t x104 = 8994;
	volatile uint64_t t24 = 753227615969040478LLU;

	t24 = (x101&(x102-(x103^x104)));

	if (t24 != 18446744073709542515LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x106 = -153;
	uint8_t x107 = 60U;
	int8_t x108 = 0;

	t25 = (x105&(x106-(x107^x108)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = 0;
	int8_t x112 = INT8_MAX;
	volatile int64_t t26 = 297508LL;

	t26 = (x109&(x110-(x111^x112)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = -10;
	int8_t x114 = INT8_MIN;
	int64_t x115 = -36950797LL;
	volatile int16_t x116 = -293;

	t27 = (x113&(x114-(x115^x116)));

	if (t27 != -36950704LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 0U;
	static volatile uint32_t t28 = 21U;

	t28 = (x117&(x118-(x119^x120)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 220831166LLU;

	t29 = (x121&(x122-(x123^x124)));

	if (t29 != 220831232LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = -469076624;
	uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 959472247U;
	int8_t x128 = INT8_MAX;

	t30 = (x125&(x126-(x127^x128)));

	if (t30 != 3288995184U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	volatile uint16_t x132 = 139U;
	static int32_t t31 = -807559347;

	t31 = (x129&(x130-(x131^x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x133 = 55U;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = 258816LLU;
	volatile uint64_t t32 = 256879020087207LLU;

	t32 = (x133&(x134-(x135^x136)));

	if (t32 != 55LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = 1236753393672LLU;
	uint64_t x138 = UINT64_MAX;
	volatile uint64_t t33 = 780433278561LLU;

	t33 = (x137&(x138-(x139^x140)));

	if (t33 != 8192LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x141 = INT16_MIN;
	volatile int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t34 = -13739609LL;

	t34 = (x141&(x142-(x143^x144)));

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 2039739497U;
	int64_t x146 = -1LL;
	uint16_t x147 = 75U;
	uint32_t x148 = 1U;
	int64_t t35 = 292096LL;

	t35 = (x145&(x146-(x147^x148)));

	if (t35 != 2039739425LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x150 = 5;
	int32_t x151 = 17823;
	volatile uint64_t t36 = 12673163985195LLU;

	t36 = (x149&(x150-(x151^x152)));

	if (t36 != 52193278052LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 46883317U;
	uint32_t x154 = UINT32_MAX;
	uint16_t x155 = 1U;

	t37 = (x153&(x154-(x155^x156)));

	if (t37 != 34161009LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = INT16_MAX;
	int64_t x159 = 24536131402393LL;
	static int64_t x160 = -1LL;

	t38 = (x157&(x158-(x159^x160)));

	if (t38 != 31258LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	uint8_t x162 = 1U;
	static uint16_t x163 = 762U;
	int16_t x164 = -1;
	volatile int64_t t39 = 23LL;

	t39 = (x161&(x162-(x163^x164)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = -18461614964LL;
	int8_t x167 = 16;
	static volatile int64_t t40 = 197164109092936LL;

	t40 = (x165&(x166-(x167^x168)));

	if (t40 != 132LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 106U;
	static uint16_t x170 = 6U;
	static uint8_t x171 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;

	t41 = (x169&(x170-(x171^x172)));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = -1;
	volatile uint8_t x180 = UINT8_MAX;
	int32_t t42 = -51;

	t42 = (x177&(x178-(x179^x180)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x182 = UINT32_MAX;
	uint8_t x184 = 21U;
	uint32_t t43 = 1U;

	t43 = (x181&(x182-(x183^x184)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	volatile int32_t x186 = -1;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	static int32_t t44 = -45;

	t44 = (x185&(x186-(x187^x188)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x189 = INT16_MIN;
	volatile uint8_t x190 = UINT8_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t45 = -495555;

	t45 = (x189&(x190-(x191^x192)));

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x197 = 15854U;
	volatile uint64_t x198 = UINT64_MAX;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = UINT32_MAX;
	uint64_t t46 = 4LLU;

	t46 = (x197&(x198-(x199^x200)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x201 = UINT8_MAX;
	uint32_t x202 = 886675U;
	static uint64_t x203 = 1902686219728318839LLU;
	int32_t x204 = -95088366;

	t47 = (x201&(x202-(x203^x204)));

	if (t47 != 46LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x205 = 93268684U;
	int8_t x206 = INT8_MIN;
	volatile int32_t x207 = -1;
	int8_t x208 = 17;
	volatile uint32_t t48 = 0U;

	t48 = (x205&(x206-(x207^x208)));

	if (t48 != 93268608U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x209 = 62;
	uint16_t x210 = 57U;
	uint8_t x211 = 1U;
	int32_t t49 = 1015;

	t49 = (x209&(x210-(x211^x212)));

	if (t49 != 58) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = 1U;
	static uint16_t x214 = 6U;
	int8_t x215 = INT8_MIN;
	volatile int32_t x216 = -1;
	volatile uint32_t t50 = 9841U;

	t50 = (x213&(x214-(x215^x216)));

	if (t50 != 1U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x220 = 19883574U;

	t51 = (x217&(x218-(x219^x220)));

	if (t51 != 19477120U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x222 = -1;
	uint64_t x223 = 451805381416189976LLU;
	uint64_t t52 = 1768974378LLU;

	t52 = (x221&(x222-(x223^x224)));

	if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = 1U;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t53 = 12LLU;

	t53 = (x225&(x226-(x227^x228)));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int8_t x230 = -1;
	volatile uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MAX;
	volatile int64_t t54 = 52142698LL;

	t54 = (x229&(x230-(x231^x232)));

	if (t54 != 255LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = INT16_MIN;
	uint64_t x234 = 0LLU;
	static int32_t x235 = -25;
	uint64_t x236 = 1282817759798294907LLU;
	static uint64_t t55 = 24611540LLU;

	t55 = (x233&(x234-(x235^x236)));

	if (t55 != 1282817759798263808LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = -1;
	int8_t x238 = 57;
	int16_t x239 = INT16_MAX;
	int16_t x240 = INT16_MIN;
	static int32_t t56 = -55783406;

	t56 = (x237&(x238-(x239^x240)));

	if (t56 != 58) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x241 = -1LL;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	static int32_t x244 = INT32_MIN;
	int64_t t57 = -1858848LL;

	t57 = (x241&(x242-(x243^x244)));

	if (t57 != -2147417985LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x249 = INT8_MAX;
	volatile int8_t x250 = INT8_MAX;
	uint32_t x251 = 100754U;
	volatile int16_t x252 = 28;

	t58 = (x249&(x250-(x251^x252)));

	if (t58 != 113U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = -1237893;
	int8_t x254 = -37;
	volatile uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MIN;
	static uint64_t t59 = 3056416040869LLU;

	t59 = (x253&(x254-(x255^x256)));

	if (t59 != 18446744073708313688LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -1;
	int8_t x258 = 1;
	volatile int8_t x259 = INT8_MIN;
	int32_t x260 = -1469168;
	volatile int32_t t60 = -1787968;

	t60 = (x257&(x258-(x259^x260)));

	if (t60 != -1469071) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x263 = 190815840;
	uint64_t t61 = 129166931LLU;

	t61 = (x261&(x262-(x263^x264)));

	if (t61 != 190815938LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = 1538U;
	volatile uint64_t x267 = 7157856681LLU;
	volatile uint64_t t62 = 617LLU;

	t62 = (x265&(x266-(x267^x268)));

	if (t62 != 17940251098174455808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -1;
	int16_t x270 = -13417;
	volatile int8_t x271 = INT8_MAX;
	static int8_t x272 = -3;
	int32_t t63 = 1019700903;

	t63 = (x269&(x270-(x271^x272)));

	if (t63 != -13291) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static uint8_t x274 = 20U;
	static uint8_t x275 = 12U;
	uint8_t x276 = UINT8_MAX;
	static volatile uint64_t t64 = 8LLU;

	t64 = (x273&(x274-(x275^x276)));

	if (t64 != 18446744073709551393LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	int8_t x278 = INT8_MAX;
	int16_t x280 = INT16_MIN;
	int64_t t65 = 503688LL;

	t65 = (x277&(x278-(x279^x280)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MAX;
	uint64_t x282 = 2873143LLU;
	int32_t x284 = INT32_MIN;
	uint64_t t66 = 7561975118456610LLU;

	t66 = (x281&(x282-(x283^x284)));

	if (t66 != 2150356739LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MIN;
	volatile int16_t x287 = INT16_MIN;
	static uint16_t x288 = 1464U;
	volatile uint64_t t67 = 510LLU;

	t67 = (x285&(x286-(x287^x288)));

	if (t67 != 18446744071562099272LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = UINT8_MAX;
	int32_t x291 = INT32_MAX;
	uint64_t x292 = UINT64_MAX;
	uint64_t t68 = 3LLU;

	t68 = (x289&(x290-(x291^x292)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	static int64_t x298 = -400570372906006346LL;
	uint16_t x299 = UINT16_MAX;
	uint64_t t69 = 288LLU;

	t69 = (x297&(x298-(x299^x300)));

	if (t69 != 8822801663948834998LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x301 = INT8_MIN;
	volatile int16_t x304 = INT16_MAX;
	static volatile uint32_t t70 = 47U;

	t70 = (x301&(x302-(x303^x304)));

	if (t70 != 98176U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t t71 = 3086298507031LLU;

	t71 = (x305&(x306-(x307^x308)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 33771620337075003LLU;
	int16_t x310 = -10926;
	int8_t x312 = -36;
	uint64_t t72 = 56601608740462753LLU;

	t72 = (x309&(x310-(x311^x312)));

	if (t72 != 16683LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x313 = 25U;
	volatile uint16_t x314 = UINT16_MAX;
	static volatile uint64_t x315 = 0LLU;
	uint32_t x316 = UINT32_MAX;
	volatile uint64_t t73 = 627445998023466143LLU;

	t73 = (x313&(x314-(x315^x316)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = 0;
	int16_t x318 = -113;
	int16_t x319 = INT16_MAX;

	t74 = (x317&(x318-(x319^x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MIN;
	volatile uint64_t x322 = 65909746LLU;
	static int32_t x323 = INT32_MIN;
	uint64_t t75 = 10245593266629139LLU;

	t75 = (x321&(x322-(x323^x324)));

	if (t75 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x325 = UINT64_MAX;
	int8_t x326 = 0;
	int32_t x327 = -1;
	uint64_t t76 = 116800LLU;

	t76 = (x325&(x326-(x327^x328)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t77 = -1;

	t77 = (x329&(x330-(x331^x332)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = 357U;
	volatile int8_t x334 = 16;
	uint64_t x335 = 68309536474LLU;
	volatile int16_t x336 = -5107;
	volatile uint64_t t78 = 2102LLU;

	t78 = (x333&(x334-(x335^x336)));

	if (t78 != 289LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = -1;
	uint64_t x340 = UINT64_MAX;

	t79 = (x337&(x338-(x339^x340)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 54820LLU;
	volatile int32_t x342 = INT32_MIN;
	int8_t x343 = 4;
	uint64_t t80 = 13808127536882LLU;

	t80 = (x341&(x342-(x343^x344)));

	if (t80 != 22052LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x346 = 2312;
	int64_t x347 = -2LL;
	static int32_t x348 = INT32_MAX;
	int64_t t81 = -118LL;

	t81 = (x345&(x346-(x347^x348)));

	if (t81 != 2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x350 = 123U;
	uint32_t x351 = 25387892U;
	static volatile int16_t x352 = INT16_MAX;
	uint32_t t82 = 299125770U;

	t82 = (x349&(x350-(x351^x352)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MIN;
	uint16_t x354 = 6U;
	uint32_t x355 = 15U;
	static int8_t x356 = 5;
	volatile uint32_t t83 = 7097070U;

	t83 = (x353&(x354-(x355^x356)));

	if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int64_t x359 = INT64_MAX;
	static int16_t x360 = INT16_MAX;
	uint64_t t84 = 537764151951LLU;

	t84 = (x357&(x358-(x359^x360)));

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	int16_t x363 = INT16_MAX;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x361&(x362-(x363^x364)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x368 = -1;
	int64_t t86 = -54541780LL;

	t86 = (x365&(x366-(x367^x368)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -1;
	uint16_t x370 = 1036U;
	static int64_t x371 = INT64_MAX;
	static uint16_t x372 = 253U;
	int64_t t87 = 1029017LL;

	t87 = (x369&(x370-(x371^x372)));

	if (t87 != -9223372036854774518LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x373 = UINT8_MAX;
	int8_t x374 = 0;
	static int64_t x375 = INT64_MAX;
	volatile int8_t x376 = 28;
	int64_t t88 = -274019521LL;

	t88 = (x373&(x374-(x375^x376)));

	if (t88 != 29LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = -1;
	int16_t x380 = 177;
	int64_t t89 = 957547505LL;

	t89 = (x377&(x378-(x379^x380)));

	if (t89 != -9223372036854775630LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = INT8_MIN;
	static int32_t x382 = INT32_MIN;
	uint32_t x383 = 7171U;
	int32_t x384 = INT32_MIN;
	volatile uint32_t t90 = 11503U;

	t90 = (x381&(x382-(x383^x384)));

	if (t90 != 4294960000U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = 0U;
	static uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MAX;
	uint8_t x388 = 74U;
	uint32_t t91 = 2147149325U;

	t91 = (x385&(x386-(x387^x388)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x389 = 920U;
	int16_t x390 = -1;
	int16_t x391 = INT16_MIN;
	static int8_t x392 = INT8_MIN;
	static volatile int32_t t92 = 8172;

	t92 = (x389&(x390-(x391^x392)));

	if (t92 != 24) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MAX;
	int16_t x394 = -1;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t93 = -7967;

	t93 = (x393&(x394-(x395^x396)));

	if (t93 != 26) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = -3733470750626LL;
	int16_t x399 = 315;
	uint32_t x400 = 14467U;
	static volatile int64_t t94 = -62473LL;

	t94 = (x397&(x398-(x399^x400)));

	if (t94 != 3150790728LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	static int8_t x402 = -1;
	int8_t x403 = -8;
	static volatile int32_t t95 = -364295;

	t95 = (x401&(x402-(x403^x404)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 191017LL;
	int64_t x410 = -88236543839LL;
	uint64_t x411 = 167436030753774LLU;
	int8_t x412 = INT8_MIN;
	uint64_t t96 = 1510542079316108176LLU;

	t96 = (x409&(x410-(x411^x412)));

	if (t96 != 190497LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MAX;
	int32_t x414 = 0;
	uint8_t x415 = UINT8_MAX;
	static int8_t x416 = INT8_MIN;
	int32_t t97 = -410;

	t97 = (x413&(x414-(x415^x416)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x417 = 439456U;
	static volatile int8_t x418 = -28;
	static uint16_t x420 = UINT16_MAX;
	volatile uint32_t t98 = 189284148U;

	t98 = (x417&(x418-(x419^x420)));

	if (t98 != 439456U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x421 = UINT16_MAX;
	uint8_t x422 = 1U;
	volatile int64_t x423 = INT64_MIN;
	volatile int64_t t99 = 2725LL;

	t99 = (x421&(x422-(x423^x424)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

