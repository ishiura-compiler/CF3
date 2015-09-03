#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1775;
int32_t x3 = INT32_MIN;
int64_t x6 = INT64_MIN;
volatile int16_t x12 = 12;
volatile int8_t x13 = INT8_MAX;
int64_t x15 = INT64_MAX;
int8_t x23 = -1;
static int16_t x24 = INT16_MIN;
int32_t x28 = -1;
int16_t x33 = INT16_MIN;
int32_t t8 = -1875472;
int32_t x45 = 410;
int8_t x51 = -1;
int64_t x55 = INT64_MAX;
volatile int32_t x58 = -39241063;
int8_t x60 = -1;
volatile int32_t t14 = 326;
int32_t t15 = 642651523;
int8_t x65 = INT8_MIN;
static int32_t t16 = 16449;
volatile int16_t x87 = INT16_MIN;
static volatile int32_t t21 = 16;
int32_t x93 = INT32_MIN;
int16_t x96 = 0;
int8_t x97 = 1;
int32_t x101 = 269821424;
static int16_t x103 = INT16_MAX;
int32_t x107 = -1;
static int64_t x120 = -15729767741LL;
int8_t x132 = INT8_MIN;
volatile int8_t x135 = -1;
int16_t x140 = INT16_MAX;
uint32_t x141 = 1U;
uint8_t x154 = 18U;
int8_t x163 = -1;
static int8_t x164 = -1;
static int8_t x168 = INT8_MAX;
int32_t x169 = INT32_MIN;
uint64_t x177 = UINT64_MAX;
int16_t x178 = -6;
uint32_t x181 = 251525425U;
int32_t x184 = -1;
int64_t x190 = INT64_MIN;
volatile int8_t x193 = INT8_MIN;
static volatile uint64_t x196 = 7983461LLU;
uint32_t x202 = 14288233U;
int64_t x204 = INT64_MIN;
int32_t t50 = -1;
int64_t x206 = 3328412243LL;
volatile int16_t x212 = INT16_MIN;
uint16_t x215 = UINT16_MAX;
uint8_t x219 = 14U;
volatile int32_t t54 = 96688310;
volatile uint32_t x224 = 7330U;
volatile int32_t t55 = -356825;
int8_t x226 = -36;
uint32_t x229 = 15480U;
volatile int32_t t57 = -115274;
static int64_t x234 = INT64_MIN;
volatile int32_t t58 = 93930;
int32_t x238 = 1838;
int64_t x244 = -1LL;
uint32_t x246 = 44U;
int32_t t62 = 65;
static uint32_t x255 = UINT32_MAX;
volatile int32_t t63 = -212531661;
int32_t x258 = INT32_MIN;
static volatile int32_t x261 = -2549;
uint32_t x262 = 39689662U;
volatile int32_t t65 = 211;
uint8_t x266 = 8U;
static volatile int32_t t66 = 5745;
int8_t x269 = 2;
static int64_t x271 = -1LL;
uint64_t x272 = 788016137LLU;
volatile int8_t x274 = INT8_MIN;
uint16_t x275 = 32430U;
volatile int32_t t68 = 254;
static int8_t x281 = 3;
int8_t x285 = -1;
uint16_t x291 = 45U;
static int32_t x293 = -1;
uint32_t x298 = 391825U;
int8_t x299 = INT8_MIN;
static int32_t t74 = 0;
static int32_t t75 = 3840;
uint64_t x309 = 6486LLU;
static int64_t x311 = -1LL;
int32_t t79 = 1;
int16_t x328 = INT16_MIN;
int32_t t81 = 55;
int16_t x338 = INT16_MIN;
int32_t x340 = -1;
static volatile int64_t x346 = 0LL;
int32_t x355 = 6;
int8_t x356 = 1;
volatile int32_t x366 = -35448;
int8_t x368 = INT8_MIN;
static volatile int16_t x375 = INT16_MAX;
int16_t x376 = INT16_MAX;
volatile int8_t x378 = INT8_MIN;
static int32_t t94 = -222787022;
volatile int64_t x385 = -1167553352844476LL;
int16_t x387 = -577;
static int8_t x388 = INT8_MAX;
int32_t t98 = 8;


