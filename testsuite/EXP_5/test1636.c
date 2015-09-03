#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = 1U;
int32_t t2 = -886617953;
volatile int64_t x18 = INT64_MIN;
int8_t x20 = INT8_MAX;
int32_t t5 = 287120;
int16_t x29 = 574;
int32_t t7 = 4589454;
volatile int64_t x36 = -2LL;
static uint8_t x39 = 54U;
uint64_t x52 = 93054LLU;
volatile int32_t t12 = 341258;
int16_t x53 = -1;
int8_t x54 = INT8_MAX;
int32_t x55 = INT32_MIN;
static uint64_t x61 = UINT64_MAX;
volatile uint64_t t15 = 2LLU;
volatile int32_t t16 = 351;
uint32_t x70 = 56U;
volatile int32_t x84 = INT32_MIN;
static volatile int32_t t20 = -2714;
int16_t x86 = INT16_MIN;
volatile int8_t x90 = INT8_MAX;
static uint16_t x94 = UINT16_MAX;
static uint32_t t23 = 3U;
volatile int32_t t24 = 27493;
uint8_t x102 = 4U;
int64_t x113 = -1LL;
int32_t x118 = -472776235;
uint64_t x121 = UINT64_MAX;
volatile uint32_t x123 = 720U;
int64_t x125 = -1LL;
volatile uint16_t x129 = 979U;
int64_t x140 = INT64_MAX;
uint16_t x143 = UINT16_MAX;
uint8_t x146 = 126U;
int8_t x150 = INT8_MIN;
uint16_t x152 = 22U;
static int32_t t37 = -1838158;
uint32_t x154 = 4U;
int64_t x156 = INT64_MIN;
int64_t t39 = 1082600017630LL;
volatile uint64_t x162 = 34591608188588LLU;
volatile int64_t t40 = -1149LL;
uint8_t x165 = UINT8_MAX;
int32_t t42 = -735055315;
static uint8_t x178 = 8U;
int32_t x183 = -31567;
static volatile int32_t t45 = -125332;
volatile uint32_t x186 = 637061518U;
int64_t t46 = 1019954657720585LL;
int32_t x190 = 36;
int8_t x195 = INT8_MAX;
volatile uint16_t x196 = UINT16_MAX;
static int64_t t49 = 172988125LL;
uint32_t t50 = 30580642U;
int8_t x206 = 0;
static uint16_t x214 = 1622U;
uint8_t x215 = UINT8_MAX;
int32_t t53 = -120451112;
static int64_t x223 = INT64_MIN;
static int32_t x229 = INT32_MAX;
volatile int16_t x230 = INT16_MIN;
static int32_t t57 = -1;
volatile int64_t x233 = INT64_MAX;
int64_t x235 = -1LL;
volatile int16_t x238 = INT16_MIN;
static volatile uint16_t x244 = 131U;
uint16_t x253 = UINT16_MAX;
static int32_t x261 = -29;
uint64_t x271 = 346971212942LLU;
static uint16_t x276 = UINT16_MAX;
int16_t x282 = -1;
static int32_t x287 = -1;
uint16_t x288 = 0U;
volatile int64_t t71 = 630281LL;
uint64_t x299 = UINT64_MAX;
volatile int32_t t75 = -2;
int64_t x318 = 475241608216676774LL;
volatile int16_t x320 = 13020;
int32_t t80 = 2867;
int32_t t83 = 627916;
int8_t x338 = -1;
static uint16_t x344 = UINT16_MAX;
int16_t x345 = -10;
static volatile int8_t x347 = INT8_MAX;
static volatile int32_t t86 = 1;
int32_t x349 = INT32_MIN;
uint16_t x356 = 32437U;
int32_t x357 = 20034430;
int8_t x358 = -1;
int32_t t89 = -30;
int64_t x361 = INT64_MIN;
int32_t x367 = INT32_MIN;
uint32_t t91 = 45950724U;
static int8_t x369 = 1;
int16_t x375 = -1;
volatile int8_t x378 = -1;
uint16_t x379 = 1U;
static int32_t t96 = -1757;
static int16_t x389 = INT16_MIN;
int16_t x392 = INT16_MAX;
int32_t t97 = 102;
volatile int8_t x394 = INT8_MIN;
int32_t x398 = INT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int16_t x2 = INT16_MAX;
	volatile int16_t x3 = INT16_MIN;
	static int8_t x4 = 0;
	volatile int64_t t0 = 3927270LL;

	t0 = (x1&((x2<=x3)<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 0U;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 0U;
	int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = 318176;

	t1 = (x5&((x6<=x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 348U;
	uint8_t x10 = 44U;
	int32_t x11 = -28;

	t2 = (x9&((x10<=x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MAX;
	int32_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	static int8_t x16 = -1;
	static int32_t t3 = -216065878;

	t3 = (x13&((x14<=x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 0;
	static int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 1;

	t4 = (x17&((x18<=x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -79014;
	int64_t x22 = 1LL;
	uint8_t x23 = 98U;
	static int64_t x24 = 26729396LL;

	t5 = (x21&((x22<=x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int16_t x26 = INT16_MIN;
	volatile uint32_t x27 = 83U;
	int64_t x28 = INT64_MAX;
	static int32_t t6 = 8617654;

	t6 = (x25&((x26<=x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x30 = INT16_MIN;
	volatile int64_t x31 = -1LL;
	int16_t x32 = -7333;

	t7 = (x29&((x30<=x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = 567;
	static int32_t x34 = -1;
	static volatile uint16_t x35 = 2805U;
	volatile int32_t t8 = -45266;

	t8 = (x33&((x34<=x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int8_t x38 = 0;
	int16_t x40 = INT16_MIN;
	static uint64_t t9 = 168092552382173061LLU;

	t9 = (x37&((x38<=x39)<x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int32_t x42 = -1;
	static int64_t x43 = INT64_MIN;
	int32_t x44 = -1;
	volatile int32_t t10 = 114;

	t10 = (x41&((x42<=x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 876LLU;
	uint16_t x46 = 1U;
	volatile int8_t x47 = -5;
	int8_t x48 = INT8_MIN;
	volatile uint64_t t11 = 6751025721765547810LLU;

	t11 = (x45&((x46<=x47)<x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	int64_t x50 = -1LL;
	int32_t x51 = INT32_MIN;

	t12 = (x49&((x50<=x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x56 = -15830;
	volatile int32_t t13 = -11;

	t13 = (x53&((x54<=x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = UINT64_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	static int8_t x60 = INT8_MIN;
	uint64_t t14 = 62490824047LLU;

	t14 = (x57&((x58<=x59)<x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = 3206;
	int32_t x63 = INT32_MAX;
	volatile int32_t x64 = INT32_MAX;

	t15 = (x61&((x62<=x63)<x64));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 101U;
	uint64_t x66 = 73314LLU;
	int64_t x67 = INT64_MIN;
	int8_t x68 = INT8_MAX;

	t16 = (x65&((x66<=x67)<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	uint64_t x71 = 35926633744LLU;
	int8_t x72 = -1;
	int32_t t17 = 30655447;

	t17 = (x69&((x70<=x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = 500U;
	int8_t x75 = INT8_MAX;
	int8_t x76 = 1;
	static int64_t t18 = 61LL;

	t18 = (x73&((x74<=x75)<x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 270633561025161568LLU;
	int16_t x78 = INT16_MAX;
	int16_t x79 = INT16_MAX;
	static int32_t x80 = INT32_MIN;
	uint64_t t19 = 1358101645669005LLU;

	t19 = (x77&((x78<=x79)<x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 5U;
	volatile uint64_t x82 = 8789268464020050LLU;
	static volatile int8_t x83 = 8;

	t20 = (x81&((x82<=x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 5U;
	int32_t x87 = INT32_MIN;
	int64_t x88 = 53591LL;
	int32_t t21 = -44;

	t21 = (x85&((x86<=x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = 969428;

	t22 = (x89&((x90<=x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1442003329U;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 2;

	t23 = (x93&((x94<=x95)<x96));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = 46U;
	int64_t x98 = INT64_MAX;
	int8_t x99 = 19;
	static uint8_t x100 = UINT8_MAX;

	t24 = (x97&((x98<=x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	static int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -7;

	t25 = (x101&((x102<=x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -28;
	static volatile int16_t x106 = -135;
	volatile int32_t x107 = 273835;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 246;

	t26 = (x105&((x106<=x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int32_t x110 = INT32_MAX;
	int8_t x111 = 1;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t27 = 7758546LLU;

	t27 = (x109&((x110<=x111)<x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x114 = 59U;
	uint16_t x115 = 9231U;
	static volatile uint16_t x116 = 17U;
	int64_t t28 = -26546861LL;

	t28 = (x113&((x114<=x115)<x116));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static int32_t x119 = -1;
	int8_t x120 = 4;
	int32_t t29 = 1196;

	t29 = (x117&((x118<=x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -502;
	volatile int32_t x124 = INT32_MAX;
	volatile uint64_t t30 = 40722956LLU;

	t30 = (x121&((x122<=x123)<x124));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = 38;
	static uint64_t x127 = UINT64_MAX;
	int32_t x128 = 236695637;
	int64_t t31 = -3455LL;

	t31 = (x125&((x126<=x127)<x128));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x130 = INT32_MIN;
	int16_t x131 = -172;
	uint16_t x132 = UINT16_MAX;
	static int32_t t32 = 60309;

	t32 = (x129&((x130<=x131)<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	static volatile uint16_t x134 = 4509U;
	int32_t x135 = INT32_MIN;
	int32_t x136 = 374;
	int32_t t33 = -32714;

	t33 = (x133&((x134<=x135)<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -5;
	int8_t x138 = INT8_MIN;
	volatile int32_t x139 = INT32_MAX;
	volatile int32_t t34 = 9224109;

	t34 = (x137&((x138<=x139)<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	uint8_t x142 = 0U;
	static int64_t x144 = INT64_MIN;
	int32_t t35 = 588639903;

	t35 = (x141&((x142<=x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = 6638;

	t36 = (x145&((x146<=x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = 7611323;
	int8_t x151 = INT8_MIN;

	t37 = (x149&((x150<=x151)<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	volatile int32_t t38 = -5;

	t38 = (x153&((x154<=x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	int64_t x158 = 8470LL;
	int32_t x159 = -103370;
	uint8_t x160 = UINT8_MAX;

	t39 = (x157&((x158<=x159)<x160));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = -1;

	t40 = (x161&((x162<=x163)<x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = 423U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = -1;

	t41 = (x165&((x166<=x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	uint8_t x170 = UINT8_MAX;
	uint16_t x171 = 1U;
	static uint16_t x172 = UINT16_MAX;

	t42 = (x169&((x170<=x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 1;
	volatile uint64_t x174 = 5335376690498875027LLU;
	uint32_t x175 = 4U;
	int8_t x176 = 0;
	volatile int32_t t43 = -6;

	t43 = (x173&((x174<=x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x179 = 871U;
	int8_t x180 = -1;
	static uint32_t t44 = 9158U;

	t44 = (x177&((x178<=x179)<x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	static int8_t x182 = INT8_MAX;
	static uint64_t x184 = 431550LLU;

	t45 = (x181&((x182<=x183)<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = INT64_MIN;
	uint32_t x187 = UINT32_MAX;
	int8_t x188 = INT8_MIN;

	t46 = (x185&((x186<=x187)<x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MAX;
	uint32_t x191 = UINT32_MAX;
	uint8_t x192 = 1U;
	static int32_t t47 = 72;

	t47 = (x189&((x190<=x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MAX;
	uint16_t x194 = UINT16_MAX;
	volatile int32_t t48 = 1822;

	t48 = (x193&((x194<=x195)<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	uint8_t x198 = 36U;
	uint8_t x199 = UINT8_MAX;
	volatile int8_t x200 = 0;

	t49 = (x197&((x198<=x199)<x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 192489132U;
	volatile int32_t x202 = -10194;
	uint16_t x203 = UINT16_MAX;
	uint8_t x204 = UINT8_MAX;

	t50 = (x201&((x202<=x203)<x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = 2050572253939281883LL;
	static int64_t x207 = INT64_MIN;
	uint64_t x208 = 949591610405778LLU;
	volatile int64_t t51 = 565760504807LL;

	t51 = (x205&((x206<=x207)<x208));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = -1;
	static volatile int32_t x210 = -1;
	uint32_t x211 = 2910U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -4586061;

	t52 = (x209&((x210<=x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int8_t x216 = -10;

	t53 = (x213&((x214<=x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static volatile int32_t x218 = -9644748;
	volatile uint8_t x219 = 94U;
	int8_t x220 = 14;
	int64_t t54 = -50693506050LL;

	t54 = (x217&((x218<=x219)<x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = -1;
	uint8_t x222 = UINT8_MAX;
	uint16_t x224 = UINT16_MAX;
	volatile int32_t t55 = 1;

	t55 = (x221&((x222<=x223)<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = 22631646283867LLU;
	int32_t x227 = INT32_MAX;
	uint16_t x228 = 4U;
	int64_t t56 = 299903559866916LL;

	t56 = (x225&((x226<=x227)<x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x231 = INT32_MIN;
	volatile int8_t x232 = -1;

	t57 = (x229&((x230<=x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = -225477;
	static int32_t x236 = -7322;
	static volatile int64_t t58 = -11956035LL;

	t58 = (x233&((x234<=x235)<x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static int64_t x239 = -14340928786LL;
	uint16_t x240 = 36U;
	static int32_t t59 = 245523520;

	t59 = (x237&((x238<=x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	int32_t t60 = 5458;

	t60 = (x241&((x242<=x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MAX;
	int64_t x247 = 28924466230066502LL;
	static int64_t x248 = INT64_MAX;
	volatile int32_t t61 = -13204911;

	t61 = (x245&((x246<=x247)<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -484;
	uint16_t x250 = 3760U;
	int16_t x251 = INT16_MIN;
	int64_t x252 = INT64_MAX;
	int32_t t62 = -169840;

	t62 = (x249&((x250<=x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x254 = 1U;
	uint32_t x255 = 117648U;
	uint8_t x256 = 47U;
	static volatile int32_t t63 = -48200;

	t63 = (x253&((x254<=x255)<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -3;
	volatile int32_t x258 = 166078;
	int32_t x259 = -1;
	int32_t x260 = -1;
	volatile int32_t t64 = -2908;

	t64 = (x257&((x258<=x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = -1LL;
	uint8_t x263 = 0U;
	int8_t x264 = -1;
	static volatile int32_t t65 = 3;

	t65 = (x261&((x262<=x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = 4596LL;
	int32_t x267 = INT32_MIN;
	volatile int32_t x268 = INT32_MAX;
	volatile int64_t t66 = 8924797400674714LL;

	t66 = (x265&((x266<=x267)<x268));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 186093U;
	int64_t x270 = -2087LL;
	int16_t x272 = 272;
	uint32_t t67 = 140343948U;

	t67 = (x269&((x270<=x271)<x272));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = -573862358;
	int32_t x274 = 21462333;
	static int8_t x275 = -7;
	int32_t t68 = -4002;

	t68 = (x273&((x274<=x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 750U;
	int8_t x278 = INT8_MAX;
	int8_t x279 = -1;
	static uint32_t x280 = 3187U;
	int32_t t69 = -2;

	t69 = (x277&((x278<=x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 89660175U;
	static uint8_t x283 = UINT8_MAX;
	volatile uint8_t x284 = UINT8_MAX;
	volatile uint32_t t70 = 3371983U;

	t70 = (x281&((x282<=x283)<x284));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	volatile uint64_t x286 = 796188943179LLU;

	t71 = (x285&((x286<=x287)<x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = UINT32_MAX;
	volatile int64_t x292 = 9762886LL;
	volatile int64_t t72 = 113923200137016268LL;

	t72 = (x289&((x290<=x291)<x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x293 = INT32_MIN;
	static int8_t x294 = -10;
	static int32_t x295 = INT32_MAX;
	volatile uint64_t x296 = 4453429014369LLU;
	static int32_t t73 = 262210433;

	t73 = (x293&((x294<=x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int16_t x298 = -1;
	uint64_t x300 = 34971579013190815LLU;
	int64_t t74 = 158319LL;

	t74 = (x297&((x298<=x299)<x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = UINT8_MAX;
	uint32_t x302 = UINT32_MAX;
	uint16_t x303 = 1U;
	int64_t x304 = INT64_MIN;

	t75 = (x301&((x302<=x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -1;
	uint16_t x306 = 593U;
	static int8_t x307 = INT8_MIN;
	uint8_t x308 = 47U;
	static int32_t t76 = 1;

	t76 = (x305&((x306<=x307)<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int16_t x310 = -1;
	static int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;
	volatile int32_t t77 = 51034649;

	t77 = (x309&((x310<=x311)<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	uint8_t x314 = 33U;
	int16_t x315 = INT16_MIN;
	uint8_t x316 = 4U;
	volatile int32_t t78 = 68709;

	t78 = (x313&((x314<=x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile uint64_t x319 = 98LLU;
	volatile int32_t t79 = 4333249;

	t79 = (x317&((x318<=x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -71;
	int64_t x322 = INT64_MAX;
	uint64_t x323 = UINT64_MAX;
	static int8_t x324 = INT8_MIN;

	t80 = (x321&((x322<=x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 2U;
	int32_t x326 = -32;
	int32_t x327 = INT32_MAX;
	static int16_t x328 = INT16_MAX;
	volatile int32_t t81 = -35;

	t81 = (x325&((x326<=x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -1;

	t82 = (x329&((x330<=x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	static uint8_t x335 = UINT8_MAX;
	uint8_t x336 = 0U;

	t83 = (x333&((x334<=x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	uint8_t x339 = 5U;
	uint64_t x340 = 463918233727LLU;
	int32_t t84 = 3;

	t84 = (x337&((x338<=x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = -30;
	int32_t x343 = INT32_MAX;
	static volatile int32_t t85 = 4147;

	t85 = (x341&((x342<=x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	static int8_t x348 = INT8_MIN;

	t86 = (x345&((x346<=x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = INT8_MIN;
	uint32_t x351 = 60353U;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t87 = -129932;

	t87 = (x349&((x350<=x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MIN;
	int64_t t88 = 114946712492016195LL;

	t88 = (x353&((x354<=x355)<x356));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x359 = INT64_MIN;
	int8_t x360 = -1;

	t89 = (x357&((x358<=x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = 49;
	uint32_t x363 = 97460U;
	int32_t x364 = INT32_MAX;
	static volatile int64_t t90 = -14892914858LL;

	t90 = (x361&((x362<=x363)<x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 281769699U;
	int64_t x366 = INT64_MAX;
	int32_t x368 = INT32_MAX;

	t91 = (x365&((x366<=x367)<x368));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x370 = 1U;
	static uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 209;

	t92 = (x369&((x370<=x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = INT8_MIN;
	int64_t x374 = INT64_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 1746;

	t93 = (x373&((x374<=x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 0U;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t94 = 6138615;

	t94 = (x377&((x378<=x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x382 = 428U;
	uint64_t x383 = UINT64_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t95 = -199123590299LL;

	t95 = (x381&((x382<=x383)<x384));

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	int16_t x386 = INT16_MAX;
	int64_t x387 = -1LL;
	static volatile uint16_t x388 = UINT16_MAX;

	t96 = (x385&((x386<=x387)<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = UINT16_MAX;
	uint64_t x391 = 376923LLU;

	t97 = (x389&((x390<=x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 63U;
	uint16_t x395 = 1U;
	int16_t x396 = INT16_MAX;
	volatile uint32_t t98 = 10354U;

	t98 = (x393&((x394<=x395)<x396));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int8_t x399 = 7;
	static uint16_t x400 = 41U;
	volatile int32_t t99 = -15348;

	t99 = (x397&((x398<=x399)<x400));

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

