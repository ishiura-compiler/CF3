#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int64_t t1 = -661105565LL;
uint64_t x12 = 8444517756LLU;
volatile uint64_t t2 = 1646563276811862LLU;
uint32_t t3 = 7390U;
int32_t t6 = -55;
int8_t x30 = INT8_MIN;
static volatile uint32_t t7 = 7675U;
static int8_t x33 = INT8_MIN;
int64_t t8 = 8468235241963LL;
volatile uint8_t x37 = UINT8_MAX;
int64_t x40 = INT64_MAX;
int16_t x47 = INT16_MAX;
int8_t x50 = INT8_MIN;
volatile uint32_t t12 = 1621385024U;
static int16_t x61 = INT16_MAX;
volatile uint64_t x69 = 484046029521LLU;
static uint64_t t16 = 164387711LLU;
static volatile int32_t x73 = INT32_MIN;
uint8_t x74 = UINT8_MAX;
int8_t x85 = INT8_MIN;
volatile uint16_t x87 = UINT16_MAX;
uint32_t x88 = 1919177416U;
uint64_t x99 = 1517465623525LLU;
uint8_t x101 = UINT8_MAX;
int16_t x103 = INT16_MIN;
int8_t x107 = -3;
int64_t x111 = INT64_MIN;
static volatile uint64_t t26 = 473659075LLU;
uint64_t x115 = UINT64_MAX;
volatile uint32_t x121 = 60U;
volatile int32_t x123 = 15844;
static int8_t x133 = -1;
uint16_t x144 = 3U;
volatile int64_t t32 = 965LL;
int64_t x149 = INT64_MIN;
int16_t x150 = -1;
uint8_t x151 = UINT8_MAX;
uint32_t t34 = 0U;
static int32_t x163 = INT32_MIN;
int32_t x168 = INT32_MIN;
int8_t x178 = INT8_MIN;
int8_t x183 = INT8_MAX;
int16_t x190 = 10541;
volatile uint32_t x191 = 2U;
volatile int64_t x197 = -1LL;
static int16_t x201 = INT16_MIN;
static uint64_t x204 = 30LLU;
volatile int32_t x205 = INT32_MAX;
volatile int8_t x214 = 1;
int32_t x215 = -1;
int32_t t48 = 104296321;
volatile int64_t t49 = 59176685194LL;
int32_t x222 = INT32_MIN;
volatile int64_t t50 = -589LL;
uint32_t x233 = UINT32_MAX;
int8_t x234 = INT8_MIN;
static volatile int64_t t54 = -31LL;
volatile int32_t t56 = -1599;
int32_t x261 = INT32_MIN;
int16_t x263 = -1966;
uint32_t t59 = 6U;
uint8_t x265 = 1U;
int64_t x268 = INT64_MIN;
uint64_t x279 = 64311515846LLU;
int32_t x281 = INT32_MIN;
int64_t x288 = -1LL;
static int32_t t66 = 6544;
static int8_t x299 = INT8_MIN;
volatile int64_t t69 = -50866585738LL;
int32_t t70 = 2734;
uint64_t x312 = 1LLU;
volatile uint64_t t71 = UINT64_MAX;
int8_t x315 = 0;
int64_t x319 = 43773960058138394LL;
volatile int64_t t74 = 16148LL;
int32_t x326 = INT32_MIN;
int16_t x327 = INT16_MIN;
int8_t x336 = INT8_MAX;
static volatile uint32_t x343 = 3U;
uint64_t t78 = 4244510LLU;
volatile int64_t t81 = -381064010032016453LL;
static uint16_t x360 = 584U;
int16_t x365 = INT16_MIN;
int8_t x366 = INT8_MAX;
uint16_t x378 = 6U;
static int64_t x379 = 1201074545495353LL;
uint32_t x382 = 23537569U;
uint64_t x386 = 5625998118281394LLU;
int32_t x395 = INT32_MAX;
int32_t x403 = 9506003;
int64_t x405 = -207420LL;
int64_t t93 = 907040970LL;
uint64_t x422 = UINT64_MAX;
volatile uint32_t x426 = 1201044U;
uint64_t x428 = 14640705628844274LLU;
uint64_t t96 = 5LLU;
volatile uint64_t x433 = 14380457872LLU;
volatile uint64_t t97 = 1669678137755LLU;
volatile int8_t x440 = -1;
static volatile uint32_t t98 = 138U;
int32_t x444 = INT32_MIN;


