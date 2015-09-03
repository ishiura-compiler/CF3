#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -31;
int32_t t1 = -170590835;
int32_t t3 = 206;
volatile int32_t t5 = -44257655;
static uint64_t x25 = 887332751LLU;
static uint64_t x27 = 298270386970448LLU;
int8_t x28 = 0;
uint64_t x36 = 9LLU;
static volatile int32_t x40 = INT32_MIN;
volatile int32_t x42 = INT32_MAX;
uint8_t x43 = UINT8_MAX;
static volatile int8_t x44 = INT8_MAX;
int64_t x48 = -23578613545649LL;
int32_t t11 = -1;
volatile int32_t t12 = -61583865;
int8_t x54 = -1;
int64_t x57 = INT64_MIN;
int32_t t16 = 3059122;
uint16_t x85 = 1496U;
uint8_t x88 = UINT8_MAX;
volatile uint32_t x93 = 48U;
volatile uint64_t x98 = 3042908LLU;
volatile uint32_t x103 = UINT32_MAX;
int16_t x108 = INT16_MAX;
int16_t x113 = -4974;
volatile int64_t x117 = INT64_MAX;
uint64_t x118 = 30946580216050535LLU;
static int32_t t29 = 27;
int16_t x126 = -1;
int64_t x129 = 9156300830742LL;
int16_t x132 = INT16_MIN;
uint16_t x136 = 2029U;
int64_t x138 = INT64_MIN;
int64_t x139 = -1LL;
int32_t t34 = -3;
volatile int8_t x150 = INT8_MIN;
int16_t x153 = INT16_MIN;
static int32_t t38 = -1;
volatile int32_t t39 = -4311;
volatile int64_t x163 = -530892062978110992LL;
volatile int16_t x164 = INT16_MIN;
int16_t x171 = INT16_MIN;
static volatile uint8_t x172 = UINT8_MAX;
static volatile int32_t t42 = 3;
static uint8_t x177 = 71U;
uint32_t x179 = 56184110U;
volatile int32_t t44 = -2;
static volatile uint16_t x194 = UINT16_MAX;
uint32_t x196 = 10U;
volatile uint16_t x200 = 36U;
int32_t t51 = -7;
static int16_t x224 = -1;
static int32_t t55 = 91;
int8_t x227 = INT8_MIN;
int8_t x228 = -2;
int32_t x230 = INT32_MIN;
uint8_t x235 = 99U;
int8_t x236 = -21;
volatile int32_t t58 = 8;
int8_t x243 = -18;
static uint64_t x245 = 2843592404379075871LLU;
static uint8_t x257 = UINT8_MAX;
uint16_t x258 = 0U;
uint64_t x270 = 13439335718135LLU;
static int64_t x271 = INT64_MIN;
int8_t x272 = INT8_MIN;
volatile int32_t t67 = 934692;
uint8_t x274 = 0U;
uint16_t x275 = UINT16_MAX;
volatile int16_t x286 = INT16_MAX;
int16_t x288 = -14;
int16_t x289 = INT16_MAX;
int8_t x294 = -39;
uint64_t x298 = 1875203704343LLU;
uint16_t x299 = UINT16_MAX;
int16_t x300 = -1;
int8_t x305 = -3;
uint8_t x307 = 2U;
static int32_t x308 = 43;
volatile uint16_t x309 = 10U;
volatile int32_t t78 = -15350;
static uint8_t x319 = UINT8_MAX;
int64_t x327 = -63023823LL;
uint64_t x331 = 6689310351385479LLU;
int16_t x337 = -1;
uint16_t x339 = 413U;
static int32_t t86 = -28676;
int32_t t87 = 6687;
static uint8_t x358 = 14U;
static uint16_t x361 = 0U;
int64_t x369 = 41401768777031LL;
static int32_t x372 = -38838682;
int64_t x374 = INT64_MIN;
volatile int16_t x376 = INT16_MIN;
int16_t x378 = -2193;
int32_t x380 = INT32_MIN;
int32_t x383 = INT32_MAX;
volatile int32_t t95 = -7769866;
int32_t x389 = INT32_MIN;
volatile int32_t t97 = 0;
int8_t x397 = INT8_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int64_t x2 = -1LL;
	int16_t x3 = -1;
	int32_t x4 = -1;

	t0 = ((x1==(x2<x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 64505LLU;
	int64_t x6 = -17179LL;
	uint32_t x7 = 386U;
	uint8_t x8 = 0U;

	t1 = ((x5==(x6<x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	volatile int32_t x10 = INT32_MAX;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = INT16_MIN;
	int32_t t2 = 53;

	t2 = ((x9==(x10<x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -11;
	static int16_t x14 = -8018;
	uint32_t x15 = UINT32_MAX;
	uint16_t x16 = 7U;

	t3 = ((x13==(x14<x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	uint8_t x18 = 1U;
	uint16_t x19 = 25U;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -1071;

	t4 = ((x17==(x18<x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint16_t x22 = 3422U;
	volatile uint32_t x23 = 46U;
	static uint32_t x24 = 3U;

	t5 = ((x21==(x22<x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x26 = INT16_MIN;
	int32_t t6 = 4;

	t6 = ((x25==(x26<x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 11123U;
	static uint64_t x30 = 40729692348022805LLU;
	static uint8_t x31 = 7U;
	static int64_t x32 = INT64_MIN;
	int32_t t7 = -16700639;

	t7 = ((x29==(x30<x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = UINT16_MAX;
	static int32_t x34 = 6718;
	volatile int32_t x35 = -1;
	static volatile int32_t t8 = -16;

	t8 = ((x33==(x34<x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = -1;
	volatile int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	static volatile int32_t t9 = -187;

	t9 = ((x37==(x38<x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 6837143453153026LL;
	static int32_t t10 = 0;

	t10 = ((x41==(x42<x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	int32_t x46 = 15;
	static volatile uint64_t x47 = UINT64_MAX;

	t11 = ((x45==(x46<x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int64_t x50 = -747189811LL;
	uint16_t x51 = 16U;
	int64_t x52 = -136410561LL;

	t12 = ((x49==(x50<x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	static int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 519414;

	t13 = ((x53==(x54<x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	uint32_t x59 = 6U;
	static volatile int16_t x60 = -94;
	int32_t t14 = -1;

	t14 = ((x57==(x58<x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = 22;
	int16_t x62 = INT16_MIN;
	static uint8_t x63 = UINT8_MAX;
	int8_t x64 = 1;
	volatile int32_t t15 = 16337;

	t15 = ((x61==(x62<x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 80U;
	static volatile uint8_t x66 = 51U;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = 38295986483295092LLU;

	t16 = ((x65==(x66<x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 96;
	volatile int32_t x70 = -1;
	volatile int64_t x71 = -294LL;
	volatile int64_t x72 = INT64_MIN;
	static volatile int32_t t17 = -9651959;

	t17 = ((x69==(x70<x71))<=x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -409;
	uint64_t x74 = 794173998665549LLU;
	int32_t x75 = -1;
	volatile uint32_t x76 = 0U;
	int32_t t18 = 3116997;

	t18 = ((x73==(x74<x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	static volatile uint16_t x79 = UINT16_MAX;
	uint16_t x80 = UINT16_MAX;
	int32_t t19 = 6961;

	t19 = ((x77==(x78<x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	int64_t x82 = INT64_MIN;
	uint8_t x83 = 59U;
	uint8_t x84 = 46U;
	volatile int32_t t20 = -379;

	t20 = ((x81==(x82<x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 1U;
	int8_t x87 = INT8_MIN;
	static volatile int32_t t21 = 353;

	t21 = ((x85==(x86<x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 8U;
	int8_t x90 = 44;
	uint8_t x91 = 33U;
	static uint16_t x92 = 10428U;
	int32_t t22 = -36138;

	t22 = ((x89==(x90<x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = -103452172316356814LL;
	volatile int64_t x95 = -507LL;
	static int8_t x96 = 0;
	volatile int32_t t23 = 27172778;

	t23 = ((x93==(x94<x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int8_t x99 = 0;
	static uint64_t x100 = 5212491088457167LLU;
	int32_t t24 = -17;

	t24 = ((x97==(x98<x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 7114U;
	int8_t x102 = 1;
	static volatile uint64_t x104 = UINT64_MAX;
	int32_t t25 = -494;

	t25 = ((x101==(x102<x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	static int16_t x106 = -2263;
	int32_t x107 = -3859593;
	volatile int32_t t26 = 0;

	t26 = ((x105==(x106<x107))<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	int8_t x110 = -1;
	uint8_t x111 = 0U;
	int32_t x112 = 27;
	int32_t t27 = 2140515;

	t27 = ((x109==(x110<x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x114 = 1;
	int16_t x115 = 14883;
	volatile uint16_t x116 = 239U;
	int32_t t28 = -595920942;

	t28 = ((x113==(x114<x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x119 = -644299;
	int32_t x120 = INT32_MIN;

	t29 = ((x117==(x118<x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	uint16_t x122 = UINT16_MAX;
	int64_t x123 = INT64_MIN;
	int32_t x124 = 256569;
	volatile int32_t t30 = 105425602;

	t30 = ((x121==(x122<x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 2731U;
	volatile uint8_t x127 = 4U;
	int16_t x128 = -1;
	volatile int32_t t31 = 2627321;

	t31 = ((x125==(x126<x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = -1;
	volatile uint64_t x131 = UINT64_MAX;
	volatile int32_t t32 = 13;

	t32 = ((x129==(x130<x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int16_t x134 = 3536;
	int64_t x135 = -5LL;
	int32_t t33 = 117263;

	t33 = ((x133==(x134<x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	static uint8_t x140 = UINT8_MAX;

	t34 = ((x137==(x138<x139))<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 48844197U;
	volatile int64_t x142 = INT64_MIN;
	uint64_t x143 = 3885LLU;
	int16_t x144 = 1;
	volatile int32_t t35 = 0;

	t35 = ((x141==(x142<x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	static int64_t x146 = -249220208459238LL;
	int16_t x147 = -1;
	int64_t x148 = -1LL;
	int32_t t36 = -2;

	t36 = ((x145==(x146<x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	static uint64_t x151 = UINT64_MAX;
	int16_t x152 = 3;
	volatile int32_t t37 = -1727485;

	t37 = ((x149==(x150<x151))<=x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -1LL;
	static int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MAX;

	t38 = ((x153==(x154<x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static int8_t x160 = 0;

	t39 = ((x157==(x158<x159))<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MAX;
	int32_t t40 = 1388036;

	t40 = ((x161==(x162<x163))<=x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MIN;
	volatile int32_t x167 = INT32_MAX;
	static volatile int16_t x168 = -1;
	int32_t t41 = 1958;

	t41 = ((x165==(x166<x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	static uint32_t x170 = 2513102U;

	t42 = ((x169==(x170<x171))<=x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 100;
	static volatile uint8_t x174 = 67U;
	uint16_t x175 = 6U;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -5;

	t43 = ((x173==(x174<x175))<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x178 = UINT16_MAX;
	int32_t x180 = INT32_MAX;

	t44 = ((x177==(x178<x179))<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 230419529U;
	static uint8_t x182 = UINT8_MAX;
	int8_t x183 = INT8_MIN;
	static int64_t x184 = INT64_MAX;
	int32_t t45 = 463268984;

	t45 = ((x181==(x182<x183))<=x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 45U;
	int16_t x186 = INT16_MAX;
	static uint32_t x187 = 18902360U;
	int16_t x188 = 7865;
	int32_t t46 = -660430656;

	t46 = ((x185==(x186<x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 8679;
	volatile int8_t x190 = INT8_MAX;
	static volatile int64_t x191 = -25628682941361692LL;
	int8_t x192 = 0;
	volatile int32_t t47 = -2011914;

	t47 = ((x189==(x190<x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = -1;
	static int8_t x195 = INT8_MAX;
	volatile int32_t t48 = 995031758;

	t48 = ((x193==(x194<x195))<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = UINT32_MAX;
	static uint16_t x198 = 934U;
	uint16_t x199 = 121U;
	static volatile int32_t t49 = 20456299;

	t49 = ((x197==(x198<x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x201 = 5;
	int32_t x202 = 0;
	int32_t x203 = 522800;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t50 = -2831007;

	t50 = ((x201==(x202<x203))<=x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = 5;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = INT16_MAX;

	t51 = ((x205==(x206<x207))<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x209 = INT32_MIN;
	uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 26U;
	int64_t x212 = -521281LL;
	static volatile int32_t t52 = 151186550;

	t52 = ((x209==(x210<x211))<=x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = 2;
	volatile uint64_t x215 = 245879825230LLU;
	int64_t x216 = 269456LL;
	volatile int32_t t53 = 2009879;

	t53 = ((x213==(x214<x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	uint64_t x218 = UINT64_MAX;
	uint64_t x219 = 21028LLU;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -13;

	t54 = ((x217==(x218<x219))<=x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = -1;
	int16_t x223 = -428;

	t55 = ((x221==(x222<x223))<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -480094585060059370LL;
	uint32_t x226 = 1907U;
	int32_t t56 = -83292;

	t56 = ((x225==(x226<x227))<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	volatile uint16_t x231 = 30663U;
	static uint16_t x232 = 122U;
	int32_t t57 = -224020;

	t57 = ((x229==(x230<x231))<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	int16_t x234 = -1;

	t58 = ((x233==(x234<x235))<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int8_t x238 = INT8_MIN;
	int32_t x239 = -240;
	uint8_t x240 = 3U;
	volatile int32_t t59 = -25;

	t59 = ((x237==(x238<x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 15U;
	int16_t x242 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t60 = -1091051;

	t60 = ((x241==(x242<x243))<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 5298854U;
	static uint8_t x247 = 85U;
	static volatile int16_t x248 = 0;
	int32_t t61 = -583;

	t61 = ((x245==(x246<x247))<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int16_t x250 = INT16_MIN;
	uint8_t x251 = 3U;
	int32_t x252 = INT32_MIN;
	int32_t t62 = 391290;

	t62 = ((x249==(x250<x251))<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -6;
	int64_t x254 = INT64_MAX;
	static int8_t x255 = INT8_MIN;
	volatile int32_t x256 = 775;
	volatile int32_t t63 = 0;

	t63 = ((x253==(x254<x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x259 = UINT8_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile int32_t t64 = -41402062;

	t64 = ((x257==(x258<x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x261 = UINT64_MAX;
	volatile int32_t x262 = INT32_MAX;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = -1;
	volatile int32_t t65 = -7017;

	t65 = ((x261==(x262<x263))<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int32_t x266 = -1;
	uint8_t x267 = 75U;
	int32_t x268 = 432628;
	int32_t t66 = 147656;

	t66 = ((x265==(x266<x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = -1;

	t67 = ((x269==(x270<x271))<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile int16_t x276 = INT16_MIN;
	int32_t t68 = -1;

	t68 = ((x273==(x274<x275))<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 515680LL;
	int32_t x278 = INT32_MIN;
	int32_t x279 = 1902272;
	int32_t x280 = INT32_MAX;
	int32_t t69 = -12;

	t69 = ((x277==(x278<x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	uint32_t x282 = UINT32_MAX;
	uint16_t x283 = 3761U;
	uint64_t x284 = 43806478765236LLU;
	volatile int32_t t70 = -81363;

	t70 = ((x281==(x282<x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int8_t x287 = INT8_MAX;
	static volatile int32_t t71 = 215878;

	t71 = ((x285==(x286<x287))<=x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x290 = UINT16_MAX;
	int8_t x291 = 0;
	volatile int16_t x292 = INT16_MAX;
	static volatile int32_t t72 = 38725126;

	t72 = ((x289==(x290<x291))<=x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	static volatile int16_t x295 = -1;
	int64_t x296 = -22561LL;
	int32_t t73 = 3685672;

	t73 = ((x293==(x294<x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int32_t t74 = 18452453;

	t74 = ((x297==(x298<x299))<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MAX;
	int8_t x304 = INT8_MIN;
	int32_t t75 = 48673319;

	t75 = ((x301==(x302<x303))<=x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MAX;
	volatile int32_t t76 = -18565;

	t76 = ((x305==(x306<x307))<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = -3;
	static int8_t x311 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t77 = -209098431;

	t77 = ((x309==(x310<x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = 218U;
	int16_t x314 = 945;
	int64_t x315 = INT64_MIN;
	int32_t x316 = 14474561;

	t78 = ((x313==(x314<x315))<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -236;
	static uint8_t x318 = 119U;
	int64_t x320 = -7945675965187797LL;
	volatile int32_t t79 = 50;

	t79 = ((x317==(x318<x319))<=x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int64_t x322 = 5LL;
	uint16_t x323 = 5182U;
	volatile uint16_t x324 = 55U;
	volatile int32_t t80 = 65211473;

	t80 = ((x321==(x322<x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	static volatile uint64_t x326 = 3109284270LLU;
	uint32_t x328 = 3906105U;
	static int32_t t81 = 0;

	t81 = ((x325==(x326<x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1;
	int64_t x330 = INT64_MAX;
	static int16_t x332 = INT16_MAX;
	static int32_t t82 = -1;

	t82 = ((x329==(x330<x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 5U;
	int32_t x334 = INT32_MAX;
	static int16_t x335 = INT16_MAX;
	uint16_t x336 = 967U;
	volatile int32_t t83 = -20093;

	t83 = ((x333==(x334<x335))<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = -15;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = 0;

	t84 = ((x337==(x338<x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x341 = UINT32_MAX;
	volatile int16_t x342 = -10302;
	int32_t x343 = 500542169;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 0;

	t85 = ((x341==(x342<x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 424U;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;
	volatile int16_t x348 = INT16_MAX;

	t86 = ((x345==(x346<x347))<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static int64_t x350 = 3788167535889301LL;
	int8_t x351 = 8;
	int8_t x352 = -43;

	t87 = ((x349==(x350<x351))<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -1LL;
	static uint32_t x354 = UINT32_MAX;
	int16_t x355 = INT16_MIN;
	static int64_t x356 = 1005548052LL;
	static int32_t t88 = 387;

	t88 = ((x353==(x354<x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 1U;
	int16_t x359 = -218;
	int8_t x360 = -1;
	static int32_t t89 = 119008738;

	t89 = ((x357==(x358<x359))<=x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x362 = INT8_MIN;
	volatile int8_t x363 = -4;
	uint32_t x364 = 2164151U;
	int32_t t90 = -15621;

	t90 = ((x361==(x362<x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -6;
	uint16_t x366 = UINT16_MAX;
	static int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MAX;
	volatile int32_t t91 = -4;

	t91 = ((x365==(x366<x367))<=x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x370 = 11626892685LL;
	int8_t x371 = 0;
	int32_t t92 = 2715;

	t92 = ((x369==(x370<x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int32_t x375 = INT32_MIN;
	static int32_t t93 = 98591;

	t93 = ((x373==(x374<x375))<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 1171725563807LL;
	int8_t x379 = INT8_MIN;
	volatile int32_t t94 = -18088828;

	t94 = ((x377==(x378<x379))<=x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = -1;
	static int32_t x382 = INT32_MIN;
	volatile int32_t x384 = INT32_MIN;

	t95 = ((x381==(x382<x383))<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 1;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MIN;
	volatile uint64_t x388 = 354057LLU;
	int32_t t96 = -106913;

	t96 = ((x385==(x386<x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = INT64_MAX;
	int16_t x391 = INT16_MAX;
	uint64_t x392 = UINT64_MAX;

	t97 = ((x389==(x390<x391))<=x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int32_t x394 = 22527981;
	volatile int16_t x395 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t98 = 478940;

	t98 = ((x393==(x394<x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x398 = -1LL;
	int8_t x399 = 1;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = -709655;

	t99 = ((x397==(x398<x399))<=x400);

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

