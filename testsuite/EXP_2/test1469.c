#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 37LLU;
static uint32_t x5 = 47U;
int32_t x17 = 3364;
int8_t x21 = -1;
int16_t x24 = INT16_MAX;
uint16_t x25 = 7959U;
int8_t x26 = INT8_MIN;
int64_t x40 = -72403653762672LL;
int64_t t9 = -257241481LL;
int8_t x41 = INT8_MIN;
int8_t x43 = INT8_MAX;
volatile int64_t t10 = -4017211431217343656LL;
uint32_t t11 = 5U;
static volatile uint32_t t12 = 103949U;
uint64_t x55 = 1LLU;
volatile int16_t x58 = 255;
int64_t x63 = -14491878LL;
volatile int64_t t16 = 22442379949350LL;
int64_t t18 = INT64_MIN;
int16_t x86 = INT16_MIN;
int64_t x88 = INT64_MAX;
int32_t x89 = INT32_MIN;
volatile int64_t x92 = 397622759LL;
static uint8_t x98 = 1U;
int64_t x106 = INT64_MIN;
int16_t x114 = -1;
int8_t x115 = INT8_MIN;
uint32_t x116 = 1515354U;
static uint32_t x121 = 1184566870U;
volatile int32_t x122 = -746363;
uint32_t t30 = 260809649U;
int8_t x125 = 3;
int8_t x127 = INT8_MIN;
static int64_t x129 = -9688857677162193LL;
volatile int32_t t33 = 174756496;
int64_t x138 = INT64_MIN;
volatile uint64_t t34 = 32502LLU;
volatile int8_t x141 = 14;
static int32_t t36 = 192910;
uint32_t x153 = 3918223U;
uint8_t x160 = 24U;
uint32_t x174 = 6977062U;
int16_t x179 = INT16_MAX;
int32_t x180 = INT32_MAX;
int64_t x181 = INT64_MIN;
int32_t x184 = -1;
uint16_t x189 = 17394U;
static volatile uint8_t x191 = UINT8_MAX;
int32_t x193 = -203;
int64_t x195 = INT64_MAX;
int32_t t48 = -21382696;
int32_t x199 = INT32_MAX;
uint16_t x200 = UINT16_MAX;
volatile uint32_t x201 = 67U;
int64_t x203 = INT64_MIN;
volatile uint32_t x208 = 55741U;
uint64_t x209 = UINT64_MAX;
static uint32_t x210 = 809742U;
int32_t t54 = 2626056;
static int32_t x230 = -717841163;
uint16_t x235 = 0U;
uint16_t x236 = 88U;
int32_t t58 = 1459826;
uint8_t x240 = 63U;
int64_t x245 = -12470LL;
volatile int32_t t61 = 529549291;
int64_t x249 = INT64_MAX;
volatile int16_t x250 = INT16_MIN;
int8_t x253 = INT8_MIN;
volatile int64_t x263 = -1LL;
static uint8_t x266 = UINT8_MAX;
static uint32_t x271 = 1343176U;
static uint8_t x275 = UINT8_MAX;
int64_t t70 = -3773LL;
int8_t x299 = -1;
uint8_t x300 = 1U;
uint32_t t75 = 43U;
uint16_t x305 = 13466U;
volatile int64_t x308 = -1LL;
int64_t t76 = 2871042372384740569LL;
volatile int32_t t77 = 209;
volatile uint8_t x324 = 127U;
volatile int32_t x329 = -1;
int32_t x333 = INT32_MAX;
int32_t t83 = 24;
int8_t x343 = INT8_MAX;
volatile int64_t t85 = INT64_MIN;
static int16_t x348 = INT16_MIN;
uint64_t t88 = 117417629695170624LLU;
static int8_t x364 = 1;
static volatile uint32_t x373 = UINT32_MAX;
volatile int16_t x383 = -98;
uint16_t x386 = 1U;
uint64_t x387 = 863LLU;
int16_t x394 = INT16_MIN;
int8_t x398 = -22;
int8_t x400 = 3;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	volatile int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = INT64_MIN;

	t0 = ((x1<(x2<x3))^x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x6 = 5U;
	int32_t x7 = 13321;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -470674398;

	t1 = ((x5<(x6<x7))^x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static volatile int8_t x10 = -1;
	uint32_t x11 = 128818052U;
	volatile int64_t x12 = -33575185362407067LL;
	int64_t t2 = 43688942LL;

	t2 = ((x9<(x10<x11))^x12);

	if (t2 != -33575185362407067LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	static int64_t x14 = INT64_MIN;
	int64_t x15 = 42LL;
	volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 47;

	t3 = ((x13<(x14<x15))^x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x18 = 1720U;
	int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = ((x17<(x18<x19))^x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	volatile int32_t t5 = 1;

	t5 = ((x21<(x22<x23))^x24);

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x27 = -1;
	int64_t x28 = -1LL;
	volatile int64_t t6 = -104LL;

	t6 = ((x25<(x26<x27))^x28);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	int16_t x30 = INT16_MIN;
	volatile int16_t x31 = -37;
	int64_t x32 = -1LL;
	int64_t t7 = -17588LL;

	t7 = ((x29<(x30<x31))^x32);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile int64_t x34 = INT64_MAX;
	int8_t x35 = -27;
	int16_t x36 = 1335;
	volatile int32_t t8 = -186858201;

	t8 = ((x33<(x34<x35))^x36);

	if (t8 != 1334) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = 1;
	int8_t x38 = 0;
	int8_t x39 = 0;

	t9 = ((x37<(x38<x39))^x40);

	if (t9 != -72403653762672LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x42 = 3U;
	volatile int64_t x44 = INT64_MAX;

	t10 = ((x41<(x42<x43))^x44);

	if (t10 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	static volatile int8_t x46 = -2;
	volatile int8_t x47 = -2;
	static uint32_t x48 = 11134789U;

	t11 = ((x45<(x46<x47))^x48);

	if (t11 != 11134789U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	int8_t x50 = INT8_MAX;
	static int64_t x51 = INT64_MAX;
	uint32_t x52 = 97U;

	t12 = ((x49<(x50<x51))^x52);

	if (t12 != 97U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MIN;
	uint64_t x56 = 22392LLU;
	uint64_t t13 = 871LLU;

	t13 = ((x53<(x54<x55))^x56);

	if (t13 != 22393LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 50LLU;
	volatile int32_t x59 = INT32_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t14 = INT32_MIN;

	t14 = ((x57<(x58<x59))^x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 4347781834091LL;
	uint16_t x62 = 27589U;
	static int16_t x64 = 1802;
	int32_t t15 = -3942676;

	t15 = ((x61<(x62<x63))^x64);

	if (t15 != 1802) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MAX;
	int64_t x68 = INT64_MIN;

	t16 = ((x65<(x66<x67))^x68);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 762553LLU;
	static int32_t x70 = INT32_MIN;
	int64_t x71 = -1LL;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -451;

	t17 = ((x69<(x70<x71))^x72);

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	static uint32_t x74 = 199638894U;
	static int64_t x75 = -1LL;
	int64_t x76 = INT64_MIN;

	t18 = ((x73<(x74<x75))^x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = UINT64_MAX;
	volatile uint8_t x78 = 40U;
	uint8_t x79 = 117U;
	int8_t x80 = 17;
	volatile int32_t t19 = -27;

	t19 = ((x77<(x78<x79))^x80);

	if (t19 != 17) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MIN;
	static volatile uint8_t x83 = UINT8_MAX;
	static int8_t x84 = -1;
	volatile int32_t t20 = 12454;

	t20 = ((x81<(x82<x83))^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = 10U;
	static volatile int8_t x87 = -1;
	int64_t t21 = INT64_MAX;

	t21 = ((x85<(x86<x87))^x88);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 0U;
	uint64_t x91 = 539696328687LLU;
	static volatile int64_t t22 = -4097589100447381105LL;

	t22 = ((x89<(x90<x91))^x92);

	if (t22 != 397622758LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int16_t x94 = INT16_MIN;
	static int32_t x95 = INT32_MIN;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = INT32_MAX;

	t23 = ((x93<(x94<x95))^x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int16_t x99 = -1;
	static volatile uint32_t x100 = 394146U;
	uint32_t t24 = 32U;

	t24 = ((x97<(x98<x99))^x100);

	if (t24 != 394147U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	uint16_t x103 = 17430U;
	int16_t x104 = -54;
	int32_t t25 = 318;

	t25 = ((x101<(x102<x103))^x104);

	if (t25 != -53) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x107 = -1;
	int8_t x108 = -1;
	volatile int32_t t26 = 326965;

	t26 = ((x105<(x106<x107))^x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 9;
	int64_t x110 = -1LL;
	int64_t x111 = -1LL;
	static int16_t x112 = -1;
	static volatile int32_t t27 = -297;

	t27 = ((x109<(x110<x111))^x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = 4618U;
	volatile uint32_t t28 = 181U;

	t28 = ((x113<(x114<x115))^x116);

	if (t28 != 1515354U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MIN;
	int8_t x118 = INT8_MIN;
	int16_t x119 = -1;
	int8_t x120 = 1;
	static int32_t t29 = -956;

	t29 = ((x117<(x118<x119))^x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 13U;

	t30 = ((x121<(x122<x123))^x124);

	if (t30 != 13U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x126 = 1U;
	static int64_t x128 = 536844756023180694LL;
	volatile int64_t t31 = -246557191446899000LL;

	t31 = ((x125<(x126<x127))^x128);

	if (t31 != 536844756023180694LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -1;
	int16_t x131 = -1;
	uint64_t x132 = 70LLU;
	volatile uint64_t t32 = 2479767308432LLU;

	t32 = ((x129<(x130<x131))^x132);

	if (t32 != 71LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int32_t x136 = 54;

	t33 = ((x133<(x134<x135))^x136);

	if (t33 != 55) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 6061546U;
	int8_t x139 = 10;
	static volatile uint64_t x140 = 8613634929754LLU;

	t34 = ((x137<(x138<x139))^x140);

	if (t34 != 8613634929754LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MIN;
	static uint64_t x143 = 6136095332404LLU;
	uint16_t x144 = 494U;
	volatile int32_t t35 = 105569645;

	t35 = ((x141<(x142<x143))^x144);

	if (t35 != 494) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x145 = UINT8_MAX;
	int32_t x146 = -1;
	int64_t x147 = 20486136977LL;
	volatile int16_t x148 = -1;

	t36 = ((x145<(x146<x147))^x148);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 5620U;
	int64_t x150 = -1LL;
	static volatile uint32_t x151 = 262699U;
	volatile int32_t x152 = -1;
	int32_t t37 = 28157085;

	t37 = ((x149<(x150<x151))^x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x154 = 112311LL;
	volatile uint16_t x155 = UINT16_MAX;
	uint8_t x156 = UINT8_MAX;
	int32_t t38 = 449;

	t38 = ((x153<(x154<x155))^x156);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 28;
	volatile int64_t x158 = INT64_MAX;
	int16_t x159 = INT16_MIN;
	static volatile int32_t t39 = -1;

	t39 = ((x157<(x158<x159))^x160);

	if (t39 != 24) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MAX;
	int8_t x162 = 0;
	volatile int16_t x163 = 3450;
	int32_t x164 = -1;
	volatile int32_t t40 = 104839294;

	t40 = ((x161<(x162<x163))^x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int64_t x166 = -32LL;
	int8_t x167 = -1;
	int32_t x168 = -118;
	int32_t t41 = 1079470;

	t41 = ((x165<(x166<x167))^x168);

	if (t41 != -118) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 10749391LL;
	int16_t x170 = INT16_MIN;
	uint16_t x171 = UINT16_MAX;
	int32_t x172 = -149382389;
	volatile int32_t t42 = -14593;

	t42 = ((x169<(x170<x171))^x172);

	if (t42 != -149382389) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 66885;
	uint16_t x175 = 11167U;
	int32_t x176 = INT32_MIN;
	int32_t t43 = INT32_MIN;

	t43 = ((x173<(x174<x175))^x176);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	int32_t t44 = 3541365;

	t44 = ((x177<(x178<x179))^x180);

	if (t44 != 2147483646) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x182 = UINT16_MAX;
	static int32_t x183 = -1;
	int32_t t45 = 15344380;

	t45 = ((x181<(x182<x183))^x184);

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = 0;
	int16_t x187 = INT16_MAX;
	uint32_t x188 = 31895U;
	volatile uint32_t t46 = 57499U;

	t46 = ((x185<(x186<x187))^x188);

	if (t46 != 31894U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = INT64_MAX;
	volatile int16_t x192 = INT16_MIN;
	int32_t t47 = 4295704;

	t47 = ((x189<(x190<x191))^x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x194 = INT8_MAX;
	static int8_t x196 = INT8_MIN;

	t48 = ((x193<(x194<x195))^x196);

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -6;
	int64_t x198 = -1LL;
	int32_t t49 = -2976;

	t49 = ((x197<(x198<x199))^x200);

	if (t49 != 65534) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 5;
	static int8_t x204 = -6;
	static int32_t t50 = 1341781;

	t50 = ((x201<(x202<x203))^x204);

	if (t50 != -6) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 7;
	int8_t x206 = -1;
	int64_t x207 = 2152084607084LL;
	volatile uint32_t t51 = 491833U;

	t51 = ((x205<(x206<x207))^x208);

	if (t51 != 55741U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x211 = 90LL;
	volatile int32_t x212 = -13780;
	static int32_t t52 = -17;

	t52 = ((x209<(x210<x211))^x212);

	if (t52 != -13780) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	int32_t x214 = -1;
	int8_t x215 = INT8_MIN;
	uint16_t x216 = 1U;
	int32_t t53 = 14;

	t53 = ((x213<(x214<x215))^x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 2U;
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 51U;
	int16_t x220 = -10543;

	t54 = ((x217<(x218<x219))^x220);

	if (t54 != -10543) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MAX;
	volatile int8_t x222 = INT8_MIN;
	volatile uint64_t x223 = 111888484740LLU;
	volatile uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = ((x221<(x222<x223))^x224);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = 17311;
	static int32_t x226 = -70323433;
	int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	int64_t t56 = INT64_MIN;

	t56 = ((x225<(x226<x227))^x228);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x229 = UINT16_MAX;
	uint32_t x231 = 7U;
	uint16_t x232 = 96U;
	volatile int32_t t57 = -3962606;

	t57 = ((x229<(x230<x231))^x232);

	if (t57 != 96) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	uint64_t x234 = 18LLU;

	t58 = ((x233<(x234<x235))^x236);

	if (t58 != 88) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -350706;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	int32_t t59 = -145456;

	t59 = ((x237<(x238<x239))^x240);

	if (t59 != 62) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = 56749067616LLU;

	t60 = ((x241<(x242<x243))^x244);

	if (t60 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = INT32_MAX;
	int32_t x247 = -1;
	static volatile int32_t x248 = -1;

	t61 = ((x245<(x246<x247))^x248);

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x251 = UINT32_MAX;
	uint16_t x252 = UINT16_MAX;
	static int32_t t62 = 7260;

	t62 = ((x249<(x250<x251))^x252);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = -1;
	uint8_t x255 = 1U;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 21;

	t63 = ((x253<(x254<x255))^x256);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	int16_t x258 = 67;
	int32_t x259 = INT32_MIN;
	int16_t x260 = -1;
	int32_t t64 = 9;

	t64 = ((x257<(x258<x259))^x260);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -26000785;
	uint8_t x262 = 92U;
	int16_t x264 = -13;
	volatile int32_t t65 = 1;

	t65 = ((x261<(x262<x263))^x264);

	if (t65 != -14) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x267 = -1;
	uint8_t x268 = 78U;
	static int32_t t66 = 53;

	t66 = ((x265<(x266<x267))^x268);

	if (t66 != 79) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 14U;
	int32_t x270 = -1;
	static volatile int32_t x272 = INT32_MAX;
	int32_t t67 = INT32_MAX;

	t67 = ((x269<(x270<x271))^x272);

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	int8_t x274 = -1;
	int64_t x276 = INT64_MAX;
	int64_t t68 = -1342250834LL;

	t68 = ((x273<(x274<x275))^x276);

	if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = -1;
	uint32_t x280 = 768U;
	volatile uint32_t t69 = 8302639U;

	t69 = ((x277<(x278<x279))^x280);

	if (t69 != 768U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int32_t x282 = INT32_MIN;
	static uint8_t x283 = 12U;
	static int64_t x284 = -1LL;

	t70 = ((x281<(x282<x283))^x284);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 78U;
	int32_t x286 = 80299469;
	static volatile uint64_t x287 = 16342LLU;
	int64_t x288 = -1LL;
	static int64_t t71 = 3842921079350410LL;

	t71 = ((x285<(x286<x287))^x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -63;
	int32_t x290 = -1;
	uint16_t x291 = 1449U;
	volatile int32_t x292 = -1;
	volatile int32_t t72 = -641959;

	t72 = ((x289<(x290<x291))^x292);

	if (t72 != -2) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = UINT16_MAX;
	int16_t x294 = 239;
	uint8_t x295 = 5U;
	static uint8_t x296 = UINT8_MAX;
	volatile int32_t t73 = 379;

	t73 = ((x293<(x294<x295))^x296);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MIN;
	volatile int32_t x298 = 300261216;
	volatile int32_t t74 = -367;

	t74 = ((x297<(x298<x299))^x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 5231249186LL;
	int8_t x302 = INT8_MAX;
	volatile int32_t x303 = 23584274;
	volatile uint32_t x304 = 7U;

	t75 = ((x301<(x302<x303))^x304);

	if (t75 != 7U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 4192438215554211LLU;
	static uint32_t x307 = 1746U;

	t76 = ((x305<(x306<x307))^x308);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = UINT64_MAX;
	uint8_t x311 = 11U;
	volatile int32_t x312 = -1664948;

	t77 = ((x309<(x310<x311))^x312);

	if (t77 != -1664947) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	int16_t x314 = -1;
	uint32_t x315 = 38320U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = 2747759U;

	t78 = ((x313<(x314<x315))^x316);

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = UINT32_MAX;
	static uint32_t x318 = UINT32_MAX;
	volatile int32_t x319 = INT32_MAX;
	static uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 1;

	t79 = ((x317<(x318<x319))^x320);

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	int8_t x322 = -3;
	int8_t x323 = 1;
	volatile int32_t t80 = 194;

	t80 = ((x321<(x322<x323))^x324);

	if (t80 != 126) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -23LL;

	t81 = ((x325<(x326<x327))^x328);

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MAX;
	volatile uint32_t x331 = 129764811U;
	int8_t x332 = -1;
	int32_t t82 = -2430433;

	t82 = ((x329<(x330<x331))^x332);

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MAX;
	static int16_t x335 = 0;
	int8_t x336 = -29;

	t83 = ((x333<(x334<x335))^x336);

	if (t83 != -29) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	static int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	volatile int32_t x340 = INT32_MAX;
	static int32_t t84 = INT32_MAX;

	t84 = ((x337<(x338<x339))^x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = 3308U;
	int32_t x342 = INT32_MIN;
	int64_t x344 = INT64_MIN;

	t85 = ((x341<(x342<x343))^x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = -1;
	volatile int32_t t86 = 12044;

	t86 = ((x345<(x346<x347))^x348);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MAX;
	int16_t x350 = -1;
	int64_t x351 = INT64_MAX;
	static int16_t x352 = -1;
	int32_t t87 = 1745;

	t87 = ((x349<(x350<x351))^x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = 1;
	volatile int32_t x354 = -1;
	int64_t x355 = -1LL;
	uint64_t x356 = 19408969660792676LLU;

	t88 = ((x353<(x354<x355))^x356);

	if (t88 != 19408969660792676LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = -1;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	static int32_t x360 = INT32_MAX;
	int32_t t89 = 26115057;

	t89 = ((x357<(x358<x359))^x360);

	if (t89 != 2147483646) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	uint64_t x362 = 124781236832LLU;
	int64_t x363 = INT64_MIN;
	static volatile int32_t t90 = 8272991;

	t90 = ((x361<(x362<x363))^x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = 925375;
	static int8_t x367 = 63;
	static volatile int64_t x368 = -1LL;
	volatile int64_t t91 = 3638LL;

	t91 = ((x365<(x366<x367))^x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -8154;
	int16_t x370 = 0;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = INT64_MAX;
	static int64_t t92 = -121LL;

	t92 = ((x369<(x370<x371))^x372);

	if (t92 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x374 = 29LL;
	uint16_t x375 = 79U;
	int8_t x376 = 1;
	int32_t t93 = -557804;

	t93 = ((x373<(x374<x375))^x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MAX;
	uint8_t x378 = UINT8_MAX;
	volatile int8_t x379 = INT8_MIN;
	static volatile int8_t x380 = -5;
	static volatile int32_t t94 = -972;

	t94 = ((x377<(x378<x379))^x380);

	if (t94 != -5) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = 4383844;
	static int64_t x382 = INT64_MIN;
	volatile int16_t x384 = -3;
	volatile int32_t t95 = 1;

	t95 = ((x381<(x382<x383))^x384);

	if (t95 != -3) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = -4596681;

	t96 = ((x385<(x386<x387))^x388);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -9;
	uint64_t x390 = 88312993676LLU;
	int16_t x391 = INT16_MAX;
	int8_t x392 = -1;
	int32_t t97 = -31353;

	t97 = ((x389<(x390<x391))^x392);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	int16_t x395 = 2859;
	int16_t x396 = 11;
	static volatile int32_t t98 = 26;

	t98 = ((x393<(x394<x395))^x396);

	if (t98 != 11) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int8_t x399 = -2;
	int32_t t99 = -115329;

	t99 = ((x397<(x398<x399))^x400);

	if (t99 != 2) { NG(); } else { ; }
	
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

