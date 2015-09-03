#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MAX;
uint64_t t1 = UINT64_MAX;
static volatile int16_t x11 = -16;
static int16_t x18 = -11097;
int64_t x19 = 1LL;
uint64_t x21 = 127894LLU;
static uint64_t x24 = UINT64_MAX;
int32_t x27 = INT32_MAX;
static int16_t x28 = -1036;
volatile int32_t x30 = INT32_MIN;
int16_t x32 = INT16_MIN;
int32_t x43 = 0;
volatile uint16_t x44 = 46U;
uint8_t x47 = 99U;
int64_t x58 = INT64_MIN;
int16_t x60 = INT16_MIN;
volatile int32_t t14 = INT32_MIN;
static int64_t x67 = INT64_MIN;
volatile int16_t x76 = -1;
int32_t t18 = 94993764;
int64_t x85 = 1378500295512497434LL;
int16_t x88 = -7192;
int16_t x89 = INT16_MAX;
static volatile int16_t x98 = -217;
volatile int32_t t26 = -327389997;
static volatile uint64_t x110 = UINT64_MAX;
static int8_t x112 = INT8_MIN;
int8_t x113 = INT8_MAX;
int16_t x116 = 3124;
volatile int32_t t29 = -12414;
static int32_t x121 = INT32_MIN;
uint16_t x122 = 0U;
int8_t x124 = INT8_MAX;
volatile int32_t t30 = 329246;
int32_t x125 = INT32_MIN;
int64_t t32 = -734492331438481LL;
volatile int32_t x134 = 50589;
volatile int64_t t33 = 3342LL;
int64_t t34 = INT64_MIN;
int8_t x141 = -1;
static int16_t x150 = INT16_MIN;
int32_t t37 = 25;
int8_t x154 = 15;
int32_t x156 = INT32_MIN;
uint64_t x164 = UINT64_MAX;
static volatile int32_t t40 = -16663692;
int64_t x167 = -1LL;
uint8_t x168 = UINT8_MAX;
volatile int64_t t41 = -397973434LL;
int8_t x171 = INT8_MIN;
int64_t x174 = 123969575819LL;
int64_t x179 = -1LL;
int32_t x180 = INT32_MIN;
int8_t x182 = -1;
volatile uint32_t x188 = UINT32_MAX;
volatile int32_t x195 = INT32_MIN;
int16_t x198 = -73;
uint16_t x200 = 14456U;
uint32_t x214 = 3161229U;
int32_t x219 = INT32_MIN;
int16_t x226 = -250;
uint16_t x228 = 210U;
volatile int32_t t56 = -5004019;
volatile uint8_t x229 = UINT8_MAX;
int32_t x231 = INT32_MIN;
int32_t t57 = 320008;
int32_t t58 = 103850;
uint32_t x241 = 1026U;
int32_t x246 = -1;
uint8_t x249 = 0U;
int32_t t62 = -3;
int8_t x256 = -1;
uint8_t x265 = 6U;
int32_t x268 = INT32_MIN;
int16_t x270 = INT16_MAX;
int32_t x276 = 779;
uint8_t x278 = 8U;
uint8_t x280 = 46U;
volatile int32_t t69 = 724929864;
int32_t x284 = 0;
static uint32_t x285 = 141U;
static volatile int16_t x291 = 0;
int16_t x295 = 598;
int64_t x297 = INT64_MIN;
int32_t x298 = INT32_MAX;
int16_t x299 = INT16_MAX;
int16_t x301 = INT16_MIN;
int16_t x304 = INT16_MAX;
int32_t t75 = 789;
int8_t x311 = 26;
int32_t t77 = -4830170;
static uint16_t x313 = 10154U;
int64_t x314 = -114641696577LL;
static volatile uint16_t x322 = UINT16_MAX;
uint32_t x323 = 646189521U;
static uint64_t x326 = UINT64_MAX;
int16_t x328 = -1;
int32_t x353 = INT32_MIN;
uint8_t x363 = 3U;
static volatile uint64_t x366 = 99327LLU;
static int32_t t91 = 0;
int16_t x370 = -31;
int32_t t92 = INT32_MAX;
int32_t x378 = -4773;
int8_t x380 = 1;
volatile int64_t t96 = 43508649028314608LL;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	int16_t x2 = 80;
	int16_t x3 = 9;
	int64_t t0 = INT64_MAX;

	t0 = (x1|((x2<x3)<x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 213449LLU;
	int8_t x7 = INT8_MIN;
	static uint32_t x8 = 5U;

	t1 = (x5|((x6<x7)<x8));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile uint8_t x10 = 18U;
	int32_t x12 = -65925599;
	int32_t t2 = 32406878;

	t2 = (x9|((x10<x11)<x12));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -2588343974LL;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = UINT64_MAX;
	uint32_t x16 = 104886019U;
	int64_t t3 = 3463645624669986LL;

	t3 = (x13|((x14<x15)<x16));

	if (t3 != -2588343973LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 0U;
	int32_t x20 = -14086000;
	static volatile int32_t t4 = -51731;

	t4 = (x17|((x18<x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x22 = 31U;
	int16_t x23 = 9;
	uint64_t t5 = 1703173592710753LLU;

	t5 = (x21|((x22<x23)<x24));

	if (t5 != 127895LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 142;
	volatile int32_t x26 = 341567;
	int32_t t6 = 271;

	t6 = (x25|((x26<x27)<x28));

	if (t6 != 142) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x31 = -78726LL;
	int64_t t7 = INT64_MAX;

	t7 = (x29|((x30<x31)<x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 3;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = 0;
	volatile uint8_t x36 = 1U;
	int32_t t8 = 3471;

	t8 = (x33|((x34<x35)<x36));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile int64_t x38 = 3575583678048498LL;
	static uint8_t x39 = UINT8_MAX;
	int16_t x40 = INT16_MIN;
	static volatile int64_t t9 = INT64_MIN;

	t9 = (x37|((x38<x39)<x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	static int8_t x42 = INT8_MIN;
	int64_t t10 = 37761695LL;

	t10 = (x41|((x42<x43)<x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -1;
	uint16_t x46 = 3058U;
	uint32_t x48 = 1U;
	int32_t t11 = 245;

	t11 = (x45|((x46<x47)<x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MAX;
	int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 999329242;

	t12 = (x49|((x50<x51)<x52));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MIN;
	static int8_t x55 = -1;
	uint8_t x56 = 2U;
	static volatile int32_t t13 = -30685;

	t13 = (x53|((x54<x55)<x56));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x59 = -9;

	t14 = (x57|((x58<x59)<x60));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 1500678731269423781LLU;
	int64_t x62 = INT64_MIN;
	uint64_t x63 = 1172LLU;
	int64_t x64 = -22260246LL;
	volatile uint64_t t15 = 7969629LLU;

	t15 = (x61|((x62<x63)<x64));

	if (t15 != 1500678731269423781LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 0U;
	uint8_t x66 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = 8;

	t16 = (x65|((x66<x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	static int32_t x70 = -1;
	static int64_t x71 = -104761082LL;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = -3;

	t17 = (x69|((x70<x71)<x72));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 5U;
	uint8_t x74 = 17U;
	int64_t x75 = -142413726262786440LL;

	t18 = (x73|((x74<x75)<x76));

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MIN;
	static volatile int32_t x78 = INT32_MAX;
	uint8_t x79 = UINT8_MAX;
	uint32_t x80 = 80858264U;
	volatile int32_t t19 = -266107;

	t19 = (x77|((x78<x79)<x80));

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = INT16_MAX;
	volatile int32_t x82 = INT32_MIN;
	static uint64_t x83 = UINT64_MAX;
	uint64_t x84 = 1828LLU;
	volatile int32_t t20 = -1;

	t20 = (x81|((x82<x83)<x84));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	volatile int32_t x87 = -20543202;
	static int64_t t21 = 1LL;

	t21 = (x85|((x86<x87)<x88));

	if (t21 != 1378500295512497434LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = -3683;
	int32_t x91 = 16903;
	int32_t x92 = -1;
	static volatile int32_t t22 = 154913;

	t22 = (x89|((x90<x91)<x92));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static uint32_t x94 = 1706129422U;
	static int16_t x95 = 25;
	uint32_t x96 = 447U;
	volatile int32_t t23 = -227;

	t23 = (x93|((x94<x95)<x96));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 157245046LLU;
	static int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;
	uint64_t t24 = 1425268590230232893LLU;

	t24 = (x97|((x98<x99)<x100));

	if (t24 != 157245046LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	int64_t x103 = INT64_MAX;
	static volatile int32_t x104 = INT32_MIN;
	int32_t t25 = 110879;

	t25 = (x101|((x102<x103)<x104));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 26U;
	static int16_t x106 = INT16_MAX;
	static uint8_t x107 = 31U;
	uint32_t x108 = UINT32_MAX;

	t26 = (x105|((x106<x107)<x108));

	if (t26 != 27) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	int16_t x111 = 1346;
	int32_t t27 = INT32_MAX;

	t27 = (x109|((x110<x111)<x112));

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -1LL;
	int32_t x115 = INT32_MAX;
	int32_t t28 = 478776;

	t28 = (x113|((x114<x115)<x116));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	static int8_t x118 = INT8_MAX;
	uint64_t x119 = 25904329392281LLU;
	int32_t x120 = INT32_MIN;

	t29 = (x117|((x118<x119)<x120));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = INT32_MAX;

	t30 = (x121|((x122<x123)<x124));

	if (t30 != -2147483647) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = 4552491;

	t31 = (x125|((x126<x127)<x128));

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	volatile int16_t x130 = -1;
	int16_t x131 = INT16_MAX;
	uint8_t x132 = 26U;

	t32 = (x129|((x130<x131)<x132));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int64_t x135 = -13LL;
	volatile int16_t x136 = 3129;

	t33 = (x133|((x134<x135)<x136));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MIN;
	volatile int64_t x138 = 4279542886129606587LL;
	uint8_t x139 = UINT8_MAX;
	int16_t x140 = INT16_MIN;

	t34 = (x137|((x138<x139)<x140));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = 1;
	int8_t x143 = 24;
	static int8_t x144 = -7;
	volatile int32_t t35 = 145;

	t35 = (x141|((x142<x143)<x144));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static uint32_t x146 = 6265U;
	static uint64_t x147 = 245433506308361235LLU;
	volatile int32_t x148 = INT32_MAX;
	int32_t t36 = 17;

	t36 = (x145|((x146<x147)<x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	int16_t x151 = INT16_MAX;
	int8_t x152 = -1;

	t37 = (x149|((x150<x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 706413U;
	int16_t x155 = -1;
	uint32_t t38 = 0U;

	t38 = (x153|((x154<x155)<x156));

	if (t38 != 706413U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	static int16_t x158 = 1;
	static uint8_t x159 = 7U;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 805685;

	t39 = (x157|((x158<x159)<x160));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int16_t x162 = -323;
	int64_t x163 = 4LL;

	t40 = (x161|((x162<x163)<x164));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	volatile int16_t x166 = -1;

	t41 = (x165|((x166<x167)<x168));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	static int16_t x172 = -1;
	volatile int32_t t42 = -3516;

	t42 = (x169|((x170<x171)<x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int32_t x175 = -4323412;
	volatile int8_t x176 = 2;
	static int32_t t43 = 342087412;

	t43 = (x173|((x174<x175)<x176));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MIN;
	static volatile int32_t t44 = -42882;

	t44 = (x177|((x178<x179)<x180));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 73097241166569LLU;
	int16_t x183 = INT16_MIN;
	uint32_t x184 = 496U;
	volatile uint64_t t45 = 685306151291498LLU;

	t45 = (x181|((x182<x183)<x184));

	if (t45 != 73097241166569LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = -1;
	int8_t x187 = 63;
	static uint32_t t46 = UINT32_MAX;

	t46 = (x185|((x186<x187)<x188));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	static int8_t x190 = INT8_MAX;
	uint32_t x191 = 3932U;
	uint32_t x192 = 1U;
	static int32_t t47 = 75074;

	t47 = (x189|((x190<x191)<x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = 1U;
	int64_t x194 = INT64_MIN;
	volatile int16_t x196 = 28;
	static int32_t t48 = 5;

	t48 = (x193|((x194<x195)<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -4;
	int8_t x199 = -1;
	volatile int32_t t49 = 77678;

	t49 = (x197|((x198<x199)<x200));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 0;
	static int8_t x202 = INT8_MIN;
	volatile int32_t x203 = -1;
	volatile int64_t x204 = INT64_MIN;
	volatile int32_t t50 = -12644636;

	t50 = (x201|((x202<x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 6;
	int16_t x206 = -1;
	static uint32_t x207 = 883788572U;
	static uint16_t x208 = 212U;
	volatile int32_t t51 = -124389;

	t51 = (x205|((x206<x207)<x208));

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	int8_t x210 = 31;
	int8_t x211 = -1;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t52 = -659;

	t52 = (x209|((x210<x211)<x212));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t53 = -1;

	t53 = (x213|((x214<x215)<x216));

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	static int16_t x220 = INT16_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (x217|((x218<x219)<x220));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	int64_t x223 = -1LL;
	static volatile int64_t x224 = -2152447114730721971LL;
	volatile int32_t t55 = -367;

	t55 = (x221|((x222<x223)<x224));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -687311982;
	int64_t x227 = INT64_MIN;

	t56 = (x225|((x226<x227)<x228));

	if (t56 != -687311981) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x230 = 3911U;
	int8_t x232 = 1;

	t57 = (x229|((x230<x231)<x232));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = 1;
	uint64_t x234 = 512235826352LLU;
	uint8_t x235 = 99U;
	uint8_t x236 = 0U;

	t58 = (x233|((x234<x235)<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 1LLU;
	volatile uint64_t x238 = 1878732269379029030LLU;
	int32_t x239 = 7;
	static volatile int32_t x240 = INT32_MIN;
	volatile uint64_t t59 = 29067968694697LLU;

	t59 = (x237|((x238<x239)<x240));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x242 = -1;
	static int64_t x243 = -10314186242501LL;
	int32_t x244 = 1051384221;
	volatile uint32_t t60 = 441U;

	t60 = (x241|((x242<x243)<x244));

	if (t60 != 1027U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = UINT64_MAX;
	uint64_t x247 = 12LLU;
	volatile int64_t x248 = 267502372LL;
	uint64_t t61 = UINT64_MAX;

	t61 = (x245|((x246<x247)<x248));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 598458438LL;
	int16_t x251 = INT16_MAX;
	static int64_t x252 = 1022788775820LL;

	t62 = (x249|((x250<x251)<x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = -1;
	static uint8_t x255 = 18U;
	volatile int32_t t63 = INT32_MIN;

	t63 = (x253|((x254<x255)<x256));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 515232;
	static uint8_t x258 = UINT8_MAX;
	int8_t x259 = -1;
	static uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = 246;

	t64 = (x257|((x258<x259)<x260));

	if (t64 != 515233) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -14782962154LL;
	int8_t x262 = INT8_MAX;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = INT32_MAX;
	volatile int64_t t65 = 66910227LL;

	t65 = (x261|((x262<x263)<x264));

	if (t65 != -14782962153LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	uint8_t x267 = 0U;
	static volatile int32_t t66 = 12;

	t66 = (x265|((x266<x267)<x268));

	if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = INT16_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	static uint32_t x272 = 469U;
	volatile int32_t t67 = -6454;

	t67 = (x269|((x270<x271)<x272));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	int32_t x275 = -863259705;
	uint64_t t68 = UINT64_MAX;

	t68 = (x273|((x274<x275)<x276));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	int32_t x279 = -1;

	t69 = (x277|((x278<x279)<x280));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 358U;
	volatile int32_t x282 = 130546194;
	int8_t x283 = INT8_MIN;
	static volatile uint32_t t70 = 65U;

	t70 = (x281|((x282<x283)<x284));

	if (t70 != 358U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	uint8_t x287 = 58U;
	int8_t x288 = -14;
	uint32_t t71 = 96U;

	t71 = (x285|((x286<x287)<x288));

	if (t71 != 141U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = -1;
	int16_t x290 = -9515;
	volatile uint16_t x292 = 1U;
	volatile int32_t t72 = 137333;

	t72 = (x289|((x290<x291)<x292));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	static int8_t x294 = 9;
	static volatile uint32_t x296 = UINT32_MAX;
	volatile uint32_t t73 = UINT32_MAX;

	t73 = (x293|((x294<x295)<x296));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x300 = INT32_MIN;
	int64_t t74 = INT64_MIN;

	t74 = (x297|((x298<x299)<x300));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = -1LL;
	int32_t x303 = INT32_MIN;

	t75 = (x301|((x302<x303)<x304));

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = UINT16_MAX;
	volatile uint32_t x306 = 3582039U;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = 307LLU;
	int32_t t76 = 2;

	t76 = (x305|((x306<x307)<x308));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = UINT8_MAX;
	int32_t x310 = -9;
	static uint8_t x312 = 46U;

	t77 = (x309|((x310<x311)<x312));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x315 = INT64_MAX;
	volatile uint8_t x316 = UINT8_MAX;
	int32_t t78 = 7237137;

	t78 = (x313|((x314<x315)<x316));

	if (t78 != 10155) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	uint16_t x318 = 23575U;
	static volatile int16_t x319 = INT16_MIN;
	volatile int64_t x320 = INT64_MIN;
	static int32_t t79 = 1;

	t79 = (x317|((x318<x319)<x320));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	uint8_t x324 = 33U;
	int32_t t80 = 0;

	t80 = (x321|((x322<x323)<x324));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	static int64_t x327 = INT64_MIN;
	int64_t t81 = 1269549LL;

	t81 = (x325|((x326<x327)<x328));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x329 = UINT8_MAX;
	volatile int64_t x330 = INT64_MIN;
	volatile int16_t x331 = INT16_MAX;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = 1315;

	t82 = (x329|((x330<x331)<x332));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 447U;
	int32_t x334 = -1;
	uint16_t x335 = 1U;
	int32_t x336 = -1;
	int32_t t83 = -33;

	t83 = (x333|((x334<x335)<x336));

	if (t83 != 447) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -1LL;
	int64_t x338 = INT64_MIN;
	uint32_t x339 = UINT32_MAX;
	int16_t x340 = -25;
	volatile int64_t t84 = -7219672LL;

	t84 = (x337|((x338<x339)<x340));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -2055434LL;
	int16_t x342 = INT16_MIN;
	int8_t x343 = 12;
	static uint32_t x344 = 373005U;
	static int64_t t85 = -2426926278530549LL;

	t85 = (x341|((x342<x343)<x344));

	if (t85 != -2055433LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 1LLU;
	volatile int64_t x348 = -1LL;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x345|((x346<x347)<x348));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x349 = UINT8_MAX;
	volatile uint32_t x350 = 8074U;
	static int32_t x351 = -361388740;
	volatile uint32_t x352 = UINT32_MAX;
	int32_t t87 = 33;

	t87 = (x349|((x350<x351)<x352));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = -1;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = INT32_MIN;

	t88 = (x353|((x354<x355)<x356));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 7U;
	volatile uint32_t x358 = 15U;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = 1U;
	volatile int32_t t89 = 2732648;

	t89 = (x357|((x358<x359)<x360));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	volatile uint64_t x362 = 112088865441698LLU;
	uint8_t x364 = UINT8_MAX;
	static int32_t t90 = 12166;

	t90 = (x361|((x362<x363)<x364));

	if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -2;
	int64_t x367 = -1LL;
	int8_t x368 = INT8_MIN;

	t91 = (x365|((x366<x367)<x368));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MAX;
	volatile uint64_t x371 = UINT64_MAX;
	int8_t x372 = INT8_MAX;

	t92 = (x369|((x370<x371)<x372));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	uint8_t x374 = 27U;
	static volatile uint8_t x375 = 0U;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 72;

	t93 = (x373|((x374<x375)<x376));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = -18;
	static volatile uint8_t x379 = UINT8_MAX;
	volatile int32_t t94 = 1;

	t94 = (x377|((x378<x379)<x380));

	if (t94 != -18) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = 9880LLU;
	uint64_t x382 = 0LLU;
	static int32_t x383 = 4009;
	uint32_t x384 = 26U;
	volatile uint64_t t95 = 579563628LLU;

	t95 = (x381|((x382<x383)<x384));

	if (t95 != 9881LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint16_t x386 = 7605U;
	uint8_t x387 = 1U;
	uint8_t x388 = 1U;

	t96 = (x385|((x386<x387)<x388));

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 893471657;
	volatile int16_t x390 = -1;
	uint32_t x391 = 271599349U;
	static int16_t x392 = -1;
	int32_t t97 = -3;

	t97 = (x389|((x390<x391)<x392));

	if (t97 != 893471657) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	volatile uint16_t x394 = UINT16_MAX;
	int32_t x395 = INT32_MIN;
	volatile uint8_t x396 = 112U;
	static volatile int32_t t98 = -206227;

	t98 = (x393|((x394<x395)<x396));

	if (t98 != -32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = 2;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = 3U;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x397|((x398<x399)<x400));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

