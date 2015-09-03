#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 220305;
volatile uint32_t x16 = UINT32_MAX;
int16_t x17 = INT16_MIN;
static uint16_t x22 = 13U;
volatile int32_t t5 = 913;
int64_t x42 = -255664613LL;
int8_t x45 = INT8_MIN;
static volatile int32_t t12 = 2835819;
volatile int64_t x61 = -1LL;
int8_t x63 = -1;
static uint64_t x82 = UINT64_MAX;
static int16_t x84 = 9672;
int32_t t19 = 38;
volatile int32_t t21 = 32272162;
int64_t x110 = -112946944254LL;
static volatile int32_t t24 = 281890924;
volatile int32_t t26 = -7783;
uint64_t x129 = 126632528332140900LLU;
uint16_t x130 = UINT16_MAX;
uint16_t x131 = 5U;
uint32_t x135 = UINT32_MAX;
static uint64_t x136 = UINT64_MAX;
static int32_t t28 = -73383958;
static int64_t x138 = -137382LL;
int64_t x139 = -55329LL;
uint8_t x142 = UINT8_MAX;
volatile int32_t t30 = -2;
int8_t x146 = INT8_MIN;
int16_t x147 = -1;
uint8_t x149 = 0U;
static volatile int32_t t33 = 148555;
int32_t x164 = INT32_MIN;
static int32_t x173 = -1;
static int64_t x174 = INT64_MIN;
int32_t x176 = INT32_MAX;
static uint32_t x180 = 112347U;
int8_t x182 = -1;
volatile int64_t x188 = INT64_MIN;
uint8_t x190 = UINT8_MAX;
int8_t x192 = 0;
volatile uint8_t x197 = UINT8_MAX;
uint64_t x198 = 2706499LLU;
int32_t t44 = 30;
uint16_t x201 = UINT16_MAX;
static int32_t x203 = INT32_MAX;
int8_t x211 = -1;
uint16_t x217 = 223U;
int64_t x219 = INT64_MIN;
volatile int32_t x255 = -1;
uint64_t x267 = UINT64_MAX;
int8_t x270 = -1;
int8_t x274 = INT8_MIN;
int64_t x281 = INT64_MIN;
volatile int16_t x300 = INT16_MIN;
int8_t x302 = -1;
uint16_t x303 = 140U;
static int32_t t69 = -417175;
volatile int32_t t70 = 526;
int8_t x318 = INT8_MIN;
int32_t x321 = -1;
int16_t x324 = INT16_MIN;
int32_t t74 = -955746861;
int8_t x330 = -1;
static uint32_t x333 = 1090269U;
int64_t x338 = 12LL;
uint8_t x343 = 24U;
int16_t x345 = INT16_MIN;
static int32_t t82 = -121939508;
volatile uint16_t x368 = 1513U;
uint16_t x380 = UINT16_MAX;
volatile int32_t x390 = INT32_MIN;
int32_t t90 = 232;
static volatile int32_t t91 = -35394;
int8_t x399 = INT8_MIN;
volatile int32_t x400 = INT32_MIN;
int32_t x402 = INT32_MIN;
int32_t t93 = 10871264;
volatile int32_t x409 = INT32_MAX;
static int64_t x412 = -9499LL;
int64_t x419 = -1LL;
volatile int32_t t97 = 98786;
int32_t t98 = 233;


