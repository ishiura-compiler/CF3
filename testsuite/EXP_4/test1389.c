#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MAX;
volatile int32_t x12 = -116536;
volatile int64_t t2 = INT64_MIN;
uint16_t x16 = 27U;
int8_t x18 = INT8_MIN;
int64_t x25 = -14352520129LL;
int8_t x27 = 0;
uint16_t x29 = 12U;
int8_t x30 = INT8_MIN;
volatile int32_t t7 = 13187;
volatile int64_t x46 = INT64_MIN;
static int32_t x52 = -1;
int32_t t12 = 3818;
int16_t x54 = -93;
int8_t x57 = 0;
int32_t x71 = INT32_MAX;
volatile int32_t t17 = 255121184;
int8_t x84 = -1;
volatile int32_t t20 = -8;
int64_t x86 = -23LL;
volatile int32_t t22 = 10;
static uint64_t x95 = 0LLU;
int64_t t23 = 104823761837433LL;
uint8_t x98 = 1U;
static volatile int8_t x101 = -26;
uint32_t t25 = 4234414U;
uint8_t x105 = 22U;
int8_t x106 = INT8_MAX;
volatile int32_t t28 = -10;
static int64_t x119 = -190742780LL;
static volatile int32_t t30 = 54;
int16_t x130 = -22;
volatile int16_t x137 = -1;
int8_t x140 = 1;
int64_t t34 = -106332525LL;
uint32_t x141 = UINT32_MAX;
volatile int32_t t36 = 701650;
uint32_t t37 = 122763U;
static uint8_t x153 = 0U;
static int16_t x157 = INT16_MAX;
int32_t x161 = -12512;
static int32_t x162 = INT32_MAX;
int16_t x165 = INT16_MAX;
static volatile int64_t x170 = INT64_MIN;
int8_t x171 = 1;
volatile int64_t x172 = -1LL;
int32_t t43 = 1523417;
static int64_t t45 = 232226LL;
static int32_t x188 = 3244;
int8_t x189 = INT8_MIN;
int16_t x190 = 0;
uint8_t x192 = 20U;
static int32_t t47 = 765;
uint32_t x196 = 541044U;
static int64_t x203 = 1291991428802483133LL;
volatile uint32_t t50 = 1103U;
int16_t x213 = 3480;
volatile int32_t x219 = INT32_MIN;
volatile uint64_t x223 = UINT64_MAX;
volatile int64_t t55 = 417102864647599610LL;
int32_t x227 = INT32_MAX;
int32_t x228 = 1440839;
int16_t x230 = INT16_MIN;
int64_t t59 = -3880620772LL;
static volatile int32_t t60 = -6104706;
int8_t x251 = INT8_MAX;
volatile int8_t x264 = -3;
uint64_t x265 = 2LLU;
int64_t x266 = -34435LL;
int32_t x268 = INT32_MAX;
volatile uint32_t x269 = 1977292704U;
uint16_t x272 = UINT16_MAX;
int64_t t68 = -14905699273038381LL;
int8_t x282 = INT8_MIN;
static int32_t x285 = INT32_MIN;
volatile int32_t x300 = 15;
volatile int32_t t75 = 73723148;
uint32_t x308 = 17958U;
static int32_t x311 = INT32_MIN;
static int8_t x313 = -1;
int64_t x320 = 52LL;
uint32_t x323 = UINT32_MAX;
int64_t x328 = INT64_MIN;
uint8_t x331 = 1U;
uint32_t x343 = 11U;
volatile int32_t t85 = -435241970;
int64_t x351 = INT64_MAX;
int64_t x357 = -10517863339LL;
int8_t x361 = 1;
int32_t x366 = INT32_MAX;
int32_t x370 = -271;
static int32_t x371 = INT32_MIN;
int64_t x372 = -1630638LL;
int8_t x384 = INT8_MIN;
volatile uint64_t x386 = 57LLU;
int64_t x393 = INT64_MAX;
static int16_t x394 = -1;
int16_t x395 = -14937;
volatile uint64_t x397 = 29121074232520LLU;


