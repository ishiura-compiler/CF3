#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x17 = -1;
int16_t x21 = INT16_MIN;
static volatile int32_t t5 = 55889;
int16_t x27 = -1;
int32_t t7 = -27970;
static int32_t t8 = -50846;
volatile uint8_t x39 = UINT8_MAX;
uint8_t x41 = 17U;
static volatile int8_t x52 = INT8_MAX;
int64_t x57 = -2756LL;
int32_t x69 = 3;
int64_t x74 = 127535730888LL;
int32_t t18 = 62407118;
static int8_t x77 = 25;
static volatile int16_t x80 = INT16_MIN;
volatile int32_t t19 = -21228;
volatile uint64_t x82 = UINT64_MAX;
static volatile uint64_t x85 = UINT64_MAX;
static uint64_t x88 = UINT64_MAX;
int8_t x97 = INT8_MAX;
static int64_t x100 = -774175LL;
int64_t x114 = INT64_MAX;
int32_t t27 = 556;
int8_t x118 = -1;
volatile int64_t x122 = -1LL;
int8_t x125 = INT8_MIN;
int8_t x126 = INT8_MIN;
int32_t x127 = INT32_MIN;
int8_t x132 = -1;
int32_t t31 = -575320561;
int16_t x141 = -521;
uint16_t x143 = UINT16_MAX;
int32_t x144 = INT32_MAX;
volatile int32_t t34 = -3299;
static int32_t x151 = INT32_MIN;
static volatile uint8_t x152 = 32U;
int32_t t36 = -104046211;
uint64_t x158 = 128826934605918LLU;
int16_t x159 = INT16_MIN;
int32_t t40 = 23574;
int32_t x169 = INT32_MAX;
uint16_t x171 = 210U;
int8_t x172 = 2;
volatile int32_t t42 = -15;
volatile int8_t x180 = INT8_MAX;
volatile int8_t x181 = INT8_MIN;
int32_t t44 = 879;
uint8_t x185 = UINT8_MAX;
int8_t x187 = -19;
int16_t x188 = -1;
int8_t x191 = INT8_MIN;
int8_t x195 = INT8_MIN;
int32_t x196 = INT32_MIN;
int32_t t47 = -906;
int64_t x197 = -174968244LL;
uint64_t x198 = 1877LLU;
volatile int32_t t48 = -6324893;
uint8_t x205 = UINT8_MAX;
volatile int64_t x216 = INT64_MIN;
static uint64_t x218 = 609551506115LLU;
int32_t x220 = -165931;
static uint8_t x233 = 12U;
uint64_t x237 = UINT64_MAX;
int8_t x240 = INT8_MIN;
uint8_t x243 = UINT8_MAX;
static int64_t x244 = INT64_MIN;
uint8_t x245 = 10U;
int32_t t59 = 26441;
int8_t x250 = 1;
int16_t x255 = 220;
int64_t x259 = INT64_MAX;
uint64_t x260 = UINT64_MAX;
int64_t x266 = 70253893415417913LL;
int8_t x268 = INT8_MIN;
volatile int32_t t69 = -7203;
uint16_t x292 = UINT16_MAX;
int64_t x294 = -1LL;
volatile int64_t x298 = INT64_MAX;
volatile int32_t x299 = -422676;
static int32_t x307 = -1;
volatile uint32_t x314 = 3077U;
uint8_t x320 = UINT8_MAX;
volatile int16_t x338 = -1;
uint64_t x341 = 14837354168090423LLU;
int8_t x346 = -1;
uint32_t x356 = 14535096U;
volatile int32_t t85 = 28393;
int32_t x361 = -210;
uint32_t x362 = UINT32_MAX;
int16_t x365 = INT16_MIN;
volatile int32_t t88 = 532439949;
int32_t x371 = -246;
int32_t t89 = -89774676;
volatile int64_t x376 = -840LL;
volatile int32_t x377 = -91607055;
volatile int32_t t91 = 0;
int16_t x383 = INT16_MAX;
int64_t x388 = -3545695871482218LL;
static volatile int32_t t93 = 21;
volatile int32_t t94 = -85568;
int16_t x400 = 3;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint32_t x2 = 2082U;
	int64_t x3 = INT64_MAX;
	volatile uint64_t x4 = 50407713039LLU;
	static int32_t t0 = -17;

	t0 = (((x1&x2)-x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	uint8_t x6 = 9U;
	volatile uint8_t x7 = 0U;
	int64_t x8 = -1LL;
	volatile int32_t t1 = 24063510;

	t1 = (((x5&x6)-x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static int8_t x10 = INT8_MIN;
	static uint32_t x11 = 389U;
	int32_t x12 = INT32_MAX;
	volatile int32_t t2 = -4440329;

	t2 = (((x9&x10)-x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 4;
	uint32_t x14 = 10U;
	static int64_t x15 = INT64_MAX;
	int64_t x16 = -2921656451680LL;
	volatile int32_t t3 = 1;

	t3 = (((x13&x14)-x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 21258510U;
	int32_t x19 = INT32_MIN;
	int32_t x20 = 21;
	volatile int32_t t4 = -2;

	t4 = (((x17&x18)-x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = -1LL;
	int16_t x23 = 925;
	uint64_t x24 = 867033LLU;

	t5 = (((x21&x22)-x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 2U;
	int8_t x26 = INT8_MIN;
	volatile int32_t x28 = -1;
	static int32_t t6 = 408934663;

	t6 = (((x25&x26)-x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 346;
	int16_t x30 = 54;
	uint32_t x31 = 943U;
	int32_t x32 = 816625519;

	t7 = (((x29&x30)-x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 110U;
	int8_t x34 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	int32_t x36 = INT32_MIN;

	t8 = (((x33&x34)-x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 3U;
	int64_t x38 = INT64_MIN;
	uint16_t x40 = 0U;
	static volatile int32_t t9 = 114156204;

	t9 = (((x37&x38)-x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	uint8_t x44 = 2U;
	int32_t t10 = 7;

	t10 = (((x41&x42)-x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 4;
	uint16_t x46 = UINT16_MAX;
	uint8_t x47 = 2U;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 0;

	t11 = (((x45&x46)-x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static int64_t x50 = -1LL;
	static uint8_t x51 = UINT8_MAX;
	int32_t t12 = -161683213;

	t12 = (((x49&x50)-x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 46;
	uint16_t x54 = UINT16_MAX;
	uint64_t x55 = 1087671728575257169LLU;
	int32_t x56 = -1;
	volatile int32_t t13 = 1575073;

	t13 = (((x53&x54)-x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -439721999;
	int32_t x59 = -45420;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = 28;

	t14 = (((x57&x58)-x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 53897515U;
	int16_t x62 = INT16_MAX;
	volatile int8_t x63 = -28;
	static int8_t x64 = -1;
	static int32_t t15 = 3642342;

	t15 = (((x61&x62)-x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 14364;
	uint64_t x66 = UINT64_MAX;
	int16_t x67 = INT16_MAX;
	static int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = 7;

	t16 = (((x65&x66)-x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = 1024245382LL;
	volatile int16_t x71 = -5377;
	int8_t x72 = 49;
	volatile int32_t t17 = 126394443;

	t17 = (((x69&x70)-x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x73 = 1432281936LLU;
	int32_t x75 = -35287;
	int16_t x76 = -2818;

	t18 = (((x73&x74)-x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 1925U;
	int8_t x79 = INT8_MIN;

	t19 = (((x77&x78)-x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static volatile int64_t x83 = 33826351273577692LL;
	volatile int64_t x84 = -1LL;
	volatile int32_t t20 = 164266648;

	t20 = (((x81&x82)-x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = UINT16_MAX;
	uint32_t x87 = UINT32_MAX;
	static int32_t t21 = 134;

	t21 = (((x85&x86)-x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 5106U;
	int64_t x94 = INT64_MIN;
	int16_t x95 = -4;
	int64_t x96 = INT64_MAX;
	static int32_t t22 = -7;

	t22 = (((x93&x94)-x95)<x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = INT32_MAX;
	volatile int16_t x99 = INT16_MIN;
	static int32_t t23 = 10964213;

	t23 = (((x97&x98)-x99)<x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MIN;
	int8_t x102 = -29;
	int64_t x103 = 1564966037LL;
	static uint64_t x104 = UINT64_MAX;
	static int32_t t24 = -3108496;

	t24 = (((x101&x102)-x103)<x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MIN;
	int32_t x107 = -132764964;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -288199;

	t25 = (((x105&x106)-x107)<x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -3;
	volatile int32_t x110 = -4;
	uint64_t x111 = UINT64_MAX;
	static int32_t x112 = INT32_MAX;
	int32_t t26 = 4130;

	t26 = (((x109&x110)-x111)<x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	static int32_t x115 = -7576303;
	volatile int64_t x116 = INT64_MIN;

	t27 = (((x113&x114)-x115)<x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = -1LL;
	int32_t x119 = 25;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = 22;

	t28 = (((x117&x118)-x119)<x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -56LL;
	int64_t x123 = -1LL;
	volatile int16_t x124 = INT16_MIN;
	volatile int32_t t29 = 152614;

	t29 = (((x121&x122)-x123)<x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x128 = 0U;
	int32_t t30 = -8180047;

	t30 = (((x125&x126)-x127)<x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 27U;
	int8_t x130 = INT8_MAX;
	int8_t x131 = -1;

	t31 = (((x129&x130)-x131)<x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 7899;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 7U;
	uint16_t x136 = UINT16_MAX;
	int32_t t32 = -1;

	t32 = (((x133&x134)-x135)<x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x137 = 17149081LLU;
	static int16_t x138 = -5;
	volatile uint8_t x139 = UINT8_MAX;
	static int32_t x140 = INT32_MIN;
	int32_t t33 = 46;

	t33 = (((x137&x138)-x139)<x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x142 = 1056937786LLU;

	t34 = (((x141&x142)-x143)<x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MAX;
	static int64_t x146 = INT64_MIN;
	int16_t x147 = INT16_MIN;
	volatile int32_t x148 = -1;
	int32_t t35 = -1828127;

	t35 = (((x145&x146)-x147)<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint64_t x150 = UINT64_MAX;

	t36 = (((x149&x150)-x151)<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x153 = INT16_MAX;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 60U;
	uint64_t x156 = 5180LLU;
	int32_t t37 = -2563;

	t37 = (((x153&x154)-x155)<x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 14908419762397215LL;
	volatile uint16_t x160 = 666U;
	volatile int32_t t38 = 31959;

	t38 = (((x157&x158)-x159)<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = UINT32_MAX;
	int8_t x162 = INT8_MAX;
	int16_t x163 = 57;
	static int8_t x164 = INT8_MIN;
	int32_t t39 = 87024;

	t39 = (((x161&x162)-x163)<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -1;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;

	t40 = (((x165&x166)-x167)<x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x170 = 17252LLU;
	volatile int32_t t41 = -8;

	t41 = (((x169&x170)-x171)<x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x173 = 21328LLU;
	volatile int64_t x174 = INT64_MAX;
	int32_t x175 = INT32_MAX;
	int8_t x176 = 0;

	t42 = (((x173&x174)-x175)<x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	int32_t x178 = INT32_MAX;
	uint8_t x179 = UINT8_MAX;
	static int32_t t43 = -46583936;

	t43 = (((x177&x178)-x179)<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = INT16_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile int16_t x184 = 1;

	t44 = (((x181&x182)-x183)<x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x186 = 45251432849620809LL;
	static volatile int32_t t45 = 85;

	t45 = (((x185&x186)-x187)<x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	uint64_t x190 = 344765330LLU;
	int8_t x192 = INT8_MIN;
	int32_t t46 = -105;

	t46 = (((x189&x190)-x191)<x192);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = 225;
	static volatile int64_t x194 = INT64_MAX;

	t47 = (((x193&x194)-x195)<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x199 = -1;
	static int64_t x200 = -1LL;

	t48 = (((x197&x198)-x199)<x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 56U;
	uint64_t x202 = 4953977475375LLU;
	volatile int8_t x203 = -4;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t49 = 192364926;

	t49 = (((x201&x202)-x203)<x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x206 = 11U;
	uint64_t x207 = UINT64_MAX;
	static int64_t x208 = INT64_MAX;
	int32_t t50 = -2043;

	t50 = (((x205&x206)-x207)<x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -103;
	volatile int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MIN;
	static uint32_t x212 = 214488862U;
	volatile int32_t t51 = -25;

	t51 = (((x209&x210)-x211)<x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = 0;
	uint32_t x215 = 1769648023U;
	int32_t t52 = -776;

	t52 = (((x213&x214)-x215)<x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x217 = 189647831081056LLU;
	int32_t x219 = INT32_MAX;
	static int32_t t53 = -42;

	t53 = (((x217&x218)-x219)<x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -1;
	int32_t x222 = -1;
	uint32_t x223 = 95754U;
	uint64_t x224 = 3270LLU;
	static volatile int32_t t54 = -48888272;

	t54 = (((x221&x222)-x223)<x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x229 = 0;
	static int32_t x230 = -15;
	uint32_t x231 = 310U;
	uint32_t x232 = 8311U;
	volatile int32_t t55 = -3466877;

	t55 = (((x229&x230)-x231)<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x234 = INT8_MIN;
	volatile int32_t x235 = -13;
	volatile int32_t x236 = INT32_MIN;
	int32_t t56 = 254269;

	t56 = (((x233&x234)-x235)<x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x238 = INT16_MAX;
	volatile int16_t x239 = INT16_MIN;
	volatile int32_t t57 = 159046347;

	t57 = (((x237&x238)-x239)<x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x241 = UINT32_MAX;
	volatile int8_t x242 = INT8_MIN;
	volatile int32_t t58 = 26294315;

	t58 = (((x241&x242)-x243)<x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x246 = 1039734153;
	int64_t x247 = -1LL;
	volatile uint8_t x248 = 44U;

	t59 = (((x245&x246)-x247)<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x249 = INT8_MIN;
	static uint8_t x251 = 28U;
	uint64_t x252 = UINT64_MAX;
	int32_t t60 = 7260;

	t60 = (((x249&x250)-x251)<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x253 = 1766887323U;
	int64_t x254 = -17979684880LL;
	int8_t x256 = 3;
	volatile int32_t t61 = -6509;

	t61 = (((x253&x254)-x255)<x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x258 = 16952U;
	volatile int32_t t62 = -65;

	t62 = (((x257&x258)-x259)<x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x261 = INT64_MIN;
	uint32_t x262 = UINT32_MAX;
	static volatile int32_t x263 = INT32_MIN;
	uint32_t x264 = 4124091U;
	int32_t t63 = 9003599;

	t63 = (((x261&x262)-x263)<x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = -1;
	volatile uint8_t x267 = 21U;
	int32_t t64 = 1884;

	t64 = (((x265&x266)-x267)<x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = INT64_MIN;
	int64_t x271 = -1LL;
	static volatile int64_t x272 = -1LL;
	volatile int32_t t65 = 0;

	t65 = (((x269&x270)-x271)<x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = INT64_MAX;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t66 = 9910;

	t66 = (((x273&x274)-x275)<x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MIN;
	static int64_t x279 = -1LL;
	static uint8_t x280 = UINT8_MAX;
	int32_t t67 = 10;

	t67 = (((x277&x278)-x279)<x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 6961217U;
	uint64_t x282 = 1674073814664346LLU;
	static int32_t x283 = 4193143;
	int8_t x284 = 1;
	volatile int32_t t68 = 33056835;

	t68 = (((x281&x282)-x283)<x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MIN;
	volatile uint32_t x288 = 398604U;

	t69 = (((x285&x286)-x287)<x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x289 = 3U;
	int8_t x290 = -3;
	static volatile int32_t x291 = INT32_MAX;
	int32_t t70 = -183741027;

	t70 = (((x289&x290)-x291)<x292);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = 121;
	volatile uint8_t x295 = 1U;
	int8_t x296 = -1;
	int32_t t71 = 1;

	t71 = (((x293&x294)-x295)<x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x297 = -1554918;
	static uint8_t x300 = 22U;
	int32_t t72 = -868374853;

	t72 = (((x297&x298)-x299)<x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x301 = UINT8_MAX;
	volatile uint32_t x302 = 119112730U;
	int64_t x303 = -43444750LL;
	uint32_t x304 = UINT32_MAX;
	int32_t t73 = -205604;

	t73 = (((x301&x302)-x303)<x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x305 = INT64_MIN;
	int16_t x306 = -1;
	int64_t x308 = 8145907045049233LL;
	volatile int32_t t74 = 1;

	t74 = (((x305&x306)-x307)<x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 55U;
	int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	static int32_t t75 = -4;

	t75 = (((x309&x310)-x311)<x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x313 = 17471323LL;
	int32_t x315 = 5035693;
	static uint32_t x316 = UINT32_MAX;
	volatile int32_t t76 = 5;

	t76 = (((x313&x314)-x315)<x316);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = UINT8_MAX;
	uint32_t x318 = 1137886116U;
	uint16_t x319 = 0U;
	volatile int32_t t77 = -7781;

	t77 = (((x317&x318)-x319)<x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x321 = INT16_MAX;
	static uint8_t x322 = 0U;
	int16_t x323 = INT16_MIN;
	static uint32_t x324 = 230440440U;
	static volatile int32_t t78 = 0;

	t78 = (((x321&x322)-x323)<x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = 6773266704797056LL;
	int32_t x326 = INT32_MAX;
	int64_t x327 = 2782366341996LL;
	uint8_t x328 = 8U;
	int32_t t79 = -1;

	t79 = (((x325&x326)-x327)<x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x329 = 24U;
	static int8_t x330 = -30;
	volatile int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MAX;
	volatile int32_t t80 = 60818384;

	t80 = (((x329&x330)-x331)<x332);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = -948;
	static int64_t x334 = -1LL;
	int8_t x335 = 44;
	volatile int64_t x336 = INT64_MIN;
	int32_t t81 = -86127366;

	t81 = (((x333&x334)-x335)<x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x337 = 2929582U;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t82 = -145918;

	t82 = (((x337&x338)-x339)<x340);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	static uint16_t x344 = 202U;
	int32_t t83 = 24730054;

	t83 = (((x341&x342)-x343)<x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x345 = INT16_MAX;
	int64_t x347 = -7250888416414LL;
	int16_t x348 = INT16_MIN;
	volatile int32_t t84 = -1061;

	t84 = (((x345&x346)-x347)<x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x353 = INT8_MIN;
	static volatile int16_t x354 = -22;
	uint64_t x355 = 218333997441899190LLU;

	t85 = (((x353&x354)-x355)<x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 32341U;
	volatile int8_t x358 = INT8_MIN;
	uint8_t x359 = 0U;
	int64_t x360 = -1LL;
	static int32_t t86 = 136955;

	t86 = (((x357&x358)-x359)<x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x363 = INT8_MAX;
	int16_t x364 = 705;
	int32_t t87 = -109601;

	t87 = (((x361&x362)-x363)<x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x366 = UINT8_MAX;
	volatile int8_t x367 = INT8_MIN;
	static uint32_t x368 = 16610931U;

	t88 = (((x365&x366)-x367)<x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = 2140U;
	uint64_t x370 = 16927736608LLU;
	int32_t x372 = INT32_MAX;

	t89 = (((x369&x370)-x371)<x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = -18;
	int32_t x375 = INT32_MIN;
	volatile int32_t t90 = -148169;

	t90 = (((x373&x374)-x375)<x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x378 = -4;
	uint16_t x379 = 27U;
	volatile int64_t x380 = INT64_MIN;

	t91 = (((x377&x378)-x379)<x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 7503625977028LLU;
	int32_t x382 = 443865;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t92 = -103;

	t92 = (((x381&x382)-x383)<x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x385 = 45944U;
	int32_t x386 = 1;
	int16_t x387 = INT16_MIN;

	t93 = (((x385&x386)-x387)<x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 113;
	int64_t x390 = -1LL;
	uint8_t x391 = 1U;
	int8_t x392 = INT8_MAX;

	t94 = (((x389&x390)-x391)<x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MIN;
	int8_t x396 = -1;
	volatile int32_t t95 = -1208973;

	t95 = (((x393&x394)-x395)<x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	volatile int64_t x398 = -1LL;
	int64_t x399 = 0LL;
	volatile int32_t t96 = -66749;

	t96 = (((x397&x398)-x399)<x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MIN;
	static volatile uint64_t x402 = 103905043LLU;
	int64_t x403 = 584404854494009474LL;
	int32_t x404 = INT32_MAX;
	int32_t t97 = 5613006;

	t97 = (((x401&x402)-x403)<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x405 = 354912633U;
	int16_t x406 = -1;
	int16_t x407 = INT16_MAX;
	uint32_t x408 = 1419U;
	int32_t t98 = 66368;

	t98 = (((x405&x406)-x407)<x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = INT16_MIN;
	uint64_t x410 = 264996LLU;
	static uint8_t x411 = 2U;
	uint16_t x412 = 1U;
	int32_t t99 = 94;

	t99 = (((x409&x410)-x411)<x412);

	if (t99 != 0) { NG(); } else { ; }
	
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

