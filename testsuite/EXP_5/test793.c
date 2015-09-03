#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 58;
static int16_t x11 = 107;
volatile uint64_t x22 = 632398709156181784LLU;
int32_t t6 = -99360;
int8_t x30 = INT8_MIN;
int64_t x31 = INT64_MIN;
volatile uint16_t x32 = UINT16_MAX;
int64_t x33 = 3874816914LL;
static volatile int32_t x37 = -125302138;
uint64_t t10 = 5348786514950LLU;
int64_t x49 = INT64_MIN;
int8_t x59 = 1;
int64_t x63 = 6LL;
volatile int32_t x70 = INT32_MIN;
volatile int32_t t18 = 5;
static int32_t x80 = INT32_MIN;
static volatile int32_t x88 = INT32_MIN;
static int8_t x95 = INT8_MIN;
int64_t x96 = INT64_MIN;
static volatile int32_t t23 = -3;
static int32_t x101 = -1;
static int16_t x104 = 127;
static int32_t x108 = INT32_MAX;
static volatile int32_t t25 = 0;
int64_t x114 = INT64_MIN;
int16_t x118 = -1;
int32_t t28 = 1;
int64_t x123 = INT64_MIN;
static volatile int8_t x124 = -1;
volatile int64_t t29 = INT64_MIN;
int32_t t30 = -2;
volatile uint32_t t31 = 942853U;
int32_t t32 = 1;
static uint32_t x144 = 23U;
int64_t x147 = -1LL;
static int64_t x149 = INT64_MIN;
int32_t x153 = 584407;
int8_t x156 = 39;
int32_t t38 = -3966421;
uint16_t x161 = 2U;
uint8_t x166 = 80U;
int32_t x169 = -1;
volatile int64_t t43 = -2223776110LL;
int16_t x182 = -1;
static volatile int8_t x186 = -1;
volatile int32_t t45 = 173066;
volatile int32_t t46 = 122;
int16_t x196 = INT16_MAX;
uint64_t x199 = 313LLU;
int8_t x200 = -1;
volatile int32_t t48 = -134;
int8_t x203 = 4;
uint64_t x205 = 13553467412LLU;
static int64_t x207 = INT64_MIN;
uint16_t x211 = 15U;
int32_t t52 = -27;
static int32_t x222 = INT32_MIN;
volatile int64_t x227 = 58731609LL;
uint8_t x230 = UINT8_MAX;
static volatile int8_t x253 = INT8_MIN;
uint8_t x255 = UINT8_MAX;
int32_t t62 = 60;
volatile uint32_t x259 = 5866069U;
volatile int32_t x261 = -1;
volatile int32_t t64 = 52;
int32_t x267 = -1;
uint16_t x268 = UINT16_MAX;
int16_t x284 = INT16_MIN;
uint16_t x285 = 5U;
int64_t x293 = INT64_MIN;
static uint64_t x298 = 29776307580LLU;
static volatile int64_t x302 = -1LL;
volatile int32_t t74 = -621;
int16_t x307 = INT16_MAX;
static volatile uint32_t t75 = 1505U;
int32_t x319 = INT32_MIN;
int8_t x324 = INT8_MAX;
volatile int32_t t79 = -107;
int32_t x340 = INT32_MIN;
volatile uint64_t x342 = 458775LLU;
volatile int32_t t83 = -138018830;
int16_t x347 = INT16_MAX;
static int32_t t84 = 2421868;
volatile int32_t t86 = -11696;
uint32_t x358 = 69U;
volatile int32_t x363 = INT32_MIN;
int16_t x367 = 255;
int64_t x382 = 51046226LL;
static int16_t x392 = 1;
uint16_t x396 = 12995U;
int64_t x401 = -1LL;
volatile uint16_t x405 = UINT16_MAX;
static int32_t t98 = 26104;


