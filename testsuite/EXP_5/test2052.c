#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = UINT32_MAX;
int32_t x2 = INT32_MIN;
int16_t x3 = INT16_MAX;
int16_t x11 = -1;
volatile int8_t x13 = INT8_MAX;
int64_t x14 = 3935877462751974280LL;
int16_t x23 = INT16_MIN;
static int16_t x31 = -1;
uint8_t x37 = 9U;
volatile int8_t x38 = INT8_MIN;
volatile int32_t t8 = 119;
int64_t t9 = 5828584689168545LL;
int8_t x53 = INT8_MIN;
int64_t x55 = INT64_MAX;
static uint8_t x60 = UINT8_MAX;
int16_t x62 = INT16_MIN;
int32_t x70 = INT32_MAX;
static volatile int64_t t14 = -8328982763287LL;
int32_t x79 = 6841;
uint16_t x92 = 2391U;
volatile uint16_t x97 = UINT16_MAX;
int16_t x104 = INT16_MAX;
uint16_t x110 = 876U;
int64_t x121 = -1LL;
volatile uint64_t t25 = 275LLU;
uint16_t x140 = 1U;
int32_t x144 = INT32_MAX;
static volatile uint64_t t27 = 92812669964021570LLU;
int16_t x145 = INT16_MIN;
int64_t t28 = -298730322997LL;
static int16_t x149 = INT16_MIN;
int64_t x151 = 44LL;
static volatile int32_t x159 = -1;
int32_t t31 = 888315913;
int32_t t34 = 1952048;
volatile uint64_t x174 = 451LLU;
static volatile int32_t x185 = INT32_MIN;
int64_t x189 = INT64_MIN;
uint16_t x190 = 3U;
static uint64_t t41 = 419070667933LLU;
uint64_t t43 = 1695169629831408217LLU;
static uint16_t x209 = UINT16_MAX;
int32_t x211 = -111;
static int16_t x216 = INT16_MIN;
static uint64_t x217 = 54210046720131LLU;
int64_t x220 = -1LL;
volatile uint64_t t46 = 5884071334LLU;
int32_t x227 = 22309;
uint32_t x237 = UINT32_MAX;
int32_t x240 = -1;
static int32_t x242 = INT32_MAX;
uint16_t x254 = 16064U;
volatile int32_t x260 = -90;
volatile int64_t t57 = -621304895092282189LL;
int8_t x282 = INT8_MIN;
int64_t x284 = -1LL;
volatile int64_t t61 = -95416LL;
volatile int64_t t62 = -20227641LL;
volatile int8_t x290 = INT8_MIN;
volatile int8_t x291 = INT8_MIN;
static volatile int32_t x293 = -22389;
int8_t x299 = INT8_MAX;
volatile uint64_t t65 = 1LLU;
static int32_t x312 = -1;
uint64_t x317 = 4519341915878782163LLU;
uint32_t x320 = 6099U;
volatile uint64_t t70 = 3318780563539LLU;
int8_t x327 = INT8_MIN;
volatile int64_t t71 = 1677493272614452573LL;
int64_t x329 = 305894291LL;
static int64_t x336 = INT64_MIN;
volatile uint64_t t74 = 6446LLU;
int64_t x352 = INT64_MIN;
volatile uint32_t x356 = UINT32_MAX;
uint8_t x361 = 30U;
static int64_t t79 = 380LL;
uint8_t x365 = 49U;
volatile int16_t x373 = -1164;
static volatile int32_t t81 = 2;
int64_t x391 = INT64_MAX;
volatile int64_t t86 = -3597529064591LL;
int32_t x402 = INT32_MIN;
int64_t x409 = -1LL;
int64_t x421 = INT64_MIN;
int64_t t91 = INT64_MIN;
volatile int16_t x427 = INT16_MAX;
uint64_t x429 = UINT64_MAX;
int64_t x431 = INT64_MAX;
volatile uint64_t x441 = 28568354221LLU;
volatile int64_t x444 = INT64_MIN;
int16_t x453 = INT16_MAX;
static int16_t x454 = -1;
int16_t x458 = -1;
static int8_t x459 = 30;


