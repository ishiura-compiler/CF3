#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x7 = 8140U;
uint64_t x16 = UINT64_MAX;
uint32_t x23 = UINT32_MAX;
int32_t t4 = -9753;
uint32_t x34 = 1413295U;
int64_t x41 = INT64_MIN;
int16_t x49 = 696;
static volatile int64_t x50 = INT64_MAX;
int8_t x51 = INT8_MIN;
uint16_t x53 = 2U;
volatile uint16_t x56 = 41U;
int16_t x62 = 6338;
volatile int16_t x68 = -2693;
int32_t x75 = 19852;
int8_t x80 = INT8_MAX;
int8_t x82 = INT8_MAX;
volatile int64_t t20 = 366240216182136403LL;
static int32_t x93 = -1;
int8_t x98 = INT8_MIN;
int32_t t22 = -226;
static int16_t x101 = INT16_MIN;
int8_t x116 = INT8_MIN;
int32_t x119 = -47;
int16_t x120 = 51;
uint64_t x124 = UINT64_MAX;
volatile uint64_t t28 = 4LLU;
int8_t x139 = 1;
uint8_t x141 = UINT8_MAX;
volatile int32_t x146 = -3098;
volatile uint16_t x147 = 0U;
volatile int16_t x148 = -4543;
int16_t x169 = INT16_MAX;
volatile int16_t x170 = INT16_MAX;
int32_t x174 = INT32_MIN;
volatile int64_t t36 = 764961863517LL;
int16_t x186 = 8;
int64_t x192 = 1352LL;
uint32_t x196 = 978U;
uint8_t x200 = UINT8_MAX;
uint16_t x202 = UINT16_MAX;
volatile uint64_t x207 = 3LLU;
volatile int8_t x212 = INT8_MIN;
int8_t x220 = -1;
uint8_t x222 = 0U;
static int64_t x229 = -215791899LL;
volatile int16_t x232 = -1;
volatile int8_t x251 = -1;
volatile int32_t t52 = -18950560;
uint32_t x266 = UINT32_MAX;
uint8_t x270 = 7U;
volatile int32_t t54 = 5872;
volatile int32_t x278 = 1262997;
int8_t x282 = INT8_MAX;
static uint32_t x284 = 4220037U;
volatile uint32_t x286 = UINT32_MAX;
uint64_t x288 = UINT64_MAX;
uint8_t x297 = 7U;
uint64_t x307 = 15594393476308LLU;
static uint32_t x309 = UINT32_MAX;
uint8_t x312 = 31U;
int32_t t62 = 918;
int32_t x320 = INT32_MAX;
volatile int32_t t63 = -94660;
static int64_t x329 = INT64_MIN;
static uint16_t x330 = UINT16_MAX;
int16_t x333 = -1;
volatile int16_t x334 = INT16_MAX;
volatile int64_t x343 = -1LL;
int32_t t69 = 243069;
int16_t x358 = -3610;
uint8_t x364 = 21U;
uint8_t x369 = UINT8_MAX;
static volatile uint16_t x372 = 6982U;
volatile int32_t t73 = 394362;
static volatile int64_t t74 = 1016238472LL;
volatile uint16_t x399 = 2U;
int8_t x400 = -1;
uint32_t x430 = 383563U;
static int32_t x434 = INT32_MIN;
volatile int32_t t86 = 821;
int16_t x442 = INT16_MIN;
static int32_t t87 = 253717795;
static volatile int8_t x451 = INT8_MAX;
volatile uint32_t t91 = 2538U;
static int32_t x463 = INT32_MAX;
static int16_t x471 = INT16_MAX;
int8_t x474 = INT8_MIN;
int16_t x475 = INT16_MIN;
volatile uint32_t x476 = 1259211U;
int8_t x485 = INT8_MAX;
int16_t x487 = INT16_MIN;
volatile uint64_t x492 = UINT64_MAX;
int8_t x495 = INT8_MIN;


