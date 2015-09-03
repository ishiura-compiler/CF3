#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x2 = UINT16_MAX;
volatile uint8_t x7 = 93U;
int8_t x8 = -1;
static volatile int16_t x15 = INT16_MIN;
uint32_t x19 = UINT32_MAX;
int8_t x23 = 2;
int64_t x31 = 7155153885833535LL;
uint8_t x38 = 31U;
int64_t x42 = -1LL;
static volatile int16_t x50 = INT16_MIN;
int8_t x56 = -1;
int16_t x60 = -1;
uint8_t x61 = 48U;
int16_t x62 = INT16_MIN;
static uint64_t x65 = 1091388LLU;
volatile int8_t x68 = INT8_MIN;
int8_t x86 = -1;
volatile int32_t x87 = INT32_MAX;
static int64_t t17 = 108221700898627790LL;
uint64_t x90 = UINT64_MAX;
volatile uint64_t t19 = 45251206LLU;
int64_t x99 = -1LL;
volatile int64_t t20 = -79LL;
volatile int16_t x106 = INT16_MIN;
int64_t x107 = -30037195342183337LL;
static uint64_t t22 = 36941597444LLU;
volatile int32_t x110 = -1;
static uint32_t x123 = UINT32_MAX;
uint64_t x127 = 721147848521000430LLU;
static volatile uint8_t x131 = 10U;
int16_t x136 = -941;
static volatile uint32_t x139 = 2683344U;
volatile int16_t x143 = 1726;
static uint32_t x145 = 6846310U;
volatile int64_t t32 = 215962LL;
uint16_t x159 = 58U;
uint32_t x161 = UINT32_MAX;
int8_t x166 = INT8_MIN;
int16_t x169 = INT16_MAX;
volatile int32_t x170 = INT32_MAX;
volatile int32_t t39 = 51879594;
volatile uint32_t x194 = 10U;
int64_t x195 = 86256129743173306LL;
volatile uint8_t x198 = 15U;
uint64_t x203 = 21342LLU;
uint32_t t44 = 32U;
int32_t x210 = -266687698;
int64_t x211 = INT64_MIN;
static uint64_t x218 = 357354109018369LLU;
uint16_t x224 = 15U;
volatile uint64_t t50 = 415057917LLU;
volatile uint64_t x235 = 38416203548LLU;
volatile uint64_t x240 = 151523190617LLU;
uint64_t t53 = 4953328063350679LLU;
uint8_t x251 = UINT8_MAX;
int64_t x261 = INT64_MIN;
uint32_t x264 = UINT32_MAX;
int64_t x267 = INT64_MIN;
volatile uint8_t x274 = UINT8_MAX;
static volatile int16_t x275 = -15228;
volatile uint64_t t57 = 2LLU;
static int16_t x286 = INT16_MIN;
static uint64_t x289 = 2LLU;
uint16_t x290 = 1U;
static int64_t x291 = -42LL;
int8_t x295 = 0;
int64_t t62 = 12LL;
volatile int8_t x297 = INT8_MIN;
int32_t x298 = INT32_MIN;
uint64_t x300 = UINT64_MAX;
static int16_t x302 = INT16_MIN;
int16_t x314 = 912;
volatile int64_t x318 = INT64_MIN;
static int8_t x319 = 3;
int64_t t68 = -492590127922284LL;
static volatile int64_t t69 = 7074LL;
static int16_t x326 = -1;
static volatile int8_t x327 = -26;
volatile uint16_t x330 = 5938U;
static uint64_t x336 = 31264991599488LLU;
volatile int64_t x347 = 559568949363395LL;
static int64_t x354 = -4138033044572122983LL;
volatile int64_t x356 = 1714736547910551LL;
uint16_t x358 = UINT16_MAX;
uint32_t x371 = UINT32_MAX;
int16_t x375 = -1;
uint8_t x381 = UINT8_MAX;
static int16_t x383 = -2;
int16_t x385 = INT16_MAX;
int32_t x391 = 2426857;
int8_t x393 = -1;
int64_t x394 = -1LL;
static int16_t x403 = -1;
static volatile int8_t x405 = INT8_MAX;
int32_t x408 = 24682;
uint64_t x412 = 1848432876414648LLU;
int16_t x422 = INT16_MIN;
volatile int64_t t93 = -220163859203182LL;
static uint16_t x438 = 1U;
volatile uint16_t x439 = 8U;
int32_t t97 = 477630;
int32_t x459 = 947;
volatile uint32_t t99 = 2127U;


