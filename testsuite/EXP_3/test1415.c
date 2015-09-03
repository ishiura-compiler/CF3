#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = -34;
static volatile uint64_t x4 = UINT64_MAX;
static int32_t t0 = 14027403;
int8_t x8 = -1;
static uint64_t t1 = 281530902036LLU;
static int8_t x9 = INT8_MIN;
static int64_t x14 = INT64_MIN;
int8_t x16 = INT8_MAX;
static int64_t t4 = -107LL;
volatile int8_t x21 = INT8_MAX;
uint8_t x24 = 1U;
int32_t x31 = INT32_MIN;
int32_t t7 = -6122;
int64_t x34 = 126LL;
int32_t t9 = -67011601;
int64_t x52 = -1LL;
volatile int64_t x54 = -890249699391012LL;
int32_t x60 = 107;
volatile int32_t t14 = 872309420;
static int8_t x62 = INT8_MAX;
int32_t t15 = -25063998;
uint8_t x67 = 23U;
uint8_t x76 = UINT8_MAX;
uint16_t x78 = 8750U;
int16_t x80 = INT16_MIN;
int64_t x86 = -15310502LL;
uint8_t x91 = 3U;
volatile uint64_t t22 = 145097397776296060LLU;
int16_t x93 = 148;
int64_t x95 = INT64_MIN;
int8_t x96 = -1;
volatile uint32_t x102 = 135362U;
static int8_t x103 = INT8_MIN;
uint32_t x110 = UINT32_MAX;
static int8_t x111 = 1;
volatile int32_t x112 = 59868059;
static volatile int32_t t28 = 7;
static uint64_t x124 = 76589103030874LLU;
volatile int8_t x125 = INT8_MAX;
int8_t x129 = -1;
int16_t x131 = -1;
static int8_t x133 = -1;
int8_t x136 = 1;
int32_t x140 = INT32_MIN;
int32_t x144 = INT32_MIN;
int8_t x147 = -1;
static uint16_t x148 = 0U;
uint16_t x149 = 6319U;
static volatile uint16_t x153 = UINT16_MAX;
static int8_t x156 = INT8_MIN;
volatile uint16_t x158 = 108U;
int32_t x163 = -1;
static uint8_t x164 = 3U;
int16_t x169 = INT16_MAX;
int8_t x171 = -31;
volatile int32_t t41 = 2;
volatile int32_t t43 = -24370;
uint8_t x188 = UINT8_MAX;
static volatile int8_t x198 = INT8_MAX;
static volatile int16_t x203 = 229;
volatile int32_t x207 = INT32_MIN;
uint16_t x209 = 22533U;
int16_t x215 = INT16_MAX;
static int64_t x220 = INT64_MAX;
int64_t x223 = 2065867722LL;
static int32_t x224 = -5474;
volatile int32_t t56 = -3;
uint16_t x237 = 14U;
int16_t x240 = INT16_MIN;
volatile int32_t x245 = 100;
volatile int32_t x253 = INT32_MIN;
uint64_t x266 = UINT64_MAX;
uint32_t x270 = UINT32_MAX;
static int64_t x275 = INT64_MIN;
int64_t x289 = -137699913045LL;
static uint64_t x291 = 490145128271LLU;
uint64_t x292 = 264895086271LLU;
uint32_t t71 = 11322350U;
uint16_t x311 = 1U;
int8_t x314 = -1;
uint16_t x316 = 2U;
uint16_t x317 = 82U;
volatile int32_t t75 = 6;
int32_t x321 = -1;
int32_t t76 = -1099;
volatile int8_t x328 = INT8_MIN;
int32_t x346 = 883;
static int32_t x352 = 0;
volatile uint32_t t83 = 7793U;
int32_t x353 = INT32_MAX;
int8_t x361 = 0;
uint64_t x364 = UINT64_MAX;
uint8_t x376 = 59U;
uint16_t x379 = UINT16_MAX;
static int16_t x380 = INT16_MIN;
volatile int32_t x382 = -6;
int32_t t92 = -163;
volatile int64_t t93 = -3622LL;
int64_t x393 = INT64_MIN;
uint8_t x394 = 17U;
uint64_t x399 = UINT64_MAX;
int8_t x400 = INT8_MIN;
int8_t x405 = INT8_MIN;
uint8_t x409 = 9U;
uint32_t x410 = 1252036700U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x3 = INT8_MIN;

	t0 = ((x1%x2)&(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static uint64_t x6 = UINT64_MAX;
	static int32_t x7 = 635434457;

	t1 = ((x5%x6)&(x7<x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int64_t x11 = INT64_MAX;
	int64_t x12 = -1LL;
	volatile int32_t t2 = -366114983;

	t2 = ((x9%x10)&(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile uint64_t x15 = UINT64_MAX;
	int64_t t3 = -2168469LL;

	t3 = ((x13%x14)&(x15<x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 65521505866162172LL;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MAX;
	static int8_t x20 = INT8_MAX;

	t4 = ((x17%x18)&(x19<x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	int32_t x23 = -1;
	static int32_t t5 = -90659191;

	t5 = ((x21%x22)&(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 836052LLU;
	uint64_t x26 = UINT64_MAX;
	static int32_t x27 = -25233;
	uint8_t x28 = UINT8_MAX;
	volatile uint64_t t6 = 257244314724965426LLU;

	t6 = ((x25%x26)&(x27<x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	uint16_t x30 = UINT16_MAX;
	int32_t x32 = -3;

	t7 = ((x29%x30)&(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MAX;
	int16_t x35 = INT16_MIN;
	uint8_t x36 = 0U;
	volatile int64_t t8 = 505972906LL;

	t8 = ((x33%x34)&(x35<x36));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	static int64_t x39 = INT64_MIN;
	uint64_t x40 = UINT64_MAX;

	t9 = ((x37%x38)&(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	int64_t x43 = 77276887240LL;
	uint16_t x44 = 272U;
	static volatile int64_t t10 = -26244918LL;

	t10 = ((x41%x42)&(x43<x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	static uint64_t x46 = UINT64_MAX;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = 31546260;
	uint64_t t11 = 5540577384894440008LLU;

	t11 = ((x45%x46)&(x47<x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 712U;
	uint32_t x50 = 333814U;
	volatile int16_t x51 = INT16_MIN;
	volatile uint32_t t12 = 7550U;

	t12 = ((x49%x50)&(x51<x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MAX;
	static volatile int64_t t13 = -216981562872565LL;

	t13 = ((x53%x54)&(x55<x56));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = -1;
	int32_t x59 = INT32_MIN;

	t14 = ((x57%x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	uint8_t x63 = 1U;
	int16_t x64 = -1;

	t15 = ((x61%x62)&(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 4547847U;
	volatile uint16_t x66 = 22U;
	uint8_t x68 = 2U;
	uint32_t t16 = 635022U;

	t16 = ((x65%x66)&(x67<x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int8_t x70 = INT8_MIN;
	static int64_t x71 = -1LL;
	volatile int16_t x72 = INT16_MAX;
	int64_t t17 = 35735LL;

	t17 = ((x69%x70)&(x71<x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	int32_t t18 = 671662;

	t18 = ((x73%x74)&(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	static int8_t x79 = 53;
	volatile int32_t t19 = -46;

	t19 = ((x77%x78)&(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -2718;
	volatile int64_t x82 = -163769833055169LL;
	static int16_t x83 = -1;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = -569505779201521124LL;

	t20 = ((x81%x82)&(x83<x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	static uint32_t x88 = UINT32_MAX;
	int64_t t21 = -473158673857LL;

	t21 = ((x85%x86)&(x87<x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 185008LLU;
	int8_t x90 = INT8_MAX;
	uint16_t x92 = UINT16_MAX;

	t22 = ((x89%x90)&(x91<x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -15;
	int32_t t23 = 228327;

	t23 = ((x93%x94)&(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	static int16_t x104 = INT16_MIN;
	static int64_t t24 = -70754682077130328LL;

	t24 = ((x101%x102)&(x103<x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -22;
	volatile int16_t x106 = INT16_MIN;
	static int32_t x107 = INT32_MAX;
	int32_t x108 = INT32_MIN;
	int32_t t25 = -126844920;

	t25 = ((x105%x106)&(x107<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 61LLU;
	uint64_t t26 = 1321972598LLU;

	t26 = ((x109%x110)&(x111<x112));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	volatile int64_t x114 = INT64_MAX;
	uint8_t x115 = 0U;
	int16_t x116 = INT16_MIN;
	int64_t t27 = 196389075137LL;

	t27 = ((x113%x114)&(x115<x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = -1;
	int8_t x118 = -11;
	volatile int16_t x119 = INT16_MIN;
	int32_t x120 = 86558514;

	t28 = ((x117%x118)&(x119<x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	int64_t x123 = -1LL;
	static int32_t t29 = 7;

	t29 = ((x121%x122)&(x123<x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x126 = -1;
	int16_t x127 = INT16_MAX;
	volatile uint16_t x128 = 945U;
	int32_t t30 = -97605698;

	t30 = ((x125%x126)&(x127<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x130 = INT32_MIN;
	uint16_t x132 = 13U;
	int32_t t31 = 110;

	t31 = ((x129%x130)&(x131<x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = INT64_MIN;
	int16_t x135 = 0;
	volatile int64_t t32 = -90061556115847LL;

	t32 = ((x133%x134)&(x135<x136));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 243U;
	uint16_t x138 = UINT16_MAX;
	static int16_t x139 = -1;
	int32_t t33 = 28;

	t33 = ((x137%x138)&(x139<x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = INT8_MIN;
	volatile int16_t x143 = -25;
	int64_t t34 = -738886112470868676LL;

	t34 = ((x141%x142)&(x143<x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 12U;
	int64_t x146 = -1LL;
	static int64_t t35 = -1LL;

	t35 = ((x145%x146)&(x147<x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x150 = 3469381172882529LLU;
	volatile int32_t x151 = 3577024;
	int8_t x152 = -1;
	volatile uint64_t t36 = 1356954319LLU;

	t36 = ((x149%x150)&(x151<x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x154 = -56;
	int32_t x155 = INT32_MIN;
	static volatile int32_t t37 = -3966942;

	t37 = ((x153%x154)&(x155<x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 43212514U;
	static int16_t x159 = INT16_MIN;
	volatile uint64_t x160 = 29LLU;
	volatile uint32_t t38 = 152345894U;

	t38 = ((x157%x158)&(x159<x160));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MAX;
	uint16_t x162 = UINT16_MAX;
	static volatile int32_t t39 = 10;

	t39 = ((x161%x162)&(x163<x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = -1;
	int32_t x167 = INT32_MIN;
	volatile uint16_t x168 = 12070U;
	static int32_t t40 = 332;

	t40 = ((x165%x166)&(x167<x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = INT32_MIN;
	uint64_t x172 = 58LLU;

	t41 = ((x169%x170)&(x171<x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MAX;
	volatile int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MIN;
	int8_t x176 = INT8_MIN;
	volatile int64_t t42 = -95233907660LL;

	t42 = ((x173%x174)&(x175<x176));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MAX;
	int16_t x178 = -1;
	volatile uint32_t x179 = 111883U;
	static int64_t x180 = INT64_MIN;

	t43 = ((x177%x178)&(x179<x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MIN;
	volatile int16_t x182 = INT16_MIN;
	int8_t x183 = -1;
	int16_t x184 = 1;
	volatile int32_t t44 = -71;

	t44 = ((x181%x182)&(x183<x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 3749753LLU;
	uint64_t x186 = UINT64_MAX;
	int32_t x187 = 452237;
	volatile uint64_t t45 = 76050016LLU;

	t45 = ((x185%x186)&(x187<x188));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x193 = 0U;
	int8_t x194 = -1;
	int32_t x195 = INT32_MIN;
	static volatile uint16_t x196 = 12U;
	volatile int32_t t46 = -833184;

	t46 = ((x193%x194)&(x195<x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x197 = 694U;
	static uint16_t x199 = UINT16_MAX;
	int8_t x200 = INT8_MAX;
	static uint32_t t47 = 3691U;

	t47 = ((x197%x198)&(x199<x200));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = -7;
	volatile uint64_t x202 = 3996378455001626812LLU;
	uint8_t x204 = 22U;
	uint64_t t48 = 1763071971LLU;

	t48 = ((x201%x202)&(x203<x204));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x205 = INT16_MIN;
	uint16_t x206 = 5996U;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t49 = 217656;

	t49 = ((x205%x206)&(x207<x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x210 = 17;
	int64_t x211 = -897LL;
	uint16_t x212 = 7U;
	int32_t t50 = -41238;

	t50 = ((x209%x210)&(x211<x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x213 = 14527032LL;
	int64_t x214 = 318320LL;
	uint16_t x216 = 33U;
	volatile int64_t t51 = 37LL;

	t51 = ((x213%x214)&(x215<x216));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	static volatile int64_t x218 = 112LL;
	uint64_t x219 = 94142430314LLU;
	int64_t t52 = 247355LL;

	t52 = ((x217%x218)&(x219<x220));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = UINT16_MAX;
	static volatile uint32_t x222 = UINT32_MAX;
	volatile uint32_t t53 = 325611750U;

	t53 = ((x221%x222)&(x223<x224));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x225 = 6U;
	volatile int64_t x226 = INT64_MIN;
	volatile uint16_t x227 = 4987U;
	int8_t x228 = -1;
	volatile int64_t t54 = -2268094912771404LL;

	t54 = ((x225%x226)&(x227<x228));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MIN;
	int32_t x230 = -56585729;
	int64_t x231 = -1787057389LL;
	uint64_t x232 = UINT64_MAX;
	volatile int64_t t55 = 4633297036224467LL;

	t55 = ((x229%x230)&(x231<x232));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 10U;
	int16_t x234 = 3;
	volatile int64_t x235 = INT64_MIN;
	static int8_t x236 = -1;

	t56 = ((x233%x234)&(x235<x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = INT16_MAX;
	int64_t x239 = -41382837894LL;
	int32_t t57 = -2;

	t57 = ((x237%x238)&(x239<x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x241 = 27U;
	int64_t x242 = INT64_MIN;
	int8_t x243 = -1;
	volatile int16_t x244 = INT16_MAX;
	int64_t t58 = -14696551616LL;

	t58 = ((x241%x242)&(x243<x244));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x246 = INT64_MAX;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	volatile int64_t t59 = 756199023087647782LL;

	t59 = ((x245%x246)&(x247<x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	volatile uint8_t x250 = UINT8_MAX;
	static int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;
	volatile int32_t t60 = 1;

	t60 = ((x249%x250)&(x251<x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = -1;
	int16_t x255 = -1653;
	volatile uint32_t x256 = 857U;
	int32_t t61 = 607;

	t61 = ((x253%x254)&(x255<x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	uint64_t x258 = 278364254745960LLU;
	int8_t x259 = -1;
	static uint16_t x260 = 3U;
	volatile uint64_t t62 = 90065249101LLU;

	t62 = ((x257%x258)&(x259<x260));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = -8;
	int8_t x262 = -1;
	uint8_t x263 = 28U;
	volatile uint32_t x264 = 407679U;
	volatile int32_t t63 = -116044408;

	t63 = ((x261%x262)&(x263<x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x265 = 56772LLU;
	static int16_t x267 = -254;
	volatile uint16_t x268 = 11U;
	static volatile uint64_t t64 = 1LLU;

	t64 = ((x265%x266)&(x267<x268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x269 = 365U;
	static volatile int16_t x271 = -1;
	uint32_t x272 = UINT32_MAX;
	uint32_t t65 = 1260512U;

	t65 = ((x269%x270)&(x271<x272));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	volatile int32_t x274 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	static int64_t t66 = 20132704LL;

	t66 = ((x273%x274)&(x275<x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x277 = 1;
	int16_t x278 = 3100;
	uint32_t x279 = 0U;
	int8_t x280 = INT8_MIN;
	volatile int32_t t67 = -2;

	t67 = ((x277%x278)&(x279<x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 7U;
	int16_t x282 = INT16_MIN;
	int16_t x283 = 1;
	static int8_t x284 = INT8_MAX;
	int32_t t68 = -185284;

	t68 = ((x281%x282)&(x283<x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x290 = UINT8_MAX;
	volatile int64_t t69 = 360689009789LL;

	t69 = ((x289%x290)&(x291<x292));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = 654U;
	uint16_t x294 = 7U;
	int8_t x295 = 19;
	int64_t x296 = 635330LL;
	volatile uint32_t t70 = 6040095U;

	t70 = ((x293%x294)&(x295<x296));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MAX;
	volatile uint32_t x298 = 11044U;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 533643737915220LLU;

	t71 = ((x297%x298)&(x299<x300));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x301 = -1274238170LL;
	int16_t x302 = INT16_MIN;
	uint16_t x303 = 5448U;
	uint32_t x304 = UINT32_MAX;
	int64_t t72 = 42375187840283LL;

	t72 = ((x301%x302)&(x303<x304));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = 13;
	uint32_t x310 = 319783932U;
	uint16_t x312 = UINT16_MAX;
	uint32_t t73 = 4003725U;

	t73 = ((x309%x310)&(x311<x312));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = 10114LL;
	int8_t x315 = INT8_MIN;
	int64_t t74 = -3473966652445061LL;

	t74 = ((x313%x314)&(x315<x316));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x318 = UINT16_MAX;
	uint16_t x319 = UINT16_MAX;
	static int32_t x320 = INT32_MIN;

	t75 = ((x317%x318)&(x319<x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	int64_t x324 = 609626438317LL;

	t76 = ((x321%x322)&(x323<x324));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x325 = INT8_MIN;
	int16_t x326 = -2;
	int16_t x327 = 2;
	int32_t t77 = 62;

	t77 = ((x325%x326)&(x327<x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 10U;
	int32_t x330 = 229299814;
	static int16_t x331 = INT16_MAX;
	int16_t x332 = INT16_MIN;
	static int32_t t78 = -264;

	t78 = ((x329%x330)&(x331<x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -1LL;
	uint8_t x334 = 117U;
	static int32_t x335 = INT32_MAX;
	int16_t x336 = 0;
	int64_t t79 = -57112611LL;

	t79 = ((x333%x334)&(x335<x336));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x337 = 1371U;
	uint16_t x338 = UINT16_MAX;
	static volatile int8_t x339 = -20;
	int8_t x340 = -3;
	uint32_t t80 = 100U;

	t80 = ((x337%x338)&(x339<x340));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = 646254284252344LL;
	int64_t x342 = INT64_MIN;
	static uint8_t x343 = 22U;
	int64_t x344 = -1LL;
	int64_t t81 = 950123302LL;

	t81 = ((x341%x342)&(x343<x344));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	int64_t x347 = 4586LL;
	static int32_t x348 = -1;
	int32_t t82 = 809082;

	t82 = ((x345%x346)&(x347<x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 1U;
	int8_t x350 = INT8_MAX;
	int16_t x351 = 1;

	t83 = ((x349%x350)&(x351<x352));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x354 = 52;
	int32_t x355 = -1;
	uint8_t x356 = 32U;
	int32_t t84 = -3;

	t84 = ((x353%x354)&(x355<x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x357 = INT16_MIN;
	volatile uint8_t x358 = UINT8_MAX;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t85 = 29304;

	t85 = ((x357%x358)&(x359<x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x362 = 5334878598572LLU;
	int64_t x363 = INT64_MIN;
	uint64_t t86 = 3680321168668747178LLU;

	t86 = ((x361%x362)&(x363<x364));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x365 = INT8_MIN;
	static int16_t x366 = -1;
	static int64_t x367 = -164LL;
	uint8_t x368 = 0U;
	int32_t t87 = 79;

	t87 = ((x365%x366)&(x367<x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x369 = 0;
	uint32_t x370 = 601622U;
	uint16_t x371 = 4U;
	static uint16_t x372 = 3U;
	volatile uint32_t t88 = 167U;

	t88 = ((x369%x370)&(x371<x372));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = 1;
	volatile int8_t x374 = INT8_MAX;
	int32_t x375 = 151557460;
	int32_t t89 = 48742;

	t89 = ((x373%x374)&(x375<x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = UINT8_MAX;
	int16_t x378 = -1;
	int32_t t90 = 22;

	t90 = ((x377%x378)&(x379<x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int64_t x383 = -289982727488167LL;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t91 = 1;

	t91 = ((x381%x382)&(x383<x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x385 = INT16_MAX;
	uint16_t x386 = 62U;
	int8_t x387 = INT8_MIN;
	int8_t x388 = -18;

	t92 = ((x385%x386)&(x387<x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int64_t x390 = INT64_MIN;
	uint16_t x391 = UINT16_MAX;
	static int8_t x392 = INT8_MIN;

	t93 = ((x389%x390)&(x391<x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x395 = -4459;
	uint64_t x396 = UINT64_MAX;
	static int64_t t94 = -9LL;

	t94 = ((x393%x394)&(x395<x396));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = 13586;
	static int64_t x398 = INT64_MIN;
	volatile int64_t t95 = -5488903504789LL;

	t95 = ((x397%x398)&(x399<x400));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x401 = UINT16_MAX;
	static uint32_t x402 = UINT32_MAX;
	int32_t x403 = INT32_MAX;
	static int64_t x404 = INT64_MIN;
	uint32_t t96 = 1U;

	t96 = ((x401%x402)&(x403<x404));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x406 = 1743256U;
	int32_t x407 = INT32_MIN;
	static int16_t x408 = -810;
	static volatile uint32_t t97 = 26873589U;

	t97 = ((x405%x406)&(x407<x408));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x411 = INT8_MIN;
	volatile uint32_t x412 = 30U;
	static volatile uint32_t t98 = 291856058U;

	t98 = ((x409%x410)&(x411<x412));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = INT64_MAX;
	int64_t x414 = INT64_MIN;
	uint8_t x415 = UINT8_MAX;
	volatile int8_t x416 = 1;
	static int64_t t99 = 10224685LL;

	t99 = ((x413%x414)&(x415<x416));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