void f0(void) {
	uint64_t x1 = 3028691873105422LLU;
	static int8_t x2 = INT8_MAX;
	int32_t x3 = INT32_MIN;
	static int64_t x4 = INT64_MIN;
	uint64_t t0 = 5795996LLU;

	t0 = (x1&(x2*(x3<x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	int16_t x6 = -1;
	static int16_t x7 = INT16_MIN;
	int32_t t1 = 117394;

	t1 = (x5&(x6*(x7<x8)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MIN;
	volatile int64_t x11 = INT64_MIN;

	t2 = (x9&(x10*(x11<x12)));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = 1394983064787643LL;
	int64_t x14 = INT64_MAX;
	uint16_t x15 = 17109U;
	volatile int64_t t3 = -47122216169247LL;

	t3 = (x13&(x14*(x15<x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 31995073U;
	int16_t x19 = -1;
	int32_t x20 = 1;
	volatile uint32_t t4 = 11461788U;

	t4 = (x17&(x18*(x19<x20)));

	if (t4 != 31995008U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint16_t x22 = UINT16_MAX;
	uint8_t x23 = 37U;
	int8_t x24 = -1;
	volatile int32_t t5 = -89898874;

	t5 = (x21&(x22*(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 2U;
	int8_t x28 = -3;
	volatile int64_t t6 = -952504218108149992LL;

	t6 = (x25&(x26*(x27<x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x31 = 1U;
	uint32_t x32 = 81617U;

	t7 = (x29&(x30*(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 3957906U;
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MAX;
	volatile uint8_t x36 = 106U;
	static uint32_t t8 = 4U;

	t8 = (x33&(x34*(x35<x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 6350543;

	t9 = (x37&(x38*(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -214;
	int16_t x42 = INT16_MIN;
	static uint64_t x43 = 559855925743LLU;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -2831;

	t10 = (x41&(x42*(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	static volatile int64_t x47 = INT64_MAX;
	int16_t x48 = INT16_MIN;
	int64_t t11 = -252372753952437LL;

	t11 = (x45&(x46*(x47<x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int16_t x50 = INT16_MAX;
	static uint32_t x51 = UINT32_MAX;

	t12 = (x49&(x50*(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x53 = UINT16_MAX;
	uint16_t x55 = UINT16_MAX;
	static volatile uint8_t x56 = 1U;
	int32_t t13 = 6040190;

	t13 = (x53&(x54*(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	int64_t t14 = -720670191857LL;

	t14 = (x57&(x58*(x59<x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 89;
	volatile uint32_t x64 = UINT32_MAX;
	volatile int32_t t15 = -6593;

	t15 = (x61&(x62*(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	static int16_t x67 = INT16_MAX;
	uint32_t x68 = 1U;
	static int32_t t16 = -476;

	t16 = (x65&(x66*(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int16_t x70 = INT16_MAX;
	int32_t x72 = INT32_MIN;

	t17 = (x69&(x70*(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = UINT32_MAX;
	static int16_t x74 = INT16_MIN;
	volatile int32_t x75 = -1;
	uint32_t x76 = 21266U;
	uint32_t t18 = 43U;

	t18 = (x73&(x74*(x75<x76)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	int64_t x78 = 145872052053LL;
	volatile int32_t x79 = -997141056;
	static int8_t x80 = 1;
	int64_t t19 = 87LL;

	t19 = (x77&(x78*(x79<x80)));

	if (t19 != 1990647637LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = 1;
	uint16_t x83 = 0U;

	t20 = (x81&(x82*(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 4185U;
	uint64_t x87 = 7827LLU;
	volatile int8_t x88 = -1;
	int64_t t21 = 917363966LL;

	t21 = (x85&(x86*(x87<x88)));

	if (t21 != 4169LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = -1;
	int32_t x90 = 4030;
	uint16_t x91 = 3500U;
	uint64_t x92 = UINT64_MAX;

	t22 = (x89&(x90*(x91<x92)));

	if (t22 != 4030) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	static int64_t x94 = INT64_MAX;
	uint32_t x96 = UINT32_MAX;

	t23 = (x93&(x94*(x95<x96)));

	if (t23 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 1114419683359783032LLU;
	uint32_t x99 = 6722455U;
	uint8_t x100 = 1U;
	volatile uint64_t t24 = 92736925209324LLU;

	t24 = (x97&(x98*(x99<x100)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x102 = UINT32_MAX;
	int64_t x103 = -1LL;
	int32_t x104 = INT32_MAX;

	t25 = (x101&(x102*(x103<x104)));

	if (t25 != 4294967270U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x107 = 101344575362706LLU;
	int32_t x108 = INT32_MAX;
	int32_t t26 = 34795;

	t26 = (x105&(x106*(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 2239;
	static volatile int16_t x110 = INT16_MIN;
	static int16_t x111 = -1;
	int32_t x112 = 1469637;
	int32_t t27 = -11616694;

	t27 = (x109&(x110*(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -11;
	volatile uint16_t x114 = UINT16_MAX;
	static int32_t x115 = -6;
	static uint16_t x116 = UINT16_MAX;

	t28 = (x113&(x114*(x115<x116)));

	if (t28 != 65525) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	uint32_t x118 = UINT32_MAX;
	int64_t x120 = 16LL;
	uint32_t t29 = 74883U;

	t29 = (x117&(x118*(x119<x120)));

	if (t29 != 4294967168U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int16_t x122 = 611;
	int16_t x123 = INT16_MIN;
	static int32_t x124 = -82490133;

	t30 = (x121&(x122*(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 480377475U;
	uint16_t x126 = UINT16_MAX;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MIN;
	uint32_t t31 = 7027162U;

	t31 = (x125&(x126*(x127<x128)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	static volatile int16_t x132 = -1;
	int64_t t32 = 54735536LL;

	t32 = (x129&(x130*(x131<x132)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = -1LL;
	volatile int8_t x135 = INT8_MIN;
	static int32_t x136 = INT32_MIN;
	volatile int64_t t33 = 144323615888324LL;

	t33 = (x133&(x134*(x135<x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1LL;
	int64_t x139 = -5LL;

	t34 = (x137&(x138*(x139<x140)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x142 = INT16_MIN;
	volatile int16_t x143 = INT16_MIN;
	uint64_t x144 = 2LLU;
	uint32_t t35 = 32U;

	t35 = (x141&(x142*(x143<x144)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = 0;
	static uint16_t x146 = UINT16_MAX;
	int16_t x147 = 26;
	int16_t x148 = INT16_MAX;

	t36 = (x145&(x146*(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = INT32_MIN;
	uint32_t x150 = UINT32_MAX;
	uint64_t x151 = 106LLU;
	uint8_t x152 = 110U;

	t37 = (x149&(x150*(x151<x152)));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x154 = -1;
	volatile int8_t x155 = 47;
	volatile int16_t x156 = INT16_MIN;
	int32_t t38 = 3;

	t38 = (x153&(x154*(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	uint8_t x159 = 6U;
	uint64_t x160 = 6203LLU;
	int32_t t39 = 21830199;

	t39 = (x157&(x158*(x159<x160)));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 65104;

	t40 = (x161&(x162*(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = INT64_MAX;
	uint8_t x168 = UINT8_MAX;
	int32_t t41 = 7017;

	t41 = (x165&(x166*(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = UINT8_MAX;
	volatile int64_t t42 = 13442LL;

	t42 = (x169&(x170*(x171<x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 3;
	int32_t x174 = -174134178;
	volatile int32_t x175 = -1;
	int32_t x176 = INT32_MAX;

	t43 = (x173&(x174*(x175<x176)));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 5424U;
	int16_t x178 = 1618;
	int16_t x179 = INT16_MAX;
	static int8_t x180 = 4;
	uint32_t t44 = 20020051U;

	t44 = (x177&(x178*(x179<x180)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = 5013382614LL;
	uint32_t x182 = UINT32_MAX;
	static uint16_t x183 = 346U;
	int32_t x184 = INT32_MIN;

	t45 = (x181&(x182*(x183<x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	uint64_t x186 = 9195978657LLU;
	int64_t x187 = -30948670LL;
	volatile uint64_t t46 = 2040888LLU;

	t46 = (x185&(x186*(x187<x188)));

	if (t46 != 8589934592LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x191 = 1814;

	t47 = (x189&(x190*(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 5610U;
	volatile int64_t x195 = INT64_MAX;
	uint32_t t48 = 1U;

	t48 = (x193&(x194*(x195<x196)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -51;
	volatile int64_t x198 = INT64_MIN;
	uint64_t x199 = 2152966106LLU;
	static int8_t x200 = -3;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x197&(x198*(x199<x200)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	int64_t x204 = INT64_MAX;

	t50 = (x201&(x202*(x203<x204)));

	if (t50 != 4294967168U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = INT16_MIN;
	volatile uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MAX;
	uint8_t x208 = 25U;
	volatile uint64_t t51 = 59864619178324606LLU;

	t51 = (x205&(x206*(x207<x208)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 1U;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = -4;
	uint8_t x212 = 82U;
	volatile int32_t t52 = 1;

	t52 = (x209&(x210*(x211<x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = 6;
	volatile int8_t x215 = 0;
	int64_t x216 = -8274463LL;
	volatile int32_t t53 = -101728;

	t53 = (x213&(x214*(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -680;
	static volatile uint64_t x218 = 0LLU;
	int16_t x220 = -3;
	volatile uint64_t t54 = 29092401897971LLU;

	t54 = (x217&(x218*(x219<x220)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = INT32_MIN;
	int64_t x224 = 331112582LL;

	t55 = (x221&(x222*(x223<x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	uint16_t x226 = 5U;
	int64_t t56 = 103263121261647LL;

	t56 = (x225&(x226*(x227<x228)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int64_t x231 = INT64_MIN;
	volatile uint32_t x232 = 78931U;
	int32_t t57 = INT32_MIN;

	t57 = (x229&(x230*(x231<x232)));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = 1;
	volatile uint8_t x235 = 60U;
	volatile uint64_t x236 = UINT64_MAX;
	int32_t t58 = -30524675;

	t58 = (x233&(x234*(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int16_t x238 = INT16_MIN;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = UINT32_MAX;

	t59 = (x237&(x238*(x239<x240)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -58;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	volatile int64_t x244 = -1LL;

	t60 = (x241&(x242*(x243<x244)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = 1814569LLU;
	int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MIN;
	int32_t x248 = -233411;
	static uint64_t t61 = 1960163691LLU;

	t61 = (x245&(x246*(x247<x248)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	int64_t x250 = -1LL;
	int8_t x252 = INT8_MAX;
	int64_t t62 = 1952336361175575LL;

	t62 = (x249&(x250*(x251<x252)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = 223;
	volatile uint8_t x254 = 11U;
	int16_t x255 = 0;
	static volatile int16_t x256 = -1;
	static volatile int32_t t63 = 1;

	t63 = (x253&(x254*(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	static uint32_t x258 = 2775027U;
	static volatile int16_t x259 = INT16_MAX;
	int16_t x260 = -1;
	volatile uint32_t t64 = 81U;

	t64 = (x257&(x258*(x259<x260)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x261 = 9U;
	int16_t x262 = -197;
	volatile int32_t x263 = -8;
	static int32_t t65 = 28966;

	t65 = (x261&(x262*(x263<x264)));

	if (t65 != 9) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x267 = 27;
	static uint64_t t66 = 1012013712146159750LLU;

	t66 = (x265&(x266*(x267<x268)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x270 = INT32_MIN;
	int8_t x271 = -1;
	uint32_t t67 = 3291295U;

	t67 = (x269&(x270*(x271<x272)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 7U;
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	volatile int16_t x276 = INT16_MAX;

	t68 = (x273&(x274*(x275<x276)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 1;
	static int32_t x278 = 1699;
	volatile uint16_t x279 = 3U;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -5980;

	t69 = (x277&(x278*(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = INT64_MIN;
	int16_t x283 = -1;
	volatile int16_t x284 = INT16_MIN;
	volatile int64_t t70 = -4536338LL;

	t70 = (x281&(x282*(x283<x284)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = 60412;
	volatile int16_t x287 = INT16_MAX;
	uint8_t x288 = 71U;
	static volatile int32_t t71 = -6;

	t71 = (x285&(x286*(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 20U;
	uint64_t x290 = UINT64_MAX;
	static int32_t x291 = 4;
	volatile int64_t x292 = INT64_MIN;
	volatile uint64_t t72 = 354830LLU;

	t72 = (x289&(x290*(x291<x292)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static int64_t x294 = INT64_MAX;
	int8_t x295 = -1;
	int16_t x296 = 4378;
	volatile int64_t t73 = -1205293731301LL;

	t73 = (x293&(x294*(x295<x296)));

	if (t73 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 9U;
	uint8_t x298 = 27U;
	int32_t x299 = INT32_MIN;
	volatile int32_t t74 = -7;

	t74 = (x297&(x298*(x299<x300)));

	if (t74 != 9) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = INT8_MIN;
	static int8_t x302 = INT8_MIN;
	static uint16_t x303 = UINT16_MAX;
	int16_t x304 = INT16_MIN;

	t75 = (x301&(x302*(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	static int32_t x306 = -1;
	volatile uint16_t x307 = 2042U;
	int32_t t76 = 6;

	t76 = (x305&(x306*(x307<x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	uint8_t x310 = 29U;
	uint64_t x312 = 416425445376337613LLU;
	volatile int32_t t77 = 72;

	t77 = (x309&(x310*(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = INT64_MIN;
	int64_t x315 = INT64_MAX;
	uint64_t x316 = 16172LLU;
	volatile int64_t t78 = -15140LL;

	t78 = (x313&(x314*(x315<x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 6U;
	volatile uint64_t x318 = 747LLU;
	uint64_t x319 = UINT64_MAX;
	uint64_t t79 = 21LLU;

	t79 = (x317&(x318*(x319<x320)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile int64_t x322 = 167676746LL;
	int8_t x324 = -1;
	int64_t t80 = 17100641LL;

	t80 = (x321&(x322*(x323<x324)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 4774;
	static int8_t x326 = 50;
	volatile int8_t x327 = -1;
	int32_t t81 = 28;

	t81 = (x325&(x326*(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int32_t x330 = -1;
	static uint32_t x332 = 561611U;
	volatile int32_t t82 = 0;

	t82 = (x329&(x330*(x331<x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	static int16_t x334 = -1;
	volatile uint16_t x335 = 729U;
	uint32_t x336 = 519899906U;
	int32_t t83 = 8184453;

	t83 = (x333&(x334*(x335<x336)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 1391U;
	int64_t x338 = -154605LL;
	uint16_t x339 = 28U;
	uint64_t x340 = UINT64_MAX;
	volatile int64_t t84 = -44188346341LL;

	t84 = (x337&(x338*(x339<x340)));

	if (t84 != 1027LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	uint16_t x342 = UINT16_MAX;
	volatile int64_t x344 = 3173844LL;

	t85 = (x341&(x342*(x343<x344)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 106U;
	volatile int32_t x346 = INT32_MIN;
	static uint16_t x347 = 233U;
	static int8_t x348 = INT8_MAX;
	static int32_t t86 = 471836;

	t86 = (x345&(x346*(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -1;
	int16_t x350 = INT16_MIN;
	static uint8_t x352 = 3U;
	int32_t t87 = -491;

	t87 = (x349&(x350*(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	uint64_t x354 = UINT64_MAX;
	static volatile int32_t x355 = 51;
	static uint16_t x356 = 84U;
	volatile uint64_t t88 = 11014LLU;

	t88 = (x353&(x354*(x355<x356)));

	if (t88 != 127LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x358 = INT64_MAX;
	int32_t x359 = INT32_MIN;
	static uint64_t x360 = 8777952627888034LLU;
	volatile int64_t t89 = -60941605493173LL;

	t89 = (x357&(x358*(x359<x360)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	static volatile uint32_t x364 = UINT32_MAX;
	int32_t t90 = 540032;

	t90 = (x361&(x362*(x363<x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MAX;
	uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t91 = -799;

	t91 = (x365&(x366*(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 702748773143430402LLU;
	uint64_t t92 = 506LLU;

	t92 = (x369&(x370*(x371<x372)));

	if (t92 != 702748773143430144LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	volatile uint64_t x376 = 54879598192789936LLU;
	volatile int32_t t93 = 1;

	t93 = (x373&(x374*(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = -21;
	static int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	static int16_t x380 = INT16_MIN;
	volatile int64_t t94 = 1576375054576925LL;

	t94 = (x377&(x378*(x379<x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -8782954;
	static volatile int32_t x382 = INT32_MIN;
	int8_t x383 = -24;
	int32_t t95 = -2;

	t95 = (x381&(x382*(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 1572870U;
	uint32_t x387 = UINT32_MAX;
	int64_t x388 = INT64_MIN;
	volatile uint64_t t96 = 10129898314312891LLU;

	t96 = (x385&(x386*(x387<x388)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = UINT32_MAX;
	volatile uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	static volatile uint64_t t97 = 10LLU;

	t97 = (x389&(x390*(x391<x392)));

	if (t97 != 4294967295LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x396 = -1;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x393&(x394*(x395<x396)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile uint64_t t99 = 287644901438923LLU;

	t99 = (x397&(x398*(x399<x400)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

