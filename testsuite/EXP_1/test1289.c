#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 1U;
int8_t x8 = INT8_MAX;
uint8_t x9 = 95U;
int32_t t3 = 0;
volatile uint16_t x19 = 7U;
volatile int64_t x23 = -23124026LL;
static int32_t x27 = INT32_MIN;
volatile int32_t t6 = 5;
int8_t x31 = 1;
int64_t x34 = INT64_MIN;
uint64_t x39 = UINT64_MAX;
volatile uint8_t x60 = UINT8_MAX;
uint64_t x66 = 96626LLU;
volatile uint64_t x67 = 291LLU;
uint16_t x68 = 1U;
uint64_t x84 = 1500063LLU;
static int64_t x85 = INT64_MAX;
int8_t x91 = INT8_MIN;
static int32_t t21 = -1;
int16_t x96 = INT16_MIN;
uint64_t x101 = 1LLU;
int16_t x102 = INT16_MIN;
int64_t x118 = -1LL;
uint16_t x128 = 7U;
int16_t x133 = INT16_MIN;
int8_t x134 = 1;
int8_t x137 = INT8_MIN;
uint32_t x146 = 5878476U;
uint32_t x148 = UINT32_MAX;
int8_t x151 = INT8_MAX;
volatile int32_t t34 = 20694804;
volatile int8_t x153 = INT8_MIN;
int64_t x155 = INT64_MIN;
int8_t x160 = -1;
int16_t x161 = 7;
static volatile int16_t x167 = -1;
uint64_t x169 = 453660990LLU;
volatile int8_t x171 = 1;
uint32_t x172 = 76403U;
static int32_t x173 = INT32_MIN;
int8_t x175 = -1;
volatile uint8_t x179 = 6U;
static int32_t x186 = INT32_MAX;
static uint64_t x190 = 43992836509295228LLU;
int32_t t44 = -194700996;
int32_t x197 = 1093047;
volatile int8_t x198 = 15;
static int16_t x213 = -1;
static volatile int32_t t49 = 102840;
int32_t x217 = INT32_MIN;
volatile int64_t x218 = INT64_MIN;
int32_t t50 = 33;
static uint32_t x234 = UINT32_MAX;
int64_t t53 = 202891673523LL;
uint32_t x242 = 9652432U;
uint16_t x243 = UINT16_MAX;
uint32_t x245 = UINT32_MAX;
volatile uint32_t t56 = 519490U;
int64_t x250 = INT64_MAX;
volatile int64_t t57 = 3503413524049922LL;
int8_t x253 = -30;
uint32_t x259 = 46U;
static int32_t x264 = -123924769;
uint64_t x273 = 4613LLU;
static uint8_t x283 = 1U;
uint64_t x297 = 17136807LLU;
volatile int64_t x299 = -12475605LL;
static int32_t t69 = 32;
uint16_t x305 = UINT16_MAX;
int64_t t70 = -14LL;
uint8_t x312 = UINT8_MAX;
static int8_t x315 = INT8_MIN;
volatile int8_t x316 = -1;
int16_t x321 = -97;
int8_t x323 = 2;
int64_t x328 = -1LL;
int8_t x332 = INT8_MAX;
volatile int32_t t75 = 1;
volatile int32_t t78 = -78;
int32_t x346 = INT32_MIN;
uint8_t x350 = UINT8_MAX;
static volatile uint32_t x353 = 11733U;
int32_t x354 = INT32_MIN;
static int32_t t81 = -363;
uint8_t x361 = UINT8_MAX;
int32_t t84 = 1297602;
static uint8_t x369 = 92U;
int8_t x371 = INT8_MIN;
int8_t x374 = INT8_MIN;
int64_t x381 = -1LL;
volatile int64_t t88 = 68049LL;
static volatile int64_t x385 = INT64_MAX;
static int64_t t90 = 768308627280482LL;
int16_t x394 = -1;
uint32_t x397 = UINT32_MAX;
int16_t x398 = -14410;
static uint32_t x401 = 1U;
int8_t x405 = INT8_MAX;
static int32_t t95 = -701755;
volatile int32_t x413 = -1;
volatile uint8_t x422 = 108U;
static uint32_t x427 = 203U;
volatile int32_t t99 = -100720988;