void f0(void) {
	uint16_t x1 = 258U;
	volatile int16_t x3 = INT16_MAX;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -237726277932803LL;

	t0 = (x1%(x2^(x3+x4)));

	if (t0 != 258LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	static int32_t x6 = -1;
	volatile int32_t t1 = 90;

	t1 = (x5%(x6^(x7+x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x13 = 3;
	int16_t x14 = 4;
	static uint8_t x16 = 0U;
	volatile int32_t t2 = 1533277;

	t2 = (x13%(x14^(x15+x16)));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	int64_t x18 = INT64_MIN;
	int32_t x20 = -33238845;
	int64_t t3 = -2681776233590LL;

	t3 = (x17%(x18^(x19+x20)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 28;
	uint8_t x22 = 9U;
	volatile uint64_t x24 = UINT64_MAX;
	volatile uint64_t t4 = 268314LLU;

	t4 = (x21%(x22^(x23+x24)));

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 2882;
	int32_t x26 = INT32_MAX;
	int32_t x27 = INT32_MAX;
	static int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 3174992698244856LL;

	t5 = (x25%(x26^(x27+x28)));

	if (t5 != 2882LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	static int64_t x30 = INT64_MIN;
	int8_t x32 = 1;
	int64_t t6 = -3LL;

	t6 = (x29%(x30^(x31+x32)));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	volatile int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = 3LLU;
	static volatile uint64_t t7 = 796817715LLU;

	t7 = (x33%(x34^(x35+x36)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 107606;
	int8_t x39 = INT8_MIN;
	static uint8_t x40 = 35U;
	int32_t t8 = 30856173;

	t8 = (x37%(x38^(x39+x40)));

	if (t8 != 30) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	volatile int8_t x43 = INT8_MAX;
	uint32_t x44 = 127U;
	static volatile int64_t t9 = -2151008957LL;

	t9 = (x41%(x42^(x43+x44)));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	static int64_t x48 = INT64_MIN;
	uint64_t t10 = 1750981136976786261LLU;

	t10 = (x45%(x46^(x47+x48)));

	if (t10 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x49 = 36U;
	volatile uint8_t x51 = 1U;
	uint8_t x52 = 6U;
	volatile int32_t t11 = 7;

	t11 = (x49%(x50^(x51+x52)));

	if (t11 != 36) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x53 = -2991;
	uint32_t x54 = 210U;
	int8_t x55 = INT8_MIN;
	static volatile uint32_t t12 = 28U;

	t12 = (x53%(x54^(x55+x56)));

	if (t12 != 4294964305U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MIN;
	int8_t x59 = -1;
	volatile int32_t t13 = -220;

	t13 = (x57%(x58^(x59+x60)));

	if (t13 != -8) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x63 = -1LL;
	int32_t x64 = -375177;
	volatile int64_t t14 = 241721429184757853LL;

	t14 = (x61%(x62^(x63+x64)));

	if (t14 != 48LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x66 = 9U;
	uint64_t x67 = 7080846499346LLU;
	uint64_t t15 = 408692885040694LLU;

	t15 = (x65%(x66^(x67+x68)));

	if (t15 != 1091388LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	uint16_t x78 = UINT16_MAX;
	uint8_t x79 = 14U;
	uint64_t x80 = 71720244240646240LLU;
	static uint64_t t16 = 7020024LLU;

	t16 = (x77%(x78^(x79+x80)));

	if (t16 != 127LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = 9LL;
	static volatile int64_t x88 = INT64_MIN;

	t17 = (x85%(x86^(x87+x88)));

	if (t17 != 9LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	int16_t x92 = 0;
	uint64_t t18 = 92844763665141LLU;

	t18 = (x89%(x90^(x91+x92)));

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x94 = 218151757170274LLU;
	static volatile int32_t x95 = INT32_MIN;
	static int64_t x96 = INT64_MAX;

	t19 = (x93%(x94^(x95+x96)));

	if (t19 != 436307809307718LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = 34;
	int16_t x98 = -1;
	int32_t x100 = INT32_MIN;

	t20 = (x97%(x98^(x99+x100)));

	if (t20 != 34LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 5U;
	int16_t x102 = -7;
	int16_t x103 = INT16_MIN;
	static volatile uint64_t x104 = 1201948262567264769LLU;
	static volatile uint64_t t21 = 304301513385LLU;

	t21 = (x101%(x102^(x103+x104)));

	if (t21 != 5LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = 962192152910LL;
	static uint64_t x108 = 2909623878089LLU;

	t22 = (x105%(x106^(x107+x108)));

	if (t22 != 962192152910LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MIN;
	static uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = INT32_MIN;
	int32_t t23 = 213;

	t23 = (x109%(x110^(x111+x112)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -1;
	volatile uint64_t x122 = 211130528204814337LLU;
	int32_t x124 = 918;
	uint64_t t24 = 8LLU;

	t24 = (x121%(x122^(x123+x124)));

	if (t24 != 78388119890624691LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = 7U;
	int64_t x126 = INT64_MIN;
	int64_t x128 = 50959LL;
	volatile uint64_t t25 = 537383429407098LLU;

	t25 = (x125%(x126^(x127+x128)));

	if (t25 != 7LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MIN;
	volatile int32_t x130 = 174062766;
	uint8_t x132 = 0U;
	int32_t t26 = 12071;

	t26 = (x129%(x130^(x131+x132)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x133 = 29U;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int32_t t27 = 1;

	t27 = (x133%(x134^(x135+x136)));

	if (t27 != 29) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MIN;
	int16_t x138 = -1;
	int32_t x140 = 7978;
	volatile uint32_t t28 = 739U;

	t28 = (x137%(x138^(x139+x140)));

	if (t28 != 2691195U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x141 = 1U;
	uint8_t x142 = 17U;
	uint8_t x144 = UINT8_MAX;
	int32_t t29 = -3953;

	t29 = (x141%(x142^(x143+x144)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x146 = 46622LL;
	volatile int32_t x147 = 1527287;
	int8_t x148 = INT8_MIN;
	static int64_t t30 = 48152064706870623LL;

	t30 = (x145%(x146^(x147+x148)));

	if (t30 != 559554LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 31U;
	int32_t x152 = INT32_MIN;
	volatile uint32_t t31 = 3U;

	t31 = (x149%(x150^(x151+x152)));

	if (t31 != 255U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x153 = 459955510LL;
	int16_t x154 = 1873;
	uint32_t x155 = 3188U;
	static int16_t x156 = INT16_MIN;

	t32 = (x153%(x154^(x155+x156)));

	if (t32 != 459955510LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x158 = 23152445365033535LLU;
	int16_t x160 = INT16_MIN;
	uint64_t t33 = 182002208LLU;

	t33 = (x157%(x158^(x159+x160)));

	if (t33 != 127LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x162 = 2743780U;
	int32_t x163 = 539299354;
	static int32_t x164 = -16334;
	static volatile uint32_t t34 = 54213U;

	t34 = (x161%(x162^(x163+x164)));

	if (t34 != 530871911U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x165 = 4159U;
	static volatile int32_t x167 = 949669;
	int16_t x168 = 2027;
	volatile uint32_t t35 = 1U;

	t35 = (x165%(x166^(x167+x168)));

	if (t35 != 4159U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x171 = 0U;
	int64_t x172 = INT64_MIN;
	volatile int64_t t36 = 32183LL;

	t36 = (x169%(x170^(x171+x172)));

	if (t36 != 32767LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 2U;
	int64_t x178 = INT64_MAX;
	uint16_t x179 = 76U;
	int64_t x180 = INT64_MIN;
	int64_t t37 = -2009LL;

	t37 = (x177%(x178^(x179+x180)));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = INT32_MIN;
	static int16_t x183 = 1;
	static int32_t x184 = -1;
	volatile int32_t t38 = 6;

	t38 = (x181%(x182^(x183+x184)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MIN;
	int32_t x187 = -5650940;
	volatile int32_t x188 = 107150;

	t39 = (x185%(x186^(x187+x188)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = INT16_MIN;
	int16_t x191 = 1718;
	int8_t x192 = INT8_MIN;
	int64_t t40 = 5987LL;

	t40 = (x189%(x190^(x191+x192)));

	if (t40 != -21582LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t41 = -2265971LL;

	t41 = (x193%(x194^(x195+x196)));

	if (t41 != 255LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	int8_t x199 = INT8_MIN;
	uint64_t x200 = UINT64_MAX;
	uint64_t t42 = 1LLU;

	t42 = (x197%(x198^(x199+x200)));

	if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MAX;
	int8_t x202 = -13;
	volatile int32_t x204 = INT32_MIN;
	volatile uint64_t t43 = 19348LLU;

	t43 = (x201%(x202^(x203+x204)));

	if (t43 != 910023121LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x205 = INT16_MIN;
	uint16_t x206 = 3U;
	uint32_t x207 = 1U;
	int8_t x208 = 42;

	t44 = (x205%(x206^(x207+x208)));

	if (t44 != 8U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x209 = 9;
	static volatile uint8_t x212 = 3U;
	volatile int64_t t45 = 14LL;

	t45 = (x209%(x210^(x211+x212)));

	if (t45 != 9LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x213 = 0;
	uint32_t x214 = 647467970U;
	volatile int8_t x215 = 1;
	int8_t x216 = -33;
	volatile uint32_t t46 = 34437U;

	t46 = (x213%(x214^(x215+x216)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MIN;
	volatile int16_t x219 = -459;
	static int8_t x220 = INT8_MIN;
	volatile uint64_t t47 = 31LLU;

	t47 = (x217%(x218^(x219+x220)));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = 97U;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	uint32_t t48 = 86U;

	t48 = (x221%(x222^(x223+x224)));

	if (t48 != 97U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x225 = 95U;
	int64_t x226 = INT64_MIN;
	volatile uint8_t x227 = 33U;
	static int8_t x228 = -9;
	volatile int64_t t49 = 212LL;

	t49 = (x225%(x226^(x227+x228)));

	if (t49 != 95LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 6538350614812297LLU;
	int32_t x230 = 1254;
	int64_t x231 = -336983881664151070LL;
	int32_t x232 = -1;

	t50 = (x229%(x230^(x231+x232)));

	if (t50 != 6538350614812297LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x233 = INT64_MIN;
	volatile int32_t x234 = -34435;
	int32_t x236 = INT32_MIN;
	volatile uint64_t t51 = 44511256795LLU;

	t51 = (x233%(x234^(x235+x236)));

	if (t51 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x237 = -1;
	static uint64_t x238 = 1544044411LLU;
	int64_t x239 = INT64_MAX;
	volatile uint64_t t52 = 1090993293LLU;

	t52 = (x237%(x238^(x239+x240)));

	if (t52 != 9223371886070310876LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x245 = 137141935306245277LLU;
	int8_t x246 = -1;
	volatile int64_t x247 = INT64_MIN;
	uint32_t x248 = 134924686U;

	t53 = (x245%(x246^(x247+x248)));

	if (t53 != 137141935306245277LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t54 = 51010831LLU;

	t54 = (x249%(x250^(x251+x252)));

	if (t54 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x262 = INT16_MAX;
	int8_t x263 = INT8_MIN;
	int64_t t55 = -24273710LL;

	t55 = (x261%(x262^(x263+x264)));

	if (t55 != -532684800LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MAX;
	int32_t x266 = -12748788;
	int8_t x268 = 1;
	int64_t t56 = 887147070138314373LL;

	t56 = (x265%(x266^(x267+x268)));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x276 = UINT64_MAX;

	t57 = (x273%(x274^(x275+x276)));

	if (t57 != 15108LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = -1LL;
	int8_t x278 = 26;
	int64_t x279 = -1LL;
	static int16_t x280 = INT16_MIN;
	int64_t t58 = -615383LL;

	t58 = (x277%(x278^(x279+x280)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	volatile int64_t x283 = INT64_MIN;
	uint8_t x284 = UINT8_MAX;
	static uint64_t t59 = 966754LLU;

	t59 = (x281%(x282^(x283+x284)));

	if (t59 != 9223372034707292416LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = INT8_MIN;
	static volatile uint64_t t60 = 6LLU;

	t60 = (x285%(x286^(x287+x288)));

	if (t60 != 21845LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x292 = 1;
	static volatile uint64_t t61 = 1552LLU;

	t61 = (x289%(x290^(x291+x292)));

	if (t61 != 2LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x293 = -1LL;
	int32_t x294 = 15;
	int64_t x296 = INT64_MIN;

	t62 = (x293%(x294^(x295+x296)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x299 = -12097;
	volatile uint64_t t63 = 15LLU;

	t63 = (x297%(x298^(x299+x300)));

	if (t63 != 585446288LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x301 = -1;
	int8_t x303 = INT8_MIN;
	static uint16_t x304 = 426U;
	volatile int32_t t64 = 205;

	t64 = (x301%(x302^(x303+x304)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x305 = -1;
	static int8_t x306 = -1;
	static int64_t x307 = -434825943260211632LL;
	uint64_t x308 = 1877389LLU;
	uint64_t t65 = 113374819381642527LLU;

	t65 = (x305%(x306^(x307+x308)));

	if (t65 != 184054456859513451LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x309 = 1995259152105460LLU;
	int8_t x310 = 0;
	static int8_t x311 = 10;
	static int16_t x312 = -1;
	volatile uint64_t t66 = 232262402LLU;

	t66 = (x309%(x310^(x311+x312)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x313 = 9925;
	static uint64_t x315 = 190636LLU;
	static uint16_t x316 = 2367U;
	uint64_t t67 = 8185787LLU;

	t67 = (x313%(x314^(x315+x316)));

	if (t67 != 9925LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MAX;
	int64_t x320 = INT64_MIN;

	t68 = (x317%(x318^(x319+x320)));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x321 = 5U;
	int16_t x322 = INT16_MIN;
	int32_t x323 = -1;
	static int64_t x324 = -127468320028404LL;

	t69 = (x321%(x322^(x323+x324)));

	if (t69 != 5LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = INT32_MIN;
	int32_t x328 = INT32_MAX;
	int32_t t70 = 982113;

	t70 = (x325%(x326^(x327+x328)));

	if (t70 != -26) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x329 = -1;
	int32_t x331 = -6620906;
	static int64_t x332 = -6LL;
	volatile int64_t t71 = 54LL;

	t71 = (x329%(x330^(x331+x332)));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = INT32_MIN;
	static uint64_t x334 = UINT64_MAX;
	uint8_t x335 = UINT8_MAX;
	uint64_t t72 = 505925777LLU;

	t72 = (x333%(x334^(x335+x336)));

	if (t72 != 31262844116096LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x337 = 3355LL;
	static uint32_t x338 = UINT32_MAX;
	volatile int64_t x339 = INT64_MIN;
	int32_t x340 = 77471408;
	int64_t t73 = 757185599326LL;

	t73 = (x337%(x338^(x339+x340)));

	if (t73 != 3355LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = 69U;
	int16_t x346 = INT16_MAX;
	int8_t x348 = -1;
	int64_t t74 = -6148LL;

	t74 = (x345%(x346^(x347+x348)));

	if (t74 != 69LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = INT16_MIN;
	static uint64_t x350 = 10494336148918LLU;
	uint8_t x351 = 7U;
	static volatile int8_t x352 = 1;
	volatile uint64_t t75 = 247973515765084447LLU;

	t75 = (x349%(x350^(x351+x352)));

	if (t75 != 9877850374568LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x353 = 2U;
	static int8_t x355 = INT8_MIN;
	volatile int64_t t76 = -8532743LL;

	t76 = (x353%(x354^(x355+x356)));

	if (t76 != 2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -475LL;
	uint16_t x359 = 1U;
	static int8_t x360 = INT8_MAX;
	int64_t t77 = 28664384LL;

	t77 = (x357%(x358^(x359+x360)));

	if (t77 != -475LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = 3;
	int16_t x362 = -1;
	static volatile int8_t x363 = 19;
	int16_t x364 = INT16_MAX;
	volatile int32_t t78 = -23;

	t78 = (x361%(x362^(x363+x364)));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = -6017455423656918LL;
	uint32_t x366 = 147099U;
	volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t79 = 148122157239LLU;

	t79 = (x365%(x366^(x367+x368)));

	if (t79 != 18440726618285894698LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	int64_t x372 = -46LL;
	volatile int64_t t80 = 71LL;

	t80 = (x369%(x370^(x371+x372)));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = 15;
	int64_t x376 = 140980046306448LL;
	int64_t t81 = -1242225524LL;

	t81 = (x373%(x374^(x375+x376)));

	if (t81 != -34467349075072LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x377 = -18035;
	int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t82 = 1036128561;

	t82 = (x377%(x378^(x379+x380)));

	if (t82 != -18035) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x382 = INT8_MAX;
	int8_t x384 = INT8_MAX;
	volatile int32_t t83 = -17;

	t83 = (x381%(x382^(x383+x384)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x386 = UINT8_MAX;
	int16_t x387 = 3;
	int32_t x388 = INT32_MIN;
	volatile int32_t t84 = 523125402;

	t84 = (x385%(x386^(x387+x388)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x389 = UINT8_MAX;
	uint64_t x390 = 218649299858338LLU;
	int64_t x392 = -2526LL;
	volatile uint64_t t85 = 5028171581LLU;

	t85 = (x389%(x390^(x391+x392)));

	if (t85 != 255LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x395 = 2U;
	int8_t x396 = INT8_MIN;
	volatile int64_t t86 = -1LL;

	t86 = (x393%(x394^(x395+x396)));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = UINT64_MAX;
	int32_t x400 = INT32_MAX;
	volatile uint64_t t87 = 15383555109159245LLU;

	t87 = (x397%(x398^(x399+x400)));

	if (t87 != 2147418114LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x401 = INT8_MIN;
	int64_t x402 = -15793LL;
	int8_t x404 = -62;
	volatile int64_t t88 = 130768238850LL;

	t88 = (x401%(x402^(x403+x404)));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x406 = -1;
	uint64_t x407 = 28591973768779975LLU;
	static uint64_t t89 = 3LLU;

	t89 = (x405%(x406^(x407+x408)));

	if (t89 != 127LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = 3;
	int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	volatile uint64_t t90 = 99282423363LLU;

	t90 = (x409%(x410^(x411+x412)));

	if (t90 != 3LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = INT8_MIN;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = UINT16_MAX;
	static volatile int32_t t91 = -4;

	t91 = (x413%(x414^(x415+x416)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x417 = 9;
	static int16_t x418 = INT16_MAX;
	volatile int8_t x419 = INT8_MIN;
	volatile int64_t x420 = 50LL;
	volatile int64_t t92 = 63977484LL;

	t92 = (x417%(x418^(x419+x420)));

	if (t92 != 9LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MAX;
	int16_t x423 = INT16_MIN;
	volatile int64_t x424 = 4532102LL;

	t93 = (x421%(x422^(x423+x424)));

	if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x429 = INT32_MAX;
	uint32_t x430 = 4U;
	int8_t x431 = -5;
	int16_t x432 = INT16_MIN;
	volatile uint32_t t94 = 1U;

	t94 = (x429%(x430^(x431+x432)));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x433 = INT8_MAX;
	uint8_t x434 = 0U;
	int8_t x435 = INT8_MIN;
	static int16_t x436 = -1;
	int32_t t95 = 1538705;

	t95 = (x433%(x434^(x435+x436)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x437 = -1;
	uint32_t x440 = 122U;
	uint32_t t96 = 1U;

	t96 = (x437%(x438^(x439+x440)));

	if (t96 != 116U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x441 = 1604080;
	uint16_t x442 = 0U;
	int8_t x443 = INT8_MIN;
	static int8_t x444 = 5;

	t97 = (x441%(x442^(x443+x444)));

	if (t97 != 37) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = UINT8_MAX;
	static int32_t x446 = 11203;
	uint32_t x447 = 56200123U;
	static int16_t x448 = INT16_MAX;
	uint32_t t98 = 222781844U;

	t98 = (x445%(x446^(x447+x448)));

	if (t98 != 255U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x457 = -24956;
	static uint32_t x458 = 1174721062U;
	static uint32_t x460 = 76U;

	t99 = (x457%(x458^(x459+x460)));

	if (t99 != 770779385U) { NG(); } else { ; }
	
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