void f0(void) {
	volatile int32_t x1 = 5;
	int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	static int8_t x4 = -7;
	int32_t t0 = 68;

	t0 = (x1==((x2-x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 32U;
	uint32_t x6 = 61382792U;
	static uint8_t x7 = 29U;
	int64_t x8 = -1LL;

	t1 = (x5==((x6-x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	static volatile uint16_t x10 = 759U;
	static int16_t x11 = 12;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -15;

	t2 = (x9==((x10-x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 5223U;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 22629769;

	t3 = (x13==((x14-x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 11LLU;
	int8_t x20 = 0;
	volatile int32_t t4 = -757528;

	t4 = (x17==((x18-x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x23 = -1;
	int16_t x24 = -1;

	t5 = (x21==((x22-x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 24195430372035LLU;
	volatile int64_t x27 = INT64_MIN;
	int64_t x28 = 5582186623528LL;
	volatile int32_t t6 = -9822;

	t6 = (x25==((x26-x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = 104U;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 780984;

	t7 = (x29==((x30-x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -36;
	uint32_t x34 = UINT32_MAX;
	uint64_t x35 = 7784571107461LLU;
	uint32_t x36 = 1632U;
	int32_t t8 = -122424215;

	t8 = (x33==((x34-x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 7U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	int32_t x40 = -68860;
	int32_t t9 = 33428997;

	t9 = (x37==((x38-x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	static uint8_t x44 = 7U;
	volatile int32_t t10 = 1;

	t10 = (x41==((x42-x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MAX;
	static int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -349027895;

	t11 = (x45==((x46-x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	int16_t x52 = -519;

	t12 = (x49==((x50-x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 2014266471LLU;
	static int16_t x54 = -2472;
	static uint16_t x55 = 4U;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -4097094;

	t13 = (x53==((x54-x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -1;
	int8_t x60 = INT8_MIN;
	static int32_t t14 = 6232;

	t14 = (x57==((x58-x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	volatile int8_t x64 = 13;
	volatile int32_t t15 = -3345;

	t15 = (x61==((x62-x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = UINT8_MAX;
	uint8_t x66 = UINT8_MAX;
	volatile int16_t x67 = INT16_MIN;
	int16_t x68 = -1;
	volatile int32_t t16 = 352983360;

	t16 = (x65==((x66-x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MIN;
	uint8_t x71 = 26U;
	volatile int64_t x72 = 2288586LL;
	volatile int32_t t17 = -304266429;

	t17 = (x69==((x70-x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = INT32_MIN;
	uint64_t x78 = UINT64_MAX;
	int32_t x79 = 312;
	uint32_t x80 = 12595812U;
	volatile int32_t t18 = 821;

	t18 = (x77==((x78-x79)<x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = INT8_MAX;
	int32_t x83 = INT32_MIN;

	t19 = (x81==((x82-x83)<x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = INT8_MIN;
	static int16_t x90 = INT16_MIN;
	volatile uint32_t x91 = 532811U;
	uint8_t x92 = 16U;
	volatile int32_t t20 = 29;

	t20 = (x89==((x90-x91)<x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = INT32_MIN;
	static int8_t x94 = 32;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = 3513269LLU;

	t21 = (x93==((x94-x95)<x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x101 = INT8_MIN;
	uint8_t x102 = 63U;
	volatile int16_t x103 = INT16_MAX;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t22 = 10;

	t22 = (x101==((x102-x103)<x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x105 = -1;
	int8_t x106 = 1;
	int16_t x107 = -2170;
	int8_t x108 = 35;
	volatile int32_t t23 = -176430847;

	t23 = (x105==((x106-x107)<x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x109 = INT16_MIN;
	static int8_t x111 = INT8_MIN;
	static uint32_t x112 = 746348U;

	t24 = (x109==((x110-x111)<x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MIN;
	uint8_t x118 = UINT8_MAX;
	static int16_t x119 = INT16_MAX;
	uint32_t x120 = UINT32_MAX;
	static volatile int32_t t25 = 10;

	t25 = (x117==((x118-x119)<x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = -1;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = -1LL;

	t26 = (x121==((x122-x123)<x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x132 = 246LL;
	volatile int32_t t27 = 9658552;

	t27 = (x129==((x130-x131)<x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -7LL;
	uint8_t x134 = 11U;

	t28 = (x133==((x134-x135)<x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 294;
	uint16_t x140 = 0U;
	static int32_t t29 = 40984;

	t29 = (x137==((x138-x139)<x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = INT8_MIN;
	static int8_t x143 = -8;
	uint16_t x144 = 3208U;

	t30 = (x141==((x142-x143)<x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x145 = 3U;
	int32_t x148 = -3725;
	static volatile int32_t t31 = 316;

	t31 = (x145==((x146-x147)<x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x150 = -1;
	int64_t x151 = INT64_MIN;
	static int64_t x152 = INT64_MIN;
	volatile int32_t t32 = -775004051;

	t32 = (x149==((x150-x151)<x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x153 = -13084;
	static int8_t x154 = 0;
	uint64_t x155 = UINT64_MAX;
	static int64_t x156 = 29406LL;

	t33 = (x153==((x154-x155)<x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x157 = 17127265007LLU;
	uint64_t x158 = 844014409675009LLU;
	int64_t x159 = INT64_MAX;
	int32_t x160 = 22470090;
	volatile int32_t t34 = 1853223;

	t34 = (x157==((x158-x159)<x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	static int32_t x163 = -1007279880;
	int32_t t35 = 985;

	t35 = (x161==((x162-x163)<x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -1LL;
	uint32_t x166 = UINT32_MAX;
	volatile int8_t x167 = INT8_MAX;
	int32_t x168 = INT32_MIN;
	int32_t t36 = -718130;

	t36 = (x165==((x166-x167)<x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = INT32_MIN;
	int16_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static int64_t x172 = INT64_MIN;
	volatile int32_t t37 = 31;

	t37 = (x169==((x170-x171)<x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x175 = -1LL;
	volatile int32_t t38 = 16477;

	t38 = (x173==((x174-x175)<x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x177 = INT64_MIN;
	int32_t x178 = INT32_MIN;
	int32_t x179 = -1;
	int32_t t39 = -1760740;

	t39 = (x177==((x178-x179)<x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int8_t x183 = INT8_MAX;
	int8_t x184 = -1;
	int32_t t40 = -2407;

	t40 = (x181==((x182-x183)<x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 2929307U;
	int16_t x186 = -187;
	static uint64_t x187 = UINT64_MAX;
	volatile int32_t t41 = -59;

	t41 = (x185==((x186-x187)<x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = -1406;
	static uint8_t x191 = 9U;
	static int32_t t42 = 86578;

	t42 = (x189==((x190-x191)<x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x193 = UINT32_MAX;
	volatile uint16_t x194 = 190U;
	int64_t x195 = 456473LL;
	int8_t x196 = INT8_MAX;
	volatile int32_t t43 = -733;

	t43 = (x193==((x194-x195)<x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x199 = 88U;
	int64_t x200 = -12LL;

	t44 = (x197==((x198-x199)<x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = INT32_MAX;
	int64_t x204 = -33665LL;
	int32_t t45 = 47542627;

	t45 = (x201==((x202-x203)<x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -15761;
	int32_t x206 = -654;
	volatile int64_t x207 = INT64_MIN;
	uint64_t x208 = 339330922936LLU;
	int32_t t46 = -108906070;

	t46 = (x205==((x206-x207)<x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MIN;
	uint32_t x210 = 172220U;
	int64_t x212 = -11276LL;
	static int32_t t47 = -4156153;

	t47 = (x209==((x210-x211)<x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	static uint16_t x214 = UINT16_MAX;
	uint8_t x215 = 41U;
	int8_t x216 = -1;
	volatile int32_t t48 = -452310083;

	t48 = (x213==((x214-x215)<x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x218 = -177;
	int8_t x220 = 24;
	int32_t t49 = -967;

	t49 = (x217==((x218-x219)<x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = UINT16_MAX;
	int32_t t50 = -91074;

	t50 = (x221==((x222-x223)<x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = 13U;
	static int64_t x228 = 28154114661345LL;
	int32_t t51 = -189591;

	t51 = (x225==((x226-x227)<x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x233 = -4;
	int32_t x234 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	static int64_t x236 = -808799LL;
	volatile int32_t t52 = 1;

	t52 = (x233==((x234-x235)<x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x237 = 43U;
	int16_t x238 = INT16_MIN;
	static int8_t x239 = INT8_MIN;
	uint8_t x240 = UINT8_MAX;
	static int32_t t53 = 1816;

	t53 = (x237==((x238-x239)<x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	volatile int64_t x242 = -1LL;
	int64_t x243 = -1LL;
	static int32_t x244 = 56;
	static volatile int32_t t54 = 1;

	t54 = (x241==((x242-x243)<x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 65561U;
	volatile int64_t x246 = -4524792628138920LL;
	int32_t x247 = INT32_MAX;
	volatile int8_t x248 = 1;
	int32_t t55 = -37084;

	t55 = (x245==((x246-x247)<x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = 8;
	static volatile int8_t x250 = 1;
	uint16_t x251 = 104U;
	int64_t x252 = INT64_MIN;
	static int32_t t56 = -1069777;

	t56 = (x249==((x250-x251)<x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = 164076946LL;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t57 = -13;

	t57 = (x253==((x254-x255)<x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = 1;
	int16_t x258 = -10;
	volatile int8_t x259 = INT8_MIN;
	static uint64_t x260 = UINT64_MAX;
	int32_t t58 = -38957627;

	t58 = (x257==((x258-x259)<x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	static uint16_t x263 = 3U;
	int16_t x264 = INT16_MIN;
	volatile int32_t t59 = 7371656;

	t59 = (x261==((x262-x263)<x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = INT16_MIN;
	static int8_t x266 = INT8_MAX;
	uint16_t x268 = UINT16_MAX;
	int32_t t60 = -228211;

	t60 = (x265==((x266-x267)<x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x269 = INT16_MIN;
	static uint64_t x271 = 872270301387171432LLU;
	int16_t x272 = -1;
	static int32_t t61 = 1042041;

	t61 = (x269==((x270-x271)<x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x273 = 752316390LLU;
	int16_t x275 = INT16_MAX;
	volatile uint32_t x276 = 28172U;
	int32_t t62 = -14111121;

	t62 = (x273==((x274-x275)<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MIN;
	uint64_t x278 = UINT64_MAX;
	static int8_t x279 = INT8_MAX;
	uint64_t x280 = 36470621LLU;
	int32_t t63 = -66;

	t63 = (x277==((x278-x279)<x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x282 = 3U;
	uint16_t x283 = 24U;
	int32_t x284 = 5;
	volatile int32_t t64 = 10944;

	t64 = (x281==((x282-x283)<x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x285 = 353613;
	int16_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int16_t x288 = -2270;
	volatile int32_t t65 = 28;

	t65 = (x285==((x286-x287)<x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x289 = UINT8_MAX;
	int16_t x290 = INT16_MAX;
	int16_t x291 = 12716;
	uint8_t x292 = 5U;
	volatile int32_t t66 = 5;

	t66 = (x289==((x290-x291)<x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x293 = -1;
	uint64_t x294 = 1286LLU;
	static int64_t x295 = INT64_MAX;
	int8_t x296 = -1;
	int32_t t67 = -25795910;

	t67 = (x293==((x294-x295)<x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MAX;
	uint64_t x298 = 110534266LLU;
	int64_t x299 = -3636697LL;
	volatile int32_t t68 = -904541736;

	t68 = (x297==((x298-x299)<x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x301 = -1;
	volatile int64_t x304 = INT64_MAX;

	t69 = (x301==((x302-x303)<x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 16634686LLU;
	static int64_t x306 = -450424662097745091LL;
	int32_t x307 = 34;
	uint32_t x308 = UINT32_MAX;

	t70 = (x305==((x306-x307)<x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x309 = -1;
	uint32_t x310 = 23496686U;
	volatile uint64_t x311 = UINT64_MAX;
	volatile int16_t x312 = INT16_MAX;
	int32_t t71 = 27709564;

	t71 = (x309==((x310-x311)<x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MAX;
	int64_t x319 = -36557161LL;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t72 = -18;

	t72 = (x317==((x318-x319)<x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x322 = -1;
	int64_t x323 = -1LL;
	volatile int32_t t73 = 248;

	t73 = (x321==((x322-x323)<x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x325 = UINT8_MAX;
	int64_t x326 = INT64_MAX;
	static uint8_t x327 = 48U;
	static int16_t x328 = INT16_MIN;

	t74 = (x325==((x326-x327)<x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MIN;
	volatile uint8_t x331 = UINT8_MAX;
	static volatile int8_t x332 = INT8_MAX;
	static int32_t t75 = 345501;

	t75 = (x329==((x330-x331)<x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x334 = 3U;
	int32_t x335 = -3;
	int64_t x336 = INT64_MIN;
	int32_t t76 = 437103;

	t76 = (x333==((x334-x335)<x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x337 = INT8_MAX;
	static volatile uint64_t x339 = 419387343LLU;
	volatile int64_t x340 = -1LL;
	int32_t t77 = -1116;

	t77 = (x337==((x338-x339)<x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = 1;
	int16_t x342 = INT16_MIN;
	int64_t x344 = INT64_MAX;
	volatile int32_t t78 = -98;

	t78 = (x341==((x342-x343)<x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x346 = -1;
	volatile uint8_t x347 = 5U;
	int16_t x348 = -2243;
	int32_t t79 = 11948888;

	t79 = (x345==((x346-x347)<x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = -1LL;
	static int16_t x350 = INT16_MIN;
	uint32_t x351 = 2397636U;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t80 = 4574278;

	t80 = (x349==((x350-x351)<x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = -1LL;
	static int64_t x354 = -62823560330LL;
	volatile uint8_t x355 = 41U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t81 = -55240;

	t81 = (x353==((x354-x355)<x356));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = -1LL;
	static int64_t x358 = -1LL;
	volatile int16_t x359 = INT16_MAX;
	volatile int64_t x360 = 70776420288807LL;

	t82 = (x357==((x358-x359)<x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = -1;
	static int16_t x362 = INT16_MIN;
	volatile int8_t x363 = 1;
	uint32_t x364 = 21U;
	int32_t t83 = 158;

	t83 = (x361==((x362-x363)<x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x366 = INT64_MIN;
	int32_t x367 = -8;
	static volatile int32_t t84 = 614149321;

	t84 = (x365==((x366-x367)<x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x369 = UINT8_MAX;
	static int32_t x370 = -1;
	uint16_t x371 = 1U;
	static int16_t x372 = INT16_MAX;
	int32_t t85 = -9287266;

	t85 = (x369==((x370-x371)<x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = -1;
	static volatile int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	uint32_t x376 = UINT32_MAX;
	int32_t t86 = 404502782;

	t86 = (x373==((x374-x375)<x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x377 = -41489149862060377LL;
	uint16_t x378 = UINT16_MAX;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t t87 = 0;

	t87 = (x377==((x378-x379)<x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 1898890LLU;
	int64_t x383 = -1LL;
	uint16_t x384 = 77U;
	volatile int32_t t88 = 1;

	t88 = (x381==((x382-x383)<x384));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MAX;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MIN;
	uint16_t x388 = 45U;
	int32_t t89 = -12155;

	t89 = (x385==((x386-x387)<x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = 2782LLU;
	int64_t x391 = INT64_MIN;
	static volatile int32_t x392 = INT32_MAX;

	t90 = (x389==((x390-x391)<x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = 12;
	int32_t x394 = 160;
	volatile uint16_t x395 = UINT16_MAX;
	static int32_t x396 = INT32_MIN;

	t91 = (x393==((x394-x395)<x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x397 = 12U;
	uint16_t x398 = 58U;
	volatile int32_t t92 = 22;

	t92 = (x397==((x398-x399)<x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = INT16_MAX;
	static int16_t x403 = INT16_MIN;
	int8_t x404 = 2;

	t93 = (x401==((x402-x403)<x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x405 = INT64_MIN;
	volatile int32_t x406 = -1;
	static int8_t x407 = INT8_MIN;
	static uint8_t x408 = UINT8_MAX;
	volatile int32_t t94 = -10;

	t94 = (x405==((x406-x407)<x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MAX;
	int32_t t95 = -60801041;

	t95 = (x409==((x410-x411)<x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x413 = -1LL;
	int64_t x414 = -1LL;
	volatile int8_t x415 = 4;
	int32_t x416 = INT32_MIN;
	int32_t t96 = 11681533;

	t96 = (x413==((x414-x415)<x416));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x417 = 2U;
	int16_t x418 = INT16_MAX;
	volatile int8_t x420 = INT8_MIN;

	t97 = (x417==((x418-x419)<x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = -13;
	int32_t x422 = -1;
	int8_t x423 = -3;
	static uint16_t x424 = 7U;

	t98 = (x421==((x422-x423)<x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -1;
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	int64_t x428 = INT64_MIN;
	int32_t t99 = 6588967;

	t99 = (x425==((x426-x427)<x428));

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

