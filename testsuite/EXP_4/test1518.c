#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = 46;
volatile uint16_t x7 = 1U;
volatile int16_t x10 = INT16_MAX;
int8_t x20 = 0;
volatile int32_t x24 = -1;
int32_t x31 = 930339;
int64_t x36 = 1LL;
int32_t t8 = 590;
volatile int16_t x39 = INT16_MIN;
int32_t t9 = 6345338;
int32_t x43 = INT32_MAX;
volatile int32_t t10 = -26048;
int16_t x48 = INT16_MIN;
static uint16_t x51 = 14487U;
int64_t x52 = INT64_MIN;
static int64_t x56 = 616639083765892LL;
uint64_t x58 = 1265128736146578516LLU;
volatile int32_t t14 = 16567304;
int8_t x67 = 7;
static volatile int32_t t17 = 36459;
uint64_t x76 = UINT64_MAX;
volatile int32_t t19 = -6715;
uint16_t x82 = 69U;
static int32_t t20 = -1;
volatile int32_t t21 = -53083576;
static uint16_t x98 = 21733U;
int32_t x99 = -316787;
static volatile int8_t x100 = INT8_MIN;
volatile int16_t x102 = INT16_MIN;
uint64_t x109 = UINT64_MAX;
volatile uint32_t x110 = 1125119305U;
int32_t x116 = -157595464;
static volatile int32_t t28 = 2714;
int32_t x118 = -690192357;
uint32_t x124 = 20823789U;
volatile int32_t t31 = 3456;
static int64_t x130 = -1LL;
int32_t x132 = INT32_MAX;
volatile int32_t t33 = -395;
volatile int32_t t35 = 0;
int16_t x146 = INT16_MAX;
int64_t x149 = INT64_MAX;
volatile uint64_t x152 = UINT64_MAX;
uint64_t x153 = 21991967718384359LLU;
volatile uint64_t x157 = 327243LLU;
int32_t t40 = -989;
static uint8_t x167 = 48U;
int64_t x169 = 425827934848LL;
volatile int32_t t42 = -66209778;
int16_t x175 = INT16_MIN;
uint8_t x178 = 20U;
int16_t x182 = 0;
uint8_t x187 = UINT8_MAX;
volatile int32_t t46 = -497507909;
volatile int16_t x191 = -199;
uint8_t x207 = 9U;
int64_t x213 = INT64_MIN;
uint64_t x215 = 461220068808000329LLU;
static int16_t x218 = -65;
int8_t x219 = -1;
int16_t x223 = INT16_MIN;
uint8_t x228 = 13U;
int16_t x235 = INT16_MAX;
uint16_t x241 = 506U;
volatile int32_t t60 = 19689;
static volatile uint8_t x247 = 7U;
volatile int32_t t64 = -441;
int16_t x262 = INT16_MAX;
int64_t x265 = -754LL;
int64_t x268 = -1LL;
int16_t x269 = 2;
volatile int64_t x270 = -243584LL;
int32_t t67 = 0;
static volatile int8_t x273 = INT8_MIN;
int16_t x276 = -932;
int32_t x279 = 5407;
int16_t x281 = -1;
int8_t x283 = INT8_MAX;
uint16_t x287 = 29501U;
volatile int32_t t71 = 24218;
int16_t x291 = -1;
int32_t x297 = -1;
int8_t x301 = -1;
int32_t x308 = INT32_MIN;
int64_t x318 = INT64_MIN;
static uint8_t x319 = 18U;
static int16_t x320 = 14041;
volatile int32_t x323 = 1;
static int32_t x325 = -1;
volatile int32_t t81 = -1;
int64_t x330 = INT64_MIN;
volatile int32_t t83 = -58173061;
static int64_t x338 = -427622481763494LL;
static int16_t x341 = -1;
static volatile uint8_t x344 = UINT8_MAX;
uint32_t x355 = 0U;
int16_t x356 = INT16_MAX;
static volatile int32_t t89 = -77;
int64_t x362 = -1LL;
volatile int32_t t90 = -234;
uint32_t x367 = UINT32_MAX;
int8_t x368 = -7;
int8_t x370 = -26;
volatile int8_t x379 = -6;
int8_t x385 = INT8_MIN;
static volatile int32_t t96 = 279787;
static int64_t x393 = INT64_MIN;
int8_t x398 = INT8_MAX;


