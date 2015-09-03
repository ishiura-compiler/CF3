#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = 16802LL;
uint8_t x6 = 0U;
int16_t x33 = 2;
int32_t x34 = INT32_MAX;
int64_t x36 = 1827957006151LL;
volatile int64_t t6 = 17675750950253LL;
static uint32_t x46 = 238U;
int8_t x53 = INT8_MAX;
static volatile int16_t x56 = INT16_MAX;
int64_t x61 = -372LL;
int64_t t12 = -469519390671495LL;
volatile uint8_t x69 = 16U;
int8_t x70 = INT8_MAX;
int64_t t13 = -2588946316789700010LL;
uint16_t x74 = 536U;
int64_t x77 = -1LL;
static volatile int64_t x81 = -1080917945102855LL;
static int8_t x83 = 14;
uint8_t x84 = 0U;
uint32_t x85 = UINT32_MAX;
int8_t x94 = INT8_MIN;
volatile int64_t t20 = -253996809145002571LL;
int16_t x101 = INT16_MAX;
int32_t x103 = 1;
volatile int8_t x106 = -54;
static volatile int64_t t22 = -222LL;
int16_t x109 = INT16_MIN;
int8_t x115 = -1;
static int64_t x117 = -121739488949LL;
int64_t x123 = INT64_MIN;
uint16_t x127 = UINT16_MAX;
uint16_t x131 = UINT16_MAX;
uint64_t x144 = 8635635LLU;
uint64_t t30 = 0LLU;
static int8_t x145 = INT8_MIN;
volatile int32_t t32 = -123980;
int32_t x156 = -498309423;
volatile uint32_t t33 = 9U;
int32_t x160 = -24;
int64_t t36 = -895118LL;
uint64_t x169 = 1504092469624551108LLU;
volatile uint64_t t37 = 1637366LLU;
static volatile int64_t x193 = -1LL;
uint64_t x203 = UINT64_MAX;
uint32_t x205 = UINT32_MAX;
uint64_t x207 = UINT64_MAX;
uint16_t x213 = 1879U;
uint64_t x214 = UINT64_MAX;
int32_t x216 = INT32_MIN;
int16_t x226 = INT16_MAX;
volatile int8_t x235 = -13;
static uint8_t x239 = UINT8_MAX;
int64_t x246 = INT64_MAX;
static uint32_t x247 = 192473U;
int8_t x254 = INT8_MIN;
static int32_t t57 = 513678652;
int64_t x266 = INT64_MIN;
int8_t x267 = INT8_MAX;
uint8_t x269 = 31U;
int32_t x276 = INT32_MIN;
int64_t x277 = -1LL;
static int16_t x280 = INT16_MAX;
int8_t x286 = INT8_MAX;
int64_t x287 = INT64_MIN;
int32_t x288 = -1761420;
int8_t x291 = INT8_MIN;
uint8_t x301 = UINT8_MAX;
uint8_t x318 = 1U;
uint16_t x319 = 2U;
int32_t x320 = 13;
static int64_t x328 = 1782532777862LL;
static volatile int64_t x329 = INT64_MIN;
int16_t x336 = INT16_MAX;
int8_t x341 = -1;
int16_t x342 = 1;
static volatile int16_t x345 = -1;
static int16_t x355 = 64;
static int64_t t77 = -6527316617101LL;
uint16_t x367 = 120U;
static uint64_t t79 = 101346304LLU;
volatile int32_t x375 = 758;
uint8_t x383 = 0U;
static int16_t x384 = INT16_MIN;
int16_t x386 = 17;
static volatile int32_t x387 = 41034460;
uint64_t t84 = 3114827102028379LLU;
uint64_t x395 = 28LLU;
volatile int16_t x397 = INT16_MAX;
int64_t x402 = INT64_MAX;
int8_t x405 = INT8_MIN;
int32_t x408 = -1;
volatile int16_t x423 = -9;
int64_t x439 = 456440685791213LL;
static volatile int16_t x440 = INT16_MAX;
static volatile int64_t x443 = -1LL;
volatile int64_t t98 = 9LL;
volatile int16_t x449 = -1;
int32_t x452 = -148;