void f0(void) {
	volatile int32_t x1 = -146341;
	static int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 10708012U;
	static int16_t x4 = 346;
	static volatile int32_t t0 = -14597;

	t0 = (((x1==x2)==x3)-x4);

	if (t0 != -346) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint64_t x6 = 2020912045874103LLU;
	uint8_t x8 = 5U;
	int32_t t1 = -72172;

	t1 = (((x5==x6)==x7)-x8);

	if (t1 != -5) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -100044904;
	static int8_t x14 = INT8_MAX;
	static volatile int64_t x15 = INT64_MIN;
	volatile uint64_t t2 = 568428601LLU;

	t2 = (((x13==x14)==x15)-x16);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 214LLU;
	int16_t x18 = INT16_MIN;
	volatile uint8_t x19 = UINT8_MAX;
	volatile int16_t x20 = INT16_MIN;
	int32_t t3 = -1302;

	t3 = (((x17==x18)==x19)-x20);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	uint32_t x22 = 29U;
	volatile uint16_t x24 = 2U;

	t4 = (((x21==x22)==x23)-x24);

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -17;
	int8_t x26 = INT8_MIN;
	volatile uint32_t x27 = 54U;
	int8_t x28 = INT8_MIN;
	int32_t t5 = 16505;

	t5 = (((x25==x26)==x27)-x28);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = 1516U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 1716U;
	volatile int32_t x32 = INT32_MAX;
	static int32_t t6 = -121092;

	t6 = (((x29==x30)==x31)-x32);

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	static volatile int32_t x35 = 634;
	int16_t x36 = 10761;
	int32_t t7 = -1;

	t7 = (((x33==x34)==x35)-x36);

	if (t7 != -10761) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x42 = INT32_MIN;
	int16_t x43 = -1;
	volatile int16_t x44 = INT16_MIN;
	int32_t t8 = 1;

	t8 = (((x41==x42)==x43)-x44);

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = INT32_MAX;
	uint32_t x46 = UINT32_MAX;
	uint16_t x47 = 37U;
	int64_t x48 = 1172LL;
	volatile int64_t t9 = -8174137LL;

	t9 = (((x45==x46)==x47)-x48);

	if (t9 != -1172LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x52 = -10;
	int32_t t10 = 1;

	t10 = (((x49==x50)==x51)-x52);

	if (t10 != 10) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x54 = -1LL;
	uint64_t x55 = 58172LLU;
	volatile int32_t t11 = -53459714;

	t11 = (((x53==x54)==x55)-x56);

	if (t11 != -41) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = 39303568085LLU;
	int64_t x58 = 191LL;
	int64_t x59 = -2935464533802060377LL;
	int16_t x60 = 399;
	int32_t t12 = 125208995;

	t12 = (((x57==x58)==x59)-x60);

	if (t12 != -399) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 0;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = 2U;
	uint32_t t13 = 7937U;

	t13 = (((x61==x62)==x63)-x64);

	if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -1182353;
	uint32_t x66 = 0U;
	volatile int16_t x67 = INT16_MIN;
	static volatile int32_t t14 = 5143349;

	t14 = (((x65==x66)==x67)-x68);

	if (t14 != 2693) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x69 = -1LL;
	volatile uint16_t x70 = 7486U;
	volatile uint32_t x71 = UINT32_MAX;
	uint32_t x72 = 1245102U;
	volatile uint32_t t15 = 7619U;

	t15 = (((x69==x70)==x71)-x72);

	if (t15 != 4293722194U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = 4529675731LL;
	uint64_t x74 = 26LLU;
	uint16_t x76 = 260U;
	volatile int32_t t16 = -157152783;

	t16 = (((x73==x74)==x75)-x76);

	if (t16 != -260) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = INT8_MIN;
	uint8_t x78 = 2U;
	int8_t x79 = INT8_MIN;
	static int32_t t17 = 55789;

	t17 = (((x77==x78)==x79)-x80);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MAX;
	volatile uint32_t x83 = 223U;
	uint64_t x84 = 4824791LLU;
	uint64_t t18 = 23126887986LLU;

	t18 = (((x81==x82)==x83)-x84);

	if (t18 != 18446744073704726825LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 14744U;
	int64_t x86 = -12769063885259118LL;
	static uint32_t x87 = 50U;
	int16_t x88 = INT16_MIN;
	int32_t t19 = -53222860;

	t19 = (((x85==x86)==x87)-x88);

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 11081U;
	static uint64_t x90 = 212828520639771974LLU;
	int8_t x91 = -17;
	volatile int64_t x92 = -251672529335LL;

	t20 = (((x89==x90)==x91)-x92);

	if (t20 != 251672529335LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x94 = INT32_MIN;
	static int8_t x95 = INT8_MIN;
	static int16_t x96 = INT16_MAX;
	volatile int32_t t21 = -89;

	t21 = (((x93==x94)==x95)-x96);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = 1;
	int16_t x99 = -1;
	uint8_t x100 = UINT8_MAX;

	t22 = (((x97==x98)==x99)-x100);

	if (t22 != -255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x102 = 59;
	static uint64_t x103 = 489091187LLU;
	static uint64_t x104 = 86077756LLU;
	volatile uint64_t t23 = 37022521LLU;

	t23 = (((x101==x102)==x103)-x104);

	if (t23 != 18446744073623473860LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 47U;
	static int64_t x110 = -828836591914LL;
	uint16_t x111 = UINT16_MAX;
	volatile int8_t x112 = 0;
	int32_t t24 = -182700862;

	t24 = (((x109==x110)==x111)-x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x113 = 402056U;
	uint64_t x114 = 862581665090LLU;
	int32_t x115 = INT32_MIN;
	volatile int32_t t25 = -28088;

	t25 = (((x113==x114)==x115)-x116);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x117 = 1987986004LLU;
	int64_t x118 = -287LL;
	int32_t t26 = -123198;

	t26 = (((x117==x118)==x119)-x120);

	if (t26 != -51) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x121 = 0U;
	volatile int16_t x122 = INT16_MIN;
	static uint32_t x123 = UINT32_MAX;
	static uint64_t t27 = 8097666748946593LLU;

	t27 = (((x121==x122)==x123)-x124);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -134;
	int32_t x126 = INT32_MAX;
	uint32_t x127 = 30217U;
	volatile uint64_t x128 = UINT64_MAX;

	t28 = (((x125==x126)==x127)-x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x129 = 3196749LLU;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	static uint32_t x132 = 16871U;
	volatile uint32_t t29 = 1425684U;

	t29 = (((x129==x130)==x131)-x132);

	if (t29 != 4294950425U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = -3;
	int16_t x138 = -1;
	static uint8_t x140 = 7U;
	int32_t t30 = 426610;

	t30 = (((x137==x138)==x139)-x140);

	if (t30 != -7) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x142 = 6LLU;
	int8_t x143 = -1;
	volatile uint32_t x144 = 24U;
	static uint32_t t31 = 314025U;

	t31 = (((x141==x142)==x143)-x144);

	if (t31 != 4294967272U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x145 = 16142U;
	volatile int32_t t32 = -809393962;

	t32 = (((x145==x146)==x147)-x148);

	if (t32 != 4544) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 339479617LLU;
	uint64_t x150 = 58588744011842LLU;
	uint8_t x151 = 78U;
	int64_t x152 = 638750433LL;
	volatile int64_t t33 = 456326821617960203LL;

	t33 = (((x149==x150)==x151)-x152);

	if (t33 != -638750433LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x161 = -1;
	uint32_t x162 = 1263U;
	int8_t x163 = INT8_MAX;
	static int32_t x164 = 1817;
	static volatile int32_t t34 = 721677;

	t34 = (((x161==x162)==x163)-x164);

	if (t34 != -1817) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x171 = INT32_MIN;
	int64_t x172 = -84423954133626173LL;
	int64_t t35 = -18533813LL;

	t35 = (((x169==x170)==x171)-x172);

	if (t35 != 84423954133626173LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x173 = UINT32_MAX;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MAX;

	t36 = (((x173==x174)==x175)-x176);

	if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x177 = 1U;
	int64_t x178 = 528902129LL;
	volatile int64_t x179 = INT64_MIN;
	static uint8_t x180 = 28U;
	int32_t t37 = 60235;

	t37 = (((x177==x178)==x179)-x180);

	if (t37 != -28) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x181 = INT64_MAX;
	int16_t x182 = -1;
	volatile int32_t x183 = -46;
	int32_t x184 = INT32_MAX;
	volatile int32_t t38 = -5;

	t38 = (((x181==x182)==x183)-x184);

	if (t38 != -2147483647) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x187 = -307533LL;
	int32_t x188 = INT32_MAX;
	int32_t t39 = 2917;

	t39 = (((x185==x186)==x187)-x188);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -43416944LL;
	int8_t x190 = -3;
	uint16_t x191 = UINT16_MAX;
	volatile int64_t t40 = 171318078829LL;

	t40 = (((x189==x190)==x191)-x192);

	if (t40 != -1352LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = INT16_MAX;
	volatile uint32_t x194 = 12357U;
	int64_t x195 = 16718852LL;
	static uint32_t t41 = 52558U;

	t41 = (((x193==x194)==x195)-x196);

	if (t41 != 4294966318U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x197 = -833023;
	int16_t x198 = INT16_MAX;
	uint64_t x199 = 68642541820731181LLU;
	volatile int32_t t42 = -405;

	t42 = (((x197==x198)==x199)-x200);

	if (t42 != -255) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	static int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	volatile int32_t t43 = 243;

	t43 = (((x201==x202)==x203)-x204);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x205 = UINT8_MAX;
	int32_t x206 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t44 = 6500U;

	t44 = (((x205==x206)==x207)-x208);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = 201LLU;
	static int16_t x210 = 3355;
	uint32_t x211 = UINT32_MAX;
	volatile int32_t t45 = -75160;

	t45 = (((x209==x210)==x211)-x212);

	if (t45 != 128) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = INT64_MAX;
	int8_t x214 = 1;
	int32_t x215 = -6412803;
	int64_t x216 = 64762LL;
	static int64_t t46 = -19656402317270LL;

	t46 = (((x213==x214)==x215)-x216);

	if (t46 != -64762LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = 265;
	volatile int16_t x219 = INT16_MIN;
	volatile int32_t t47 = -2;

	t47 = (((x217==x218)==x219)-x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	static int32_t x223 = INT32_MAX;
	int64_t x224 = -150674896672899883LL;
	static volatile int64_t t48 = 2530130LL;

	t48 = (((x221==x222)==x223)-x224);

	if (t48 != 150674896672899883LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x230 = 988946U;
	uint16_t x231 = 11U;
	volatile int32_t t49 = -5195277;

	t49 = (((x229==x230)==x231)-x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x233 = UINT32_MAX;
	uint8_t x234 = 41U;
	volatile int8_t x235 = INT8_MIN;
	static uint32_t x236 = 102789U;
	static uint32_t t50 = 10U;

	t50 = (((x233==x234)==x235)-x236);

	if (t50 != 4294864507U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	int8_t x252 = 1;
	volatile int32_t t51 = -2591;

	t51 = (((x249==x250)==x251)-x252);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x253 = INT64_MIN;
	static int8_t x254 = INT8_MAX;
	int32_t x255 = -1;
	int16_t x256 = INT16_MAX;

	t52 = (((x253==x254)==x255)-x256);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = INT16_MAX;
	uint16_t x267 = 1067U;
	int16_t x268 = 1862;
	int32_t t53 = -28;

	t53 = (((x265==x266)==x267)-x268);

	if (t53 != -1862) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = 0;
	int16_t x271 = INT16_MAX;
	uint16_t x272 = 116U;

	t54 = (((x269==x270)==x271)-x272);

	if (t54 != -116) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x277 = INT64_MIN;
	volatile int64_t x279 = INT64_MIN;
	uint16_t x280 = 215U;
	int32_t t55 = -172;

	t55 = (((x277==x278)==x279)-x280);

	if (t55 != -215) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x281 = UINT8_MAX;
	volatile uint64_t x283 = UINT64_MAX;
	volatile uint32_t t56 = 369U;

	t56 = (((x281==x282)==x283)-x284);

	if (t56 != 4290747259U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x285 = UINT8_MAX;
	static uint16_t x287 = 2U;
	volatile uint64_t t57 = 112486327817794LLU;

	t57 = (((x285==x286)==x287)-x288);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x289 = 23472889779458567LLU;
	volatile int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	int32_t x292 = 105736;
	volatile int32_t t58 = 21158053;

	t58 = (((x289==x290)==x291)-x292);

	if (t58 != -105736) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x298 = -1755616481451792648LL;
	int8_t x299 = INT8_MIN;
	int8_t x300 = -1;
	int32_t t59 = -4956474;

	t59 = (((x297==x298)==x299)-x300);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x301 = 828814U;
	int16_t x302 = INT16_MIN;
	static int32_t x303 = -1;
	volatile uint8_t x304 = 3U;
	volatile int32_t t60 = -454;

	t60 = (((x301==x302)==x303)-x304);

	if (t60 != -3) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x305 = -1;
	int16_t x306 = INT16_MAX;
	static volatile uint8_t x308 = UINT8_MAX;
	int32_t t61 = -2042;

	t61 = (((x305==x306)==x307)-x308);

	if (t61 != -255) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x310 = INT16_MAX;
	int64_t x311 = INT64_MIN;

	t62 = (((x309==x310)==x311)-x312);

	if (t62 != -31) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = 19582U;
	int8_t x318 = 1;
	volatile uint64_t x319 = 14130417714717LLU;

	t63 = (((x317==x318)==x319)-x320);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x325 = 3U;
	static int16_t x326 = INT16_MAX;
	static int32_t x327 = INT32_MIN;
	static volatile int8_t x328 = INT8_MIN;
	volatile int32_t t64 = 8;

	t64 = (((x325==x326)==x327)-x328);

	if (t64 != 128) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x331 = UINT16_MAX;
	int64_t x332 = 17411484458493581LL;
	volatile int64_t t65 = -1LL;

	t65 = (((x329==x330)==x331)-x332);

	if (t65 != -17411484458493581LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x335 = INT64_MIN;
	volatile int64_t x336 = -1LL;
	volatile int64_t t66 = 2273715597607LL;

	t66 = (((x333==x334)==x335)-x336);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x337 = 255U;
	int64_t x338 = 16LL;
	int16_t x339 = INT16_MIN;
	static volatile int16_t x340 = -1;
	int32_t t67 = 253939;

	t67 = (((x337==x338)==x339)-x340);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x341 = 61U;
	volatile int32_t x342 = INT32_MIN;
	int64_t x344 = 627050973254752783LL;
	int64_t t68 = -3812665LL;

	t68 = (((x341==x342)==x343)-x344);

	if (t68 != -627050973254752783LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x349 = -1LL;
	volatile uint8_t x350 = 35U;
	static volatile int64_t x351 = -367809384302LL;
	int8_t x352 = -1;

	t69 = (((x349==x350)==x351)-x352);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x353 = -2;
	volatile uint64_t x354 = 828LLU;
	uint16_t x355 = UINT16_MAX;
	uint32_t x356 = 1519986U;
	uint32_t t70 = 11U;

	t70 = (((x353==x354)==x355)-x356);

	if (t70 != 4293447310U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x359 = 96U;
	uint16_t x360 = 0U;
	volatile int32_t t71 = -4971;

	t71 = (((x357==x358)==x359)-x360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x361 = 35701;
	uint64_t x362 = 378793620936LLU;
	volatile int64_t x363 = 2509805552593LL;
	int32_t t72 = 25;

	t72 = (((x361==x362)==x363)-x364);

	if (t72 != -21) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x370 = INT32_MIN;
	int8_t x371 = -1;

	t73 = (((x369==x370)==x371)-x372);

	if (t73 != -6982) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = INT64_MIN;
	volatile uint16_t x375 = 15442U;
	int64_t x376 = INT64_MAX;

	t74 = (((x373==x374)==x375)-x376);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x377 = INT64_MAX;
	static int64_t x378 = 15LL;
	uint32_t x379 = 5976723U;
	uint32_t x380 = 111294U;
	static uint32_t t75 = 28296U;

	t75 = (((x377==x378)==x379)-x380);

	if (t75 != 4294856002U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	int16_t x383 = 2;
	int16_t x384 = INT16_MIN;
	static int32_t t76 = 0;

	t76 = (((x381==x382)==x383)-x384);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x385 = 300;
	int8_t x386 = INT8_MAX;
	static int64_t x387 = INT64_MIN;
	int8_t x388 = -1;
	volatile int32_t t77 = 80;

	t77 = (((x385==x386)==x387)-x388);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x389 = 2749U;
	int8_t x390 = INT8_MAX;
	static int16_t x391 = INT16_MAX;
	int16_t x392 = INT16_MAX;
	int32_t t78 = 5;

	t78 = (((x389==x390)==x391)-x392);

	if (t78 != -32767) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x393 = -19754;
	int32_t x394 = INT32_MAX;
	static uint8_t x395 = 6U;
	static int32_t x396 = -735;
	static volatile int32_t t79 = 1974365;

	t79 = (((x393==x394)==x395)-x396);

	if (t79 != 735) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = -1;
	int8_t x398 = -38;
	volatile int32_t t80 = 30;

	t80 = (((x397==x398)==x399)-x400);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x401 = 285022101834955302LLU;
	int64_t x402 = INT64_MAX;
	int8_t x403 = INT8_MIN;
	static uint32_t x404 = UINT32_MAX;
	uint32_t t81 = 191842U;

	t81 = (((x401==x402)==x403)-x404);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x413 = INT32_MIN;
	uint16_t x414 = 5U;
	static volatile uint64_t x415 = UINT64_MAX;
	uint32_t x416 = 1393436U;
	uint32_t t82 = 22671U;

	t82 = (((x413==x414)==x415)-x416);

	if (t82 != 4293573860U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x425 = -15;
	volatile uint32_t x426 = 4U;
	int64_t x427 = INT64_MAX;
	volatile uint32_t x428 = 221U;
	volatile uint32_t t83 = 1998039377U;

	t83 = (((x425==x426)==x427)-x428);

	if (t83 != 4294967075U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x429 = 3752LLU;
	uint64_t x431 = UINT64_MAX;
	static int8_t x432 = -18;
	static volatile int32_t t84 = 3388991;

	t84 = (((x429==x430)==x431)-x432);

	if (t84 != 18) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x433 = 2U;
	uint32_t x435 = 3U;
	uint64_t x436 = 883084658395LLU;
	volatile uint64_t t85 = 141LLU;

	t85 = (((x433==x434)==x435)-x436);

	if (t85 != 18446743190624893221LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x437 = -34262LL;
	volatile int8_t x438 = 10;
	int64_t x439 = -129614492635467LL;
	volatile int16_t x440 = 257;

	t86 = (((x437==x438)==x439)-x440);

	if (t86 != -257) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x441 = UINT32_MAX;
	uint32_t x443 = UINT32_MAX;
	uint8_t x444 = 1U;

	t87 = (((x441==x442)==x443)-x444);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x445 = 1;
	static int64_t x446 = -1LL;
	int32_t x447 = INT32_MAX;
	static uint32_t x448 = 52U;
	uint32_t t88 = 526626873U;

	t88 = (((x445==x446)==x447)-x448);

	if (t88 != 4294967244U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x449 = 1435U;
	volatile int32_t x450 = INT32_MIN;
	uint8_t x452 = 2U;
	int32_t t89 = 284;

	t89 = (((x449==x450)==x451)-x452);

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x453 = 31888U;
	volatile uint32_t x454 = UINT32_MAX;
	int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MIN;
	static int32_t t90 = 325895;

	t90 = (((x453==x454)==x455)-x456);

	if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x457 = INT32_MIN;
	int16_t x458 = INT16_MIN;
	static volatile int8_t x459 = -3;
	static uint32_t x460 = 437576U;

	t91 = (((x457==x458)==x459)-x460);

	if (t91 != 4294529720U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x461 = -1;
	int16_t x462 = INT16_MIN;
	volatile int8_t x464 = INT8_MAX;
	int32_t t92 = 1423;

	t92 = (((x461==x462)==x463)-x464);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x469 = INT16_MIN;
	uint16_t x470 = UINT16_MAX;
	static int64_t x472 = 72943194418LL;
	volatile int64_t t93 = 2684172354LL;

	t93 = (((x469==x470)==x471)-x472);

	if (t93 != -72943194418LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x473 = UINT32_MAX;
	uint32_t t94 = 8620U;

	t94 = (((x473==x474)==x475)-x476);

	if (t94 != 4293708085U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x477 = INT64_MIN;
	volatile uint8_t x478 = 7U;
	uint8_t x479 = UINT8_MAX;
	int64_t x480 = 25631LL;
	int64_t t95 = -3146873101647LL;

	t95 = (((x477==x478)==x479)-x480);

	if (t95 != -25631LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MIN;
	static int64_t x483 = -1LL;
	int64_t x484 = 247863817013121LL;
	static int64_t t96 = -121049379930473LL;

	t96 = (((x481==x482)==x483)-x484);

	if (t96 != -247863817013121LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x486 = INT64_MIN;
	volatile int16_t x488 = -1;
	volatile int32_t t97 = -13835649;

	t97 = (((x485==x486)==x487)-x488);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x489 = UINT64_MAX;
	static int8_t x490 = INT8_MIN;
	int8_t x491 = INT8_MIN;
	volatile uint64_t t98 = 2125179140091190LLU;

	t98 = (((x489==x490)==x491)-x492);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x493 = UINT16_MAX;
	int8_t x494 = INT8_MIN;
	volatile int8_t x496 = -1;
	int32_t t99 = -1;

	t99 = (((x493==x494)==x495)-x496);

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

