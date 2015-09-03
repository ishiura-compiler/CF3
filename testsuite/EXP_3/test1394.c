#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 1U;
uint8_t x4 = 0U;
static uint64_t t0 = 0LLU;
static int8_t x9 = -1;
int64_t x10 = INT64_MIN;
volatile int8_t x15 = -1;
volatile int64_t x24 = INT64_MAX;
volatile int32_t t6 = -325269;
static uint16_t x33 = 54U;
int64_t x35 = -1LL;
volatile int32_t x37 = INT32_MIN;
int64_t x45 = -234361587775LL;
uint32_t x47 = 39100U;
int8_t x48 = INT8_MIN;
static volatile int64_t t11 = 3053LL;
int32_t x56 = 1;
int64_t x58 = INT64_MIN;
int64_t t14 = 25312601051LL;
uint8_t x62 = 11U;
static int32_t x73 = -1;
int8_t x74 = -1;
static uint32_t x77 = 439184U;
uint16_t x82 = 113U;
int32_t x86 = -158;
uint8_t x100 = 28U;
int64_t x112 = INT64_MIN;
static uint8_t x122 = 50U;
int64_t t27 = -155LL;
static uint16_t x125 = UINT16_MAX;
uint64_t x135 = 678773LLU;
int32_t t30 = 0;
int8_t x140 = INT8_MIN;
volatile uint32_t x144 = UINT32_MAX;
static volatile int64_t t32 = 103717LL;
volatile uint8_t x148 = 5U;
volatile uint32_t x149 = UINT32_MAX;
int64_t x154 = INT64_MAX;
int32_t x156 = -1;
int8_t x160 = INT8_MAX;
uint8_t x166 = 2U;
volatile int32_t t38 = 0;
volatile int16_t x174 = -1;
int8_t x175 = -1;
uint64_t x176 = 48397787441LLU;
uint16_t x181 = UINT16_MAX;
volatile uint8_t x182 = 5U;
int32_t t41 = 34207587;
volatile int64_t t42 = -82047816252LL;
int8_t x190 = 40;
volatile uint8_t x194 = UINT8_MAX;
int64_t x196 = 3744530467041LL;
int8_t x198 = -1;
int32_t x212 = INT32_MIN;
int16_t x217 = INT16_MAX;
static volatile uint8_t x219 = 19U;
uint64_t x227 = 4793LLU;
int32_t t53 = -44459151;
int16_t x236 = INT16_MAX;
int64_t t56 = -23701030373132LL;
int16_t x250 = INT16_MAX;
int16_t x255 = -382;
volatile int16_t x257 = 715;
volatile uint32_t x258 = 21006U;
int64_t x262 = -1LL;
int64_t x263 = -46LL;
int8_t x265 = 55;
uint32_t x267 = 1643U;
static uint16_t x273 = 2U;
int32_t x275 = -1;
volatile int32_t x281 = 0;
volatile uint64_t x287 = 12LLU;
static volatile int32_t t65 = 9;
int8_t x294 = INT8_MAX;
uint8_t x305 = 11U;
volatile int64_t t69 = 247581144LL;
volatile int32_t x320 = 258290376;
int8_t x323 = INT8_MAX;
static volatile int8_t x327 = -26;
int8_t x333 = 1;
static int32_t x335 = 0;
int32_t x340 = INT32_MAX;
uint8_t x342 = UINT8_MAX;
volatile uint64_t x343 = 30340037345178LLU;
static int16_t x346 = 1372;
int32_t t78 = -1145;
volatile int8_t x351 = INT8_MIN;
int64_t x352 = -1LL;
uint32_t t79 = 162U;
int32_t t82 = -35036;
static int16_t x365 = INT16_MIN;
int16_t x370 = -1;
volatile int16_t x373 = -1;
volatile int32_t t85 = -603854;
static int64_t x380 = INT64_MIN;
volatile uint64_t t87 = 255142075LLU;
int16_t x386 = INT16_MIN;
int32_t t88 = -2;
int8_t x389 = 6;
volatile int16_t x390 = INT16_MAX;
int8_t x394 = INT8_MIN;
volatile int64_t x399 = 22277LL;
static uint32_t x403 = 112812U;
uint64_t t92 = 631027376269230862LLU;
int32_t x407 = -1;
volatile uint32_t t93 = 1205930542U;
uint32_t x414 = UINT32_MAX;
int16_t x422 = INT16_MIN;
uint64_t x425 = 36708820792743LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint64_t x2 = UINT64_MAX;

	t0 = ((x1/x2)*(x3<x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 159LLU;
	int16_t x6 = INT16_MIN;
	volatile int64_t x7 = INT64_MIN;
	uint32_t x8 = 5U;
	volatile uint64_t t1 = 4227231408138185630LLU;

	t1 = ((x5/x6)*(x7<x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x11 = 3LLU;
	uint32_t x12 = 65054180U;
	int64_t t2 = 4332479733720667925LL;

	t2 = ((x9/x10)*(x11<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = 0;
	int64_t x14 = -62625832656838LL;
	static int16_t x16 = INT16_MIN;
	static volatile int64_t t3 = 16348605LL;

	t3 = ((x13/x14)*(x15<x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x18 = -1748;
	static int64_t x19 = -1LL;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = -1625650;

	t4 = ((x17/x18)*(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 3;
	int32_t x22 = INT32_MAX;
	volatile int16_t x23 = 26;
	volatile int32_t t5 = 14;

	t5 = ((x21/x22)*(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 2;
	int16_t x26 = 3690;
	int32_t x27 = -918243;
	int16_t x28 = INT16_MIN;

	t6 = ((x25/x26)*(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 76629;

	t7 = ((x29/x30)*(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -2;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = 437949901;

	t8 = ((x33/x34)*(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = 87200LL;
	static uint32_t x39 = 275U;
	uint32_t x40 = 485U;
	int64_t t9 = -49666117LL;

	t9 = ((x37/x38)*(x39<x40));

	if (t9 != -24627LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = -1;
	int8_t x42 = 1;
	static int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = 810;

	t10 = ((x41/x42)*(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x46 = 14U;

	t11 = ((x45/x46)*(x47<x48));

	if (t11 != -16740113412LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	static uint32_t x51 = 1U;
	volatile int32_t x52 = INT32_MIN;
	int32_t t12 = -24053614;

	t12 = ((x49/x50)*(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -6;
	volatile int64_t x54 = INT64_MAX;
	int32_t x55 = -1;
	volatile int64_t t13 = 26540269443LL;

	t13 = ((x53/x54)*(x55<x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x59 = UINT32_MAX;
	static int8_t x60 = 14;

	t14 = ((x57/x58)*(x59<x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 100167815LL;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = -1LL;
	int64_t t15 = 32810LL;

	t15 = ((x61/x62)*(x63<x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint64_t x66 = 2284416176442051345LLU;
	uint8_t x67 = 20U;
	static uint8_t x68 = 23U;
	uint64_t t16 = 1607951826004644LLU;

	t16 = ((x65/x66)*(x67<x68));

	if (t16 != 8LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x75 = -1;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -341364468;

	t17 = ((x73/x74)*(x75<x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = INT16_MIN;
	volatile uint32_t x79 = UINT32_MAX;
	int16_t x80 = 592;
	volatile uint32_t t18 = 2910266U;

	t18 = ((x77/x78)*(x79<x80));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = UINT64_MAX;
	int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t19 = 730LLU;

	t19 = ((x81/x82)*(x83<x84));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t20 = -252179015;

	t20 = ((x85/x86)*(x87<x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	volatile uint32_t x90 = 201746723U;
	int32_t x91 = INT32_MAX;
	volatile int16_t x92 = -1;
	volatile uint32_t t21 = 1U;

	t21 = ((x89/x90)*(x91<x92));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 17U;
	int64_t x94 = 83556LL;
	uint8_t x95 = 13U;
	static volatile int32_t x96 = INT32_MIN;
	int64_t t22 = 8426377897LL;

	t22 = ((x93/x94)*(x95<x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = -1;
	int32_t x99 = -1;
	int32_t t23 = -2271881;

	t23 = ((x97/x98)*(x99<x100));

	if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x101 = -1;
	static int32_t x102 = 104443;
	volatile uint16_t x103 = 125U;
	int32_t x104 = INT32_MAX;
	volatile int32_t t24 = -3975;

	t24 = ((x101/x102)*(x103<x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = INT32_MIN;
	int16_t x110 = INT16_MIN;
	static uint8_t x111 = 5U;
	volatile int32_t t25 = -18;

	t25 = ((x109/x110)*(x111<x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = 932005071U;
	int16_t x119 = INT16_MAX;
	uint16_t x120 = 23U;
	static uint32_t t26 = 0U;

	t26 = ((x117/x118)*(x119<x120));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x121 = INT64_MIN;
	int32_t x123 = INT32_MAX;
	int16_t x124 = INT16_MIN;

	t27 = ((x121/x122)*(x123<x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x126 = 58U;
	uint32_t x127 = 509939U;
	volatile int8_t x128 = INT8_MIN;
	static volatile int32_t t28 = 53487872;

	t28 = ((x125/x126)*(x127<x128));

	if (t28 != 1129) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x129 = UINT64_MAX;
	uint8_t x130 = 63U;
	volatile int8_t x131 = -2;
	static volatile uint32_t x132 = 43U;
	uint64_t t29 = 908185323525243559LLU;

	t29 = ((x129/x130)*(x131<x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -3;
	int16_t x134 = -1;
	int32_t x136 = INT32_MIN;

	t30 = ((x133/x134)*(x135<x136));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	uint32_t x138 = UINT32_MAX;
	int16_t x139 = INT16_MAX;
	volatile uint32_t t31 = 3408U;

	t31 = ((x137/x138)*(x139<x140));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x142 = 37U;
	static int64_t x143 = INT64_MAX;

	t32 = ((x141/x142)*(x143<x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1LL;
	volatile int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	volatile int64_t t33 = -6424LL;

	t33 = ((x145/x146)*(x147<x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x150 = 126;
	static volatile int16_t x151 = INT16_MAX;
	volatile int8_t x152 = -2;
	static volatile uint32_t t34 = 67348U;

	t34 = ((x149/x150)*(x151<x152));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x153 = -169430LL;
	int64_t x155 = INT64_MIN;
	volatile int64_t t35 = 7LL;

	t35 = ((x153/x154)*(x155<x156));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -1;
	int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MIN;
	volatile int32_t t36 = 26666;

	t36 = ((x157/x158)*(x159<x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t x162 = 29;
	static uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MAX;
	volatile uint32_t t37 = 1175973476U;

	t37 = ((x161/x162)*(x163<x164));

	if (t37 != 148102320U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = 56;
	int32_t x167 = INT32_MAX;
	int16_t x168 = 7161;

	t38 = ((x165/x166)*(x167<x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = 408587615LL;
	volatile int64_t t39 = -1003276LL;

	t39 = ((x173/x174)*(x175<x176));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x177 = 20733384734LLU;
	int32_t x178 = 3;
	uint64_t x179 = 278589956481410575LLU;
	static volatile int32_t x180 = -1;
	volatile uint64_t t40 = 4637594659675202984LLU;

	t40 = ((x177/x178)*(x179<x180));

	if (t40 != 6911128244LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x183 = INT8_MIN;
	uint8_t x184 = UINT8_MAX;

	t41 = ((x181/x182)*(x183<x184));

	if (t41 != 13107) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = 0;
	int64_t x186 = 388LL;
	int16_t x187 = INT16_MIN;
	int8_t x188 = -1;

	t42 = ((x185/x186)*(x187<x188));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x189 = -1;
	uint8_t x191 = 0U;
	volatile int64_t x192 = INT64_MIN;
	int32_t t43 = -1743539;

	t43 = ((x189/x190)*(x191<x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	int32_t t44 = 67665;

	t44 = ((x193/x194)*(x195<x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x197 = INT8_MAX;
	int16_t x199 = -1;
	static int16_t x200 = INT16_MIN;
	int32_t t45 = -3750;

	t45 = ((x197/x198)*(x199<x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x201 = 1035983229384373LLU;
	uint16_t x202 = 24762U;
	int8_t x203 = -42;
	int64_t x204 = 7703LL;
	volatile uint64_t t46 = 65462532405032LLU;

	t46 = ((x201/x202)*(x203<x204));

	if (t46 != 41837623349LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x205 = INT32_MAX;
	volatile int32_t x206 = INT32_MAX;
	uint16_t x207 = 20779U;
	uint16_t x208 = UINT16_MAX;
	static int32_t t47 = 1;

	t47 = ((x205/x206)*(x207<x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MAX;
	uint64_t x210 = 325899127LLU;
	int16_t x211 = -1;
	volatile uint64_t t48 = 734LLU;

	t48 = ((x209/x210)*(x211<x212));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x213 = 415U;
	volatile int64_t x214 = 2LL;
	int32_t x215 = INT32_MIN;
	int32_t x216 = 6256202;
	static int64_t t49 = 10029073538501009LL;

	t49 = ((x213/x214)*(x215<x216));

	if (t49 != 207LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x218 = -8;
	int64_t x220 = 79977578118147399LL;
	int32_t t50 = -218789596;

	t50 = ((x217/x218)*(x219<x220));

	if (t50 != -4095) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x221 = -27033;
	uint64_t x222 = 9LLU;
	volatile uint32_t x223 = 96816U;
	int8_t x224 = INT8_MIN;
	volatile uint64_t t51 = 11777928831219752LLU;

	t51 = ((x221/x222)*(x223<x224));

	if (t51 != 2049638230412169398LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x225 = 63912129U;
	uint64_t x226 = 9620368LLU;
	uint32_t x228 = 121U;
	static uint64_t t52 = 125348021767LLU;

	t52 = ((x225/x226)*(x227<x228));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x229 = 2;
	uint16_t x230 = 32512U;
	static int32_t x231 = -1;
	int64_t x232 = 6792542964365594LL;

	t53 = ((x229/x230)*(x231<x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	volatile int16_t x234 = -1;
	uint32_t x235 = UINT32_MAX;
	volatile int64_t t54 = 1554508569453642LL;

	t54 = ((x233/x234)*(x235<x236));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x241 = -210327;
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = 56U;
	int32_t t55 = 1;

	t55 = ((x241/x242)*(x243<x244));

	if (t55 != -3) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int64_t x246 = INT64_MIN;
	uint8_t x247 = 85U;
	int64_t x248 = -1LL;

	t56 = ((x245/x246)*(x247<x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x249 = 32U;
	static uint8_t x251 = 2U;
	int16_t x252 = INT16_MIN;
	volatile uint32_t t57 = 95002U;

	t57 = ((x249/x250)*(x251<x252));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x253 = 109U;
	int64_t x254 = INT64_MIN;
	volatile uint16_t x256 = 4639U;
	volatile int64_t t58 = -3LL;

	t58 = ((x253/x254)*(x255<x256));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x259 = INT32_MAX;
	int8_t x260 = -1;
	uint32_t t59 = 5529613U;

	t59 = ((x257/x258)*(x259<x260));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = 898U;
	int8_t x264 = 4;
	int64_t t60 = 259494526LL;

	t60 = ((x261/x262)*(x263<x264));

	if (t60 != -898LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x266 = -1;
	static int64_t x268 = INT64_MIN;
	int32_t t61 = 297654734;

	t61 = ((x265/x266)*(x267<x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x274 = UINT16_MAX;
	uint16_t x276 = 13U;
	int32_t t62 = 13456;

	t62 = ((x273/x274)*(x275<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = 508;
	int32_t x279 = 164;
	static int16_t x280 = -1;
	int32_t t63 = 5;

	t63 = ((x277/x278)*(x279<x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x282 = INT64_MIN;
	int8_t x283 = -1;
	static volatile uint32_t x284 = UINT32_MAX;
	volatile int64_t t64 = 5689LL;

	t64 = ((x281/x282)*(x283<x284));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = -51;
	int8_t x288 = -1;

	t65 = ((x285/x286)*(x287<x288));

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = 494;
	int16_t x295 = -1;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t66 = 534;

	t66 = ((x293/x294)*(x295<x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x301 = 3U;
	uint32_t x302 = 1076U;
	static int8_t x303 = INT8_MIN;
	int64_t x304 = -1LL;
	uint32_t t67 = 25210828U;

	t67 = ((x301/x302)*(x303<x304));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x306 = INT64_MIN;
	volatile uint64_t x307 = 2520795797125729LLU;
	uint8_t x308 = 7U;
	int64_t t68 = -1717LL;

	t68 = ((x305/x306)*(x307<x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x309 = UINT32_MAX;
	volatile int64_t x310 = INT64_MAX;
	int64_t x311 = -1LL;
	int64_t x312 = 412753038286LL;

	t69 = ((x309/x310)*(x311<x312));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x313 = 7U;
	static int8_t x314 = 2;
	volatile int8_t x315 = INT8_MAX;
	volatile int32_t x316 = INT32_MIN;
	static volatile int32_t t70 = 509;

	t70 = ((x313/x314)*(x315<x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x317 = 541;
	volatile int32_t x318 = 859022;
	uint8_t x319 = UINT8_MAX;
	static int32_t t71 = -4062;

	t71 = ((x317/x318)*(x319<x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x321 = 119940874U;
	int64_t x322 = INT64_MIN;
	uint64_t x324 = 266070529LLU;
	int64_t t72 = -221034LL;

	t72 = ((x321/x322)*(x323<x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x325 = INT16_MAX;
	int8_t x326 = 1;
	static int8_t x328 = 10;
	int32_t t73 = 35921;

	t73 = ((x325/x326)*(x327<x328));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x329 = 6U;
	volatile uint8_t x330 = UINT8_MAX;
	uint32_t x331 = UINT32_MAX;
	int32_t x332 = -1;
	int32_t t74 = -1345618;

	t74 = ((x329/x330)*(x331<x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x334 = 1766426091U;
	static volatile int32_t x336 = 10562073;
	static volatile uint32_t t75 = 19U;

	t75 = ((x333/x334)*(x335<x336));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x337 = INT16_MAX;
	int16_t x338 = INT16_MAX;
	static uint32_t x339 = UINT32_MAX;
	static volatile int32_t t76 = 326278391;

	t76 = ((x337/x338)*(x339<x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = 147785687395LL;
	static uint8_t x344 = 3U;
	volatile int64_t t77 = -2130645559LL;

	t77 = ((x341/x342)*(x343<x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x345 = 22U;
	uint16_t x347 = UINT16_MAX;
	int32_t x348 = INT32_MIN;

	t78 = ((x345/x346)*(x347<x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x349 = UINT16_MAX;
	static volatile uint32_t x350 = UINT32_MAX;

	t79 = ((x349/x350)*(x351<x352));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x353 = INT8_MIN;
	int16_t x354 = 6;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t80 = -83959536;

	t80 = ((x353/x354)*(x355<x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MIN;
	int8_t x360 = 6;
	int32_t t81 = 1674;

	t81 = ((x357/x358)*(x359<x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = -2;
	static volatile int8_t x362 = INT8_MAX;
	int32_t x363 = -1;
	int8_t x364 = INT8_MAX;

	t82 = ((x361/x362)*(x363<x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x366 = UINT16_MAX;
	int32_t x367 = 16650;
	int32_t x368 = -1;
	int32_t t83 = 86;

	t83 = ((x365/x366)*(x367<x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = INT64_MAX;
	int8_t x371 = INT8_MAX;
	int64_t x372 = INT64_MAX;
	volatile int64_t t84 = 70182790514LL;

	t84 = ((x369/x370)*(x371<x372));

	if (t84 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = INT32_MAX;
	int16_t x375 = -1;
	static uint16_t x376 = 28U;

	t85 = ((x373/x374)*(x375<x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x377 = 193049LLU;
	int64_t x378 = INT64_MIN;
	int16_t x379 = 0;
	volatile uint64_t t86 = 368LLU;

	t86 = ((x377/x378)*(x379<x380));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 13763229LLU;
	static volatile int16_t x382 = -1;
	int8_t x383 = 29;
	volatile int8_t x384 = -7;

	t87 = ((x381/x382)*(x383<x384));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x385 = UINT16_MAX;
	static int64_t x387 = INT64_MAX;
	int64_t x388 = -1LL;

	t88 = ((x385/x386)*(x387<x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x391 = 58U;
	int16_t x392 = -1;
	volatile int32_t t89 = 55206;

	t89 = ((x389/x390)*(x391<x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x393 = INT16_MAX;
	int16_t x395 = -1;
	int32_t x396 = INT32_MAX;
	static int32_t t90 = 115;

	t90 = ((x393/x394)*(x395<x396));

	if (t90 != -255) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x397 = INT8_MAX;
	static int32_t x398 = 42;
	static uint64_t x400 = UINT64_MAX;
	int32_t t91 = 44;

	t91 = ((x397/x398)*(x399<x400));

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x401 = 1055303LL;
	uint64_t x402 = 691513120934801246LLU;
	int32_t x404 = -1;

	t92 = ((x401/x402)*(x403<x404));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint16_t x405 = 1593U;
	volatile uint32_t x406 = 1150U;
	int32_t x408 = -31798;

	t93 = ((x405/x406)*(x407<x408));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x413 = -1LL;
	volatile int16_t x415 = INT16_MIN;
	volatile uint8_t x416 = 39U;
	int64_t t94 = 0LL;

	t94 = ((x413/x414)*(x415<x416));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = 103449317LL;
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = -25128;
	uint8_t x420 = UINT8_MAX;
	volatile int64_t t95 = 332385727714LL;

	t95 = ((x417/x418)*(x419<x420));

	if (t95 != 405683LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x421 = 2350130;
	int32_t x423 = -1;
	static uint16_t x424 = 285U;
	int32_t t96 = -376223;

	t96 = ((x421/x422)*(x423<x424));

	if (t96 != -71) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x426 = INT64_MIN;
	int64_t x427 = -1LL;
	static volatile uint64_t x428 = 261442349LLU;
	uint64_t t97 = 8LLU;

	t97 = ((x425/x426)*(x427<x428));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = 74638378599LLU;
	int16_t x430 = 29;
	int16_t x431 = 1;
	static int64_t x432 = INT64_MIN;
	static uint64_t t98 = 4051131LLU;

	t98 = ((x429/x430)*(x431<x432));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x433 = INT64_MAX;
	static uint8_t x434 = UINT8_MAX;
	static uint8_t x435 = 4U;
	int64_t x436 = INT64_MAX;
	int64_t t99 = -1161177LL;

	t99 = ((x433/x434)*(x435<x436));

	if (t99 != 36170086419038336LL) { NG(); } else { ; }
	
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