void f0(void) {
	int8_t x1 = 41;
	uint8_t x2 = 0U;
	uint8_t x3 = 0U;
	static volatile int8_t x4 = -1;
	static int32_t t0 = -313;

	t0 = (x1-(x2^(x3^x4)));

	if (t0 != 42) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 187U;
	int32_t x8 = -1;
	volatile int64_t t1 = -2419824250LL;

	t1 = (x5-(x6^(x7^x8)));

	if (t1 != -4294950306LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = UINT8_MAX;
	static int8_t x11 = INT8_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 950918787978052LLU;

	t2 = (x9-(x10^(x11^x12)));

	if (t2 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = INT64_MAX;
	static volatile int8_t x18 = 0;
	uint64_t x19 = 6713LLU;
	int64_t x20 = -1366032203310523718LL;
	uint64_t t3 = 673427073625410915LLU;

	t3 = (x17-(x18^(x19^x20)));

	if (t3 != 10589404240165306236LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	static uint16_t x22 = UINT16_MAX;
	int32_t x23 = -1;
	uint64_t x24 = UINT64_MAX;
	uint64_t t4 = 206379920200875485LLU;

	t4 = (x21-(x22^(x23^x24)));

	if (t4 != 18446744073709485953LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 586270833;
	volatile uint16_t x26 = 18U;
	volatile int32_t x27 = INT32_MAX;
	uint16_t x28 = 0U;
	static volatile int32_t t5 = -3610549;

	t5 = (x25-(x26^(x27^x28)));

	if (t5 != -1561212796) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x35 = INT64_MAX;

	t6 = (x33-(x34^(x35^x36)));

	if (t6 != -9223370207647129413LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x37 = 21;
	static volatile uint8_t x38 = 3U;
	int64_t x39 = -1LL;
	int16_t x40 = -1;
	int64_t t7 = 26057273698953345LL;

	t7 = (x37-(x38^(x39^x40)));

	if (t7 != 18LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	static int64_t x42 = INT64_MAX;
	volatile int32_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	static int64_t t8 = -56403689439LL;

	t8 = (x41-(x42^(x43^x44)));

	if (t8 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = -1;
	uint32_t x47 = 3968U;
	static int16_t x48 = INT16_MAX;
	uint32_t t9 = 3282697U;

	t9 = (x45-(x46^(x47^x48)));

	if (t9 != 4294938478U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	static int64_t x51 = INT64_MAX;
	static int32_t x52 = INT32_MIN;
	int64_t t10 = -146013289LL;

	t10 = (x49-(x50^(x51^x52)));

	if (t10 != -2147483775LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x54 = 92117821131605737LLU;
	volatile uint64_t x55 = 121039481LLU;
	volatile uint64_t t11 = 49309062407LLU;

	t11 = (x53-(x54^(x55^x56)));

	if (t11 != 18354626252658257168LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x62 = 7602U;
	int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MIN;

	t12 = (x61-(x62^(x63^x64)));

	if (t12 != -9223372034707300134LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x71 = INT16_MIN;
	int64_t x72 = 2126730357003750LL;

	t13 = (x69-(x70^(x71^x72)));

	if (t13 != 2126730356992631LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MAX;
	int16_t x75 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	int32_t t14 = -426;

	t14 = (x73-(x74^(x75^x76)));

	if (t14 != 32231) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MAX;
	static int32_t x80 = 9131423;
	static volatile int64_t t15 = 262831LL;

	t15 = (x77-(x78^(x79^x80)));

	if (t15 != -2138363296LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x82 = 1602985U;
	static volatile int64_t t16 = 84371997472033LL;

	t16 = (x81-(x82^(x83^x84)));

	if (t16 != -1080917946705838LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x86 = 15;
	static uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MIN;
	uint64_t t17 = 2147551572LLU;

	t17 = (x85-(x86^(x87^x88)));

	if (t17 != 4294934543LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x89 = 3U;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = UINT8_MAX;
	volatile int64_t x92 = -11394LL;
	volatile int64_t t18 = 245031938591324185LL;

	t18 = (x89-(x90^(x91^x92)));

	if (t18 != -21374LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 3U;
	static int64_t x95 = 1426737LL;
	static volatile int16_t x96 = -1;
	volatile int64_t t19 = -4054763LL;

	t19 = (x93-(x94^(x95^x96)));

	if (t19 != -1426763LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = -129532LL;
	int16_t x98 = -1099;
	static int16_t x99 = INT16_MIN;
	volatile int16_t x100 = -1;

	t20 = (x97-(x98^(x99^x100)));

	if (t20 != -97862LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x102 = INT64_MAX;
	static int64_t x104 = 1400898821016LL;
	volatile int64_t t21 = -887643LL;

	t21 = (x101-(x102^(x103^x104)));

	if (t21 != -9223370635955922023LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x105 = -1LL;
	static int32_t x107 = INT32_MAX;
	int32_t x108 = 6276397;

	t22 = (x105-(x106^(x107^x108)));

	if (t22 != 2141207271LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x110 = -11;
	int8_t x111 = -12;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t23 = 7;

	t23 = (x109-(x110^(x111^x112)));

	if (t23 != -32641) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x113 = -1;
	int8_t x114 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t24 = INT32_MAX;

	t24 = (x113-(x114^(x115^x116)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x118 = -1;
	int8_t x119 = -1;
	int32_t x120 = INT32_MIN;
	volatile int64_t t25 = 6LL;

	t25 = (x117-(x118^(x119^x120)));

	if (t25 != -119592005301LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = -1;
	int32_t x124 = -35122;
	volatile int64_t t26 = 1610974575656874LL;

	t26 = (x121-(x122^(x123^x124)));

	if (t26 != 9223372036854740559LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;
	int32_t t27 = 52612423;

	t27 = (x125-(x126^(x127^x128)));

	if (t27 != 2147385600) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -7;
	volatile int32_t x130 = INT32_MIN;
	int32_t x132 = 6970;
	int32_t t28 = -1;

	t28 = (x129-(x130^(x131^x132)));

	if (t28 != 2147425076) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -5;
	int16_t x138 = 1;
	int32_t x139 = 31002;
	volatile int16_t x140 = INT16_MIN;
	int32_t t29 = -4633;

	t29 = (x137-(x138^(x139^x140)));

	if (t29 != 1760) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	uint32_t x142 = UINT32_MAX;
	static int32_t x143 = -56;

	t30 = (x141-(x142^(x143^x144)));

	if (t30 != 4286331707LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	static uint16_t x148 = 20U;
	int32_t t31 = 3640;

	t31 = (x145-(x146^(x147^x148)));

	if (t31 != -148) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 14192U;
	static volatile int32_t x150 = INT32_MIN;
	static int8_t x151 = -1;
	static uint8_t x152 = UINT8_MAX;

	t32 = (x149-(x150^(x151^x152)));

	if (t32 != -2147469200) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = 1014;
	int8_t x154 = 0;
	uint32_t x155 = 0U;

	t33 = (x153-(x154^(x155^x156)));

	if (t33 != 498310437U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = UINT16_MAX;
	static int8_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t t34 = 87459;

	t34 = (x157-(x158^(x159^x160)));

	if (t34 != 65640) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = -1;
	int32_t x162 = INT32_MAX;
	volatile uint64_t x163 = 239786454LLU;
	uint32_t x164 = 1706830938U;
	uint64_t t35 = 63231101703605LLU;

	t35 = (x161-(x162^(x163^x164)));

	if (t35 != 18446744073373414796LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MIN;
	volatile int64_t x167 = INT64_MIN;
	volatile uint8_t x168 = 1U;

	t36 = (x165-(x166^(x167^x168)));

	if (t36 != -9223372036854742914LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x170 = 5U;
	static uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;

	t37 = (x169-(x170^(x171^x172)));

	if (t37 != 10727464506479326922LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = 1670018564991790LLU;
	volatile int8_t x174 = -58;
	static int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MIN;
	static uint64_t t38 = 62618568609209LLU;

	t38 = (x173-(x174^(x175^x176)));

	if (t38 != 1670020712442728LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	volatile uint64_t x178 = 1613LLU;
	volatile int16_t x179 = INT16_MIN;
	uint32_t x180 = 21042512U;
	uint64_t t39 = 7943297500064091181LLU;

	t39 = (x177-(x178^(x179^x180)));

	if (t39 != 9223372032580873443LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = 52;
	uint64_t x182 = 27796752LLU;
	int8_t x183 = INT8_MAX;
	volatile int16_t x184 = 7663;
	uint64_t t40 = 166068556662185649LLU;

	t40 = (x181-(x182^(x183^x184)));

	if (t40 != 18446744073681749940LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MAX;
	volatile int8_t x190 = INT8_MIN;
	volatile int8_t x191 = 1;
	int32_t x192 = INT32_MIN;
	int32_t t41 = 65217187;

	t41 = (x189-(x190^(x191^x192)));

	if (t41 != -2147483394) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -1;
	volatile int64_t t42 = -3LL;

	t42 = (x193-(x194^(x195^x196)));

	if (t42 != -2147483521LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = UINT8_MAX;
	int16_t x202 = INT16_MIN;
	int32_t x204 = -1;
	static uint64_t t43 = 1LLU;

	t43 = (x201-(x202^(x203^x204)));

	if (t43 != 33023LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x206 = INT16_MAX;
	uint8_t x208 = 12U;
	volatile uint64_t t44 = 24048988437845369LLU;

	t44 = (x205-(x206^(x207^x208)));

	if (t44 != 4295000051LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = 1114896603154893475LL;
	static volatile int64_t x210 = INT64_MIN;
	volatile int32_t x211 = -1;
	volatile int8_t x212 = INT8_MAX;
	volatile int64_t t45 = 1869LL;

	t45 = (x209-(x210^(x211^x212)));

	if (t45 != -8108475433699882205LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x215 = INT32_MIN;
	uint64_t t46 = 4LLU;

	t46 = (x213-(x214^(x215^x216)));

	if (t46 != 1880LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MAX;
	static volatile int8_t x218 = INT8_MAX;
	volatile int8_t x219 = 6;
	uint16_t x220 = 908U;
	volatile int32_t t47 = 9524396;

	t47 = (x217-(x218^(x219^x220)));

	if (t47 != 2147482634) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = 19213LLU;
	int64_t x222 = 4768559078576105LL;
	int8_t x223 = -26;
	int32_t x224 = INT32_MAX;
	static uint64_t t48 = 80757LLU;

	t48 = (x221-(x222^(x223^x224)));

	if (t48 != 4768559683615517LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MIN;
	uint16_t x227 = 3584U;
	int8_t x228 = -1;
	static volatile int64_t t49 = -7450379035LL;

	t49 = (x225-(x226^(x227^x228)));

	if (t49 != -9223372036854746624LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MAX;
	volatile int8_t x230 = INT8_MIN;
	uint8_t x231 = UINT8_MAX;
	volatile int32_t x232 = -3388043;
	int32_t t50 = 28376422;

	t50 = (x229-(x230^(x231^x232)));

	if (t50 != 2144095733) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = 243U;
	int64_t x236 = 842LL;
	static int64_t t51 = 27750LL;

	t51 = (x233-(x234^(x235^x236)));

	if (t51 != -2147482698LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x237 = 54U;
	static int32_t x238 = 95631;
	static uint8_t x240 = UINT8_MAX;
	volatile int32_t t52 = -6032;

	t52 = (x237-(x238^(x239^x240)));

	if (t52 != -95577) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x245 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int64_t t53 = -494617851624061LL;

	t53 = (x245-(x246^(x247^x248)));

	if (t53 != -9223372034707132454LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MAX;
	volatile int64_t x250 = -50400416LL;
	volatile uint16_t x251 = 7U;
	int16_t x252 = INT16_MAX;
	volatile int64_t t54 = 4555817373492022LL;

	t54 = (x249-(x250^(x251^x252)));

	if (t54 != 2197910375LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x253 = 14007618187428LLU;
	static int16_t x255 = INT16_MIN;
	static volatile int16_t x256 = 6;
	uint64_t t55 = 2477LLU;

	t55 = (x253-(x254^(x255^x256)));

	if (t55 != 14007618154782LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x257 = 144;
	static uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t56 = -12019;

	t56 = (x257-(x258^(x259^x260)));

	if (t56 != -65391) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x261 = INT8_MIN;
	static int8_t x262 = -2;
	int16_t x263 = 3;
	int32_t x264 = INT32_MAX;

	t57 = (x261-(x262^(x263^x264)));

	if (t57 != 2147483518) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x265 = 25184950;
	int8_t x268 = INT8_MIN;
	volatile int64_t t58 = -2887494LL;

	t58 = (x265-(x266^(x267^x268)));

	if (t58 != -9223372036829590857LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	uint32_t x272 = 8U;
	uint32_t t59 = 0U;

	t59 = (x269-(x270^(x271^x272)));

	if (t59 != 40U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MIN;
	static int64_t x274 = -8744410432LL;
	static volatile uint8_t x275 = UINT8_MAX;
	volatile int64_t t60 = -70113572960641249LL;

	t60 = (x273-(x274^(x275^x276)));

	if (t60 != -10582975039LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x278 = INT32_MIN;
	int32_t x279 = 59226072;
	volatile int64_t t61 = -4120530900744737709LL;

	t61 = (x277-(x278^(x279^x280)));

	if (t61 != 2088253400LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = 1437012518964LL;
	volatile int64_t t62 = -1099858925035535LL;

	t62 = (x285-(x286^(x287^x288)));

	if (t62 != -9223370599840495319LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = 3252;
	int32_t x290 = -1;
	uint8_t x292 = 3U;
	static int32_t t63 = -1987559;

	t63 = (x289-(x290^(x291^x292)));

	if (t63 != 3128) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = -1LL;
	int64_t x295 = INT64_MIN;
	volatile int16_t x296 = 999;
	volatile int64_t t64 = 12834456994870LL;

	t64 = (x293-(x294^(x295^x296)));

	if (t64 != -9223372036854742041LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 127650U;
	int32_t x299 = INT32_MIN;
	volatile uint8_t x300 = 1U;
	uint64_t t65 = 2548267LLU;

	t65 = (x297-(x298^(x299^x300)));

	if (t65 != 18446744071561940316LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x302 = 2341;
	int16_t x303 = INT16_MIN;
	uint32_t x304 = 234767U;
	volatile uint32_t t66 = 232379U;

	t66 = (x301-(x302^(x303^x304)));

	if (t66 != 255189U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x313 = 747LLU;
	uint64_t x314 = 211LLU;
	static uint16_t x315 = 680U;
	volatile int32_t x316 = INT32_MIN;
	volatile uint64_t t67 = 1533LLU;

	t67 = (x313-(x314^(x315^x316)));

	if (t67 != 2147483760LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x317 = 25;
	volatile int32_t t68 = 20982;

	t68 = (x317-(x318^(x319^x320)));

	if (t68 != 11) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	static int16_t x323 = -16287;
	int16_t x324 = INT16_MIN;
	volatile uint64_t t69 = 5969926LLU;

	t69 = (x321-(x322^(x323^x324)));

	if (t69 != 16481LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x325 = 68U;
	static uint64_t x326 = UINT64_MAX;
	volatile int8_t x327 = INT8_MIN;
	static uint64_t t70 = 455LLU;

	t70 = (x325-(x326^(x327^x328)));

	if (t70 != 18446742291176773707LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x330 = 1409914448458048761LLU;
	static int8_t x331 = INT8_MIN;
	volatile uint8_t x332 = UINT8_MAX;
	static uint64_t t71 = 27879110LLU;

	t71 = (x329-(x330^(x331^x332)));

	if (t71 != 10633286485312824442LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x333 = 4505LLU;
	uint32_t x334 = 1998488U;
	int32_t x335 = -53721991;
	static uint64_t t72 = 3522LLU;

	t72 = (x333-(x334^(x335^x336)));

	if (t72 != 18446744069467917435LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x337 = -1;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -4;
	volatile int32_t t73 = -5;

	t73 = (x337-(x338^(x339^x340)));

	if (t73 != -132) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x343 = INT16_MAX;
	volatile uint32_t x344 = 2176891U;
	volatile uint32_t t74 = 0U;

	t74 = (x341-(x342^(x343^x344)));

	if (t74 != 4292786042U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x346 = UINT32_MAX;
	uint32_t x347 = 22U;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t75 = 113656LL;

	t75 = (x345-(x346^(x347^x348)));

	if (t75 != 9223372032559808534LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x353 = 26350693107LLU;
	int8_t x354 = INT8_MAX;
	int8_t x356 = INT8_MAX;
	uint64_t t76 = 42LLU;

	t76 = (x353-(x354^(x355^x356)));

	if (t76 != 26350693043LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -1LL;
	int32_t x358 = INT32_MIN;
	int64_t x359 = 169LL;
	static uint8_t x360 = 93U;

	t77 = (x357-(x358^(x359^x360)));

	if (t77 != 2147483403LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x361 = 22530112LLU;
	volatile int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 5U;
	static uint64_t t78 = 183LLU;

	t78 = (x361-(x362^(x363^x364)));

	if (t78 != 22497350LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x366 = INT64_MAX;
	volatile uint8_t x368 = 10U;

	t79 = (x365-(x366^(x367^x368)));

	if (t79 != 9223372036854775922LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = -1;
	int32_t x370 = -1;
	int8_t x371 = 25;
	volatile uint64_t x372 = 58129188463175LLU;
	volatile uint64_t t80 = 57189749187054143LLU;

	t80 = (x369-(x370^(x371^x372)));

	if (t80 != 58129188463198LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = -54LL;
	static int8_t x374 = INT8_MAX;
	static int64_t x376 = -213576757497250LL;
	static volatile int64_t t81 = 59970LL;

	t81 = (x373-(x374^(x375^x376)));

	if (t81 != 213576757497587LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MIN;
	volatile int64_t x380 = INT64_MAX;
	int64_t t82 = 21780755LL;

	t82 = (x377-(x378^(x379^x380)));

	if (t82 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = 1;
	int16_t x382 = INT16_MAX;
	int32_t t83 = 3498;

	t83 = (x381-(x382^(x383^x384)));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = UINT64_MAX;
	static uint16_t x388 = UINT16_MAX;

	t84 = (x385-(x386^(x387^x388)));

	if (t84 != 18446744073668469453LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x389 = 274;
	uint32_t x390 = 1419838013U;
	int64_t x391 = -70835488422556456LL;
	uint32_t x392 = 149838U;
	volatile int64_t t85 = 11107900LL;

	t85 = (x389-(x390^(x391^x392)));

	if (t85 != 70835487002704231LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = 1095200252113261637LL;
	int8_t x394 = -42;
	static int16_t x396 = INT16_MIN;
	volatile uint64_t t86 = 28406965805271LLU;

	t86 = (x393-(x394^(x395^x396)));

	if (t86 != 1095200252113228923LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x398 = -326231317129767LL;
	int8_t x399 = INT8_MAX;
	static int16_t x400 = INT16_MAX;
	volatile int64_t t87 = 227056735947732LL;

	t87 = (x397-(x398^(x399^x400)));

	if (t87 != 326231317173670LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = -1;
	uint16_t x403 = 2U;
	int8_t x404 = INT8_MAX;
	static volatile int64_t t88 = -1988144045536LL;

	t88 = (x401-(x402^(x403^x404)));

	if (t88 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x406 = 214U;
	volatile int8_t x407 = -1;
	uint32_t t89 = 80406545U;

	t89 = (x405-(x406^(x407^x408)));

	if (t89 != 4294966954U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = 35;
	static uint16_t x411 = UINT16_MAX;
	static volatile int8_t x412 = -1;
	int64_t t90 = 29999536585360LL;

	t90 = (x409-(x410^(x411^x412)));

	if (t90 != -9223372036854710307LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = 237021086U;
	static int8_t x414 = -1;
	uint8_t x415 = 1U;
	int32_t x416 = INT32_MAX;
	uint32_t t91 = 2787149U;

	t91 = (x413-(x414^(x415^x416)));

	if (t91 != 2384504733U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x417 = 10;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	uint8_t x420 = 1U;
	static volatile int64_t t92 = -1616273LL;

	t92 = (x417-(x418^(x419^x420)));

	if (t92 != 9223372032559808524LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = -1;
	int8_t x422 = INT8_MIN;
	int32_t x424 = INT32_MIN;
	int32_t t93 = -1047;

	t93 = (x421-(x422^(x423^x424)));

	if (t93 != 2147483528) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x425 = 3U;
	uint16_t x426 = UINT16_MAX;
	int16_t x427 = -1;
	volatile uint8_t x428 = UINT8_MAX;
	int32_t t94 = 59324;

	t94 = (x425-(x426^(x427^x428)));

	if (t94 != 65284) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x429 = -143658573051LL;
	int32_t x430 = INT32_MIN;
	volatile uint8_t x431 = UINT8_MAX;
	int32_t x432 = INT32_MIN;
	volatile int64_t t95 = -643LL;

	t95 = (x429-(x430^(x431^x432)));

	if (t95 != -143658573306LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x433 = 92U;
	static volatile int8_t x434 = 0;
	uint64_t x435 = 39566940340265503LLU;
	uint16_t x436 = 6105U;
	volatile uint64_t t96 = 13370758LLU;

	t96 = (x433-(x434^(x435^x436)));

	if (t96 != 18407177133369281174LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x437 = 0U;
	int16_t x438 = -1;
	volatile int64_t t97 = 2080487279LL;

	t97 = (x437-(x438^(x439^x440)));

	if (t97 != 456440685819923LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x441 = 6316;
	volatile int32_t x442 = INT32_MIN;
	uint16_t x444 = 477U;

	t98 = (x441-(x442^(x443^x444)));

	if (t98 != -2147476854LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x450 = INT64_MIN;
	static volatile uint8_t x451 = UINT8_MAX;
	volatile int64_t t99 = -58665391464LL;

	t99 = (x449-(x450^(x451^x452)));

	if (t99 != -9223372036854775700LL) { NG(); } else { ; }
	
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