void f0(void) {
	uint16_t x1 = 4U;
	static int32_t x3 = INT32_MAX;
	static int64_t x4 = -9LL;
	int64_t t0 = -4374LL;

	t0 = (x1+(x2^(x3^x4)));

	if (t0 != 2147483643LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x6 = -1LL;
	int16_t x7 = 12;
	static uint16_t x8 = 14U;

	t1 = (x5+(x6^(x7^x8)));

	if (t1 != -131LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 166U;
	uint32_t x10 = 931323242U;
	static uint32_t x11 = 66U;

	t2 = (x9+(x10^(x11^x12)));

	if (t2 != 7530332410LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile int16_t x14 = INT16_MIN;
	volatile int32_t x15 = INT32_MIN;
	uint32_t x16 = 914U;

	t3 = (x13+(x14^(x15^x16)));

	if (t3 != 2147451666U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 7U;
	static uint32_t x18 = UINT32_MAX;
	int32_t x19 = -89619016;
	int32_t x20 = INT32_MAX;
	volatile uint32_t t4 = 210645U;

	t4 = (x17+(x18^(x19^x20)));

	if (t4 != 2057864639U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	volatile int8_t x22 = INT8_MIN;
	static uint64_t x23 = UINT64_MAX;
	int32_t x24 = -2242309;
	uint64_t t5 = 108152LLU;

	t5 = (x21+(x22^(x23^x24)));

	if (t5 != 18446744073707309188LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 0;
	volatile uint16_t x26 = 3194U;
	uint16_t x27 = 192U;
	int32_t x28 = -34;

	t6 = (x25+(x26^(x27^x28)));

	if (t6 != -3228) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 6U;
	int8_t x31 = -1;
	uint32_t x32 = 735781500U;

	t7 = (x29+(x30^(x31^x32)));

	if (t7 != 735781385U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 1;
	int64_t x35 = -1LL;
	uint8_t x36 = UINT8_MAX;

	t8 = (x33+(x34^(x35^x36)));

	if (t8 != -383LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int64_t x39 = -6815003LL;
	volatile int64_t t9 = 3489497LL;

	t9 = (x37+(x38^(x39^x40)));

	if (t9 != 9223372036847992345LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -30;
	int16_t x42 = -1;
	static uint32_t x43 = 5581117U;
	int16_t x44 = INT16_MIN;
	volatile uint32_t t10 = 117792U;

	t10 = (x41+(x42^(x43^x44)));

	if (t10 != 5592740U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -35;
	static int32_t x46 = -1;
	static int16_t x48 = -1;
	int32_t t11 = 219395;

	t11 = (x45+(x46^(x47^x48)));

	if (t11 != 32732) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	uint32_t x51 = 10U;
	int8_t x52 = INT8_MAX;

	t12 = (x49+(x50^(x51^x52)));

	if (t12 != 2147483636U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 748505499314946LLU;
	static int32_t x54 = INT32_MIN;
	volatile int32_t x55 = INT32_MAX;
	uint16_t x56 = 2749U;
	volatile uint64_t t13 = 7173178LLU;

	t13 = (x53+(x54^(x55^x56)));

	if (t13 != 748505499312196LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 210054U;
	int32_t x58 = INT32_MIN;
	int64_t x59 = 3920836431232LL;
	uint64_t x60 = 7LLU;
	static volatile uint64_t t14 = 6775LLU;

	t14 = (x57+(x58^(x59^x60)));

	if (t14 != 18446740154083394061LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x62 = INT64_MAX;
	int64_t x63 = INT64_MAX;
	int32_t x64 = -1;
	int64_t t15 = -10158993784693400LL;

	t15 = (x61+(x62^(x63^x64)));

	if (t15 != 32766LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x70 = 4U;
	static int32_t x71 = -1;
	int32_t x72 = -1;

	t16 = (x69+(x70^(x71^x72)));

	if (t16 != 484046029525LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	volatile int32_t t17 = -497168553;

	t17 = (x73+(x74^(x75^x76)));

	if (t17 != -2147451136) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	static volatile uint64_t x78 = 579LLU;
	int32_t x79 = INT32_MIN;
	int64_t x80 = 3755498LL;
	uint64_t t18 = 453951LLU;

	t18 = (x77+(x78^(x79^x80)));

	if (t18 != 18446744071565824040LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 24U;
	int32_t x82 = -1;
	static volatile uint16_t x83 = UINT16_MAX;
	static uint8_t x84 = 5U;
	int32_t t19 = -19391;

	t19 = (x81+(x82^(x83^x84)));

	if (t19 != -65507) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x86 = 37773007;
	uint32_t t20 = 1036U;

	t20 = (x85+(x86^(x87^x88)));

	if (t20 != 1881469816U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = 288;
	int8_t x91 = -1;
	int16_t x92 = -1;
	int32_t t21 = -220;

	t21 = (x89+(x90^(x91^x92)));

	if (t21 != -32480) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = -6554898;
	uint32_t x95 = 14620773U;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t22 = 4816723134998874544LLU;

	t22 = (x93+(x94^(x95^x96)));

	if (t22 != 9223372036842513034LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = -2759;
	int8_t x98 = INT8_MIN;
	volatile int8_t x100 = -23;
	static volatile uint64_t t23 = 3392991LLU;

	t23 = (x97+(x98^(x99^x100)));

	if (t23 != 1517465620677LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = INT64_MAX;
	volatile int16_t x104 = INT16_MAX;
	volatile int64_t t24 = 2208892LL;

	t24 = (x101+(x102^(x103^x104)));

	if (t24 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int16_t x106 = -94;
	int64_t x108 = -1LL;
	static volatile int64_t t25 = -11449823826885706LL;

	t25 = (x105+(x106^(x107^x108)));

	if (t25 != 4294967199LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = INT16_MIN;
	uint64_t x112 = UINT64_MAX;

	t26 = (x109+(x110^(x111^x112)));

	if (t26 != 9223372036854808447LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 15U;
	static int32_t x114 = -585363218;
	volatile int64_t x116 = INT64_MIN;
	volatile uint64_t t27 = 228398752358094632LLU;

	t27 = (x113+(x114^(x115^x116)));

	if (t27 != 9223372037440139040LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = INT64_MAX;
	static uint16_t x124 = UINT16_MAX;
	int64_t t28 = -1500592689220LL;

	t28 = (x121+(x122^(x123^x124)));

	if (t28 != 9223372036854726176LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x134 = 3U;
	uint8_t x135 = UINT8_MAX;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t29 = 26362123U;

	t29 = (x133+(x134^(x135^x136)));

	if (t29 != 4294967042U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = INT16_MAX;
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t30 = 1848603042LLU;

	t30 = (x137+(x138^(x139^x140)));

	if (t30 != 32639LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = -7;
	uint32_t x142 = 39U;
	volatile int8_t x143 = INT8_MAX;
	static volatile uint32_t t31 = 450U;

	t31 = (x141+(x142^(x143^x144)));

	if (t31 != 84U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = 131635784489LL;
	int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;

	t32 = (x145+(x146^(x147^x148)));

	if (t32 != -131635784535LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x152 = 118774577LLU;
	volatile uint64_t t33 = 675LLU;

	t33 = (x149+(x150^(x151^x152)));

	if (t33 != 9223372036736001073LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MAX;
	volatile uint8_t x155 = 39U;
	volatile uint32_t x156 = 8977244U;

	t34 = (x153+(x154^(x155^x156)));

	if (t34 != 2138539139U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = 17;
	static volatile uint16_t x159 = 1U;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = 72;

	t35 = (x157+(x158^(x159^x160)));

	if (t35 != -240) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	int8_t x162 = 29;
	int32_t x164 = 3;
	volatile int32_t t36 = -306;

	t36 = (x161+(x162^(x163^x164)));

	if (t36 != -2147483619) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	volatile int8_t x166 = 41;
	volatile uint8_t x167 = 0U;
	int32_t t37 = -457;

	t37 = (x165+(x166^(x167^x168)));

	if (t37 != -2147483608) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = INT16_MIN;
	uint16_t x174 = UINT16_MAX;
	int64_t x175 = INT64_MIN;
	uint64_t x176 = 657216LLU;
	volatile uint64_t t38 = 420LLU;

	t38 = (x173+(x174^(x175^x176)));

	if (t38 != 9223372036855462079LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 8U;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t39 = 5254U;

	t39 = (x177+(x178^(x179^x180)));

	if (t39 != 2147483783U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x181 = INT32_MIN;
	int16_t x182 = -1;
	static uint32_t x184 = 6U;
	static uint32_t t40 = 508U;

	t40 = (x181+(x182^(x183^x184)));

	if (t40 != 2147483526U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x185 = -1;
	uint32_t x186 = UINT32_MAX;
	int64_t x187 = INT64_MAX;
	int32_t x188 = INT32_MIN;
	volatile int64_t t41 = 10035064LL;

	t41 = (x185+(x186^(x187^x188)));

	if (t41 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x189 = -1LL;
	volatile int8_t x192 = INT8_MAX;
	volatile int64_t t42 = 8354318LL;

	t42 = (x189+(x190^(x191^x192)));

	if (t42 != 10575LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -6;
	volatile uint16_t x195 = 0U;
	static uint16_t x196 = 120U;
	volatile int32_t t43 = 3616;

	t43 = (x193+(x194^(x195^x196)));

	if (t43 != -32894) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x198 = INT8_MAX;
	int16_t x199 = 1;
	int8_t x200 = INT8_MIN;
	int64_t t44 = -1199017292519093847LL;

	t44 = (x197+(x198^(x199^x200)));

	if (t44 != -3LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x202 = UINT32_MAX;
	int8_t x203 = INT8_MIN;
	volatile uint64_t t45 = 1218719LLU;

	t45 = (x201+(x202^(x203^x204)));

	if (t45 != 18446744069414551649LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x206 = 45U;
	int64_t x207 = -4302229062790088673LL;
	int8_t x208 = 2;
	volatile int64_t t46 = 0LL;

	t46 = (x205+(x206^(x207^x208)));

	if (t46 != -4302229060642605009LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x209 = 118703492575LLU;
	int64_t x210 = INT64_MAX;
	uint8_t x211 = 87U;
	static int32_t x212 = INT32_MAX;
	uint64_t t47 = 15454365563LLU;

	t47 = (x209+(x210^(x211^x212)));

	if (t47 != 9223372153410784822LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 1U;
	int16_t x216 = INT16_MIN;

	t48 = (x213+(x214^(x215^x216)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x217 = INT64_MIN;
	static int64_t x218 = INT64_MIN;
	int32_t x219 = -1;
	int8_t x220 = 46;

	t49 = (x217+(x218^(x219^x220)));

	if (t49 != -47LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x221 = -62;
	int64_t x223 = 1LL;
	static int8_t x224 = -13;

	t50 = (x221+(x222^(x223^x224)));

	if (t50 != 2147483572LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	volatile uint64_t x227 = UINT64_MAX;
	int64_t x228 = INT64_MIN;
	volatile uint64_t t51 = 1383957576586121LLU;

	t51 = (x225+(x226^(x227^x228)));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x229 = 28388020LLU;
	int8_t x230 = INT8_MIN;
	volatile uint16_t x231 = 5769U;
	volatile int64_t x232 = INT64_MAX;
	uint64_t t52 = 0LLU;

	t52 = (x229+(x230^(x231^x232)));

	if (t52 != 9223372036883169706LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x235 = -119;
	static volatile int8_t x236 = INT8_MAX;
	static uint32_t t53 = 86U;

	t53 = (x233+(x234^(x235^x236)));

	if (t53 != 117U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = -1657;
	volatile int64_t x238 = -13LL;
	static volatile int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;

	t54 = (x237+(x238^(x239^x240)));

	if (t54 != -9223372036854744710LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 10U;
	static int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MAX;
	int16_t x248 = 15690;
	volatile int32_t t55 = 3;

	t55 = (x245+(x246^(x247^x248)));

	if (t55 != 15700) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MIN;
	int32_t x250 = -1;
	int8_t x251 = -1;
	volatile uint8_t x252 = UINT8_MAX;

	t56 = (x249+(x250^(x251^x252)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = 0U;
	int8_t x254 = -2;
	volatile int32_t x255 = 828103;
	int64_t x256 = -1LL;
	int64_t t57 = 3584963441LL;

	t57 = (x253+(x254^(x255^x256)));

	if (t57 != 828102LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = -1;
	static uint8_t x259 = 28U;
	int8_t x260 = -1;
	volatile int32_t t58 = -26;

	t58 = (x257+(x258^(x259^x260)));

	if (t58 != -2147483620) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x262 = INT16_MAX;
	uint32_t x264 = 1U;

	t59 = (x261+(x262^(x263^x264)));

	if (t59 != 2147452844U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x266 = UINT32_MAX;
	uint8_t x267 = 5U;
	static volatile int64_t t60 = 524063461LL;

	t60 = (x265+(x266^(x267^x268)));

	if (t60 != -9223372032559808517LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 1U;
	static int16_t x271 = -7;
	uint32_t x272 = 1724269U;
	volatile uint64_t t61 = 56LLU;

	t61 = (x269+(x270^(x271^x272)));

	if (t61 != 4293243028LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x273 = INT16_MIN;
	int32_t x274 = INT32_MAX;
	volatile int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MAX;
	volatile int64_t t62 = -88077849550320926LL;

	t62 = (x273+(x274^(x275^x276)));

	if (t62 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = -1;
	static int64_t x278 = INT64_MAX;
	volatile int64_t x280 = -137LL;
	volatile uint64_t t63 = 1261298241919093LLU;

	t63 = (x277+(x278^(x279^x280)));

	if (t63 != 9223372101166291533LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x282 = 3763LLU;
	int64_t x283 = 1646044910LL;
	static int64_t x284 = INT64_MIN;
	volatile uint64_t t64 = 2074454267019189LLU;

	t64 = (x281+(x282^(x283^x284)));

	if (t64 != 9223372036353337437LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = 1;
	static uint32_t x287 = UINT32_MAX;
	static int64_t t65 = 138157392007364LL;

	t65 = (x285+(x286^(x287^x288)));

	if (t65 != -4295000063LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = 11;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;

	t66 = (x289+(x290^(x291^x292)));

	if (t66 != 32523) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 0U;
	int16_t x294 = -1;
	volatile uint32_t x295 = 12457U;
	static int16_t x296 = 424;
	volatile uint32_t t67 = 928U;

	t67 = (x293+(x294^(x295^x296)));

	if (t67 != 4294954750U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = -17LL;
	int8_t x298 = INT8_MAX;
	int8_t x300 = 3;
	static volatile int64_t t68 = -7527LL;

	t68 = (x297+(x298^(x299^x300)));

	if (t68 != -21LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x301 = 27;
	volatile uint32_t x302 = 79821U;
	int64_t x303 = INT64_MAX;
	int16_t x304 = -15;

	t69 = (x301+(x302^(x303^x304)));

	if (t69 != -9223372036854695970LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x305 = -1;
	int32_t x306 = INT32_MAX;
	int32_t x307 = -116149947;
	volatile int32_t x308 = 77235070;

	t70 = (x305+(x306^(x307^x308)));

	if (t70 != -2106143293) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = -2;
	uint32_t x310 = UINT32_MAX;
	uint32_t x311 = UINT32_MAX;

	t71 = (x309+(x310^(x311^x312)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MAX;
	static int64_t x314 = INT64_MAX;
	static int16_t x316 = -1;
	static volatile int64_t t72 = -3436757520177226455LL;

	t72 = (x313+(x314^(x315^x316)));

	if (t72 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = -4LL;
	static volatile uint64_t x318 = 556843086596379LLU;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t73 = 380245504LLU;

	t73 = (x317+(x318^(x319^x320)));

	if (t73 != 18403257987621561853LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x321 = 98U;
	int64_t x322 = 4157720461133LL;
	int8_t x323 = INT8_MIN;
	int8_t x324 = 0;

	t74 = (x321+(x322^(x323^x324)));

	if (t74 != -4157720461009LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x325 = UINT16_MAX;
	volatile int32_t x328 = -19;
	volatile int32_t t75 = -2;

	t75 = (x325+(x326^(x327^x328)));

	if (t75 != -2147385364) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = INT16_MIN;
	int16_t x334 = INT16_MIN;
	int16_t x335 = 13;
	volatile int32_t t76 = -69;

	t76 = (x333+(x334^(x335^x336)));

	if (t76 != -65422) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x337 = 1690U;
	int32_t x338 = -10299924;
	int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MIN;
	static uint32_t t77 = 21U;

	t77 = (x337+(x338^(x339^x340)));

	if (t77 != 2137174189U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = 97196LLU;
	int8_t x342 = -1;
	int16_t x344 = 0;

	t78 = (x341+(x342^(x343^x344)));

	if (t78 != 4295064488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = UINT64_MAX;
	uint32_t x346 = 67U;
	int32_t x347 = INT32_MIN;
	int32_t x348 = -3939110;
	static volatile uint64_t t79 = 518072LLU;

	t79 = (x345+(x346^(x347^x348)));

	if (t79 != 2143544472LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x349 = -1;
	volatile int64_t x350 = 2988219355772432LL;
	int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile int64_t t80 = 1128199225LL;

	t80 = (x349+(x350^(x351^x352)));

	if (t80 != -9220383817499003282LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x353 = 369723U;
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = -1755233537724321738LL;
	int16_t x356 = -1081;

	t81 = (x353+(x354^(x355^x356)));

	if (t81 != -1755233536854544340LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x357 = 66108163U;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MIN;
	uint32_t t82 = 4U;

	t82 = (x357+(x358^(x359^x360)));

	if (t82 != 66074810U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x367 = INT64_MAX;
	int32_t x368 = INT32_MIN;
	volatile int64_t t83 = 163535394LL;

	t83 = (x365+(x366^(x367^x368)));

	if (t83 != -9223372034707325056LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile uint8_t x375 = 1U;
	int8_t x376 = INT8_MAX;
	uint32_t t84 = 1793U;

	t84 = (x373+(x374^(x375^x376)));

	if (t84 != 4294967041U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = UINT32_MAX;
	volatile uint32_t x380 = 97U;
	int64_t t85 = -356637762201LL;

	t85 = (x377+(x378^(x379^x380)));

	if (t85 != 1201078840462685LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x381 = 2591U;
	static int64_t x383 = -1LL;
	int64_t x384 = 133303784900086755LL;
	volatile int64_t t86 = 112912943123LL;

	t86 = (x381+(x382^(x383^x384)));

	if (t86 != -133303784918508068LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x385 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	volatile int32_t x388 = -8;
	volatile uint64_t t87 = 107663343LLU;

	t87 = (x385+(x386^(x387^x388)));

	if (t87 != 9228998034973057225LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = 267;
	uint64_t x390 = UINT64_MAX;
	uint64_t x391 = 499LLU;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t88 = 0LLU;

	t88 = (x389+(x390^(x391^x392)));

	if (t88 != 32535LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x393 = 6U;
	int16_t x394 = INT16_MAX;
	uint16_t x396 = UINT16_MAX;
	uint32_t t89 = 628U;

	t89 = (x393+(x394^(x395^x396)));

	if (t89 != 2147450885U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x397 = 87803U;
	int8_t x398 = INT8_MAX;
	volatile uint8_t x399 = 4U;
	int8_t x400 = INT8_MIN;
	volatile uint32_t t90 = 20573U;

	t90 = (x397+(x398^(x399^x400)));

	if (t90 != 87798U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x401 = 14U;
	int64_t x402 = INT64_MIN;
	uint8_t x404 = 0U;
	int64_t t91 = -94495LL;

	t91 = (x401+(x402^(x403^x404)));

	if (t91 != -9223372036845269791LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x406 = -1;
	static int32_t x407 = -588;
	int64_t x408 = 108611LL;
	static volatile int64_t t92 = -11595996LL;

	t92 = (x405+(x406^(x407^x408)));

	if (t92 != -98356LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x409 = UINT8_MAX;
	int64_t x410 = -431068827867185100LL;
	int32_t x411 = 1;
	volatile int32_t x412 = 169;

	t93 = (x409+(x410^(x411^x412)));

	if (t93 != -431068827867184741LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MIN;
	uint64_t x418 = UINT64_MAX;
	int64_t x419 = INT64_MAX;
	uint32_t x420 = 138U;
	volatile uint64_t t94 = 1055527974LLU;

	t94 = (x417+(x418^(x419^x420)));

	if (t94 != 138LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x421 = INT8_MIN;
	int32_t x423 = INT32_MIN;
	int16_t x424 = INT16_MIN;
	static uint64_t t95 = 30355900920527LLU;

	t95 = (x421+(x422^(x423^x424)));

	if (t95 != 18446744071562100607LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MAX;
	static int64_t x427 = -16522184LL;

	t96 = (x425+(x426^(x427^x428)));

	if (t96 != 18432103368074004445LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x434 = -1;
	volatile int32_t x435 = -88091220;
	int16_t x436 = INT16_MAX;

	t97 = (x433+(x434^(x435^x436)));

	if (t97 != 14468560188LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x437 = -102;
	volatile uint32_t x438 = UINT32_MAX;
	static uint32_t x439 = UINT32_MAX;

	t98 = (x437+(x438^(x439^x440)));

	if (t98 != 4294967193U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = -126;
	static int64_t x442 = INT64_MIN;
	volatile int64_t x443 = INT64_MAX;
	int64_t t99 = -14199LL;

	t99 = (x441+(x442^(x443^x444)));

	if (t99 != 2147483521LL) { NG(); } else { ; }
	
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