void f0(void) {
	int32_t x1 = 233;
	int16_t x2 = -1;
	uint64_t x3 = UINT64_MAX;
	volatile int32_t t0 = -1221938;

	t0 = (x1^((x2%x3)<x4));

	if (t0 != 232) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 29837838LLU;
	int64_t x6 = 1624460310299719668LL;
	static volatile uint64_t x7 = 38230LLU;
	volatile int32_t x8 = 554;
	static uint64_t t1 = 244104222LLU;

	t1 = (x5^((x6%x7)<x8));

	if (t1 != 29837838LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint32_t x10 = 131780U;
	static int16_t x12 = INT16_MIN;
	static int32_t t2 = 1;

	t2 = (x9^((x10%x11)<x12));

	if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int32_t x14 = -34;
	int8_t x15 = -1;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = 1;

	t3 = (x13^((x14%x15)<x16));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 1221805190645069LLU;
	static int64_t x18 = INT64_MIN;
	uint16_t x19 = 1873U;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t4 = 92814295397812LLU;

	t4 = (x17^((x18%x19)<x20));

	if (t4 != 1221805190645068LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 214203653U;
	int8_t x23 = INT8_MAX;
	int64_t x24 = INT64_MIN;
	uint32_t t5 = 44524U;

	t5 = (x21^((x22%x23)<x24));

	if (t5 != 214203652U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 59U;
	static uint32_t x26 = 1425U;
	uint64_t x27 = 14828309LLU;
	int64_t x28 = -1LL;

	t6 = (x25^((x26%x27)<x28));

	if (t6 != 58) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 814677U;
	static volatile uint32_t t7 = 607317415U;

	t7 = (x29^((x30%x31)<x32));

	if (t7 != 814676U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 5U;
	uint32_t x35 = 446U;
	int64_t x36 = -939LL;
	int64_t t8 = 92386206109LL;

	t8 = (x33^((x34%x35)<x36));

	if (t8 != 3874816914LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MAX;
	int8_t x39 = INT8_MAX;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 22159405;

	t9 = (x37^((x38%x39)<x40));

	if (t9 != -125302138) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 46798494984869031LLU;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = 17U;
	int16_t x44 = INT16_MIN;

	t10 = (x41^((x42%x43)<x44));

	if (t10 != 46798494984869030LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	static uint64_t x46 = 1344640LLU;
	volatile int32_t x47 = -1;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -37;

	t11 = (x45^((x46%x47)<x48));

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 493217521LL;
	uint16_t x51 = 6336U;
	uint8_t x52 = UINT8_MAX;
	volatile int64_t t12 = INT64_MIN;

	t12 = (x49^((x50%x51)<x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static int32_t x54 = 50889749;
	int8_t x55 = INT8_MAX;
	volatile uint8_t x56 = 2U;
	int32_t t13 = 27;

	t13 = (x53^((x54%x55)<x56));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	int16_t x60 = 391;
	volatile int64_t t14 = 22569157103LL;

	t14 = (x57^((x58%x59)<x60));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 1270121116844551LLU;
	int8_t x62 = INT8_MIN;
	static uint8_t x64 = 7U;
	uint64_t t15 = 259580004365115LLU;

	t15 = (x61^((x62%x63)<x64));

	if (t15 != 1270121116844550LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 22;
	int8_t x66 = 3;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -344364382;

	t16 = (x65^((x66%x67)<x68));

	if (t16 != 22) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 6U;
	static int32_t x71 = INT32_MIN;
	uint8_t x72 = 123U;
	int32_t t17 = 3793214;

	t17 = (x69^((x70%x71)<x72));

	if (t17 != 7) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = 839U;
	uint64_t x74 = UINT64_MAX;
	static int32_t x75 = INT32_MAX;
	int64_t x76 = -1LL;

	t18 = (x73^((x74%x75)<x76));

	if (t18 != 838) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	uint8_t x78 = 9U;
	static volatile int32_t x79 = -1;
	static volatile int32_t t19 = 1;

	t19 = (x77^((x78%x79)<x80));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 21195U;
	int16_t x82 = 325;
	volatile int8_t x83 = -11;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -5;

	t20 = (x81^((x82%x83)<x84));

	if (t20 != 21195) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 164610LLU;
	int64_t x86 = INT64_MAX;
	int16_t x87 = -1;
	uint64_t t21 = 462178534543941LLU;

	t21 = (x85^((x86%x87)<x88));

	if (t21 != 164610LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -1;
	int32_t x90 = INT32_MAX;
	int16_t x91 = 47;
	int64_t x92 = -1LL;
	int32_t t22 = 3;

	t22 = (x89^((x90%x91)<x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -97852244;
	uint64_t x94 = 4634540LLU;

	t23 = (x93^((x94%x95)<x96));

	if (t23 != -97852243) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	volatile int32_t t24 = -5641245;

	t24 = (x101^((x102%x103)<x104));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = INT16_MIN;
	volatile int16_t x106 = INT16_MIN;
	int16_t x107 = 6852;

	t25 = (x105^((x106%x107)<x108));

	if (t25 != -32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	static int8_t x110 = -15;
	static int16_t x111 = 554;
	int32_t x112 = -1;
	uint32_t t26 = 39U;

	t26 = (x109^((x110%x111)<x112));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x113 = 0;
	uint8_t x115 = 43U;
	int64_t x116 = -1LL;
	int32_t t27 = 31586145;

	t27 = (x113^((x114%x115)<x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = 373;
	volatile int8_t x119 = INT8_MIN;
	volatile int64_t x120 = INT64_MIN;

	t28 = (x117^((x118%x119)<x120));

	if (t28 != 373) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MAX;

	t29 = (x121^((x122%x123)<x124));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x125 = 11079;
	volatile uint32_t x126 = UINT32_MAX;
	int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MAX;

	t30 = (x125^((x126%x127)<x128));

	if (t30 != 11078) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 33912U;
	static int8_t x131 = INT8_MAX;
	volatile int8_t x132 = INT8_MIN;

	t31 = (x129^((x130%x131)<x132));

	if (t31 != 4294967294U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x133 = UINT16_MAX;
	int16_t x134 = -1;
	static volatile uint16_t x135 = 5301U;
	volatile int32_t x136 = INT32_MAX;

	t32 = (x133^((x134%x135)<x136));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 6378904789659LLU;
	int16_t x140 = 11;
	int32_t t33 = INT32_MIN;

	t33 = (x137^((x138%x139)<x140));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x141 = 1951556387168LLU;
	int64_t x142 = INT64_MIN;
	int16_t x143 = 1715;
	volatile uint64_t t34 = 7915LLU;

	t34 = (x141^((x142%x143)<x144));

	if (t34 != 1951556387169LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 2U;
	int32_t x146 = INT32_MIN;
	static volatile int32_t x148 = 79418;
	int32_t t35 = 3;

	t35 = (x145^((x146%x147)<x148));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = -1;
	int16_t x151 = -1;
	int64_t x152 = 7861990125LL;
	volatile int64_t t36 = -43802LL;

	t36 = (x149^((x150%x151)<x152));

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = INT16_MIN;
	static int64_t x155 = 1LL;
	int32_t t37 = 325;

	t37 = (x153^((x154%x155)<x156));

	if (t37 != 584406) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 27U;
	uint8_t x158 = UINT8_MAX;
	uint8_t x159 = 85U;
	int16_t x160 = -1;

	t38 = (x157^((x158%x159)<x160));

	if (t38 != 27) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x162 = UINT64_MAX;
	uint16_t x163 = 2U;
	static volatile int32_t x164 = -13847672;
	volatile int32_t t39 = 1683;

	t39 = (x161^((x162%x163)<x164));

	if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = 49;
	int16_t x167 = -1;
	volatile uint64_t x168 = 33054528318LLU;
	static int32_t t40 = 329731;

	t40 = (x165^((x166%x167)<x168));

	if (t40 != 48) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x170 = -234;
	uint8_t x171 = UINT8_MAX;
	static uint64_t x172 = UINT64_MAX;
	volatile int32_t t41 = -115185;

	t41 = (x169^((x170%x171)<x172));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = 139394999U;
	int64_t x174 = INT64_MAX;
	int64_t x175 = INT64_MIN;
	int32_t x176 = -8524825;
	volatile uint32_t t42 = 433313U;

	t42 = (x173^((x174%x175)<x176));

	if (t42 != 139394999U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	static int8_t x178 = -23;
	volatile int64_t x179 = 550LL;
	static volatile uint64_t x180 = UINT64_MAX;

	t43 = (x177^((x178%x179)<x180));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int8_t x183 = INT8_MIN;
	static int32_t x184 = INT32_MAX;
	volatile int64_t t44 = -7189878LL;

	t44 = (x181^((x182%x183)<x184));

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = 823;
	int8_t x187 = INT8_MAX;
	volatile int32_t x188 = INT32_MAX;

	t45 = (x185^((x186%x187)<x188));

	if (t45 != 822) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = UINT16_MAX;
	static int64_t x190 = -30LL;
	static volatile int16_t x191 = INT16_MIN;
	int64_t x192 = -1LL;

	t46 = (x189^((x190%x191)<x192));

	if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = UINT64_MAX;
	uint16_t x194 = 64U;
	static int8_t x195 = -2;
	static uint64_t t47 = 3059489556619LLU;

	t47 = (x193^((x194%x195)<x196));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -16310;
	static int16_t x198 = INT16_MAX;

	t48 = (x197^((x198%x199)<x200));

	if (t48 != -16309) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -1;
	static int32_t x202 = INT32_MIN;
	uint8_t x204 = 91U;
	int32_t t49 = -4;

	t49 = (x201^((x202%x203)<x204));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x206 = INT32_MIN;
	static uint64_t x208 = UINT64_MAX;
	uint64_t t50 = 1388302LLU;

	t50 = (x205^((x206%x207)<x208));

	if (t50 != 13553467413LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = 1211964;
	int64_t x210 = 191285232LL;
	static int16_t x212 = INT16_MIN;
	int32_t t51 = 228;

	t51 = (x209^((x210%x211)<x212));

	if (t51 != 1211964) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	static uint8_t x215 = UINT8_MAX;
	uint16_t x216 = 13U;

	t52 = (x213^((x214%x215)<x216));

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint32_t x218 = 29U;
	static volatile int32_t x219 = 257760552;
	volatile uint32_t x220 = UINT32_MAX;
	volatile uint32_t t53 = 2U;

	t53 = (x217^((x218%x219)<x220));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = 0;
	int64_t x223 = INT64_MIN;
	volatile int64_t x224 = INT64_MIN;
	int32_t t54 = 885;

	t54 = (x221^((x222%x223)<x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = INT32_MIN;
	volatile int8_t x226 = INT8_MIN;
	volatile uint64_t x228 = 19LLU;
	int32_t t55 = INT32_MIN;

	t55 = (x225^((x226%x227)<x228));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x229 = INT8_MIN;
	int16_t x231 = 14;
	volatile int64_t x232 = INT64_MAX;
	volatile int32_t t56 = 434;

	t56 = (x229^((x230%x231)<x232));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	uint8_t x235 = 7U;
	uint16_t x236 = 1882U;
	volatile int32_t t57 = 44;

	t57 = (x233^((x234%x235)<x236));

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = 163LL;
	int64_t x238 = -1LL;
	uint16_t x239 = 11U;
	static int32_t x240 = -1;
	volatile int64_t t58 = 3985704093793471LL;

	t58 = (x237^((x238%x239)<x240));

	if (t58 != 163LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = -1;
	int8_t x242 = 0;
	int64_t x243 = 47173848415516LL;
	static int8_t x244 = INT8_MAX;
	static int32_t t59 = 487379395;

	t59 = (x241^((x242%x243)<x244));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -1;
	uint16_t x246 = 1504U;
	int16_t x247 = INT16_MIN;
	int16_t x248 = -13604;
	static int32_t t60 = -113988;

	t60 = (x245^((x246%x247)<x248));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 15LLU;
	uint32_t x250 = 0U;
	uint8_t x251 = 1U;
	static int64_t x252 = 5267590395893LL;
	volatile uint64_t t61 = 2422892961071254LLU;

	t61 = (x249^((x250%x251)<x252));

	if (t61 != 14LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x254 = UINT64_MAX;
	int16_t x256 = INT16_MAX;

	t62 = (x253^((x254%x255)<x256));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x257 = -31;
	int64_t x258 = -24LL;
	uint8_t x260 = 18U;
	int32_t t63 = -15;

	t63 = (x257^((x258%x259)<x260));

	if (t63 != -32) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x262 = 9;
	uint8_t x263 = 8U;
	volatile int32_t x264 = INT32_MAX;

	t64 = (x261^((x262%x263)<x264));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x265 = INT64_MAX;
	volatile uint16_t x266 = 3872U;
	int64_t t65 = -98126450836LL;

	t65 = (x265^((x266%x267)<x268));

	if (t65 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = 1;
	static int64_t x270 = 872LL;
	int32_t x271 = -1;
	int16_t x272 = -8;
	volatile int32_t t66 = -1;

	t66 = (x269^((x270%x271)<x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MIN;
	static int32_t x274 = -1;
	int8_t x275 = -3;
	int64_t x276 = -1341822568576703LL;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x273^((x274%x275)<x276));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = UINT32_MAX;
	static int16_t x278 = -1;
	int64_t x279 = INT64_MAX;
	int32_t x280 = INT32_MIN;
	uint32_t t68 = UINT32_MAX;

	t68 = (x277^((x278%x279)<x280));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = INT32_MIN;
	uint32_t x282 = 528998277U;
	int8_t x283 = INT8_MIN;
	volatile int32_t t69 = 531594458;

	t69 = (x281^((x282%x283)<x284));

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x286 = 936278736428331LLU;
	int32_t x287 = -843;
	int32_t x288 = -1;
	int32_t t70 = 18042180;

	t70 = (x285^((x286%x287)<x288));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = 25;
	volatile int16_t x290 = 260;
	uint16_t x291 = 1885U;
	uint16_t x292 = 39U;
	int32_t t71 = -1;

	t71 = (x289^((x290%x291)<x292));

	if (t71 != 25) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x294 = INT32_MIN;
	int32_t x295 = 192975759;
	int32_t x296 = 7157;
	volatile int64_t t72 = -9635643LL;

	t72 = (x293^((x294%x295)<x296));

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MIN;
	static int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MIN;
	static int32_t t73 = -399545;

	t73 = (x297^((x298%x299)<x300));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x301 = 21U;
	static int8_t x303 = -1;
	uint32_t x304 = UINT32_MAX;

	t74 = (x301^((x302%x303)<x304));

	if (t74 != 20) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x305 = 1004U;
	int16_t x306 = -2;
	volatile int32_t x308 = INT32_MIN;

	t75 = (x305^((x306%x307)<x308));

	if (t75 != 1004U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = 749647017U;
	static volatile int8_t x310 = 12;
	uint32_t x311 = 492598496U;
	int32_t x312 = INT32_MIN;
	uint32_t t76 = 226108U;

	t76 = (x309^((x310%x311)<x312));

	if (t76 != 749647016U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int64_t x314 = INT64_MIN;
	uint64_t x315 = 106345106LLU;
	int64_t x316 = -1LL;
	uint32_t t77 = 7778328U;

	t77 = (x313^((x314%x315)<x316));

	if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = UINT64_MAX;
	int8_t x320 = -15;
	volatile int32_t t78 = -78130086;

	t78 = (x317^((x318%x319)<x320));

	if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 22;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MIN;

	t79 = (x321^((x322%x323)<x324));

	if (t79 != 22) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MAX;
	uint8_t x327 = 12U;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t80 = INT32_MAX;

	t80 = (x325^((x326%x327)<x328));

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = 0;
	int16_t x334 = -1754;
	int64_t x335 = INT64_MIN;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t81 = -62515;

	t81 = (x333^((x334%x335)<x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = -4;
	uint16_t x339 = 850U;
	volatile int32_t t82 = 5350;

	t82 = (x337^((x338%x339)<x340));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	int16_t x343 = -1;
	uint16_t x344 = 220U;

	t83 = (x341^((x342%x343)<x344));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x345 = INT8_MAX;
	uint8_t x346 = 56U;
	int8_t x348 = INT8_MAX;

	t84 = (x345^((x346%x347)<x348));

	if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x350 = 2;
	static int8_t x351 = INT8_MIN;
	int64_t x352 = -4755960441716544LL;
	volatile int32_t t85 = -2796;

	t85 = (x349^((x350%x351)<x352));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 42U;
	int8_t x354 = INT8_MIN;
	volatile int64_t x355 = INT64_MIN;
	uint16_t x356 = 6U;

	t86 = (x353^((x354%x355)<x356));

	if (t86 != 43) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x357 = 0;
	int8_t x359 = -5;
	int64_t x360 = 17312LL;
	static volatile int32_t t87 = -2964;

	t87 = (x357^((x358%x359)<x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	volatile uint64_t x364 = 2269051426849126843LLU;
	volatile int32_t t88 = 0;

	t88 = (x361^((x362%x363)<x364));

	if (t88 != 32766) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	static int16_t x366 = INT16_MAX;
	int32_t x368 = -1;
	static int32_t t89 = -1;

	t89 = (x365^((x366%x367)<x368));

	if (t89 != -32768) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = UINT8_MAX;
	uint8_t x370 = 3U;
	static int16_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile int32_t t90 = -20290149;

	t90 = (x369^((x370%x371)<x372));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x373 = INT64_MIN;
	volatile uint32_t x374 = 1448037536U;
	int16_t x375 = INT16_MAX;
	uint8_t x376 = UINT8_MAX;
	int64_t t91 = INT64_MIN;

	t91 = (x373^((x374%x375)<x376));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = INT32_MAX;
	static int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;
	volatile int32_t t92 = INT32_MAX;

	t92 = (x381^((x382%x383)<x384));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x385 = 7068U;
	uint64_t x386 = UINT64_MAX;
	static uint64_t x387 = UINT64_MAX;
	int64_t x388 = -1LL;
	volatile int32_t t93 = -27495458;

	t93 = (x385^((x386%x387)<x388));

	if (t93 != 7069) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = -1;
	int32_t x391 = INT32_MIN;
	int32_t t94 = 110;

	t94 = (x389^((x390%x391)<x392));

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x393 = 1;
	int16_t x394 = INT16_MIN;
	int32_t x395 = -9155786;
	int32_t t95 = -148470894;

	t95 = (x393^((x394%x395)<x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = 0;
	uint16_t x398 = 87U;
	volatile uint16_t x399 = 3992U;
	int16_t x400 = -1;
	int32_t t96 = 2;

	t96 = (x397^((x398%x399)<x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x402 = UINT32_MAX;
	volatile uint8_t x403 = 12U;
	int32_t x404 = 6116045;
	static int64_t t97 = -3549712645599904005LL;

	t97 = (x401^((x402%x403)<x404));

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x406 = 5086042541208266LLU;
	int32_t x407 = -1;
	volatile uint16_t x408 = UINT16_MAX;

	t98 = (x405^((x406%x407)<x408));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	int8_t x410 = -15;
	static volatile int64_t x411 = INT64_MIN;
	int8_t x412 = -1;
	volatile int32_t t99 = 16096;

	t99 = (x409^((x410%x411)<x412));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

