#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x3 = UINT8_MAX;
int32_t t0 = 12;
volatile int16_t x16 = INT16_MIN;
int32_t t3 = 35930991;
uint16_t x26 = 1320U;
int8_t x34 = INT8_MIN;
int32_t x36 = INT32_MAX;
static uint64_t x38 = UINT64_MAX;
volatile uint64_t x43 = UINT64_MAX;
volatile int8_t x45 = -1;
int32_t t11 = 69541733;
int32_t x50 = INT32_MIN;
int64_t x52 = -1LL;
static int8_t x55 = -1;
static int32_t x59 = INT32_MIN;
int16_t x60 = INT16_MIN;
uint64_t x61 = 68190305348080LLU;
uint64_t x62 = UINT64_MAX;
static int32_t x63 = INT32_MAX;
static volatile int32_t x72 = INT32_MIN;
static uint8_t x77 = 12U;
int16_t x78 = -159;
volatile int32_t t19 = 4779;
static int64_t x86 = INT64_MIN;
int32_t x89 = INT32_MAX;
int8_t x91 = INT8_MIN;
static int16_t x93 = -10;
static volatile uint16_t x97 = UINT16_MAX;
int16_t x100 = -1;
static volatile uint16_t x108 = UINT16_MAX;
volatile int32_t t28 = -180819668;
volatile int64_t x120 = 379734003846881589LL;
volatile uint16_t x125 = 2072U;
volatile int16_t x131 = -232;
int16_t x142 = -1;
int32_t x148 = -646;
int32_t t37 = -24392;
int16_t x155 = INT16_MAX;
int32_t x160 = -965073664;
int8_t x174 = -2;
int16_t x186 = INT16_MAX;
volatile int32_t x188 = INT32_MIN;
volatile int32_t t46 = 451472368;
int16_t x190 = INT16_MIN;
int16_t x192 = INT16_MIN;
volatile uint64_t x195 = UINT64_MAX;
int32_t x202 = INT32_MIN;
uint8_t x204 = UINT8_MAX;
int8_t x215 = -1;
static int16_t x217 = -1364;
static volatile int16_t x219 = 0;
int64_t x222 = INT64_MIN;
static uint16_t x229 = 847U;
int32_t t57 = 7593006;
int32_t t58 = -3991;
int64_t x237 = -1LL;
volatile uint8_t x241 = 4U;
int64_t x242 = INT64_MAX;
static int8_t x248 = 1;
int16_t x251 = 37;
uint8_t x257 = UINT8_MAX;
uint32_t x261 = UINT32_MAX;
volatile uint32_t x263 = UINT32_MAX;
static volatile int16_t x267 = INT16_MIN;
int8_t x268 = -43;
int8_t x270 = -1;
static int16_t x271 = -1;
volatile int32_t t67 = 1;
volatile int16_t x274 = INT16_MIN;
int32_t t68 = -165;
int8_t x280 = INT8_MAX;
int32_t x281 = INT32_MIN;
volatile int32_t t70 = 1666193;
int32_t t71 = -24;
int8_t x300 = INT8_MIN;
volatile int32_t t74 = 2405;
int8_t x319 = 1;
volatile int32_t t79 = 60661528;
int32_t x322 = -26;
int32_t x323 = -124171405;
int32_t x327 = -1;
volatile int32_t t84 = 24780915;
static uint8_t x342 = 0U;
int8_t x344 = -1;
int64_t x346 = -1LL;
int64_t x347 = -976398LL;
int32_t x354 = INT32_MIN;
static int64_t x356 = INT64_MAX;
static int32_t x358 = 212033;
static volatile uint64_t x361 = 1201125049LLU;
int64_t x363 = INT64_MIN;
uint8_t x367 = 11U;
volatile int32_t t92 = 55714965;
volatile int32_t t94 = -552;
volatile int32_t t95 = 607;
uint8_t x386 = 0U;
static int64_t x387 = INT64_MIN;
int32_t t96 = 1;
int8_t x393 = -1;
int64_t x394 = -16LL;
static int32_t t98 = 522461;
uint16_t x400 = 28U;
int32_t t99 = 25807;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	static uint16_t x4 = UINT16_MAX;

	t0 = (((x1==x2)+x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int16_t x6 = -430;
	static int16_t x7 = INT16_MIN;
	static int64_t x8 = -1LL;
	int32_t t1 = 64285;

	t1 = (((x5==x6)+x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint64_t x10 = 3026LLU;
	int32_t x11 = INT32_MAX;
	volatile int64_t x12 = -1LL;
	int32_t t2 = 7;

	t2 = (((x9==x10)+x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	uint16_t x14 = 16U;
	int32_t x15 = -27;

	t3 = (((x13==x14)+x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	uint32_t x18 = 131547835U;
	uint8_t x19 = 4U;
	uint32_t x20 = 10565758U;
	volatile int32_t t4 = 64788;

	t4 = (((x17==x18)+x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	uint64_t x22 = 22616042183LLU;
	static int32_t x23 = INT32_MIN;
	volatile int64_t x24 = -2954474832740044102LL;
	int32_t t5 = -2000281;

	t5 = (((x21==x22)+x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -12;
	static uint64_t x27 = 160518552LLU;
	static int16_t x28 = INT16_MAX;
	int32_t t6 = 157;

	t6 = (((x25==x26)+x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 5;
	uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = 74U;
	int32_t t7 = -44507;

	t7 = (((x29==x30)+x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	volatile int32_t t8 = 87001223;

	t8 = (((x33==x34)+x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int16_t x39 = INT16_MAX;
	static int16_t x40 = 0;
	int32_t t9 = -1032;

	t9 = (((x37==x38)+x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int64_t x42 = -1LL;
	uint8_t x44 = 7U;
	int32_t t10 = -1745;

	t10 = (((x41==x42)+x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = UINT64_MAX;
	int64_t x48 = INT64_MIN;

	t11 = (((x45==x46)+x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 1U;
	uint16_t x51 = 439U;
	int32_t t12 = 1321698;

	t12 = (((x49==x50)+x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 683;
	uint16_t x54 = UINT16_MAX;
	int64_t x56 = -1LL;
	int32_t t13 = -122236677;

	t13 = (((x53==x54)+x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MIN;
	volatile int32_t t14 = -141;

	t14 = (((x57==x58)+x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x64 = INT64_MIN;
	volatile int32_t t15 = -39;

	t15 = (((x61==x62)+x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = INT8_MIN;
	uint8_t x66 = UINT8_MAX;
	static int16_t x67 = -1;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 14657;

	t16 = (((x65==x66)+x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 8175;
	volatile uint16_t x70 = 46U;
	int64_t x71 = INT64_MIN;
	volatile int32_t t17 = 544311;

	t17 = (((x69==x70)+x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int64_t x74 = -117702283926199785LL;
	volatile int64_t x75 = INT64_MAX;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = -123;

	t18 = (((x73==x74)+x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x79 = 3U;
	volatile int16_t x80 = -81;

	t19 = (((x77==x78)+x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 3U;
	volatile int16_t x82 = INT16_MIN;
	uint32_t x83 = 49399U;
	volatile uint16_t x84 = 969U;
	int32_t t20 = 3619;

	t20 = (((x81==x82)+x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 37U;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -120726947;

	t21 = (((x85==x86)+x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x90 = INT8_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t22 = 920755479;

	t22 = (((x89==x90)+x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = UINT64_MAX;
	volatile uint8_t x95 = 0U;
	int32_t x96 = -1;
	int32_t t23 = -9976;

	t23 = (((x93==x94)+x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 660U;
	int32_t x99 = -309;
	int32_t t24 = 1;

	t24 = (((x97==x98)+x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x101 = 3505LLU;
	int16_t x102 = INT16_MIN;
	static volatile int32_t x103 = 51;
	volatile int64_t x104 = INT64_MIN;
	volatile int32_t t25 = 529974;

	t25 = (((x101==x102)+x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MIN;
	int8_t x107 = INT8_MAX;
	int32_t t26 = -9711;

	t26 = (((x105==x106)+x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 6;
	int8_t x110 = -8;
	int32_t x111 = 88786524;
	volatile int64_t x112 = -5LL;
	int32_t t27 = 110;

	t27 = (((x109==x110)+x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	uint16_t x114 = 124U;
	uint64_t x115 = 2224049LLU;
	static int8_t x116 = INT8_MIN;

	t28 = (((x113==x114)+x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 1195U;
	int8_t x118 = INT8_MIN;
	int16_t x119 = 507;
	int32_t t29 = 730;

	t29 = (((x117==x118)+x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = INT16_MAX;
	volatile int32_t x122 = -1;
	uint8_t x123 = 104U;
	int32_t x124 = INT32_MAX;
	int32_t t30 = -281;

	t30 = (((x121==x122)+x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -430176849;
	int16_t x127 = INT16_MAX;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -6;

	t31 = (((x125==x126)+x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int16_t x130 = INT16_MIN;
	static int64_t x132 = -1LL;
	static int32_t t32 = -20370;

	t32 = (((x129==x130)+x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 191U;
	volatile int32_t x134 = INT32_MAX;
	volatile int16_t x135 = 1898;
	uint8_t x136 = 28U;
	static volatile int32_t t33 = 61;

	t33 = (((x133==x134)+x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = -1;
	uint64_t x139 = 27134883799188130LLU;
	int64_t x140 = 225447LL;
	volatile int32_t t34 = 237;

	t34 = (((x137==x138)+x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -2007269040623LL;
	static uint64_t x143 = UINT64_MAX;
	uint32_t x144 = 26123126U;
	volatile int32_t t35 = -61306;

	t35 = (((x141==x142)+x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -980553;
	int8_t x146 = INT8_MAX;
	volatile int16_t x147 = INT16_MIN;
	volatile int32_t t36 = 7;

	t36 = (((x145==x146)+x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = 3U;
	int8_t x150 = INT8_MIN;
	static int16_t x151 = -1;
	static volatile int32_t x152 = 1;

	t37 = (((x149==x150)+x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	int16_t x154 = -1;
	static uint32_t x156 = UINT32_MAX;
	int32_t t38 = -68224006;

	t38 = (((x153==x154)+x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 2743609482LLU;
	volatile uint32_t x158 = 29666377U;
	volatile int8_t x159 = 28;
	volatile int32_t t39 = 466409;

	t39 = (((x157==x158)+x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = -88680985526114612LL;
	int32_t x162 = -143801;
	uint64_t x163 = UINT64_MAX;
	int16_t x164 = -1;
	volatile int32_t t40 = 619166;

	t40 = (((x161==x162)+x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MIN;
	volatile int64_t x167 = -1LL;
	volatile int16_t x168 = INT16_MIN;
	int32_t t41 = 970813912;

	t41 = (((x165==x166)+x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	static uint64_t x170 = UINT64_MAX;
	int32_t x171 = -1;
	static volatile int16_t x172 = INT16_MAX;
	volatile int32_t t42 = 11;

	t42 = (((x169==x170)+x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static volatile int64_t x175 = -1LL;
	static volatile int16_t x176 = 10;
	volatile int32_t t43 = -1;

	t43 = (((x173==x174)+x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	volatile uint8_t x178 = 0U;
	uint32_t x179 = UINT32_MAX;
	static uint16_t x180 = UINT16_MAX;
	int32_t t44 = 1315;

	t44 = (((x177==x178)+x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 26U;
	int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = -84918;

	t45 = (((x181==x182)+x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	static int64_t x187 = INT64_MIN;

	t46 = (((x185==x186)+x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x191 = -1;
	static int32_t t47 = 1927349;

	t47 = (((x189==x190)+x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	uint32_t x194 = 1613U;
	volatile int32_t x196 = 22;
	int32_t t48 = 0;

	t48 = (((x193==x194)+x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -3;
	int64_t x198 = 5849527188269LL;
	int64_t x199 = INT64_MAX;
	static int64_t x200 = INT64_MAX;
	static int32_t t49 = -91930;

	t49 = (((x197==x198)+x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -21;
	static int16_t x203 = -43;
	int32_t t50 = 823833;

	t50 = (((x201==x202)+x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile int64_t x206 = -599280LL;
	volatile uint64_t x207 = UINT64_MAX;
	int64_t x208 = 2570736065934024LL;
	int32_t t51 = -974969213;

	t51 = (((x205==x206)+x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	volatile int8_t x210 = 5;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = -6336;
	volatile int32_t t52 = 13554;

	t52 = (((x209==x210)+x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	volatile int16_t x214 = INT16_MAX;
	uint32_t x216 = 36U;
	static int32_t t53 = -256806556;

	t53 = (((x213==x214)+x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MIN;
	volatile uint32_t x220 = 35038434U;
	volatile int32_t t54 = -806;

	t54 = (((x217==x218)+x219)<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int64_t x223 = INT64_MAX;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = -1;

	t55 = (((x221==x222)+x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 47LLU;
	static volatile int32_t t56 = 1;

	t56 = (((x225==x226)+x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = -393095727;
	uint8_t x232 = UINT8_MAX;

	t57 = (((x229==x230)+x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 54U;
	int32_t x234 = -1;
	int8_t x235 = -49;
	volatile int8_t x236 = INT8_MIN;

	t58 = (((x233==x234)+x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MAX;
	static volatile int32_t x240 = INT32_MIN;
	int32_t t59 = -1;

	t59 = (((x237==x238)+x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = 9;
	int64_t x244 = -1LL;
	static int32_t t60 = 1;

	t60 = (((x241==x242)+x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = -1;
	uint32_t x247 = 85U;
	static volatile int32_t t61 = 511457130;

	t61 = (((x245==x246)+x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -1;
	volatile uint16_t x250 = UINT16_MAX;
	static uint8_t x252 = UINT8_MAX;
	int32_t t62 = -27591;

	t62 = (((x249==x250)+x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = 1U;
	int64_t x254 = -17350209850824LL;
	uint32_t x255 = 33982071U;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 1715;

	t63 = (((x253==x254)+x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = 73U;
	uint64_t x259 = 6LLU;
	static uint8_t x260 = UINT8_MAX;
	int32_t t64 = 451;

	t64 = (((x257==x258)+x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = INT32_MIN;
	static uint8_t x264 = UINT8_MAX;
	int32_t t65 = -74050364;

	t65 = (((x261==x262)+x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	int64_t x266 = 31482728LL;
	int32_t t66 = -15890;

	t66 = (((x265==x266)+x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	int32_t x272 = -41;

	t67 = (((x269==x270)+x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 212227986100142LLU;
	uint64_t x275 = 163205814LLU;
	int32_t x276 = -2559487;

	t68 = (((x273==x274)+x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	static int16_t x278 = INT16_MIN;
	uint64_t x279 = 723LLU;
	int32_t t69 = 17;

	t69 = (((x277==x278)+x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x282 = INT8_MAX;
	volatile int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;

	t70 = (((x281==x282)+x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x285 = 34901LLU;
	int64_t x286 = -1LL;
	uint32_t x287 = 23588U;
	static int16_t x288 = -1;

	t71 = (((x285==x286)+x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = -625;
	volatile int32_t t72 = 14771941;

	t72 = (((x289==x290)+x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	static int64_t x294 = 12620417489324LL;
	int8_t x295 = -57;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -600647;

	t73 = (((x293==x294)+x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	uint8_t x298 = UINT8_MAX;
	int64_t x299 = INT64_MAX;

	t74 = (((x297==x298)+x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = -1;
	int16_t x302 = -1;
	int8_t x303 = -1;
	int32_t x304 = -26;
	static int32_t t75 = 2100;

	t75 = (((x301==x302)+x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	uint8_t x307 = UINT8_MAX;
	static int32_t x308 = -1;
	volatile int32_t t76 = -1947;

	t76 = (((x305==x306)+x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MAX;
	int32_t x312 = INT32_MIN;
	static int32_t t77 = -76059;

	t77 = (((x309==x310)+x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint32_t x314 = 39915891U;
	int8_t x315 = INT8_MIN;
	uint8_t x316 = 3U;
	volatile int32_t t78 = 1;

	t78 = (((x313==x314)+x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x317 = -1LL;
	int64_t x318 = 26223LL;
	static uint8_t x320 = 12U;

	t79 = (((x317==x318)+x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 1U;
	volatile uint16_t x324 = 10U;
	int32_t t80 = 151964;

	t80 = (((x321==x322)+x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x326 = -2;
	volatile int8_t x328 = 0;
	int32_t t81 = 0;

	t81 = (((x325==x326)+x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 3698026614724010LLU;
	static uint32_t x331 = UINT32_MAX;
	uint16_t x332 = 12U;
	static volatile int32_t t82 = 177286;

	t82 = (((x329==x330)+x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MAX;
	volatile uint64_t x334 = 29752888626LLU;
	static uint8_t x335 = UINT8_MAX;
	static uint8_t x336 = UINT8_MAX;
	int32_t t83 = -5572522;

	t83 = (((x333==x334)+x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int16_t x338 = INT16_MIN;
	int8_t x339 = 0;
	volatile int64_t x340 = -1LL;

	t84 = (((x337==x338)+x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -27483524LL;
	int16_t x343 = INT16_MIN;
	static int32_t t85 = -10125;

	t85 = (((x341==x342)+x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -4;
	volatile int32_t x348 = INT32_MIN;
	volatile int32_t t86 = 6432143;

	t86 = (((x345==x346)+x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static int32_t x350 = INT32_MAX;
	static int64_t x351 = -205577LL;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t87 = -12;

	t87 = (((x349==x350)+x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MAX;
	static int8_t x355 = -1;
	int32_t t88 = -344824;

	t88 = (((x353==x354)+x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 1016U;
	volatile int32_t t89 = -44;

	t89 = (((x357==x358)+x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x362 = UINT32_MAX;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 114472;

	t90 = (((x361==x362)+x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 19;
	volatile uint64_t x366 = 409LLU;
	volatile int64_t x368 = 28LL;
	int32_t t91 = 13321737;

	t91 = (((x365==x366)+x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = UINT16_MAX;
	volatile uint32_t x370 = 0U;
	int32_t x371 = -65;
	uint32_t x372 = 2993620U;

	t92 = (((x369==x370)+x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = INT32_MIN;
	int8_t x374 = -1;
	uint16_t x375 = 27U;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -830;

	t93 = (((x373==x374)+x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	uint16_t x378 = 0U;
	uint16_t x379 = 1699U;
	volatile uint32_t x380 = 2U;

	t94 = (((x377==x378)+x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	volatile int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MAX;
	static int8_t x384 = INT8_MIN;

	t95 = (((x381==x382)+x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int8_t x388 = -1;

	t96 = (((x385==x386)+x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = -1;
	volatile uint8_t x390 = UINT8_MAX;
	uint8_t x391 = UINT8_MAX;
	volatile uint16_t x392 = 139U;
	volatile int32_t t97 = 5;

	t97 = (((x389==x390)+x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x395 = 933308659U;
	int64_t x396 = INT64_MAX;

	t98 = (((x393==x394)+x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 20597408LLU;
	int64_t x398 = 3127LL;
	int16_t x399 = INT16_MIN;

	t99 = (((x397==x398)+x399)<x400);

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

