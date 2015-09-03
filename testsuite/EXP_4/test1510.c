#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x5 = -578LL;
uint64_t x13 = 11744155694029088LLU;
uint64_t x16 = UINT64_MAX;
volatile int64_t x26 = 1207261167283LL;
volatile int64_t x35 = INT64_MIN;
volatile int64_t t8 = 3749480898045LL;
uint64_t x45 = UINT64_MAX;
static uint32_t x62 = 167U;
volatile uint32_t t13 = 5102U;
uint32_t x69 = 254067U;
static volatile int8_t x72 = -2;
uint32_t t15 = 294U;
int64_t x74 = 0LL;
uint16_t x77 = 2979U;
int8_t x87 = INT8_MIN;
uint64_t x92 = 400LLU;
uint32_t x119 = UINT32_MAX;
volatile int16_t x129 = INT16_MIN;
volatile uint8_t x130 = UINT8_MAX;
static int16_t x132 = 15;
volatile int32_t t27 = 89277606;
int32_t x135 = INT32_MIN;
int32_t t28 = -1;
int8_t x146 = INT8_MAX;
int32_t t32 = 30968864;
int32_t x166 = 1596;
volatile int32_t t36 = 2567;
uint16_t x173 = 53U;
uint64_t x176 = UINT64_MAX;
int16_t x188 = INT16_MIN;
static int32_t t41 = 445;
uint8_t x199 = 1U;
volatile int16_t x201 = INT16_MIN;
int32_t x209 = INT32_MAX;
volatile int16_t x213 = -1;
uint8_t x214 = UINT8_MAX;
static int8_t x215 = INT8_MAX;
int16_t x222 = -1;
int32_t x224 = -1;
uint32_t x231 = 1148721684U;
int32_t x232 = INT32_MIN;
static volatile int32_t x247 = INT32_MIN;
volatile int32_t t54 = -279269;
int16_t x253 = -1646;
uint32_t x255 = UINT32_MAX;
volatile int32_t x261 = INT32_MIN;
static int8_t x262 = INT8_MIN;
int32_t t57 = 1066304160;
uint8_t x277 = 11U;
volatile uint8_t x282 = 17U;
volatile int32_t x284 = INT32_MAX;
int32_t t62 = 7249;
static uint16_t x292 = UINT16_MAX;
volatile int16_t x315 = -3518;
uint16_t x323 = 13U;
uint64_t t70 = 7463540328979LLU;
int64_t x326 = -3392055643LL;
volatile int64_t t71 = 1773260121297441LL;
volatile uint32_t x329 = UINT32_MAX;
static int64_t x330 = -1LL;
int64_t x331 = INT64_MIN;
volatile int64_t t72 = -16840874105481534LL;
static volatile int8_t x339 = -1;
uint8_t x347 = 96U;
int8_t x353 = INT8_MIN;
uint8_t x357 = 37U;
static uint16_t x364 = 31921U;
static int64_t t82 = 251420LL;
int8_t x377 = INT8_MAX;
int64_t x382 = 319495428560080367LL;
int32_t x386 = 174102;
uint16_t x398 = UINT16_MAX;
volatile int64_t t89 = 4250LL;
int32_t x403 = 54073;
uint16_t x404 = 29U;
uint8_t x412 = 102U;
volatile int16_t x419 = -174;
uint16_t x420 = UINT16_MAX;
uint8_t x425 = 23U;
int16_t x428 = -146;
uint64_t x430 = 4499319915444253LLU;
volatile uint16_t x433 = UINT16_MAX;
volatile int64_t t97 = -2320862LL;
static uint64_t x441 = 68807707321942937LLU;
volatile int16_t x444 = -1;
int32_t x447 = INT32_MAX;
int32_t t99 = 111;