void f0(void) {
	int16_t x1 = -686;
	int16_t x2 = -1;
	uint32_t x3 = 86U;
	volatile int8_t x4 = -1;
	int32_t t0 = 13;

	t0 = (((x1==x2)<x3)-x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = INT64_MIN;
	int8_t x7 = 10;
	volatile int32_t t1 = -112;

	t1 = (((x5==x6)<x7)-x8);

	if (t1 != -126) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 66128678U;
	volatile int64_t x11 = INT64_MIN;
	int32_t x12 = -356200078;
	volatile int32_t t2 = 14;

	t2 = (((x9==x10)<x11)-x12);

	if (t2 != 356200078) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 55325474LLU;
	static int16_t x14 = -1;
	int32_t x15 = INT32_MIN;
	uint16_t x16 = 1U;

	t3 = (((x13==x14)<x15)-x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	uint32_t x18 = UINT32_MAX;
	uint32_t x20 = 241263750U;
	uint32_t t4 = 221865541U;

	t4 = (((x17==x18)<x19)-x20);

	if (t4 != 4053703547U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MAX;
	int16_t x24 = 1;
	int32_t t5 = -239114505;

	t5 = (((x21==x22)<x23)-x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = 1237241400514828382LL;
	uint64_t x26 = 1458878993202075469LLU;
	int16_t x28 = -1;

	t6 = (((x25==x26)<x27)-x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = -34699402728657LL;
	uint8_t x30 = 3U;
	static uint16_t x32 = 3U;
	int32_t t7 = -13;

	t7 = (((x29==x30)<x31)-x32);

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint32_t x35 = 7U;
	int8_t x36 = -3;
	int32_t t8 = 1888487;

	t8 = (((x33==x34)<x35)-x36);

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x38 = INT32_MAX;
	int64_t x40 = -1LL;
	int64_t t9 = -610301466LL;

	t9 = (((x37==x38)<x39)-x40);

	if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 2372205895385790LLU;
	volatile int8_t x42 = -1;
	uint32_t x43 = 602093940U;
	uint8_t x44 = UINT8_MAX;
	int32_t t10 = 69271422;

	t10 = (((x41==x42)<x43)-x44);

	if (t10 != -254) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 25481U;
	static int16_t x46 = -1;
	int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t11 = -467639021;

	t11 = (((x45==x46)<x47)-x48);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 9317402168912363LLU;
	static volatile int64_t x50 = -1568187283520620409LL;
	int64_t x51 = -1LL;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 141518443129029LLU;

	t12 = (((x49==x50)<x51)-x52);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int8_t x58 = -2;
	uint8_t x59 = 3U;
	volatile int32_t t13 = -88518;

	t13 = (((x57==x58)<x59)-x60);

	if (t13 != -254) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = INT16_MAX;
	int32_t x62 = INT32_MIN;
	volatile int32_t x63 = -1304150;
	volatile int64_t x64 = 1350516LL;
	volatile int64_t t14 = 20750321833LL;

	t14 = (((x61==x62)<x63)-x64);

	if (t14 != -1350516LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = UINT8_MAX;
	int32_t t15 = 517287354;

	t15 = (((x65==x66)<x67)-x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 5546264;
	int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	uint8_t x72 = UINT8_MAX;
	int32_t t16 = -403815;

	t16 = (((x69==x70)<x71)-x72);

	if (t16 != -255) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	static volatile int32_t x74 = 1107;
	int16_t x75 = -1;
	int32_t x76 = INT32_MAX;
	int32_t t17 = 167692866;

	t17 = (((x73==x74)<x75)-x76);

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = 238U;
	int64_t x79 = -312576289LL;
	volatile int64_t x80 = INT64_MAX;
	int64_t t18 = 53012LL;

	t18 = (((x77==x78)<x79)-x80);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x81 = -1;
	int32_t x82 = -620363;
	volatile uint16_t x83 = 238U;
	uint64_t t19 = 3372557670LLU;

	t19 = (((x81==x82)<x83)-x84);

	if (t19 != 18446744073708051554LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = INT32_MIN;
	int32_t x87 = -1;
	int32_t x88 = INT32_MAX;
	static volatile int32_t t20 = 475667388;

	t20 = (((x85==x86)<x87)-x88);

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = 206392092;
	int16_t x90 = 429;
	int8_t x92 = 0;

	t21 = (((x89==x90)<x91)-x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x93 = UINT16_MAX;
	int8_t x94 = 8;
	volatile int32_t x95 = INT32_MIN;
	volatile int32_t t22 = 1;

	t22 = (((x93==x94)<x95)-x96);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	static volatile int32_t x98 = INT32_MIN;
	static volatile int16_t x99 = -1;
	uint64_t x100 = 637979410664555165LLU;
	uint64_t t23 = 83795138LLU;

	t23 = (((x97==x98)<x99)-x100);

	if (t23 != 17808764663044996451LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x103 = 120197061384LL;
	uint32_t x104 = UINT32_MAX;
	uint32_t t24 = 2005827164U;

	t24 = (((x101==x102)<x103)-x104);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 27724U;
	static volatile uint64_t x106 = 33156943552LLU;
	int8_t x107 = INT8_MAX;
	uint32_t x108 = 1431U;
	uint32_t t25 = 18329U;

	t25 = (((x105==x106)<x107)-x108);

	if (t25 != 4294965866U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	int32_t x110 = 6804687;
	static int32_t x111 = INT32_MAX;
	volatile uint8_t x112 = UINT8_MAX;
	static volatile int32_t t26 = 63070435;

	t26 = (((x109==x110)<x111)-x112);

	if (t26 != -254) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x119 = INT32_MIN;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t27 = 210U;

	t27 = (((x117==x118)<x119)-x120);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = INT32_MIN;
	uint8_t x122 = 101U;
	static int64_t x123 = INT64_MAX;
	int32_t x124 = 32;
	int32_t t28 = -230919;

	t28 = (((x121==x122)<x123)-x124);

	if (t28 != -31) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = UINT16_MAX;
	uint16_t x126 = 2682U;
	volatile uint64_t x127 = 52821LLU;
	volatile int32_t t29 = 512;

	t29 = (((x125==x126)<x127)-x128);

	if (t29 != -6) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x135 = -9;
	static int8_t x136 = INT8_MAX;
	int32_t t30 = 653113923;

	t30 = (((x133==x134)<x135)-x136);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x138 = UINT32_MAX;
	volatile int32_t x139 = INT32_MIN;
	volatile int64_t x140 = -1LL;
	volatile int64_t t31 = 874717510084215036LL;

	t31 = (((x137==x138)<x139)-x140);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x141 = 0U;
	static int8_t x142 = INT8_MIN;
	uint8_t x143 = 0U;
	int32_t x144 = INT32_MAX;
	int32_t t32 = -131592949;

	t32 = (((x141==x142)<x143)-x144);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = INT64_MIN;
	int32_t x147 = 1;
	volatile uint32_t t33 = 1250715U;

	t33 = (((x145==x146)<x147)-x148);

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x149 = 28U;
	uint16_t x150 = 0U;
	static int32_t x152 = -1;

	t34 = (((x149==x150)<x151)-x152);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = 1;
	int8_t x156 = INT8_MIN;
	int32_t t35 = 190801;

	t35 = (((x153==x154)<x155)-x156);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = 23;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MIN;
	volatile int32_t t36 = -2;

	t36 = (((x157==x158)<x159)-x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x162 = 1381434697303LL;
	int16_t x163 = -1;
	int64_t x164 = 4059003798406680251LL;
	int64_t t37 = -1828468172LL;

	t37 = (((x161==x162)<x163)-x164);

	if (t37 != -4059003798406680251LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -1;
	static volatile uint8_t x166 = 5U;
	int64_t x168 = 249711LL;
	volatile int64_t t38 = -18689LL;

	t38 = (((x165==x166)<x167)-x168);

	if (t38 != -249711LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x170 = 14438U;
	uint32_t t39 = 4033917U;

	t39 = (((x169==x170)<x171)-x172);

	if (t39 != 4294890894U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x174 = 943952797867251782LLU;
	volatile uint64_t x176 = UINT64_MAX;
	static volatile uint64_t t40 = 205LLU;

	t40 = (((x173==x174)<x175)-x176);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = 1U;
	int64_t x178 = INT64_MAX;
	uint32_t x180 = UINT32_MAX;
	static uint32_t t41 = 26U;

	t41 = (((x177==x178)<x179)-x180);

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = INT16_MAX;
	uint8_t x184 = 5U;
	volatile int32_t t42 = -49;

	t42 = (((x181==x182)<x183)-x184);

	if (t42 != -4) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = -761LL;
	volatile uint16_t x187 = 32363U;
	static int32_t x188 = -127489718;
	int32_t t43 = -371844;

	t43 = (((x185==x186)<x187)-x188);

	if (t43 != 127489719) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MAX;
	int8_t x191 = 20;
	int32_t x192 = -1;

	t44 = (((x189==x190)<x191)-x192);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x199 = -445867773LL;
	int16_t x200 = -10;
	volatile int32_t t45 = -2785;

	t45 = (((x197==x198)<x199)-x200);

	if (t45 != 10) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = UINT8_MAX;
	static volatile int8_t x202 = INT8_MIN;
	int64_t x203 = -1LL;
	int8_t x204 = -1;
	volatile int32_t t46 = 49464;

	t46 = (((x201==x202)<x203)-x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint64_t x206 = 6358LLU;
	uint8_t x207 = 34U;
	int32_t x208 = INT32_MAX;
	int32_t t47 = 2915405;

	t47 = (((x205==x206)<x207)-x208);

	if (t47 != -2147483646) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 10142U;
	volatile int8_t x210 = 50;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MAX;
	volatile int32_t t48 = -725375;

	t48 = (((x209==x210)<x211)-x212);

	if (t48 != -127) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 1290525U;
	static int16_t x216 = 0;

	t49 = (((x213==x214)<x215)-x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x219 = INT16_MIN;
	uint16_t x220 = 119U;

	t50 = (((x217==x218)<x219)-x220);

	if (t50 != -119) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x221 = 1092528U;
	int16_t x222 = -1;
	static uint16_t x223 = 55U;
	int8_t x224 = -1;
	int32_t t51 = -424;

	t51 = (((x221==x222)<x223)-x224);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = -46;
	int8_t x231 = -1;
	static uint32_t x232 = UINT32_MAX;
	static volatile uint32_t t52 = 7610U;

	t52 = (((x229==x230)<x231)-x232);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x233 = INT32_MIN;
	static int8_t x235 = 15;
	int64_t x236 = 7497187LL;

	t53 = (((x233==x234)<x235)-x236);

	if (t53 != -7497186LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = INT16_MIN;
	uint64_t x238 = 572837007096546412LLU;
	int32_t x239 = -1;
	uint16_t x240 = 179U;
	int32_t t54 = 165480;

	t54 = (((x237==x238)<x239)-x240);

	if (t54 != -179) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1;
	static int8_t x244 = INT8_MIN;
	static int32_t t55 = -1;

	t55 = (((x241==x242)<x243)-x244);

	if (t55 != 129) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x246 = 426525967564LL;
	int16_t x247 = 6013;
	uint32_t x248 = UINT32_MAX;

	t56 = (((x245==x246)<x247)-x248);

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 234495LLU;
	static int64_t x251 = -1LL;
	int64_t x252 = -1LL;

	t57 = (((x249==x250)<x251)-x252);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	static volatile int8_t x256 = 1;
	volatile int32_t t58 = 1;

	t58 = (((x253==x254)<x255)-x256);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = -2;
	int32_t x260 = -155264883;
	int32_t t59 = -2325;

	t59 = (((x257==x258)<x259)-x260);

	if (t59 != 155264884) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x261 = INT8_MAX;
	static uint16_t x262 = 6U;
	int64_t x263 = -1LL;
	volatile int32_t t60 = 323399;

	t60 = (((x261==x262)<x263)-x264);

	if (t60 != 123924769) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x265 = -7;
	volatile uint16_t x266 = UINT16_MAX;
	volatile int8_t x267 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t61 = 7772U;

	t61 = (((x265==x266)<x267)-x268);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x269 = -3;
	static int64_t x270 = -1LL;
	static uint32_t x271 = 269594U;
	uint32_t x272 = 25847U;
	uint32_t t62 = 148U;

	t62 = (((x269==x270)<x271)-x272);

	if (t62 != 4294941450U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x274 = INT16_MAX;
	int64_t x275 = -265957311419LL;
	int64_t x276 = 1LL;
	static int64_t t63 = -81967956840LL;

	t63 = (((x273==x274)<x275)-x276);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -3721;
	static volatile uint32_t x278 = 14736U;
	uint8_t x279 = 8U;
	int32_t x280 = 7268;
	int32_t t64 = 2647945;

	t64 = (((x277==x278)<x279)-x280);

	if (t64 != -7267) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -1;
	volatile int16_t x282 = -18;
	int64_t x284 = 28715LL;
	int64_t t65 = 409751LL;

	t65 = (((x281==x282)<x283)-x284);

	if (t65 != -28714LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = 15;
	static int32_t x286 = -1;
	int32_t x287 = -11000;
	volatile int8_t x288 = 3;
	volatile int32_t t66 = 1581412;

	t66 = (((x285==x286)<x287)-x288);

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x290 = -1;
	static int64_t x291 = INT64_MIN;
	volatile int8_t x292 = 2;
	volatile int32_t t67 = -2374435;

	t67 = (((x289==x290)<x291)-x292);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MAX;
	uint32_t x294 = 901929U;
	int32_t x295 = INT32_MIN;
	int8_t x296 = -1;
	static volatile int32_t t68 = 3;

	t68 = (((x293==x294)<x295)-x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x298 = INT32_MIN;
	volatile int8_t x300 = -9;

	t69 = (((x297==x298)<x299)-x300);

	if (t69 != 9) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x306 = UINT32_MAX;
	int8_t x307 = -1;
	int64_t x308 = 354840245401857LL;

	t70 = (((x305==x306)<x307)-x308);

	if (t70 != -354840245401857LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	static volatile uint8_t x310 = 0U;
	volatile int8_t x311 = INT8_MIN;
	int32_t t71 = -181;

	t71 = (((x309==x310)<x311)-x312);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	volatile int32_t t72 = 203809;

	t72 = (((x313==x314)<x315)-x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x322 = INT64_MIN;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t73 = 679536275;

	t73 = (((x321==x322)<x323)-x324);

	if (t73 != 129) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x325 = -1LL;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MAX;
	volatile int64_t t74 = -91168LL;

	t74 = (((x325==x326)<x327)-x328);

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x329 = 10146U;
	int8_t x330 = INT8_MIN;
	static int8_t x331 = INT8_MAX;

	t75 = (((x329==x330)<x331)-x332);

	if (t75 != -126) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x333 = UINT16_MAX;
	static uint16_t x334 = 5U;
	uint32_t x335 = UINT32_MAX;
	volatile uint16_t x336 = 23U;
	static int32_t t76 = -1;

	t76 = (((x333==x334)<x335)-x336);

	if (t76 != -22) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x338 = 1U;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t77 = -1344824;

	t77 = (((x337==x338)<x339)-x340);

	if (t77 != 129) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x341 = INT64_MAX;
	static volatile int8_t x342 = -1;
	int32_t x343 = 2;
	int16_t x344 = -1;

	t78 = (((x341==x342)<x343)-x344);

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 206406542622217859LLU;
	int16_t x347 = INT16_MIN;
	volatile uint8_t x348 = 23U;
	volatile int32_t t79 = -8;

	t79 = (((x345==x346)<x347)-x348);

	if (t79 != -23) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = 795U;
	volatile uint32_t x351 = 16616U;
	int8_t x352 = INT8_MIN;
	int32_t t80 = -94;

	t80 = (((x349==x350)<x351)-x352);

	if (t80 != 129) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x355 = 2U;
	volatile int8_t x356 = 1;

	t81 = (((x353==x354)<x355)-x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x357 = -1;
	static volatile uint64_t x358 = 2LLU;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 506U;
	static uint32_t t82 = 1741U;

	t82 = (((x357==x358)<x359)-x360);

	if (t82 != 4294966790U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MIN;
	int16_t x364 = 254;
	volatile int32_t t83 = 80846587;

	t83 = (((x361==x362)<x363)-x364);

	if (t83 != -254) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	int16_t x367 = 0;
	int32_t x368 = -8740745;

	t84 = (((x365==x366)<x367)-x368);

	if (t84 != 8740745) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x370 = INT64_MIN;
	int32_t x372 = INT32_MAX;
	static int32_t t85 = 631;

	t85 = (((x369==x370)<x371)-x372);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x373 = 1;
	uint16_t x375 = 49U;
	int32_t x376 = 7240;
	int32_t t86 = 264;

	t86 = (((x373==x374)<x375)-x376);

	if (t86 != -7239) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	int8_t x379 = 0;
	uint64_t x380 = 24760037763347LLU;
	volatile uint64_t t87 = 1LLU;

	t87 = (((x377==x378)<x379)-x380);

	if (t87 != 18446719313671788269LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x382 = 1724334;
	int16_t x383 = -1;
	int64_t x384 = -1409316LL;

	t88 = (((x381==x382)<x383)-x384);

	if (t88 != 1409316LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x386 = -1;
	uint8_t x387 = 1U;
	uint8_t x388 = UINT8_MAX;
	int32_t t89 = 520349988;

	t89 = (((x385==x386)<x387)-x388);

	if (t89 != -254) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = -1139LL;
	uint64_t x390 = UINT64_MAX;
	volatile int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;

	t90 = (((x389==x390)<x391)-x392);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = UINT64_MAX;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = -1;
	volatile int32_t t91 = -3;

	t91 = (((x393==x394)<x395)-x396);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x399 = -1;
	volatile uint32_t x400 = UINT32_MAX;
	volatile uint32_t t92 = 34126454U;

	t92 = (((x397==x398)<x399)-x400);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x402 = -5;
	volatile uint64_t x403 = 68378329563LLU;
	static volatile uint16_t x404 = 2U;
	volatile int32_t t93 = -262813637;

	t93 = (((x401==x402)<x403)-x404);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x406 = 120948U;
	int8_t x407 = -1;
	int8_t x408 = -22;
	static volatile int32_t t94 = 0;

	t94 = (((x405==x406)<x407)-x408);

	if (t94 != 22) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MIN;
	int8_t x410 = -1;
	int16_t x411 = -13731;
	uint8_t x412 = 12U;

	t95 = (((x409==x410)<x411)-x412);

	if (t95 != -12) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x414 = 50517LLU;
	static int32_t x415 = INT32_MIN;
	volatile int64_t x416 = -1LL;
	volatile int64_t t96 = 21LL;

	t96 = (((x413==x414)<x415)-x416);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x417 = -1LL;
	volatile int32_t x418 = -2;
	int16_t x419 = -58;
	int8_t x420 = 10;
	volatile int32_t t97 = 22048;

	t97 = (((x417==x418)<x419)-x420);

	if (t97 != -10) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = -24;
	uint16_t x423 = UINT16_MAX;
	int64_t x424 = 12624830995943760LL;
	volatile int64_t t98 = -4577751218814494608LL;

	t98 = (((x421==x422)<x423)-x424);

	if (t98 != -12624830995943759LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x425 = INT16_MIN;
	int32_t x426 = -1;
	static int16_t x428 = INT16_MIN;

	t99 = (((x425==x426)<x427)-x428);

	if (t99 != 32769) { NG(); } else { ; }
	
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