void f0(void) {
	int16_t x4 = INT16_MIN;
	uint32_t t0 = 388668412U;

	t0 = (x1&((x2^x3)-x4));

	if (t0 != 2147549183U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 52U;
	static int8_t x10 = -1;
	uint64_t x12 = 757455504LLU;
	uint64_t t1 = 108982613001867589LLU;

	t1 = (x9&((x10^x11)-x12));

	if (t1 != 48LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x15 = 758029LLU;
	volatile uint8_t x16 = 16U;
	uint64_t t2 = 512525890099LLU;

	t2 = (x13&((x14^x15)-x16));

	if (t2 != 117LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -40935;
	volatile int32_t x18 = -2;
	volatile int64_t x19 = 404438127378280LL;
	int32_t x20 = -1;
	volatile int64_t t3 = 1554LL;

	t3 = (x17&((x18^x19)-x20));

	if (t3 != -404438127411183LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 86U;
	uint32_t x22 = UINT32_MAX;
	int32_t x24 = -13;
	uint32_t t4 = 0U;

	t4 = (x21&((x22^x23)-x24));

	if (t4 != 4U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x29 = 117U;
	int32_t x30 = INT32_MIN;
	static volatile int32_t x32 = 172;
	volatile int32_t t5 = 443491080;

	t5 = (x29&((x30^x31)-x32));

	if (t5 != 81) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x39 = INT32_MIN;
	volatile uint8_t x40 = 0U;
	volatile int32_t t6 = 226027;

	t6 = (x37&((x38^x39)-x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x41 = -216;
	static int8_t x42 = 0;
	int16_t x43 = 0;
	static int16_t x44 = -1;
	int32_t t7 = 25;

	t7 = (x41&((x42^x43)-x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MIN;
	static volatile int16_t x46 = 7785;
	int8_t x47 = -2;
	volatile int32_t x48 = INT32_MIN;

	t8 = (x45&((x46^x47)-x48));

	if (t8 != 2147475840) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 1;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	static int64_t x52 = INT64_MAX;

	t9 = (x49&((x50^x51)-x52));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x54 = -118943085;
	int8_t x56 = -2;
	int64_t t10 = -113840LL;

	t10 = (x53&((x54^x55)-x56));

	if (t10 != -9223372036735832832LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -5;
	int32_t x58 = -251672375;
	int64_t x59 = -26061687538453LL;
	volatile int64_t t11 = 6292462834679596LL;

	t11 = (x57&((x58^x59)-x60));

	if (t11 != 26061771436835LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	static int32_t x63 = INT32_MAX;
	int64_t x64 = -1LL;
	int64_t t12 = -217LL;

	t12 = (x61&((x62^x63)-x64));

	if (t12 != -2147450880LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = UINT64_MAX;
	static uint16_t x68 = 5U;
	volatile uint64_t t13 = 201267729922LLU;

	t13 = (x65&((x66^x67)-x68));

	if (t13 != 122LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x69 = 2U;
	int8_t x71 = INT8_MIN;
	int64_t x72 = -1584577927295305276LL;

	t14 = (x69&((x70^x71)-x72));

	if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x77 = INT16_MIN;
	uint8_t x78 = 4U;
	volatile uint64_t x80 = 6LLU;
	uint64_t t15 = 7182360436090950814LLU;

	t15 = (x77&((x78^x79)-x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = INT16_MAX;
	static int8_t x90 = INT8_MIN;
	int8_t x91 = -62;
	int32_t t16 = -39438;

	t16 = (x89&((x90^x91)-x92));

	if (t16 != 30443) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MAX;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = -1;
	static int32_t t17 = 27;

	t17 = (x93&((x94^x95)-x96));

	if (t17 != 129) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x98 = INT16_MAX;
	int32_t x99 = -1;
	uint16_t x100 = 0U;
	static volatile int32_t t18 = 504842353;

	t18 = (x97&((x98^x99)-x100));

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = -1;
	static volatile int64_t t19 = 2589999939498LL;

	t19 = (x101&((x102^x103)-x104));

	if (t19 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	volatile int32_t x107 = 326;
	static uint64_t x108 = 754471446460587LLU;
	static volatile uint64_t t20 = 1LLU;

	t20 = (x105&((x106^x107)-x108));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	static volatile uint8_t x111 = 0U;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t21 = -18078089;

	t21 = (x109&((x110^x111)-x112));

	if (t21 != 896) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x122 = -778647;
	uint16_t x123 = 1573U;
	volatile int32_t x124 = INT32_MIN;
	int64_t t22 = -54812933LL;

	t22 = (x121&((x122^x123)-x124));

	if (t22 != 2146703436LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x125 = -121796LL;
	uint8_t x126 = 0U;
	int64_t x127 = INT64_MIN;
	static int64_t x128 = INT64_MIN;
	static int64_t t23 = 1535314LL;

	t23 = (x125&((x126^x127)-x128));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	int64_t x130 = -1LL;
	static uint16_t x131 = 143U;
	volatile uint32_t x132 = 7U;
	int64_t t24 = 10227667411LL;

	t24 = (x129&((x130^x131)-x132));

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x133 = INT16_MAX;
	uint64_t x134 = 2061LLU;
	uint32_t x135 = 1136863U;
	uint8_t x136 = 34U;

	t25 = (x133&((x134^x135)-x136));

	if (t25 != 20656LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x137 = 189350039281LLU;
	int16_t x138 = INT16_MAX;
	static uint32_t x139 = UINT32_MAX;
	volatile uint64_t t26 = 164015083463LLU;

	t26 = (x137&((x138^x139)-x140));

	if (t26 != 371478257LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = -5885;
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = -1;

	t27 = (x141&((x142^x143)-x144));

	if (t27 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x146 = INT32_MIN;
	int64_t x147 = -1LL;
	int64_t x148 = -1LL;

	t28 = (x145&((x146^x147)-x148));

	if (t28 != 2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x150 = INT64_MAX;
	uint32_t x152 = 1902107U;
	static int64_t t29 = -7205091LL;

	t29 = (x149&((x150^x151)-x152));

	if (t29 != 9223372036852842496LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = INT64_MAX;
	uint16_t x154 = 31289U;
	uint8_t x155 = 9U;
	volatile int16_t x156 = 3544;
	volatile int64_t t30 = -2049252845412296LL;

	t30 = (x153&((x154^x155)-x156));

	if (t30 != 27736LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x157 = UINT16_MAX;
	static int16_t x158 = INT16_MIN;
	int16_t x160 = INT16_MIN;

	t31 = (x157&((x158^x159)-x160));

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = -1166;
	uint32_t x162 = 489U;
	int8_t x163 = 28;
	uint16_t x164 = 2U;
	volatile uint32_t t32 = 26U;

	t32 = (x161&((x162^x163)-x164));

	if (t32 != 370U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x165 = INT32_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = 768638U;
	uint8_t x168 = UINT8_MAX;
	uint32_t t33 = 79097U;

	t33 = (x165&((x166^x167)-x168));

	if (t33 != 768383U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = UINT16_MAX;
	static volatile int32_t x170 = INT32_MIN;
	int32_t x171 = -943;
	static uint8_t x172 = 23U;

	t34 = (x169&((x170^x171)-x172));

	if (t34 != 64570) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x173 = INT16_MAX;
	static volatile int16_t x175 = -1;
	uint32_t x176 = UINT32_MAX;
	volatile uint64_t t35 = 77589022655964LLU;

	t35 = (x173&((x174^x175)-x176));

	if (t35 != 32317LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = UINT64_MAX;
	static int32_t x178 = -1;
	volatile int32_t x179 = -95868083;
	int16_t x180 = -951;
	volatile uint64_t t36 = 24033210LLU;

	t36 = (x177&((x178^x179)-x180));

	if (t36 != 95869033LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = 553975828U;
	static volatile int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	uint32_t t37 = 6U;

	t37 = (x181&((x182^x183)-x184));

	if (t37 != 20U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x186 = -4247;
	uint16_t x187 = UINT16_MAX;
	volatile int16_t x188 = -1;
	int32_t t38 = INT32_MIN;

	t38 = (x185&((x186^x187)-x188));

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x191 = -1LL;
	static volatile int64_t x192 = -2986323LL;
	static int64_t t39 = 60LL;

	t39 = (x189&((x190^x191)-x192));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x193 = UINT16_MAX;
	volatile int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MIN;
	volatile uint64_t x196 = UINT64_MAX;
	static uint64_t t40 = 264487LLU;

	t40 = (x193&((x194^x195)-x196));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x198 = UINT64_MAX;
	int64_t x199 = -2828041605685916661LL;
	int16_t x200 = 3286;

	t41 = (x197&((x198^x199)-x200));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x201 = -1LL;
	int16_t x202 = INT16_MIN;
	int16_t x203 = INT16_MIN;
	uint16_t x204 = 868U;
	static volatile int64_t t42 = 13918545395443272LL;

	t42 = (x201&((x202^x203)-x204));

	if (t42 != -868LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = 7837;
	static uint64_t x207 = 186719718LLU;
	int8_t x208 = -8;

	t43 = (x205&((x206^x207)-x208));

	if (t43 != 186712064LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x210 = -1;
	static int16_t x212 = INT16_MIN;
	static int32_t t44 = -3;

	t44 = (x209&((x210^x211)-x212));

	if (t44 != 32878) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x213 = UINT8_MAX;
	static int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;
	uint32_t t45 = 7364U;

	t45 = (x213&((x214^x215)-x216));

	if (t45 != 255U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x218 = INT64_MIN;
	uint64_t x219 = 13131240234385LLU;

	t46 = (x217&((x218^x219)-x220));

	if (t46 != 1379800242306LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = 548105LL;
	volatile int32_t x226 = -1;
	static int64_t x228 = -1LL;
	int64_t t47 = -219LL;

	t47 = (x225&((x226^x227)-x228));

	if (t47 != 526345LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 8U;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;
	volatile int32_t t48 = 36390332;

	t48 = (x229&((x230^x231)-x232));

	if (t48 != 65527) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = INT64_MIN;
	volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	int64_t x236 = 3824766192051111LL;
	int64_t t49 = INT64_MIN;

	t49 = (x233&((x234^x235)-x236));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x238 = 263211313U;
	uint32_t x239 = 61820910U;
	uint32_t t50 = 30U;

	t50 = (x237&((x238^x239)-x240));

	if (t50 != 203359968U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = INT8_MIN;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = 1;
	static volatile int32_t t51 = 28877864;

	t51 = (x241&((x242^x243)-x244));

	if (t51 != -2147451008) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x245 = INT64_MIN;
	volatile int16_t x246 = -5;
	int16_t x247 = INT16_MIN;
	int64_t x248 = -6961289LL;
	int64_t t52 = -1LL;

	t52 = (x245&((x246^x247)-x248));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x249 = INT8_MAX;
	int32_t x250 = -10;
	static uint8_t x251 = 2U;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t53 = 1LLU;

	t53 = (x249&((x250^x251)-x252));

	if (t53 != 117LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x253 = UINT64_MAX;
	int8_t x255 = 1;
	static volatile uint32_t x256 = 311U;
	volatile uint64_t t54 = 30198544526468976LLU;

	t54 = (x253&((x254^x255)-x256));

	if (t54 != 15754LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x257 = INT64_MIN;
	volatile int32_t x258 = INT32_MAX;
	int16_t x259 = INT16_MIN;
	int64_t t55 = INT64_MIN;

	t55 = (x257&((x258^x259)-x260));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x261 = INT64_MAX;
	static uint64_t x262 = UINT64_MAX;
	int8_t x263 = INT8_MAX;
	int8_t x264 = INT8_MIN;
	uint64_t t56 = 446540452497LLU;

	t56 = (x261&((x262^x263)-x264));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x265 = 1;
	int8_t x266 = -2;
	uint32_t x267 = 264239611U;
	volatile int64_t x268 = INT64_MAX;

	t57 = (x265&((x266^x267)-x268));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -1;
	int64_t x270 = -267LL;
	int8_t x271 = INT8_MAX;
	volatile int64_t x272 = -325839217322324LL;
	int64_t t58 = -368LL;

	t58 = (x269&((x270^x271)-x272));

	if (t58 != 325839217321950LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	uint64_t x274 = 4014102013538LLU;
	static uint32_t x275 = 261602U;
	static volatile int32_t x276 = INT32_MAX;
	volatile uint64_t t59 = 120976180450LLU;

	t59 = (x273&((x274^x275)-x276));

	if (t59 != 4011954274304LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x277 = 13U;
	uint64_t x278 = 31638LLU;
	uint32_t x279 = 86675186U;
	int8_t x280 = 2;
	volatile uint64_t t60 = 3252928671179373452LLU;

	t60 = (x277&((x278^x279)-x280));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = -1;
	volatile int64_t x283 = INT64_MIN;

	t61 = (x281&((x282^x283)-x284));

	if (t61 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x285 = -46431751312LL;
	int64_t x286 = -1LL;
	uint8_t x287 = UINT8_MAX;
	volatile int8_t x288 = INT8_MIN;

	t62 = (x285&((x286^x287)-x288));

	if (t62 != -46431751424LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = INT8_MIN;
	volatile int32_t x292 = -23295;
	volatile int32_t t63 = -20624176;

	t63 = (x289&((x290^x291)-x292));

	if (t63 != 23168) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x294 = -1;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = 1U;
	int64_t t64 = -1534789923387519LL;

	t64 = (x293&((x294^x295)-x296));

	if (t64 != 9223372036854753418LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 1913LLU;
	int8_t x298 = 10;
	int16_t x300 = 22;

	t65 = (x297&((x298^x299)-x300));

	if (t65 != 89LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x301 = UINT16_MAX;
	static uint64_t x302 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -1;
	static uint64_t t66 = 31463236LLU;

	t66 = (x301&((x302^x303)-x304));

	if (t66 != 32768LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x305 = 2U;
	volatile uint64_t x306 = 1755483LLU;
	volatile int64_t x307 = 70028268831LL;
	int16_t x308 = INT16_MIN;
	volatile uint64_t t67 = 234225LLU;

	t67 = (x305&((x306^x307)-x308));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x309 = INT16_MAX;
	int32_t x310 = -1;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t t68 = 0;

	t68 = (x309&((x310^x311)-x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x313 = INT64_MIN;
	static int16_t x314 = INT16_MAX;
	static uint64_t x315 = 5459493475490472836LLU;
	uint16_t x316 = 31U;
	uint64_t t69 = 862241484410459783LLU;

	t69 = (x313&((x314^x315)-x316));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x318 = 28;
	int32_t x319 = INT32_MAX;

	t70 = (x317&((x318^x319)-x320));

	if (t70 != 712826896LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x325 = 16LL;
	int64_t x326 = INT64_MAX;
	volatile int64_t x328 = INT64_MIN;

	t71 = (x325&((x326^x327)-x328));

	if (t71 != 16LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x330 = 0LLU;
	int8_t x331 = -41;
	uint8_t x332 = 27U;
	volatile uint64_t t72 = 225994889331500LLU;

	t72 = (x329&((x330^x331)-x332));

	if (t72 != 305894288LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = 12597LL;
	int16_t x334 = INT16_MAX;
	uint64_t x335 = 442464202391LLU;
	uint64_t t73 = 124LLU;

	t73 = (x333&((x334^x335)-x336));

	if (t73 != 4384LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x337 = 2963U;
	static volatile uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MIN;
	int16_t x340 = -1;

	t74 = (x337&((x338^x339)-x340));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x342 = UINT8_MAX;
	uint16_t x343 = 179U;
	int8_t x344 = INT8_MIN;
	volatile int64_t t75 = -243097402190226LL;

	t75 = (x341&((x342^x343)-x344));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -1;
	volatile int32_t x346 = INT32_MAX;
	int8_t x347 = 56;
	int32_t x348 = -1;
	int32_t t76 = -28946544;

	t76 = (x345&((x346^x347)-x348));

	if (t76 != 2147483592) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x349 = -114842;
	int64_t x350 = -22337979992LL;
	uint32_t x351 = 144603U;
	volatile int64_t t77 = 5LL;

	t77 = (x349&((x350^x351)-x352));

	if (t77 != 9223372014516833634LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = -1LL;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = 4850U;
	int64_t t78 = -1690342927536522LL;

	t78 = (x353&((x354^x355)-x356));

	if (t78 != 9223372032559803662LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x362 = UINT32_MAX;
	static int64_t x363 = INT64_MIN;
	int32_t x364 = INT32_MIN;

	t79 = (x361&((x362^x363)-x364));

	if (t79 != 30LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x366 = -1;
	static int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t80 = 820488U;

	t80 = (x365&((x366^x367)-x368));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x374 = UINT8_MAX;
	int8_t x375 = -1;
	static int16_t x376 = -2115;

	t81 = (x373&((x374^x375)-x376));

	if (t81 != 832) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x377 = -1;
	uint64_t x378 = 429411LLU;
	int64_t x379 = -509451169549734LL;
	static uint16_t x380 = 32241U;
	volatile uint64_t t82 = 843LLU;

	t82 = (x377&((x378^x379)-x380));

	if (t82 != 18446234622540136776LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = -15524;
	static int8_t x382 = INT8_MIN;
	int64_t x383 = -11906887406115636LL;
	uint32_t x384 = UINT32_MAX;
	int64_t t83 = 2953559404LL;

	t83 = (x381&((x382^x383)-x384));

	if (t83 != 11906883111142220LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = INT8_MIN;
	static int32_t x390 = INT32_MIN;
	int8_t x392 = INT8_MIN;
	static volatile int64_t t84 = 2232LL;

	t84 = (x389&((x390^x391)-x392));

	if (t84 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = -53025084;
	static uint16_t x394 = UINT16_MAX;
	int32_t x395 = -696;
	uint64_t x396 = 64305LLU;
	uint64_t t85 = 6077149LLU;

	t85 = (x393&((x394^x395)-x396));

	if (t85 != 18446744073656469124LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	static int8_t x399 = INT8_MIN;
	int16_t x400 = -1;

	t86 = (x397&((x398^x399)-x400));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x401 = 301;
	int16_t x403 = INT16_MIN;
	uint8_t x404 = 1U;
	int32_t t87 = -3073;

	t87 = (x401&((x402^x403)-x404));

	if (t87 != 301) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x405 = -7;
	int64_t x406 = INT64_MIN;
	uint32_t x407 = 199253U;
	int32_t x408 = INT32_MIN;
	static int64_t t88 = 104229LL;

	t88 = (x405&((x406^x407)-x408));

	if (t88 != -9223372034707092911LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x410 = 52268U;
	int16_t x411 = INT16_MIN;
	int8_t x412 = -29;
	int64_t t89 = -797LL;

	t89 = (x409&((x410^x411)-x412));

	if (t89 != 4294921289LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x413 = -1;
	int64_t x414 = INT64_MIN;
	uint32_t x415 = 56647U;
	int32_t x416 = INT32_MIN;
	volatile int64_t t90 = 6614448LL;

	t90 = (x413&((x414^x415)-x416));

	if (t90 != -9223372034707235513LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x422 = -3493;
	static uint8_t x423 = 4U;
	int32_t x424 = -1;

	t91 = (x421&((x422^x423)-x424));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = INT64_MAX;
	uint16_t x426 = 20U;
	static volatile uint32_t x428 = 186825U;
	volatile int64_t t92 = 144977968863LL;

	t92 = (x425&((x426^x427)-x428));

	if (t92 != 4294813218LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x430 = INT64_MIN;
	static uint64_t x432 = 897440204005LLU;
	volatile uint64_t t93 = 121358228960693LLU;

	t93 = (x429&((x430^x431)-x432));

	if (t93 != 18446743176269347610LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = 1;
	static uint64_t x434 = 1LLU;
	uint8_t x435 = 118U;
	uint8_t x436 = 11U;
	volatile uint64_t t94 = 283893187803303662LLU;

	t94 = (x433&((x434^x435)-x436));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = -1LL;
	uint8_t x438 = 0U;
	uint32_t x439 = 95U;
	volatile int32_t x440 = INT32_MIN;
	int64_t t95 = 166237881541LL;

	t95 = (x437&((x438^x439)-x440));

	if (t95 != 2147483743LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x442 = 2;
	static volatile int16_t x443 = INT16_MIN;
	uint64_t t96 = 273779161LLU;

	t96 = (x441&((x442^x443)-x444));

	if (t96 != 28568322048LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = INT32_MIN;
	uint16_t x446 = UINT16_MAX;
	uint16_t x447 = 0U;
	int64_t x448 = -1957058688LL;
	int64_t t97 = -3152488020770LL;

	t97 = (x445&((x446^x447)-x448));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x455 = 454298927;
	uint32_t x456 = UINT32_MAX;
	static volatile uint32_t t98 = 7896882U;

	t98 = (x453&((x454^x455)-x456));

	if (t98 != 29393U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x457 = INT16_MIN;
	uint32_t x460 = 717U;
	uint32_t t99 = 757895U;

	t99 = (x457&((x458^x459)-x460));

	if (t99 != 4294934528U) { NG(); } else { ; }
	
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