void f0(void) {
	volatile int16_t x1 = 377;
	int8_t x2 = -1;
	int64_t x4 = 199431097775LL;
	int32_t t0 = -296;

	t0 = (x1<=(x2^(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 6U;
	uint8_t x6 = 24U;
	int8_t x8 = -1;
	static int32_t t1 = -3690194;

	t1 = (x5<=(x6^(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	static volatile int8_t x11 = 20;
	int16_t x12 = INT16_MAX;
	int32_t t2 = 16399404;

	t2 = (x9<=(x10^(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int16_t x14 = -121;
	int8_t x15 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	static int32_t t3 = 202264573;

	t3 = (x13<=(x14^(x15<x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 879127LLU;
	uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	volatile int32_t t4 = -13254639;

	t4 = (x17<=(x18^(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x21 = 2235537U;
	uint8_t x22 = 0U;
	int16_t x23 = INT16_MIN;
	static int32_t t5 = -35264278;

	t5 = (x21<=(x22^(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1;
	int64_t x26 = INT64_MIN;
	uint32_t x27 = 439082U;
	int32_t x28 = 3847;
	volatile int32_t t6 = 42;

	t6 = (x25<=(x26^(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = -1;
	uint16_t x30 = 224U;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 3754;

	t7 = (x29<=(x30^(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int64_t x34 = 1070653687902255LL;
	volatile int64_t x35 = -394652623270035LL;

	t8 = (x33<=(x34^(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static uint8_t x38 = UINT8_MAX;
	int16_t x40 = 3;

	t9 = (x37<=(x38^(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x41 = 62488501421LLU;
	int32_t x42 = -3269;
	int16_t x44 = INT16_MIN;

	t10 = (x41<=(x42^(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 79746575LL;
	static int64_t x46 = 12575432963663074LL;
	uint8_t x47 = 9U;
	volatile int32_t t11 = 3;

	t11 = (x45<=(x46^(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = 13200;
	int32_t t12 = -629175;

	t12 = (x49<=(x50^(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	uint16_t x54 = 30U;
	uint64_t x55 = UINT64_MAX;
	volatile int32_t t13 = 3117640;

	t13 = (x53<=(x54^(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	static volatile int8_t x59 = -37;
	uint16_t x60 = 4992U;

	t14 = (x57<=(x58^(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = 7;
	uint16_t x63 = 5781U;
	int8_t x64 = -1;
	volatile int32_t t15 = 3133;

	t15 = (x61<=(x62^(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 0U;
	int16_t x66 = -1;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 1116340;

	t16 = (x65<=(x66^(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 10;
	int32_t x70 = 161;
	int32_t x71 = -59;
	static volatile uint16_t x72 = 136U;

	t17 = (x69<=(x70^(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -632029219009451219LL;
	int64_t x74 = INT64_MIN;
	int32_t x75 = INT32_MIN;
	int32_t t18 = -7107961;

	t18 = (x73<=(x74^(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	uint16_t x78 = 30052U;
	volatile int64_t x79 = INT64_MIN;
	int32_t x80 = -1968467;

	t19 = (x77<=(x78^(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 325U;
	uint16_t x83 = 7780U;
	int8_t x84 = -39;

	t20 = (x81<=(x82^(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = UINT64_MAX;
	uint8_t x86 = 1U;
	volatile uint8_t x87 = 8U;
	static uint8_t x88 = UINT8_MAX;

	t21 = (x85<=(x86^(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -159;
	volatile int32_t x90 = 63;
	uint64_t x91 = 1759894007LLU;
	uint32_t x92 = 12214302U;
	volatile int32_t t22 = 2;

	t22 = (x89<=(x90^(x91<x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MAX;
	uint64_t x94 = 330LLU;
	int8_t x95 = 6;
	static uint16_t x96 = 6U;
	volatile int32_t t23 = -65;

	t23 = (x93<=(x94^(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = UINT32_MAX;
	volatile int32_t t24 = 1;

	t24 = (x97<=(x98^(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	int8_t x103 = INT8_MIN;
	volatile int64_t x104 = -123LL;
	volatile int32_t t25 = 100;

	t25 = (x101<=(x102^(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -51;
	int8_t x106 = INT8_MAX;
	int64_t x107 = 22919711445907776LL;
	static int32_t x108 = INT32_MAX;
	int32_t t26 = -84524240;

	t26 = (x105<=(x106^(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x111 = 32U;
	static uint32_t x112 = 1295755U;
	int32_t t27 = -1;

	t27 = (x109<=(x110^(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	volatile uint64_t x114 = 7864107346493936644LLU;
	uint32_t x115 = 32091U;

	t28 = (x113<=(x114^(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -1LL;
	int64_t x119 = -10377048756LL;
	uint32_t x120 = 1U;
	int32_t t29 = 492;

	t29 = (x117<=(x118^(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	int16_t x123 = 26;
	int32_t t30 = 310;

	t30 = (x121<=(x122^(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	volatile int8_t x126 = -1;
	uint8_t x127 = UINT8_MAX;
	static int16_t x128 = -15220;

	t31 = (x125<=(x126^(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	static int32_t t32 = -20925075;

	t32 = (x129<=(x130^(x131<x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	uint16_t x134 = 5733U;
	volatile int16_t x135 = -103;
	int64_t x136 = INT64_MAX;

	t33 = (x133<=(x134^(x135<x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -417447;
	int16_t x138 = 10841;
	int8_t x139 = -3;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = 5692525;

	t34 = (x137<=(x138^(x139<x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -22478644867036063LL;
	int16_t x142 = -1;
	uint32_t x143 = UINT32_MAX;
	static volatile int64_t x144 = INT64_MIN;

	t35 = (x141<=(x142^(x143<x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 3202U;
	static int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MAX;
	volatile int32_t t36 = -20301;

	t36 = (x145<=(x146^(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = 3U;
	int64_t x151 = INT64_MIN;
	int32_t t37 = 12;

	t37 = (x149<=(x150^(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = INT16_MIN;
	uint16_t x155 = UINT16_MAX;
	uint32_t x156 = 204U;
	int32_t t38 = -26188;

	t38 = (x153<=(x154^(x155<x156)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = INT64_MIN;
	static int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MAX;
	int32_t t39 = 1;

	t39 = (x157<=(x158^(x159<x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -852;
	uint64_t x162 = 1662924432255LLU;
	int64_t x163 = 5344LL;
	int8_t x164 = -1;

	t40 = (x161<=(x162^(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 86LL;
	int16_t x166 = 7;
	int64_t x168 = -1LL;
	volatile int32_t t41 = 118813;

	t41 = (x165<=(x166^(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	int32_t x171 = -1;
	uint64_t x172 = 393LLU;

	t42 = (x169<=(x170^(x171<x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	volatile uint64_t x176 = 106LLU;
	int32_t t43 = 796008169;

	t43 = (x173<=(x174^(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -1;
	int16_t x179 = 0;
	static int64_t x180 = 228807183523LL;
	volatile int32_t t44 = 0;

	t44 = (x177<=(x178^(x179<x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	uint16_t x183 = 11289U;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = -3;

	t45 = (x181<=(x182^(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	static uint64_t x186 = 443011798LLU;
	int8_t x188 = INT8_MIN;

	t46 = (x185<=(x186^(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	int64_t x192 = -46828792711358533LL;
	volatile int32_t t47 = 0;

	t47 = (x189<=(x190^(x191<x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -58;
	volatile uint8_t x195 = 124U;
	int32_t x196 = 60448723;
	int32_t t48 = -1568;

	t48 = (x193<=(x194^(x195<x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x197 = INT8_MIN;
	static int16_t x198 = -1;
	int32_t x199 = INT32_MAX;
	static int8_t x200 = INT8_MIN;
	int32_t t49 = 112901;

	t49 = (x197<=(x198^(x199<x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = INT32_MAX;
	uint32_t x202 = UINT32_MAX;
	static volatile int32_t x203 = INT32_MAX;
	uint8_t x204 = 67U;
	static int32_t t50 = 0;

	t50 = (x201<=(x202^(x203<x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 88U;
	int8_t x206 = 1;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 7635;

	t51 = (x205<=(x206^(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 5U;
	static int32_t x210 = INT32_MAX;
	static int16_t x211 = -79;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 3251321;

	t52 = (x209<=(x210^(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x214 = 127;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = -4797;

	t53 = (x213<=(x214^(x215<x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -1;
	static uint64_t x220 = 11081LLU;
	int32_t t54 = -478;

	t54 = (x217<=(x218^(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -526;
	int64_t x222 = 1LL;
	volatile uint16_t x224 = 21U;
	int32_t t55 = -1688;

	t55 = (x221<=(x222^(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	uint32_t x227 = 7U;
	volatile int32_t t56 = 220;

	t56 = (x225<=(x226^(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x229 = UINT8_MAX;
	static int64_t x230 = INT64_MIN;
	volatile uint16_t x231 = 7U;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 8416635;

	t57 = (x229<=(x230^(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 906772;
	static int32_t x234 = -1;
	int64_t x236 = -1LL;
	int32_t t58 = -27772;

	t58 = (x233<=(x234^(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 943U;
	static uint16_t x238 = 19U;
	volatile int8_t x239 = 19;
	volatile int16_t x240 = -1;
	volatile int32_t t59 = 116204003;

	t59 = (x237<=(x238^(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -1;
	int8_t x243 = 1;
	volatile int32_t x244 = INT32_MIN;

	t60 = (x241<=(x242^(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MAX;
	uint16_t x246 = UINT16_MAX;
	static uint16_t x248 = 5U;
	volatile int32_t t61 = 1;

	t61 = (x245<=(x246^(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	static volatile int64_t x250 = -114086LL;
	static uint8_t x251 = 6U;
	int8_t x252 = INT8_MAX;
	int32_t t62 = 1591;

	t62 = (x249<=(x250^(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 63;
	int32_t x254 = -17;
	uint64_t x255 = 416767724LLU;
	uint64_t x256 = 292565695564889489LLU;
	int32_t t63 = 3618639;

	t63 = (x253<=(x254^(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile uint8_t x258 = 0U;
	volatile int32_t x259 = -1;
	volatile int16_t x260 = 76;

	t64 = (x257<=(x258^(x259<x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 53336206343LLU;
	static int8_t x263 = -1;
	volatile int64_t x264 = INT64_MIN;
	static volatile int32_t t65 = -1672861;

	t65 = (x261<=(x262^(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x266 = UINT64_MAX;
	int8_t x267 = -1;
	int32_t t66 = 1;

	t66 = (x265<=(x266^(x267<x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;

	t67 = (x269<=(x270^(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x274 = 0U;
	volatile int32_t x275 = -1;
	volatile int32_t t68 = -11;

	t68 = (x273<=(x274^(x275<x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -1;
	int8_t x278 = INT8_MIN;
	static int32_t x280 = INT32_MAX;
	volatile int32_t t69 = -129431370;

	t69 = (x277<=(x278^(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = INT64_MIN;
	int32_t x284 = INT32_MAX;
	int32_t t70 = 295535916;

	t70 = (x281<=(x282^(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	static int16_t x286 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;

	t71 = (x285<=(x286^(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	static uint16_t x292 = 39U;
	int32_t t72 = 16057;

	t72 = (x289<=(x290^(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 63U;
	uint16_t x294 = UINT16_MAX;
	uint16_t x295 = 0U;
	uint8_t x296 = 5U;
	volatile int32_t t73 = -8931902;

	t73 = (x293<=(x294^(x295<x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -9352;
	int64_t x299 = INT64_MIN;
	static uint32_t x300 = 23081U;
	volatile int32_t t74 = -14896;

	t74 = (x297<=(x298^(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = INT32_MIN;
	volatile int16_t x303 = -716;
	static int16_t x304 = 285;
	static volatile int32_t t75 = 113450;

	t75 = (x301<=(x302^(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = 1;
	uint32_t x306 = 0U;
	int8_t x307 = INT8_MIN;
	volatile int32_t t76 = 776133312;

	t76 = (x305<=(x306^(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	uint32_t x310 = 288678906U;
	int32_t x311 = INT32_MAX;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t77 = 59238258;

	t77 = (x309<=(x310^(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = INT32_MIN;
	int8_t x314 = -42;
	int8_t x315 = -6;
	uint64_t x316 = UINT64_MAX;
	static int32_t t78 = -115001;

	t78 = (x313<=(x314^(x315<x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 57U;
	int32_t t79 = 924;

	t79 = (x317<=(x318^(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MAX;
	uint16_t x324 = 4419U;
	int32_t t80 = -1;

	t80 = (x321<=(x322^(x323<x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x326 = -17095;
	static int16_t x327 = 417;
	volatile uint8_t x328 = UINT8_MAX;

	t81 = (x325<=(x326^(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	volatile int16_t x331 = -1;
	int32_t x332 = -1991;
	int32_t t82 = 45;

	t82 = (x329<=(x330^(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = 1;
	int64_t x334 = 1159844LL;
	volatile int64_t x335 = INT64_MIN;
	volatile int64_t x336 = 2583558471LL;

	t83 = (x333<=(x334^(x335<x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -1;
	int16_t x339 = INT16_MAX;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t84 = 476;

	t84 = (x337<=(x338^(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -1LL;
	int32_t x343 = INT32_MAX;
	volatile int32_t t85 = 54818;

	t85 = (x341<=(x342^(x343<x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	int32_t x346 = -3082139;
	int64_t x347 = -311842301LL;
	static int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -96480105;

	t86 = (x345<=(x346^(x347<x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MAX;
	static int8_t x352 = INT8_MIN;
	int32_t t87 = 38364;

	t87 = (x349<=(x350^(x351<x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int16_t x354 = -51;
	volatile int32_t t88 = 1;

	t88 = (x353<=(x354^(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	volatile int16_t x358 = INT16_MAX;
	static uint64_t x359 = UINT64_MAX;
	int8_t x360 = INT8_MIN;

	t89 = (x357<=(x358^(x359<x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x361 = -1;
	uint16_t x363 = UINT16_MAX;
	uint16_t x364 = UINT16_MAX;

	t90 = (x361<=(x362^(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -6;
	int32_t x366 = -1;
	int32_t t91 = 2;

	t91 = (x365<=(x366^(x367<x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 9LL;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	int32_t t92 = 1;

	t92 = (x369<=(x370^(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MAX;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MAX;
	int32_t t93 = 43825388;

	t93 = (x373<=(x374^(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x377 = 1U;
	static volatile int8_t x378 = INT8_MAX;
	static int32_t x380 = INT32_MAX;
	int32_t t94 = 3;

	t94 = (x377<=(x378^(x379<x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -66350038;
	int16_t x382 = INT16_MIN;
	static int8_t x383 = -3;
	int8_t x384 = INT8_MIN;
	int32_t t95 = -1;

	t95 = (x381<=(x382^(x383<x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -2;
	int16_t x387 = INT16_MIN;
	volatile uint32_t x388 = UINT32_MAX;

	t96 = (x385<=(x386^(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 23357;
	static int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t97 = -1;

	t97 = (x389<=(x390^(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x394 = 311399298303341230LLU;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -1272183;

	t98 = (x393<=(x394^(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 1;
	int64_t x399 = 1LL;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t99 = -764174;

	t99 = (x397<=(x398^(x399<x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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