void f0(void) {
	uint16_t x2 = 3U;
	static int8_t x4 = INT8_MIN;
	static int32_t t0 = -46818;

	t0 = (((x1|x2)==x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	uint32_t x7 = UINT32_MAX;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -7;

	t1 = (((x5|x6)==x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 13U;
	int64_t x10 = 10345LL;
	static volatile int16_t x11 = INT16_MIN;
	static volatile int32_t t2 = 50;

	t2 = (((x9|x10)==x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	int32_t x16 = -1;
	volatile int32_t t3 = 56999433;

	t3 = (((x13|x14)==x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	uint64_t x18 = 1953518LLU;
	int32_t x19 = 3;
	int64_t x20 = -7335LL;
	volatile int32_t t4 = 32044;

	t4 = (((x17|x18)==x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 3898;
	volatile int16_t x22 = 0;
	volatile int32_t t5 = 692384;

	t5 = (((x21|x22)==x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint8_t x26 = UINT8_MAX;
	static volatile uint32_t x27 = 240570U;
	int32_t t6 = 213868340;

	t6 = (((x25|x26)==x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x30 = UINT16_MAX;
	uint8_t x31 = 5U;
	uint64_t x32 = 822295561847658LLU;
	int32_t t7 = -841;

	t7 = (((x29|x30)==x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = INT8_MAX;
	int8_t x36 = -1;

	t8 = (((x33|x34)==x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 14390U;
	volatile uint8_t x39 = 2U;
	uint8_t x40 = 0U;
	int32_t t9 = 2925947;

	t9 = (((x37|x38)==x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	volatile uint32_t x42 = 60020219U;
	static uint8_t x43 = 1U;
	int8_t x44 = 4;
	int32_t t10 = -414;

	t10 = (((x41|x42)==x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -1;
	int8_t x47 = INT8_MIN;
	int32_t x48 = -15673161;
	int32_t t11 = 1;

	t11 = (((x45|x46)==x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1319231897U;
	uint16_t x50 = 15U;
	static int64_t x52 = INT64_MIN;
	static int32_t t12 = 35943469;

	t12 = (((x49|x50)==x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	int16_t x54 = 0;
	uint16_t x56 = 10521U;
	int32_t t13 = -11991;

	t13 = (((x53|x54)==x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	volatile int64_t x59 = -1LL;

	t14 = (((x57|x58)==x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = -1;
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	uint8_t x64 = UINT8_MAX;

	t15 = (((x61|x62)==x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -50229662433453LL;
	static int64_t x67 = INT64_MIN;
	int16_t x68 = INT16_MAX;

	t16 = (((x65|x66)==x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = 291750553;
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 18938U;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -597775250;

	t17 = (((x69|x70)==x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	int64_t x74 = INT64_MIN;
	volatile int64_t x75 = INT64_MIN;
	uint64_t x76 = 568189LLU;
	int32_t t18 = -984156080;

	t18 = (((x73|x74)==x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = -1;
	int32_t x78 = INT32_MAX;
	static int16_t x79 = -1;
	volatile uint64_t x80 = 25LLU;
	int32_t t19 = 1760062;

	t19 = (((x77|x78)==x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	static int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	static uint32_t x84 = 907U;
	static volatile int32_t t20 = 8079;

	t20 = (((x81|x82)==x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -1;
	int16_t x86 = 16;
	uint32_t x88 = 394087504U;

	t21 = (((x85|x86)==x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 960359LL;
	static volatile uint64_t x90 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	uint16_t x92 = 206U;
	static volatile int32_t t22 = 1227;

	t22 = (((x89|x90)==x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 3289446U;
	static uint64_t x95 = 2166254602702LLU;
	static int32_t t23 = -229;

	t23 = (((x93|x94)==x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = 260773015LL;
	uint64_t x99 = 408158825LLU;
	volatile int32_t x100 = 2;
	int32_t t24 = 870333;

	t24 = (((x97|x98)==x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = INT64_MIN;
	int8_t x104 = 37;
	int32_t t25 = 897;

	t25 = (((x101|x102)==x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 28;
	static volatile int8_t x106 = -13;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = -3026;

	t26 = (((x105|x106)==x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 229257U;
	volatile int32_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -13;

	t27 = (((x109|x110)==x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -3093916LL;
	int64_t x114 = -1LL;
	int32_t x115 = INT32_MAX;
	volatile int16_t x116 = -9;
	int32_t t28 = -31;

	t28 = (((x113|x114)==x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = -54604049;
	static int8_t x119 = INT8_MAX;
	volatile int32_t t29 = -1241703;

	t29 = (((x117|x118)==x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	static uint8_t x122 = 5U;
	static int16_t x123 = INT16_MAX;
	int16_t x124 = -176;
	static int32_t t30 = 116567809;

	t30 = (((x121|x122)==x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = INT64_MAX;
	int64_t x126 = -1LL;
	int64_t x127 = -1LL;
	volatile int64_t x128 = -1LL;
	static int32_t t31 = 16;

	t31 = (((x125|x126)==x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = -1;
	int32_t x130 = 44;
	static int64_t x131 = INT64_MIN;
	volatile int32_t t32 = -806069764;

	t32 = (((x129|x130)==x131)<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -199LL;
	static int64_t x134 = 46158553987902LL;
	int32_t x136 = 1065441;
	int32_t t33 = 28352;

	t33 = (((x133|x134)==x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = -1;
	uint8_t x139 = 2U;
	static volatile int32_t t34 = 124;

	t34 = (((x137|x138)==x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = INT8_MIN;
	static volatile int32_t x143 = INT32_MIN;
	int64_t x144 = 1109746LL;
	int32_t t35 = -1616289;

	t35 = (((x141|x142)==x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	static int8_t x146 = -1;
	uint64_t x147 = 62571LLU;
	uint32_t x148 = 336583U;
	volatile int32_t t36 = 15;

	t36 = (((x145|x146)==x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 30U;
	volatile uint64_t x150 = 14700891LLU;
	static int32_t x151 = 18646;
	static uint64_t x152 = 286823604754387LLU;
	volatile int32_t t37 = -500191;

	t37 = (((x149|x150)==x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 2U;
	int8_t x155 = 0;
	int8_t x156 = -3;
	volatile int32_t t38 = 245;

	t38 = (((x153|x154)==x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = 127623;
	int8_t x158 = INT8_MIN;
	uint8_t x159 = 0U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t39 = 24;

	t39 = (((x157|x158)==x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 1U;
	uint64_t x162 = UINT64_MAX;
	volatile int32_t t40 = 6007;

	t40 = (((x161|x162)==x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 106U;
	uint32_t x166 = UINT32_MAX;
	uint64_t x167 = UINT64_MAX;
	int32_t t41 = 83019696;

	t41 = (((x165|x166)==x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MIN;
	volatile int16_t x171 = -2;
	volatile uint8_t x172 = 47U;
	volatile int32_t t42 = -1;

	t42 = (((x169|x170)==x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 172U;
	int64_t x174 = INT64_MIN;
	int16_t x175 = 0;
	volatile uint64_t x176 = 1LLU;
	int32_t t43 = 709;

	t43 = (((x173|x174)==x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x179 = 1706720671142167LLU;
	static uint8_t x180 = 39U;
	volatile int32_t t44 = 153182;

	t44 = (((x177|x178)==x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	static uint8_t x183 = UINT8_MAX;
	static volatile int32_t t45 = 1;

	t45 = (((x181|x182)==x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = -248;
	static volatile uint16_t x187 = UINT16_MAX;
	static int16_t x188 = 4583;
	volatile int32_t t46 = 0;

	t46 = (((x185|x186)==x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 122539;
	int16_t x191 = INT16_MAX;
	int64_t x192 = INT64_MIN;
	int32_t t47 = -49868;

	t47 = (((x189|x190)==x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	int32_t x195 = -1;
	int32_t t48 = -447631;

	t48 = (((x193|x194)==x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = 44163;
	int32_t x198 = -25417;
	int64_t x199 = INT64_MAX;
	static int32_t x200 = INT32_MAX;
	int32_t t49 = 382623998;

	t49 = (((x197|x198)==x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static uint64_t x203 = UINT64_MAX;

	t50 = (((x201|x202)==x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 2439U;
	int64_t x207 = 343698046567108697LL;
	int16_t x208 = -1;
	static volatile int32_t t51 = -125;

	t51 = (((x205|x206)==x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = 29;
	uint16_t x211 = 0U;
	static int32_t t52 = -176063209;

	t52 = (((x209|x210)==x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 426683600840009LLU;
	int64_t x214 = INT64_MAX;
	static int16_t x216 = INT16_MIN;
	int32_t t53 = -56543252;

	t53 = (((x213|x214)==x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int64_t x218 = -131745234LL;
	int8_t x220 = -1;

	t54 = (((x217|x218)==x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -2027;
	volatile int16_t x222 = INT16_MAX;
	static volatile int8_t x223 = INT8_MAX;

	t55 = (((x221|x222)==x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 364LL;
	int32_t x227 = INT32_MIN;
	static int8_t x228 = INT8_MAX;
	int32_t t56 = -16229255;

	t56 = (((x225|x226)==x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x230 = -464;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;

	t57 = (((x229|x230)==x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = -1;
	int16_t x235 = -21;
	static int32_t x236 = -1;

	t58 = (((x233|x234)==x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	static int16_t x239 = INT16_MAX;
	volatile int32_t x240 = -13103;
	int32_t t59 = -1;

	t59 = (((x237|x238)==x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int16_t x242 = 9828;
	static uint16_t x243 = UINT16_MAX;
	int32_t t60 = -482;

	t60 = (((x241|x242)==x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	int16_t x247 = INT16_MIN;
	static int8_t x248 = 3;
	volatile int32_t t61 = -721314906;

	t61 = (((x245|x246)==x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	volatile int64_t x250 = 163LL;
	static int32_t x251 = 213980831;
	uint16_t x252 = 10016U;

	t62 = (((x249|x250)==x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 26;
	int32_t x254 = INT32_MIN;
	int16_t x256 = -467;

	t63 = (((x253|x254)==x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	volatile int64_t x259 = 517695574453375812LL;
	int64_t x260 = 64820089741LL;
	static volatile int32_t t64 = 0;

	t64 = (((x257|x258)==x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x263 = UINT16_MAX;
	static int64_t x264 = -527652668610731LL;

	t65 = (((x261|x262)==x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int32_t x267 = INT32_MIN;
	static uint32_t x268 = 119U;

	t66 = (((x265|x266)==x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x270 = -2;
	static int32_t t67 = 879846;

	t67 = (((x269|x270)==x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int64_t x276 = INT64_MIN;

	t68 = (((x273|x274)==x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int8_t x278 = 2;
	uint16_t x279 = 0U;
	uint32_t x280 = 12456223U;
	int32_t t69 = -423144100;

	t69 = (((x277|x278)==x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x282 = INT64_MIN;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 8722697;

	t70 = (((x281|x282)==x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = INT64_MIN;
	volatile int32_t x287 = 1;
	static int8_t x288 = 1;
	volatile int32_t t71 = -30283505;

	t71 = (((x285|x286)==x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = UINT16_MAX;
	int64_t x290 = -1LL;
	int16_t x292 = INT16_MAX;
	volatile int32_t t72 = 53728;

	t72 = (((x289|x290)==x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = INT64_MIN;
	volatile int32_t x295 = -1;
	uint8_t x296 = 48U;
	int32_t t73 = -223;

	t73 = (((x293|x294)==x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 17U;
	volatile int32_t x300 = INT32_MIN;

	t74 = (((x297|x298)==x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 1689081679U;
	static int64_t x302 = INT64_MIN;
	static volatile int64_t x303 = INT64_MIN;
	int8_t x304 = -1;

	t75 = (((x301|x302)==x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 1841140196681LLU;
	int32_t x306 = 45359;
	int8_t x307 = -22;
	volatile uint64_t x308 = 1149623850LLU;
	volatile int32_t t76 = -1206;

	t76 = (((x305|x306)==x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x310 = 4708U;
	int32_t x312 = -21091177;
	int32_t t77 = -180;

	t77 = (((x309|x310)==x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static uint8_t x314 = UINT8_MAX;
	volatile int8_t x315 = INT8_MIN;
	static int64_t x316 = INT64_MIN;
	int32_t t78 = 2916;

	t78 = (((x313|x314)==x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	static int8_t x320 = -9;

	t79 = (((x317|x318)==x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 1;
	int32_t x322 = INT32_MIN;
	uint8_t x323 = UINT8_MAX;
	static int16_t x324 = 11242;
	int32_t t80 = -153;

	t80 = (((x321|x322)==x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 31;
	int64_t x326 = -1LL;
	static int8_t x327 = INT8_MAX;

	t81 = (((x325|x326)==x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 7;

	t82 = (((x329|x330)==x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = INT16_MIN;
	int32_t x335 = -13;
	volatile uint32_t x336 = UINT32_MAX;
	int32_t t83 = -523295035;

	t83 = (((x333|x334)==x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = UINT64_MAX;
	int64_t x339 = -99873636LL;
	volatile int32_t t84 = 1;

	t84 = (((x337|x338)==x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x341 = INT32_MAX;
	int8_t x342 = -1;
	static volatile uint16_t x343 = 31U;
	volatile int64_t x344 = 67812711745LL;
	int32_t t85 = 0;

	t85 = (((x341|x342)==x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = -40389458173024LL;
	static uint64_t x347 = 194775250828LLU;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -3;

	t86 = (((x345|x346)==x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int8_t x350 = INT8_MIN;
	static int64_t x351 = INT64_MAX;
	uint16_t x352 = 62U;
	static int32_t t87 = -2192643;

	t87 = (((x349|x350)==x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	int16_t x354 = INT16_MAX;
	int32_t t88 = 1;

	t88 = (((x353|x354)==x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	static int64_t x360 = INT64_MAX;
	int32_t t89 = -11990;

	t89 = (((x357|x358)==x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = -1;
	uint64_t x363 = 205184931LLU;
	static uint16_t x364 = 17U;
	static volatile int32_t t90 = -985387894;

	t90 = (((x361|x362)==x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	uint32_t x367 = 1719984986U;
	volatile int32_t t91 = 5022;

	t91 = (((x365|x366)==x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x369 = -1;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MAX;
	int64_t x372 = INT64_MAX;
	volatile int32_t t92 = 13246;

	t92 = (((x369|x370)==x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	volatile int8_t x374 = -1;
	volatile int32_t t93 = 548664264;

	t93 = (((x373|x374)==x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 51485868U;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MIN;

	t94 = (((x377|x378)==x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = 24LLU;
	int16_t x382 = 34;
	int32_t x383 = -113;
	static uint32_t x384 = 1865380U;
	int32_t t95 = 0;

	t95 = (((x381|x382)==x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = 54;
	int32_t t96 = 3138;

	t96 = (((x385|x386)==x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 121U;
	int64_t x390 = INT64_MAX;
	static volatile int64_t x391 = -1LL;
	static int16_t x392 = -409;
	static int32_t t97 = 106833612;

	t97 = (((x389|x390)==x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = UINT64_MAX;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	int8_t x396 = -1;

	t98 = (((x393|x394)==x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = 93;
	uint32_t x399 = 6U;
	uint64_t x400 = UINT64_MAX;
	int32_t t99 = 45960814;

	t99 = (((x397|x398)==x399)<x400);

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