void f0(void) {
	int16_t x1 = -11788;
	int16_t x2 = INT16_MAX;
	static uint32_t x3 = UINT32_MAX;
	volatile uint32_t x4 = 31757308U;
	volatile int32_t t0 = 267;

	t0 = (x1-(x2^(x3<x4)));

	if (t0 != -44555) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = 57341898281074LLU;
	uint32_t x7 = 194U;
	uint8_t x8 = UINT8_MAX;
	uint64_t t1 = 2291LLU;

	t1 = (x5-(x6^(x7<x8)));

	if (t1 != 18446686731811269963LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x14 = 47315LL;
	static int16_t x15 = 12;
	uint64_t t2 = 3691575401851LLU;

	t2 = (x13-(x14^(x15<x16)));

	if (t2 != 11744155693981774LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 3;
	int64_t x18 = 43280839693LL;
	static int8_t x19 = INT8_MIN;
	int8_t x20 = 4;
	int64_t t3 = -22636403LL;

	t3 = (x17-(x18^(x19<x20)));

	if (t3 != -43280839689LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	static int16_t x24 = -1;
	volatile int32_t t4 = -169430;

	t4 = (x21-(x22^(x23<x24)));

	if (t4 != -2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 1898;
	uint32_t x27 = UINT32_MAX;
	static uint64_t x28 = UINT64_MAX;
	volatile int64_t t5 = -53226045432LL;

	t5 = (x25-(x26^(x27<x28)));

	if (t5 != -1207261165384LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 18;
	int8_t x30 = INT8_MAX;
	volatile int32_t x31 = INT32_MIN;
	static uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = -789383932;

	t6 = (x29-(x30^(x31<x32)));

	if (t6 != -108) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 686450281LLU;
	int16_t x34 = -30;
	int32_t x36 = INT32_MIN;
	uint64_t t7 = 25410710LLU;

	t7 = (x33-(x34^(x35<x36)));

	if (t7 != 686450310LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = 1776321398907LL;
	int8_t x38 = 3;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = UINT64_MAX;

	t8 = (x37-(x38^(x39<x40)));

	if (t8 != 1776321398905LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = -1;
	uint8_t x42 = 2U;
	volatile int64_t x43 = INT64_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t9 = 20677780;

	t9 = (x41-(x42^(x43<x44)));

	if (t9 != -3) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MAX;
	static int8_t x48 = -1;
	uint64_t t10 = 2LLU;

	t10 = (x45-(x46^(x47<x48)));

	if (t10 != 2147483647LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x49 = -1;
	int64_t x50 = INT64_MIN;
	uint32_t x51 = 1589385U;
	uint8_t x52 = 1U;
	static int64_t t11 = INT64_MAX;

	t11 = (x49-(x50^(x51<x52)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = -1;
	int16_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int16_t x60 = -21;
	static volatile int32_t t12 = 10;

	t12 = (x57-(x58^(x59<x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 59U;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -1LL;

	t13 = (x61-(x62^(x63<x64)));

	if (t13 != 4294967189U) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x65 = -1;
	volatile uint32_t x66 = 5U;
	static int32_t x67 = INT32_MIN;
	int16_t x68 = -1;
	uint32_t t14 = 392753551U;

	t14 = (x65-(x66^(x67<x68)));

	if (t14 != 4294967291U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;

	t15 = (x69-(x70^(x71<x72)));

	if (t15 != 2147737714U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x73 = 5U;
	int64_t x75 = -1LL;
	int8_t x76 = -1;
	int64_t t16 = -3183LL;

	t16 = (x73-(x74^(x75<x76)));

	if (t16 != 5LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = -1;
	int16_t x79 = -1;
	static volatile uint64_t x80 = 49330516886832LLU;
	int32_t t17 = 1;

	t17 = (x77-(x78^(x79<x80)));

	if (t17 != 2980) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	uint64_t x86 = 1445721511LLU;
	int32_t x88 = -1;
	volatile uint64_t t18 = 0LLU;

	t18 = (x85-(x86^(x87<x88)));

	if (t18 != 18446744072263829978LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x89 = 4973U;
	int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	volatile int32_t t19 = -48301349;

	t19 = (x89-(x90^(x91<x92)));

	if (t19 != 4974) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = -1;
	int64_t x96 = 7101236764LL;
	volatile uint64_t t20 = 12387LLU;

	t20 = (x93-(x94^(x95<x96)));

	if (t20 != 2147483649LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 0LLU;
	volatile uint32_t x98 = 18312U;
	volatile uint8_t x99 = UINT8_MAX;
	uint32_t x100 = 9683U;
	volatile uint64_t t21 = 218968023852LLU;

	t21 = (x97-(x98^(x99<x100)));

	if (t21 != 18446744073709533303LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = -174360091LL;
	int16_t x102 = INT16_MIN;
	volatile int16_t x103 = INT16_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile int64_t t22 = 48LL;

	t22 = (x101-(x102^(x103<x104)));

	if (t22 != -174327324LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = 1U;
	int32_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	int64_t x108 = -1LL;
	volatile int32_t t23 = 8301277;

	t23 = (x105-(x106^(x107<x108)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	volatile int8_t x110 = -15;
	uint16_t x111 = 607U;
	volatile uint32_t x112 = UINT32_MAX;
	volatile int32_t t24 = 57120936;

	t24 = (x109-(x110^(x111<x112)));

	if (t24 != -2147483632) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 60U;
	uint32_t x118 = 1118615U;
	static int16_t x120 = -193;
	static volatile uint32_t t25 = 65982U;

	t25 = (x117-(x118^(x119<x120)));

	if (t25 != 4293848741U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -21542985;
	int64_t x122 = INT64_MIN;
	static int8_t x123 = -2;
	static int16_t x124 = -1;
	volatile int64_t t26 = 106158854645655700LL;

	t26 = (x121-(x122^(x123<x124)));

	if (t26 != 9223372036833232822LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x131 = INT16_MIN;

	t27 = (x129-(x130^(x131<x132)));

	if (t27 != -33022) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = 342;
	uint16_t x134 = 1471U;
	uint16_t x136 = UINT16_MAX;

	t28 = (x133-(x134^(x135<x136)));

	if (t28 != -1128) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x137 = -1LL;
	volatile uint32_t x138 = 1862674U;
	uint8_t x139 = 1U;
	int64_t x140 = INT64_MAX;
	int64_t t29 = 9421LL;

	t29 = (x137-(x138^(x139<x140)));

	if (t29 != -1862676LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MAX;
	int16_t x142 = INT16_MAX;
	static int8_t x143 = INT8_MIN;
	volatile int64_t x144 = -1LL;
	int64_t t30 = 512749522LL;

	t30 = (x141-(x142^(x143<x144)));

	if (t30 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x145 = UINT8_MAX;
	int16_t x147 = INT16_MIN;
	static uint32_t x148 = UINT32_MAX;
	static int32_t t31 = 9379417;

	t31 = (x145-(x146^(x147<x148)));

	if (t31 != 129) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x149 = -1;
	int8_t x150 = INT8_MAX;
	static int32_t x151 = -1405960;
	int32_t x152 = -1;

	t32 = (x149-(x150^(x151<x152)));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = INT32_MAX;
	int32_t x154 = 570;
	static int8_t x155 = -17;
	uint16_t x156 = 0U;
	int32_t t33 = 79505401;

	t33 = (x153-(x154^(x155<x156)));

	if (t33 != 2147483076) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x157 = INT8_MAX;
	uint64_t x158 = 21362598779LLU;
	int8_t x159 = 6;
	static uint32_t x160 = UINT32_MAX;
	volatile uint64_t t34 = 117140595LLU;

	t34 = (x157-(x158^(x159<x160)));

	if (t34 != 18446744052346952965LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x161 = INT16_MAX;
	static int32_t x162 = -16229;
	static int16_t x163 = 61;
	static volatile uint32_t x164 = 215634125U;
	int32_t t35 = 28577655;

	t35 = (x161-(x162^(x163<x164)));

	if (t35 != 48997) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = -1;
	int8_t x167 = INT8_MIN;
	static volatile uint64_t x168 = UINT64_MAX;

	t36 = (x165-(x166^(x167<x168)));

	if (t36 != -1598) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x174 = UINT8_MAX;
	volatile int16_t x175 = INT16_MIN;
	int32_t t37 = -10496;

	t37 = (x173-(x174^(x175<x176)));

	if (t37 != -201) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	int16_t x184 = 247;
	volatile int32_t t38 = -50630;

	t38 = (x181-(x182^(x183<x184)));

	if (t38 != -65662) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x185 = 141079U;
	static int8_t x186 = INT8_MIN;
	uint32_t x187 = 521096U;
	volatile uint32_t t39 = 144U;

	t39 = (x185-(x186^(x187<x188)));

	if (t39 != 141206U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = 567LLU;
	uint32_t x190 = 125U;
	volatile int16_t x191 = 3;
	volatile int16_t x192 = -1;
	uint64_t t40 = 55104995745593652LLU;

	t40 = (x189-(x190^(x191<x192)));

	if (t40 != 442LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MAX;
	uint8_t x194 = 1U;
	int32_t x195 = INT32_MAX;
	int8_t x196 = INT8_MAX;

	t41 = (x193-(x194^(x195<x196)));

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = INT8_MIN;
	uint8_t x198 = 107U;
	int64_t x200 = -566602392996862LL;
	static int32_t t42 = -1;

	t42 = (x197-(x198^(x199<x200)));

	if (t42 != -235) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	static int8_t x204 = -1;
	volatile int32_t t43 = 34779;

	t43 = (x201-(x202^(x203<x204)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x210 = 0;
	uint32_t x211 = 39792468U;
	int32_t x212 = 219642;
	int32_t t44 = INT32_MAX;

	t44 = (x209-(x210^(x211<x212)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x216 = INT16_MIN;
	int32_t t45 = -451;

	t45 = (x213-(x214^(x215<x216)));

	if (t45 != -256) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x217 = 31U;
	volatile int16_t x218 = -1;
	int16_t x219 = INT16_MAX;
	uint32_t x220 = 2887970U;
	static volatile int32_t t46 = -3368701;

	t46 = (x217-(x218^(x219<x220)));

	if (t46 != 33) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x221 = -1LL;
	static volatile uint8_t x223 = UINT8_MAX;
	volatile int64_t t47 = 30768176LL;

	t47 = (x221-(x222^(x223<x224)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = 53LLU;
	static int16_t x226 = -1;
	int16_t x227 = INT16_MIN;
	static uint16_t x228 = UINT16_MAX;
	volatile uint64_t t48 = 963279345456561LLU;

	t48 = (x225-(x226^(x227<x228)));

	if (t48 != 55LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = -1;
	int16_t x230 = INT16_MIN;
	static int32_t t49 = -843086;

	t49 = (x229-(x230^(x231<x232)));

	if (t49 != 32766) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x233 = 755100U;
	static int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 4U;
	volatile uint32_t t50 = 1771086U;

	t50 = (x233-(x234^(x235<x236)));

	if (t50 != 755227U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x237 = 358793128U;
	volatile int8_t x238 = -10;
	static int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;
	static volatile uint32_t t51 = 1U;

	t51 = (x237-(x238^(x239<x240)));

	if (t51 != 358793138U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x241 = 84990951U;
	int8_t x242 = -1;
	int32_t x243 = -17854000;
	uint64_t x244 = UINT64_MAX;
	uint32_t t52 = 223047814U;

	t52 = (x241-(x242^(x243<x244)));

	if (t52 != 84990953U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x245 = 4325127857317271541LLU;
	int64_t x246 = 62LL;
	uint16_t x248 = UINT16_MAX;
	volatile uint64_t t53 = 737672LLU;

	t53 = (x245-(x246^(x247<x248)));

	if (t53 != 4325127857317271478LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x249 = INT16_MIN;
	int8_t x250 = INT8_MAX;
	static int8_t x251 = INT8_MIN;
	int8_t x252 = -53;

	t54 = (x249-(x250^(x251<x252)));

	if (t54 != -32894) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x254 = 10U;
	int64_t x256 = INT64_MIN;
	static volatile uint32_t t55 = 90745U;

	t55 = (x253-(x254^(x255<x256)));

	if (t55 != 4294965640U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x257 = 5561U;
	int32_t x258 = INT32_MIN;
	int8_t x259 = INT8_MAX;
	int64_t x260 = -1LL;
	uint32_t t56 = 68985240U;

	t56 = (x257-(x258^(x259<x260)));

	if (t56 != 2147489209U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x263 = UINT16_MAX;
	static uint16_t x264 = UINT16_MAX;

	t57 = (x261-(x262^(x263<x264)));

	if (t57 != -2147483520) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = -1;
	uint8_t x266 = UINT8_MAX;
	int16_t x267 = -21;
	static volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t58 = 939070064;

	t58 = (x265-(x266^(x267<x268)));

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x273 = UINT32_MAX;
	int32_t x274 = 26719673;
	volatile uint64_t x275 = 1104543302708LLU;
	uint8_t x276 = 1U;
	uint32_t t59 = 345U;

	t59 = (x273-(x274^(x275<x276)));

	if (t59 != 4268247622U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x278 = UINT32_MAX;
	static volatile int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	uint32_t t60 = 338148845U;

	t60 = (x277-(x278^(x279<x280)));

	if (t60 != 13U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x281 = UINT64_MAX;
	static uint64_t x283 = 131399662962583513LLU;
	volatile uint64_t t61 = 8227317488433235LLU;

	t61 = (x281-(x282^(x283<x284)));

	if (t61 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = -193993;
	int16_t x286 = INT16_MIN;
	volatile int16_t x287 = 7;
	uint16_t x288 = UINT16_MAX;

	t62 = (x285-(x286^(x287<x288)));

	if (t62 != -161226) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -10;
	int16_t x290 = -1;
	volatile int64_t x291 = -510LL;
	int32_t t63 = 531486200;

	t63 = (x289-(x290^(x291<x292)));

	if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x297 = -1LL;
	uint8_t x298 = UINT8_MAX;
	volatile int16_t x299 = 177;
	uint64_t x300 = UINT64_MAX;
	volatile int64_t t64 = 828485866603050906LL;

	t64 = (x297-(x298^(x299<x300)));

	if (t64 != -255LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = 1;
	uint32_t x302 = UINT32_MAX;
	volatile int8_t x303 = -9;
	volatile uint32_t x304 = UINT32_MAX;
	static uint32_t t65 = 471579145U;

	t65 = (x301-(x302^(x303<x304)));

	if (t65 != 3U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = INT32_MIN;
	volatile uint32_t x306 = 1913567U;
	volatile int32_t x307 = -5692;
	static uint32_t x308 = UINT32_MAX;
	static uint32_t t66 = 110U;

	t66 = (x305-(x306^(x307<x308)));

	if (t66 != 2145570082U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = INT32_MIN;
	uint8_t x310 = 0U;
	uint32_t x311 = 494798U;
	volatile uint16_t x312 = 212U;
	volatile int32_t t67 = INT32_MIN;

	t67 = (x309-(x310^(x311<x312)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x313 = 14103129752107LLU;
	int8_t x314 = INT8_MIN;
	int32_t x316 = INT32_MAX;
	uint64_t t68 = 876LLU;

	t68 = (x313-(x314^(x315<x316)));

	if (t68 != 14103129752234LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x317 = -32;
	volatile int16_t x318 = -13;
	volatile uint32_t x319 = UINT32_MAX;
	uint8_t x320 = 9U;
	volatile int32_t t69 = 282841845;

	t69 = (x317-(x318^(x319<x320)));

	if (t69 != -19) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x321 = -1;
	uint64_t x322 = 265732450635608950LLU;
	int16_t x324 = -2;

	t70 = (x321-(x322^(x323<x324)));

	if (t70 != 18181011623073942665LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x325 = 1608U;
	int64_t x327 = -2826877722095LL;
	volatile int64_t x328 = -144LL;

	t71 = (x325-(x326^(x327<x328)));

	if (t71 != 3392057252LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x332 = -2;

	t72 = (x329-(x330^(x331<x332)));

	if (t72 != 4294967297LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = UINT64_MAX;
	int8_t x334 = -1;
	volatile uint32_t x335 = 4U;
	static int64_t x336 = INT64_MIN;
	static volatile uint64_t t73 = 35619LLU;

	t73 = (x333-(x334^(x335<x336)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x337 = INT64_MIN;
	int16_t x338 = -1;
	volatile uint8_t x340 = 0U;
	volatile int64_t t74 = -892584804294370LL;

	t74 = (x337-(x338^(x339<x340)));

	if (t74 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = 4;
	int8_t x342 = INT8_MIN;
	int8_t x343 = INT8_MAX;
	int32_t x344 = -1;
	int32_t t75 = -15520384;

	t75 = (x341-(x342^(x343<x344)));

	if (t75 != 132) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -1;
	static uint16_t x346 = UINT16_MAX;
	int64_t x348 = -171LL;
	volatile int32_t t76 = 241904;

	t76 = (x345-(x346^(x347<x348)));

	if (t76 != -65536) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -91;
	int16_t x352 = 934;
	volatile int64_t t77 = 14867831191220LL;

	t77 = (x349-(x350^(x351<x352)));

	if (t77 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x354 = -1;
	int8_t x355 = 31;
	uint32_t x356 = 397201U;
	int32_t t78 = 3960;

	t78 = (x353-(x354^(x355<x356)));

	if (t78 != -126) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x358 = INT16_MIN;
	volatile uint8_t x359 = 0U;
	volatile uint64_t x360 = UINT64_MAX;
	static int32_t t79 = 26672;

	t79 = (x357-(x358^(x359<x360)));

	if (t79 != 32804) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x361 = -1LL;
	static uint32_t x362 = UINT32_MAX;
	int16_t x363 = INT16_MIN;
	volatile int64_t t80 = -1961057861102LL;

	t80 = (x361-(x362^(x363<x364)));

	if (t80 != -4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x365 = 222974U;
	int64_t x366 = -236198LL;
	int32_t x367 = INT32_MIN;
	volatile uint64_t x368 = 131003LLU;
	int64_t t81 = -816675019680916458LL;

	t81 = (x365-(x366^(x367<x368)));

	if (t81 != 459172LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x369 = 85214195947LL;
	volatile int32_t x370 = 5038;
	static int16_t x371 = 4541;
	int8_t x372 = INT8_MIN;

	t82 = (x369-(x370^(x371<x372)));

	if (t82 != 85214190909LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = UINT16_MAX;
	int32_t x376 = -1;
	int64_t t83 = 71908594049686LL;

	t83 = (x373-(x374^(x375<x376)));

	if (t83 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x378 = UINT32_MAX;
	volatile int64_t x379 = 281672842908LL;
	uint16_t x380 = 28U;
	volatile uint32_t t84 = 83656U;

	t84 = (x377-(x378^(x379<x380)));

	if (t84 != 128U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x381 = UINT64_MAX;
	volatile int32_t x383 = INT32_MIN;
	uint8_t x384 = UINT8_MAX;
	static uint64_t t85 = 145514LLU;

	t85 = (x381-(x382^(x383<x384)));

	if (t85 != 18127248645149471249LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x385 = 62U;
	static volatile int64_t x387 = INT64_MIN;
	int16_t x388 = -1;
	static int32_t t86 = 1;

	t86 = (x385-(x386^(x387<x388)));

	if (t86 != -174041) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x389 = INT32_MIN;
	static int8_t x390 = INT8_MIN;
	static int32_t x391 = INT32_MAX;
	int8_t x392 = -1;
	int32_t t87 = 1;

	t87 = (x389-(x390^(x391<x392)));

	if (t87 != -2147483520) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x393 = 205670482230LLU;
	static int16_t x394 = -124;
	int32_t x395 = -1;
	int16_t x396 = 1;
	uint64_t t88 = 2944233614690032LLU;

	t88 = (x393-(x394^(x395<x396)));

	if (t88 != 205670482353LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x397 = -1LL;
	int8_t x399 = INT8_MIN;
	static int64_t x400 = INT64_MIN;

	t89 = (x397-(x398^(x399<x400)));

	if (t89 != -65536LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x401 = UINT16_MAX;
	uint64_t x402 = 25745LLU;
	static volatile uint64_t t90 = 3472076LLU;

	t90 = (x401-(x402^(x403<x404)));

	if (t90 != 39790LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x409 = -1;
	volatile int8_t x410 = INT8_MIN;
	uint32_t x411 = 20498496U;
	static int32_t t91 = 61646629;

	t91 = (x409-(x410^(x411<x412)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = UINT8_MAX;
	static volatile uint8_t x414 = 13U;
	int16_t x415 = -1;
	int8_t x416 = -2;
	volatile int32_t t92 = -326;

	t92 = (x413-(x414^(x415<x416)));

	if (t92 != 242) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = INT8_MIN;
	static uint16_t x418 = UINT16_MAX;
	static volatile int32_t t93 = 19304386;

	t93 = (x417-(x418^(x419<x420)));

	if (t93 != -65662) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x426 = -355081;
	static volatile int64_t x427 = INT64_MAX;
	int32_t t94 = 111702;

	t94 = (x425-(x426^(x427<x428)));

	if (t94 != 355104) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x429 = 13364096LLU;
	static int64_t x431 = -1LL;
	int8_t x432 = -1;
	volatile uint64_t t95 = 1259004LLU;

	t95 = (x429-(x430^(x431<x432)));

	if (t95 != 18442244753807471459LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MIN;
	uint16_t x436 = 4U;
	volatile int32_t t96 = -20;

	t96 = (x433-(x434^(x435<x436)));

	if (t96 != 65409) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = 344737762235252LL;
	uint16_t x438 = 7U;
	uint32_t x439 = UINT32_MAX;
	static volatile int32_t x440 = 0;

	t97 = (x437-(x438^(x439<x440)));

	if (t97 != 344737762235245LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x442 = -3329104;
	volatile int16_t x443 = INT16_MAX;
	uint64_t t98 = 3681LLU;

	t98 = (x441-(x442^(x443<x444)));

	if (t98 != 68807707325272041LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MIN;
	uint64_t x448 = 1LLU;

	t99 = (x445-(x446^(x447<x448)));

	if (t99 != 33023) { NG(); } else { ; }
	
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

