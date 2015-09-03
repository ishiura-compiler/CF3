#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
uint8_t x7 = 1U;
static int8_t x16 = -1;
volatile uint64_t t3 = 199LLU;
uint16_t x26 = UINT16_MAX;
volatile uint32_t x35 = 2523U;
int32_t x39 = -16;
static int8_t x62 = INT8_MIN;
int64_t x66 = -734509460772LL;
uint16_t x69 = UINT16_MAX;
int16_t x73 = -1;
static volatile int16_t x75 = INT16_MIN;
int64_t x79 = -1LL;
volatile int16_t x80 = -4522;
int16_t x87 = 0;
static volatile int32_t t18 = 15839;
int32_t t19 = -219;
static int16_t x102 = INT16_MIN;
int64_t x110 = INT64_MIN;
uint16_t x114 = 1U;
uint16_t x116 = UINT16_MAX;
int16_t x129 = INT16_MAX;
static int64_t t26 = 6957419055062490LL;
volatile uint64_t x147 = 14903672790LLU;
uint32_t x151 = 60U;
int32_t t30 = 1567;
static uint64_t x156 = 45411938757011LLU;
volatile int64_t x158 = -17489223807908LL;
int32_t x159 = 706419344;
int32_t x160 = 419861897;
volatile uint64_t t36 = 1173563LLU;
uint64_t x181 = 1555616301251062388LLU;
volatile int32_t t38 = 72057336;
int8_t x186 = 49;
int8_t x187 = -1;
volatile uint64_t x188 = 19724317835LLU;
int8_t x189 = -1;
volatile uint8_t x197 = 22U;
int16_t x209 = -1;
int8_t x212 = -1;
uint8_t x217 = UINT8_MAX;
uint32_t x222 = UINT32_MAX;
uint32_t x226 = UINT32_MAX;
volatile int64_t x229 = 9812605LL;
int32_t x234 = -3137966;
uint32_t x235 = 206U;
int8_t x236 = -1;
int64_t x240 = -25887LL;
uint32_t x249 = 97135U;
volatile uint64_t t55 = 95002LLU;
int32_t x264 = -1;
int8_t x265 = INT8_MIN;
static int16_t x266 = INT16_MIN;
uint64_t x270 = 0LLU;
int32_t x271 = INT32_MIN;
uint16_t x277 = 6U;
static volatile int8_t x285 = -1;
int16_t x287 = INT16_MAX;
uint32_t x288 = UINT32_MAX;
volatile int16_t x290 = -50;
int64_t x292 = 53LL;
int64_t x293 = 85442493LL;
uint64_t x296 = 54655088466338032LLU;
volatile int8_t x299 = INT8_MIN;
uint64_t t66 = 209979952833254LLU;
int16_t x314 = -1;
volatile int8_t x323 = INT8_MIN;
static uint8_t x324 = UINT8_MAX;
volatile int32_t t71 = -2146073;
uint8_t x325 = 45U;
volatile int8_t x327 = -1;
uint16_t x332 = 46U;
int64_t x337 = INT64_MIN;
int32_t x341 = -3;
static uint64_t x350 = 0LLU;
int8_t x359 = -1;
volatile int32_t t81 = -1;
int16_t x369 = INT16_MIN;
static int32_t x371 = INT32_MIN;
uint64_t x374 = UINT64_MAX;
int16_t x375 = INT16_MAX;
uint64_t x376 = 409451LLU;
uint8_t x391 = UINT8_MAX;
int64_t x392 = 345866306LL;
uint16_t x394 = UINT16_MAX;
int8_t x399 = -1;
int64_t x409 = 543166699772990756LL;
uint16_t x411 = UINT16_MAX;
int32_t t91 = -2378740;
static int32_t t93 = -114;
int8_t x425 = -1;
volatile int16_t x426 = -1;
static int64_t x427 = INT64_MIN;
int64_t x428 = -1LL;
static volatile int64_t t94 = 284LL;
int32_t x434 = INT32_MAX;
int64_t x441 = -214575544LL;
static int32_t x442 = INT32_MAX;
uint64_t x451 = 93747146LLU;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MAX;
	uint8_t x3 = 0U;
	volatile uint64_t x4 = 1LLU;
	uint64_t t0 = UINT64_MAX;

	t0 = (((x1^x2)==x3)-x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -1;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 25;

	t1 = (((x5^x6)==x7)-x8);

	if (t1 != 32768) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -3310323087687458LL;
	uint64_t x14 = UINT64_MAX;
	int64_t x15 = -96248348731603LL;
	static volatile int32_t t2 = 0;

	t2 = (((x13^x14)==x15)-x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -236978;
	int16_t x18 = -1;
	static volatile uint64_t x19 = 14166369293LLU;
	uint64_t x20 = UINT64_MAX;

	t3 = (((x17^x18)==x19)-x20);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint32_t x22 = 2101U;
	int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	volatile uint32_t t4 = 1096U;

	t4 = (((x21^x22)==x23)-x24);

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 2U;
	volatile int64_t x27 = -1LL;
	static int16_t x28 = 142;
	volatile int32_t t5 = -233;

	t5 = (((x25^x26)==x27)-x28);

	if (t5 != -142) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	uint32_t x30 = UINT32_MAX;
	int32_t x31 = INT32_MIN;
	int64_t x32 = 427697555240995LL;
	static int64_t t6 = -7589907LL;

	t6 = (((x29^x30)==x31)-x32);

	if (t6 != -427697555240995LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = 79932LLU;
	volatile int32_t x34 = -1;
	static int8_t x36 = 5;
	int32_t t7 = -510146787;

	t7 = (((x33^x34)==x35)-x36);

	if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x37 = INT32_MIN;
	uint8_t x38 = 118U;
	int8_t x40 = INT8_MAX;
	volatile int32_t t8 = 542263394;

	t8 = (((x37^x38)==x39)-x40);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 38U;
	static int8_t x46 = -2;
	volatile int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	static int32_t t9 = -1;

	t9 = (((x45^x46)==x47)-x48);

	if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -3960;
	int64_t x50 = INT64_MAX;
	volatile int64_t x51 = 14416133593343LL;
	uint16_t x52 = 712U;
	volatile int32_t t10 = -436742022;

	t10 = (((x49^x50)==x51)-x52);

	if (t10 != -712) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -1LL;
	volatile int8_t x56 = -55;
	int32_t t11 = 1769;

	t11 = (((x53^x54)==x55)-x56);

	if (t11 != 55) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -32544607LL;
	int64_t x63 = 4594629622840LL;
	int16_t x64 = 1;
	static volatile int32_t t12 = -5540882;

	t12 = (((x61^x62)==x63)-x64);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = 0;
	uint8_t x67 = 0U;
	int32_t x68 = INT32_MAX;
	int32_t t13 = -3;

	t13 = (((x65^x66)==x67)-x68);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = INT16_MIN;
	volatile uint64_t x71 = UINT64_MAX;
	int8_t x72 = 1;
	volatile int32_t t14 = -318;

	t14 = (((x69^x70)==x71)-x72);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = -1;
	int64_t x76 = 1945995270LL;
	int64_t t15 = 45034201804596628LL;

	t15 = (((x73^x74)==x75)-x76);

	if (t15 != -1945995270LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	int64_t x78 = -2464783856228243206LL;
	static int32_t t16 = -66788275;

	t16 = (((x77^x78)==x79)-x80);

	if (t16 != 4522) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	static int16_t x83 = -53;
	static volatile int16_t x84 = INT16_MAX;
	int32_t t17 = 43430;

	t17 = (((x81^x82)==x83)-x84);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x85 = UINT32_MAX;
	uint8_t x86 = 5U;
	int16_t x88 = INT16_MIN;

	t18 = (((x85^x86)==x87)-x88);

	if (t18 != 32768) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x90 = 4660681LLU;
	volatile int64_t x91 = 1468672954994328LL;
	int16_t x92 = INT16_MAX;

	t19 = (((x89^x90)==x91)-x92);

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -1LL;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = UINT8_MAX;
	int16_t x100 = INT16_MIN;
	static int32_t t20 = -173444;

	t20 = (((x97^x98)==x99)-x100);

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x103 = 1U;
	uint64_t x104 = 2LLU;
	uint64_t t21 = 55159251581LLU;

	t21 = (((x101^x102)==x103)-x104);

	if (t21 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = INT32_MIN;
	uint8_t x108 = UINT8_MAX;
	static volatile int32_t t22 = -868282609;

	t22 = (((x105^x106)==x107)-x108);

	if (t22 != -255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x109 = 1U;
	int16_t x111 = 1;
	uint8_t x112 = 1U;
	int32_t t23 = 185;

	t23 = (((x109^x110)==x111)-x112);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 402367LLU;
	static uint64_t x115 = 72LLU;
	int32_t t24 = -679053432;

	t24 = (((x113^x114)==x115)-x116);

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x130 = INT32_MAX;
	volatile int64_t x131 = -246637465396LL;
	int32_t x132 = 182432153;
	static int32_t t25 = -15;

	t25 = (((x129^x130)==x131)-x132);

	if (t25 != -182432153) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x133 = -1;
	int16_t x134 = INT16_MIN;
	int64_t x135 = -11696160012138LL;
	int64_t x136 = INT64_MAX;

	t26 = (((x133^x134)==x135)-x136);

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MAX;
	int32_t x139 = INT32_MIN;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t27 = -9775373;

	t27 = (((x137^x138)==x139)-x140);

	if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -1LL;
	int32_t x142 = 84566937;
	uint64_t x143 = 6LLU;
	int16_t x144 = -2572;
	volatile int32_t t28 = -71833;

	t28 = (((x141^x142)==x143)-x144);

	if (t28 != 2572) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	uint64_t x148 = 204772214597LLU;
	uint64_t t29 = 140917478241606818LLU;

	t29 = (((x145^x146)==x147)-x148);

	if (t29 != 18446743868937337019LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 6423441081644979LLU;
	uint64_t x150 = 53970729899406226LLU;
	int8_t x152 = 2;

	t30 = (((x149^x150)==x151)-x152);

	if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = 17;
	static int8_t x155 = -1;
	static volatile uint64_t t31 = 851901150817332LLU;

	t31 = (((x153^x154)==x155)-x156);

	if (t31 != 18446698661770794605LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = -1;
	volatile int32_t t32 = -618069145;

	t32 = (((x157^x158)==x159)-x160);

	if (t32 != -419861897) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x161 = 62327;
	int32_t x162 = -1;
	int8_t x163 = 7;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t33 = 46;

	t33 = (((x161^x162)==x163)-x164);

	if (t33 != -65535) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x165 = 35U;
	int64_t x166 = -17LL;
	int8_t x167 = -62;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t34 = 4490545;

	t34 = (((x165^x166)==x167)-x168);

	if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x169 = -1073035049LL;
	int32_t x170 = INT32_MIN;
	static int8_t x171 = INT8_MAX;
	uint16_t x172 = 6U;
	int32_t t35 = 31664921;

	t35 = (((x169^x170)==x171)-x172);

	if (t35 != -6) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	static volatile uint8_t x174 = 1U;
	int16_t x175 = INT16_MIN;
	volatile uint64_t x176 = 9LLU;

	t36 = (((x173^x174)==x175)-x176);

	if (t36 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = INT8_MIN;
	volatile int8_t x178 = -5;
	volatile int64_t x179 = INT64_MIN;
	volatile int8_t x180 = INT8_MAX;
	static volatile int32_t t37 = 27;

	t37 = (((x177^x178)==x179)-x180);

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = 8280U;
	int32_t x184 = -259841671;

	t38 = (((x181^x182)==x183)-x184);

	if (t38 != 259841671) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = 58847489937079728LL;
	uint64_t t39 = 7541101LLU;

	t39 = (((x185^x186)==x187)-x188);

	if (t39 != 18446744053985233781LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x190 = -1;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MAX;
	int32_t t40 = -50511;

	t40 = (((x189^x190)==x191)-x192);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x193 = INT16_MAX;
	volatile uint16_t x194 = 102U;
	int64_t x195 = 158338LL;
	int16_t x196 = -1;
	int32_t t41 = 10;

	t41 = (((x193^x194)==x195)-x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x198 = INT32_MAX;
	uint8_t x199 = 87U;
	volatile uint16_t x200 = UINT16_MAX;
	int32_t t42 = -3;

	t42 = (((x197^x198)==x199)-x200);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = -1;
	int64_t x202 = -5LL;
	static int8_t x203 = INT8_MAX;
	static uint64_t x204 = UINT64_MAX;
	volatile uint64_t t43 = 4LLU;

	t43 = (((x201^x202)==x203)-x204);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x210 = 174184735183322252LLU;
	int32_t x211 = -117320580;
	volatile int32_t t44 = -545788771;

	t44 = (((x209^x210)==x211)-x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MAX;
	uint8_t x214 = 47U;
	uint16_t x215 = 9U;
	volatile uint16_t x216 = UINT16_MAX;
	volatile int32_t t45 = -287826978;

	t45 = (((x213^x214)==x215)-x216);

	if (t45 != -65535) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x218 = -1LL;
	uint16_t x219 = 3U;
	uint8_t x220 = 70U;
	volatile int32_t t46 = 31;

	t46 = (((x217^x218)==x219)-x220);

	if (t46 != -70) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = UINT64_MAX;
	uint8_t x223 = 16U;
	volatile uint16_t x224 = 488U;
	volatile int32_t t47 = 121981210;

	t47 = (((x221^x222)==x223)-x224);

	if (t47 != -488) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x225 = -10;
	static volatile int8_t x227 = -1;
	int8_t x228 = 47;
	volatile int32_t t48 = 20;

	t48 = (((x225^x226)==x227)-x228);

	if (t48 != -47) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x230 = INT8_MAX;
	volatile int64_t x231 = -1LL;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t49 = 72855286;

	t49 = (((x229^x230)==x231)-x232);

	if (t49 != 128) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x233 = -1LL;
	int32_t t50 = -709;

	t50 = (((x233^x234)==x235)-x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	volatile int64_t t51 = 4LL;

	t51 = (((x237^x238)==x239)-x240);

	if (t51 != 25887LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1018;
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;
	uint32_t x244 = 1609570U;
	volatile uint32_t t52 = 1082U;

	t52 = (((x241^x242)==x243)-x244);

	if (t52 != 4293357726U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x245 = 218;
	volatile uint32_t x246 = 793386U;
	int16_t x247 = INT16_MAX;
	uint16_t x248 = 31144U;
	int32_t t53 = -14909;

	t53 = (((x245^x246)==x247)-x248);

	if (t53 != -31144) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x250 = -209173;
	int64_t x251 = INT64_MIN;
	int8_t x252 = -1;
	static volatile int32_t t54 = 63326;

	t54 = (((x249^x250)==x251)-x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	volatile int16_t x254 = -1;
	static int8_t x255 = -1;
	static uint64_t x256 = UINT64_MAX;

	t55 = (((x253^x254)==x255)-x256);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = 1;
	uint32_t x258 = 1974196759U;
	int32_t x259 = 79532098;
	int8_t x260 = INT8_MIN;
	volatile int32_t t56 = 193580091;

	t56 = (((x257^x258)==x259)-x260);

	if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = 0;
	static int32_t x262 = -1;
	uint8_t x263 = UINT8_MAX;
	int32_t t57 = 10;

	t57 = (((x261^x262)==x263)-x264);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x267 = INT8_MAX;
	int8_t x268 = 1;
	int32_t t58 = 58;

	t58 = (((x265^x266)==x267)-x268);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x269 = -1;
	static int16_t x272 = -1;
	volatile int32_t t59 = 35468;

	t59 = (((x269^x270)==x271)-x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = 10U;
	int64_t x276 = INT64_MAX;
	volatile int64_t t60 = 58LL;

	t60 = (((x273^x274)==x275)-x276);

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = 289053495125712532LLU;
	uint64_t x280 = 650178074LLU;
	uint64_t t61 = 1508349006964634LLU;

	t61 = (((x277^x278)==x279)-x280);

	if (t61 != 18446744073059373542LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = 2052166;
	static uint32_t x282 = 21U;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t62 = -8580478;

	t62 = (((x281^x282)==x283)-x284);

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x286 = INT8_MIN;
	uint32_t t63 = 6908041U;

	t63 = (((x285^x286)==x287)-x288);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MIN;
	static int16_t x291 = -1;
	int64_t t64 = 115LL;

	t64 = (((x289^x290)==x291)-x292);

	if (t64 != -53LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x294 = 0U;
	uint32_t x295 = UINT32_MAX;
	volatile uint64_t t65 = 2181801LLU;

	t65 = (((x293^x294)==x295)-x296);

	if (t65 != 18392088985243213584LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 17U;
	int16_t x298 = INT16_MIN;
	uint64_t x300 = 13248LLU;

	t66 = (((x297^x298)==x299)-x300);

	if (t66 != 18446744073709538368LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x305 = 17U;
	int8_t x306 = INT8_MIN;
	static int16_t x307 = INT16_MIN;
	static int8_t x308 = INT8_MIN;
	static volatile int32_t t67 = -51147654;

	t67 = (((x305^x306)==x307)-x308);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = -1;
	int64_t x310 = -1LL;
	static int64_t x311 = -14123881LL;
	int16_t x312 = -18;
	static int32_t t68 = 1;

	t68 = (((x309^x310)==x311)-x312);

	if (t68 != 18) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = -1;
	static int64_t x315 = INT64_MIN;
	static volatile uint16_t x316 = 5590U;
	int32_t t69 = 14;

	t69 = (((x313^x314)==x315)-x316);

	if (t69 != -5590) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = -62LL;
	uint64_t x318 = UINT64_MAX;
	volatile int8_t x319 = INT8_MAX;
	int16_t x320 = -15;
	int32_t t70 = -1;

	t70 = (((x317^x318)==x319)-x320);

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = 5334;
	int32_t x322 = -60676603;

	t71 = (((x321^x322)==x323)-x324);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x326 = -2;
	int16_t x328 = -1;
	int32_t t72 = 134003014;

	t72 = (((x325^x326)==x327)-x328);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x329 = 6U;
	int64_t x330 = INT64_MAX;
	static int32_t x331 = INT32_MAX;
	int32_t t73 = 4967;

	t73 = (((x329^x330)==x331)-x332);

	if (t73 != -46) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x338 = INT8_MAX;
	int64_t x339 = 7410LL;
	uint64_t x340 = 1515641140617LLU;
	volatile uint64_t t74 = 2721080371379LLU;

	t74 = (((x337^x338)==x339)-x340);

	if (t74 != 18446742558068410999LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x342 = 1U;
	static int16_t x343 = -1;
	int16_t x344 = 6101;
	volatile int32_t t75 = 2377314;

	t75 = (((x341^x342)==x343)-x344);

	if (t75 != -6101) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x345 = 0LLU;
	int64_t x346 = -32788776201014846LL;
	int64_t x347 = 48353051LL;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t76 = 18139816;

	t76 = (((x345^x346)==x347)-x348);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x349 = 60U;
	int16_t x351 = -1;
	int64_t x352 = INT64_MAX;
	volatile int64_t t77 = -129554782933751631LL;

	t77 = (((x349^x350)==x351)-x352);

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = -1;
	volatile int16_t x354 = 0;
	int32_t x355 = INT32_MIN;
	volatile uint64_t x356 = UINT64_MAX;
	uint64_t t78 = 18185LLU;

	t78 = (((x353^x354)==x355)-x356);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = -1;
	int8_t x358 = -3;
	volatile uint8_t x360 = UINT8_MAX;
	int32_t t79 = 2511;

	t79 = (((x357^x358)==x359)-x360);

	if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MAX;
	uint32_t x363 = UINT32_MAX;
	int16_t x364 = 7402;
	int32_t t80 = -218571537;

	t80 = (((x361^x362)==x363)-x364);

	if (t80 != -7402) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x365 = 892354LLU;
	static uint8_t x366 = UINT8_MAX;
	static volatile uint16_t x367 = 26U;
	int16_t x368 = -2;

	t81 = (((x365^x366)==x367)-x368);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x370 = -2860;
	int32_t x372 = 86561;
	int32_t t82 = -3712809;

	t82 = (((x369^x370)==x371)-x372);

	if (t82 != -86561) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = -1;
	static uint64_t t83 = 31LLU;

	t83 = (((x373^x374)==x375)-x376);

	if (t83 != 18446744073709142165LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MAX;
	volatile int8_t x382 = 1;
	int16_t x383 = -48;
	uint64_t x384 = 127LLU;
	uint64_t t84 = 8986942373054262409LLU;

	t84 = (((x381^x382)==x383)-x384);

	if (t84 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x386 = 4905;
	static volatile int8_t x387 = INT8_MIN;
	uint8_t x388 = UINT8_MAX;
	int32_t t85 = -9576;

	t85 = (((x385^x386)==x387)-x388);

	if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	volatile int64_t t86 = -741902745245LL;

	t86 = (((x389^x390)==x391)-x392);

	if (t86 != -345866306LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = -18923759;
	uint8_t x395 = 4U;
	int32_t x396 = -26068600;
	int32_t t87 = -8269643;

	t87 = (((x393^x394)==x395)-x396);

	if (t87 != 26068600) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x397 = 102063U;
	int32_t x398 = 380145096;
	uint32_t x400 = 10772U;
	volatile uint32_t t88 = 0U;

	t88 = (((x397^x398)==x399)-x400);

	if (t88 != 4294956524U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = -1;
	int8_t x402 = INT8_MAX;
	int8_t x403 = 1;
	int16_t x404 = INT16_MAX;
	volatile int32_t t89 = 8;

	t89 = (((x401^x402)==x403)-x404);

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -1;
	uint64_t x407 = UINT64_MAX;
	static volatile int8_t x408 = 4;
	int32_t t90 = -353;

	t90 = (((x405^x406)==x407)-x408);

	if (t90 != -4) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x410 = -2LL;
	static int8_t x412 = 22;

	t91 = (((x409^x410)==x411)-x412);

	if (t91 != -22) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x417 = 629310LLU;
	volatile int64_t x418 = -10627832LL;
	static int16_t x419 = INT16_MIN;
	uint16_t x420 = 27185U;
	int32_t t92 = -533198506;

	t92 = (((x417^x418)==x419)-x420);

	if (t92 != -27185) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = INT8_MIN;
	volatile int8_t x422 = INT8_MAX;
	volatile uint64_t x423 = 5701119195496310177LLU;
	int8_t x424 = -1;

	t93 = (((x421^x422)==x423)-x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {


	t94 = (((x425^x426)==x427)-x428);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x433 = -1;
	static int64_t x435 = 2852978320LL;
	uint32_t x436 = 3U;
	static volatile uint32_t t95 = 96696U;

	t95 = (((x433^x434)==x435)-x436);

	if (t95 != 4294967293U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x437 = 47;
	volatile int16_t x438 = INT16_MIN;
	static uint32_t x439 = 67013U;
	static volatile int32_t x440 = -1;
	volatile int32_t t96 = 102146615;

	t96 = (((x437^x438)==x439)-x440);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x443 = -419926475511492LL;
	volatile uint64_t x444 = UINT64_MAX;
	static uint64_t t97 = 233LLU;

	t97 = (((x441^x442)==x443)-x444);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = -7;
	uint32_t x446 = 664331U;
	int8_t x447 = -1;
	int8_t x448 = 7;
	volatile int32_t t98 = -91717;

	t98 = (((x445^x446)==x447)-x448);

	if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x449 = UINT8_MAX;
	int8_t x450 = 3;
	int32_t x452 = INT32_MAX;
	static volatile int32_t t99 = 3874;

	t99 = (((x449^x450)==x451)-x452);

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

