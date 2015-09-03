#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 1U;
volatile int32_t t4 = 812;
static int8_t x27 = INT8_MIN;
volatile int32_t t5 = 538899420;
uint8_t x29 = UINT8_MAX;
int32_t t6 = 163;
uint32_t x33 = 370U;
volatile int32_t x35 = 23098;
uint8_t x53 = 46U;
volatile uint64_t x54 = 4548886LLU;
uint16_t x59 = 0U;
int64_t t14 = -165498LL;
volatile int16_t x74 = 3;
int32_t x83 = INT32_MIN;
volatile int32_t t19 = -4614602;
static volatile int16_t x96 = -1;
volatile int16_t x98 = -1;
volatile uint64_t t24 = 2176321476300786LLU;
volatile uint64_t x118 = 3183LLU;
int32_t x120 = 1;
volatile int32_t t26 = 291;
int16_t x121 = -1;
int64_t x122 = INT64_MAX;
int64_t x124 = -1LL;
volatile int64_t t27 = 269979581275LL;
uint8_t x125 = 25U;
uint16_t x128 = 462U;
int64_t x130 = 270085LL;
static int64_t x133 = INT64_MIN;
static int64_t x135 = INT64_MIN;
static int16_t x150 = 5584;
int64_t x155 = INT64_MAX;
volatile int8_t x156 = INT8_MIN;
int16_t x159 = INT16_MAX;
volatile int32_t t35 = 684135;
static uint8_t x161 = 1U;
static uint16_t x165 = UINT16_MAX;
static volatile uint16_t x168 = UINT16_MAX;
uint32_t x187 = 200414144U;
volatile int32_t t41 = 3856634;
int32_t x193 = -1;
int8_t x199 = -1;
int16_t x200 = INT16_MIN;
int8_t x204 = INT8_MIN;
volatile int16_t x207 = INT16_MAX;
volatile int32_t x211 = -1;
int32_t x221 = 121243039;
volatile int64_t t48 = 681LL;
static volatile int64_t x225 = -1LL;
int64_t x227 = INT64_MAX;
int64_t x229 = INT64_MAX;
static int8_t x231 = 0;
int16_t x233 = INT16_MIN;
uint16_t x239 = UINT16_MAX;
static int8_t x247 = INT8_MIN;
uint8_t x248 = 1U;
static int32_t t53 = 1166;
int64_t x250 = -11654LL;
volatile int16_t x264 = INT16_MIN;
volatile int32_t t56 = 31;
int8_t x266 = 1;
static uint32_t x267 = 19U;
int32_t x270 = INT32_MIN;
uint16_t x283 = UINT16_MAX;
int64_t t61 = -1308385117222LL;
uint16_t x285 = 1U;
int8_t x288 = -1;
volatile int8_t x295 = -5;
int16_t x303 = INT16_MAX;
uint64_t x306 = 40987LLU;
static uint8_t x311 = 21U;
uint8_t x315 = 0U;
int32_t x325 = INT32_MIN;
static uint8_t x335 = UINT8_MAX;
int32_t t73 = 0;
static volatile int64_t t75 = -2818444230290379LL;
int64_t x345 = INT64_MAX;
uint8_t x349 = 10U;
volatile int32_t t77 = -10;
int16_t x359 = 174;
uint64_t x367 = 171850LLU;
int8_t x371 = INT8_MIN;
int8_t x372 = 11;
uint32_t x392 = 164684U;
uint32_t t86 = 101012U;
static int16_t x400 = INT16_MAX;
static volatile int64_t x403 = INT64_MIN;
uint16_t x408 = UINT16_MAX;
int32_t t89 = 14196;
volatile int32_t x409 = INT32_MIN;
static volatile int16_t x412 = -49;
volatile uint32_t t92 = 18329U;
static volatile int32_t x422 = -1;
int16_t x424 = -617;
volatile int32_t x427 = -196651301;
static uint64_t x428 = 2745938126057938LLU;
volatile int64_t x430 = INT64_MAX;
int32_t x436 = -110581502;
int64_t x438 = 330498199LL;
volatile int16_t x442 = -1;
static int32_t x446 = -1;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	int32_t x2 = -1;
	int8_t x3 = 0;
	int8_t x4 = 8;
	volatile int32_t t0 = -17;

	t0 = (((x1<x2)==x3)-x4);

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = -11;
	static int8_t x7 = INT8_MIN;
	uint8_t x8 = 0U;
	volatile int32_t t1 = 213316516;

	t1 = (((x5<x6)==x7)-x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	static volatile int64_t x10 = -3447381843854618LL;
	volatile uint8_t x11 = 99U;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -1051185;

	t2 = (((x9<x10)==x11)-x12);

	if (t2 != -255) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 997445688036737846LLU;
	int8_t x14 = -2;
	volatile uint16_t x15 = 3U;
	int32_t x16 = 22833454;
	int32_t t3 = 107639275;

	t3 = (((x13<x14)==x15)-x16);

	if (t3 != -22833454) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 89U;
	int32_t x22 = INT32_MIN;
	uint64_t x23 = 25921727054LLU;
	int16_t x24 = -210;

	t4 = (((x21<x22)==x23)-x24);

	if (t4 != 210) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 149U;
	static int16_t x26 = INT16_MIN;
	int32_t x28 = -33236579;

	t5 = (((x25<x26)==x27)-x28);

	if (t5 != 33236579) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = 952;
	uint64_t x31 = UINT64_MAX;
	int8_t x32 = -52;

	t6 = (((x29<x30)==x31)-x32);

	if (t6 != 52) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = -42;
	int8_t x36 = -1;
	static volatile int32_t t7 = 77489;

	t7 = (((x33<x34)==x35)-x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -1;
	volatile uint32_t x38 = 1051543423U;
	static uint32_t x39 = UINT32_MAX;
	int32_t x40 = -1730;
	static volatile int32_t t8 = -77;

	t8 = (((x37<x38)==x39)-x40);

	if (t8 != 1730) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t9 = -912;

	t9 = (((x41<x42)==x43)-x44);

	if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	volatile uint32_t x46 = UINT32_MAX;
	int16_t x47 = INT16_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = -985913;

	t10 = (((x45<x46)==x47)-x48);

	if (t10 != -255) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	static volatile uint16_t x52 = UINT16_MAX;
	volatile int32_t t11 = -1;

	t11 = (((x49<x50)==x51)-x52);

	if (t11 != -65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x55 = UINT16_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t12 = 1100740;

	t12 = (((x53<x54)==x55)-x56);

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 1089U;
	volatile uint16_t x58 = 4U;
	int16_t x60 = -51;
	static volatile int32_t t13 = -21294;

	t13 = (((x57<x58)==x59)-x60);

	if (t13 != 52) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = 13U;
	static uint32_t x66 = 51690880U;
	uint8_t x67 = UINT8_MAX;
	int64_t x68 = -50711LL;

	t14 = (((x65<x66)==x67)-x68);

	if (t14 != 50711LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 505146318804949943LLU;
	static int16_t x70 = -1;
	volatile int32_t x71 = 555;
	volatile uint16_t x72 = 40U;
	volatile int32_t t15 = 1623593;

	t15 = (((x69<x70)==x71)-x72);

	if (t15 != -40) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = -34;
	volatile int8_t x75 = -1;
	uint32_t x76 = 103957760U;
	static volatile uint32_t t16 = 6776U;

	t16 = (((x73<x74)==x75)-x76);

	if (t16 != 4191009536U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	int16_t x84 = -87;
	int32_t t17 = -11;

	t17 = (((x81<x82)==x83)-x84);

	if (t17 != 87) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = INT8_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 781889369171LLU;
	uint64_t x88 = 121891155LLU;
	volatile uint64_t t18 = 848742059136172LLU;

	t18 = (((x85<x86)==x87)-x88);

	if (t18 != 18446744073587660461LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = -33;
	volatile int32_t x90 = INT32_MIN;
	static int16_t x91 = -1;
	int16_t x92 = -1;

	t19 = (((x89<x90)==x91)-x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = 0;
	static int32_t x94 = INT32_MIN;
	volatile uint16_t x95 = 117U;
	volatile int32_t t20 = 1;

	t20 = (((x93<x94)==x95)-x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 2690077089705027959LLU;
	uint64_t x99 = 13882084827093213LLU;
	int8_t x100 = -15;
	volatile int32_t t21 = -39651261;

	t21 = (((x97<x98)==x99)-x100);

	if (t21 != 15) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x101 = 894U;
	int64_t x102 = INT64_MIN;
	volatile int8_t x103 = INT8_MIN;
	volatile uint64_t x104 = 3162397341691480917LLU;
	static volatile uint64_t t22 = 159609028172LLU;

	t22 = (((x101<x102)==x103)-x104);

	if (t22 != 15284346732018070699LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x105 = 4739668976690823270LLU;
	static int8_t x106 = INT8_MIN;
	volatile int16_t x107 = -7;
	int16_t x108 = -1;
	int32_t t23 = -33;

	t23 = (((x105<x106)==x107)-x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = -112505437;
	static uint64_t x110 = 0LLU;
	int8_t x111 = 1;
	uint64_t x112 = 59021801941488831LLU;

	t24 = (((x109<x110)==x111)-x112);

	if (t24 != 18387722271768062785LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x113 = UINT32_MAX;
	uint32_t x114 = 579056U;
	static int32_t x115 = -1101649;
	int32_t x116 = -433381513;
	int32_t t25 = 34207758;

	t25 = (((x113<x114)==x115)-x116);

	if (t25 != 433381513) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x117 = UINT64_MAX;
	uint64_t x119 = 75611LLU;

	t26 = (((x117<x118)==x119)-x120);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x123 = -2585443832500LL;

	t27 = (((x121<x122)==x123)-x124);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	static volatile int32_t t28 = 95117;

	t28 = (((x125<x126)==x127)-x128);

	if (t28 != -462) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x129 = INT64_MAX;
	volatile int64_t x131 = INT64_MIN;
	int64_t x132 = -32417815863LL;
	static int64_t t29 = -1LL;

	t29 = (((x129<x130)==x131)-x132);

	if (t29 != 32417815863LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = INT32_MAX;
	static int32_t x136 = 0;
	static volatile int32_t t30 = 3;

	t30 = (((x133<x134)==x135)-x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x137 = UINT16_MAX;
	static uint32_t x138 = UINT32_MAX;
	volatile uint8_t x139 = 30U;
	int16_t x140 = 260;
	static volatile int32_t t31 = -165120463;

	t31 = (((x137<x138)==x139)-x140);

	if (t31 != -260) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = 1409346618LL;
	int16_t x142 = 6833;
	volatile int32_t x143 = -1;
	uint8_t x144 = 25U;
	volatile int32_t t32 = 736429;

	t32 = (((x141<x142)==x143)-x144);

	if (t32 != -25) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x149 = -124;
	uint64_t x151 = 2691523LLU;
	static int8_t x152 = INT8_MAX;
	int32_t t33 = -34153;

	t33 = (((x149<x150)==x151)-x152);

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MAX;
	int64_t x154 = -1LL;
	volatile int32_t t34 = 13008;

	t34 = (((x153<x154)==x155)-x156);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 1U;
	int16_t x158 = -13;
	int16_t x160 = -17;

	t35 = (((x157<x158)==x159)-x160);

	if (t35 != 17) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 2889582852LLU;
	volatile int16_t x164 = INT16_MIN;
	int32_t t36 = -12943;

	t36 = (((x161<x162)==x163)-x164);

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x166 = 192931LL;
	volatile uint32_t x167 = 107036751U;
	volatile int32_t t37 = -7926;

	t37 = (((x165<x166)==x167)-x168);

	if (t37 != -65535) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MAX;
	volatile int32_t t38 = -474;

	t38 = (((x169<x170)==x171)-x172);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 0U;
	int8_t x178 = INT8_MIN;
	static int64_t x179 = INT64_MIN;
	static int16_t x180 = INT16_MAX;
	int32_t t39 = 412;

	t39 = (((x177<x178)==x179)-x180);

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = UINT16_MAX;
	uint64_t x188 = 446885LLU;
	uint64_t t40 = 12386196LLU;

	t40 = (((x185<x186)==x187)-x188);

	if (t40 != 18446744073709104731LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x189 = INT32_MAX;
	static uint64_t x190 = 13502055239971413LLU;
	volatile uint32_t x191 = 1493739U;
	volatile int16_t x192 = INT16_MIN;

	t41 = (((x189<x190)==x191)-x192);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x194 = 310157795U;
	uint8_t x195 = 19U;
	volatile int16_t x196 = 486;
	volatile int32_t t42 = 1190;

	t42 = (((x193<x194)==x195)-x196);

	if (t42 != -486) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x197 = INT32_MIN;
	int64_t x198 = -1LL;
	int32_t t43 = 384303;

	t43 = (((x197<x198)==x199)-x200);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x201 = 790353LLU;
	volatile int16_t x202 = -80;
	int8_t x203 = INT8_MIN;
	int32_t t44 = 22714;

	t44 = (((x201<x202)==x203)-x204);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x205 = INT8_MIN;
	int8_t x206 = -1;
	static int16_t x208 = 1;
	volatile int32_t t45 = 1409978;

	t45 = (((x205<x206)==x207)-x208);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = INT64_MIN;
	uint32_t x210 = 77U;
	volatile int32_t x212 = -51;
	int32_t t46 = -3723464;

	t46 = (((x209<x210)==x211)-x212);

	if (t46 != 51) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = 6995U;
	static int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	uint16_t x216 = 0U;
	int32_t t47 = -2129936;

	t47 = (((x213<x214)==x215)-x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x222 = 6505884LLU;
	int8_t x223 = INT8_MAX;
	int64_t x224 = INT64_MAX;

	t48 = (((x221<x222)==x223)-x224);

	if (t48 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x226 = 8LLU;
	int16_t x228 = INT16_MIN;
	volatile int32_t t49 = 7194729;

	t49 = (((x225<x226)==x227)-x228);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x230 = -1;
	int64_t x232 = -349972LL;
	volatile int64_t t50 = 1873362823116955454LL;

	t50 = (((x229<x230)==x231)-x232);

	if (t50 != 349973LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x234 = 33826;
	volatile int64_t x235 = INT64_MAX;
	volatile uint16_t x236 = 20159U;
	int32_t t51 = -235740;

	t51 = (((x233<x234)==x235)-x236);

	if (t51 != -20159) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x237 = INT32_MIN;
	uint64_t x238 = UINT64_MAX;
	volatile uint16_t x240 = 6U;
	volatile int32_t t52 = -178315935;

	t52 = (((x237<x238)==x239)-x240);

	if (t52 != -6) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = INT8_MAX;
	int64_t x246 = 3446500321LL;

	t53 = (((x245<x246)==x247)-x248);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = -1;
	volatile int64_t x251 = -1LL;
	uint32_t x252 = UINT32_MAX;
	static volatile uint32_t t54 = 20348U;

	t54 = (((x249<x250)==x251)-x252);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 9298U;
	int32_t x258 = -1126;
	int8_t x259 = -1;
	int8_t x260 = INT8_MIN;
	int32_t t55 = 35;

	t55 = (((x257<x258)==x259)-x260);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x261 = UINT16_MAX;
	volatile int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;

	t56 = (((x261<x262)==x263)-x264);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = INT32_MIN;
	int8_t x268 = -1;
	static int32_t t57 = -2138;

	t57 = (((x265<x266)==x267)-x268);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x269 = INT64_MIN;
	static uint64_t x271 = 14816505557278808LLU;
	uint16_t x272 = 686U;
	volatile int32_t t58 = -135426221;

	t58 = (((x269<x270)==x271)-x272);

	if (t58 != -686) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = -1;
	volatile int16_t x275 = INT16_MAX;
	uint8_t x276 = 0U;
	int32_t t59 = 965;

	t59 = (((x273<x274)==x275)-x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x277 = -5;
	int8_t x278 = -1;
	static int64_t x279 = INT64_MAX;
	int16_t x280 = 10818;
	static int32_t t60 = 3484;

	t60 = (((x277<x278)==x279)-x280);

	if (t60 != -10818) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x281 = 3604187872245227258LLU;
	uint32_t x282 = UINT32_MAX;
	int64_t x284 = INT64_MAX;

	t61 = (((x281<x282)==x283)-x284);

	if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x286 = INT8_MIN;
	int16_t x287 = -59;
	static int32_t t62 = -179865235;

	t62 = (((x285<x286)==x287)-x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x289 = -6;
	uint16_t x290 = 43U;
	static uint8_t x291 = 13U;
	uint32_t x292 = 0U;
	static volatile uint32_t t63 = 15687U;

	t63 = (((x289<x290)==x291)-x292);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = -1;
	int32_t x294 = 0;
	volatile uint32_t x296 = UINT32_MAX;
	uint32_t t64 = 29875558U;

	t64 = (((x293<x294)==x295)-x296);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = 26263474U;
	volatile int32_t x298 = -1;
	int64_t x299 = INT64_MAX;
	static volatile uint32_t x300 = UINT32_MAX;
	uint32_t t65 = 415U;

	t65 = (((x297<x298)==x299)-x300);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x302 = 252502U;
	int64_t x304 = -1LL;
	int64_t t66 = 13LL;

	t66 = (((x301<x302)==x303)-x304);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = -1843642;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = 7701114295547265LLU;
	uint64_t t67 = 8838LLU;

	t67 = (((x305<x306)==x307)-x308);

	if (t67 != 18439042959414004351LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	int16_t x312 = -1;
	static volatile int32_t t68 = -51;

	t68 = (((x309<x310)==x311)-x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -3;
	static volatile int64_t x314 = -1LL;
	volatile uint8_t x316 = UINT8_MAX;
	int32_t t69 = -395269;

	t69 = (((x313<x314)==x315)-x316);

	if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x317 = 12705129673758LLU;
	volatile int16_t x318 = -14059;
	static int8_t x319 = INT8_MIN;
	static volatile uint8_t x320 = 70U;
	volatile int32_t t70 = -2839973;

	t70 = (((x317<x318)==x319)-x320);

	if (t70 != -70) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x326 = 1;
	volatile uint32_t x327 = 87395U;
	int16_t x328 = -249;
	int32_t t71 = -981;

	t71 = (((x325<x326)==x327)-x328);

	if (t71 != 249) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = UINT16_MAX;
	uint64_t x330 = UINT64_MAX;
	static int16_t x331 = INT16_MAX;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t72 = -258785;

	t72 = (((x329<x330)==x331)-x332);

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	volatile int32_t x334 = INT32_MIN;
	uint16_t x336 = UINT16_MAX;

	t73 = (((x333<x334)==x335)-x336);

	if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = INT16_MIN;
	int16_t x338 = INT16_MAX;
	uint16_t x339 = 98U;
	uint16_t x340 = 5312U;
	int32_t t74 = -99886546;

	t74 = (((x337<x338)==x339)-x340);

	if (t74 != -5312) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x341 = -4804;
	static uint16_t x342 = 296U;
	volatile uint8_t x343 = 7U;
	static int64_t x344 = INT64_MAX;

	t75 = (((x341<x342)==x343)-x344);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x346 = 0;
	int32_t x347 = -1;
	int8_t x348 = -1;
	volatile int32_t t76 = -1;

	t76 = (((x345<x346)==x347)-x348);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 1330683U;
	int32_t x352 = 0;

	t77 = (((x349<x350)==x351)-x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x353 = -1LL;
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MIN;
	volatile uint64_t x356 = 55568966LLU;
	uint64_t t78 = 2LLU;

	t78 = (((x353<x354)==x355)-x356);

	if (t78 != 18446744073653982650LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -26807155LL;
	static int64_t x360 = 3LL;
	int64_t t79 = -745507466256500297LL;

	t79 = (((x357<x358)==x359)-x360);

	if (t79 != -3LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x361 = 829549827LLU;
	static int16_t x362 = INT16_MIN;
	volatile int32_t x363 = INT32_MIN;
	uint64_t x364 = 719244181564407670LLU;
	volatile uint64_t t80 = 2694LLU;

	t80 = (((x361<x362)==x363)-x364);

	if (t80 != 17727499892145143946LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = 889;
	static int64_t x366 = INT64_MIN;
	int8_t x368 = INT8_MIN;
	static int32_t t81 = -42526;

	t81 = (((x365<x366)==x367)-x368);

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x369 = INT8_MAX;
	int8_t x370 = INT8_MAX;
	int32_t t82 = 343124415;

	t82 = (((x369<x370)==x371)-x372);

	if (t82 != -11) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = 0U;
	int16_t x374 = -1;
	int8_t x375 = INT8_MIN;
	volatile int8_t x376 = 0;
	int32_t t83 = 22490;

	t83 = (((x373<x374)==x375)-x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = 32859LLU;
	static int64_t x378 = 15137510330264LL;
	volatile int64_t x379 = INT64_MIN;
	int64_t x380 = -308LL;
	int64_t t84 = -6301450LL;

	t84 = (((x377<x378)==x379)-x380);

	if (t84 != 308LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x385 = 1402005477LLU;
	static int64_t x386 = -19909410832LL;
	volatile uint32_t x387 = 82922141U;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t85 = 1LLU;

	t85 = (((x385<x386)==x387)-x388);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x389 = UINT8_MAX;
	int8_t x390 = 0;
	int8_t x391 = 1;

	t86 = (((x389<x390)==x391)-x392);

	if (t86 != 4294802612U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 11U;
	int32_t x399 = INT32_MIN;
	static int32_t t87 = -134498;

	t87 = (((x397<x398)==x399)-x400);

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x401 = 0U;
	volatile int8_t x402 = INT8_MAX;
	static int16_t x404 = 50;
	int32_t t88 = 847735;

	t88 = (((x401<x402)==x403)-x404);

	if (t88 != -50) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = INT32_MIN;
	uint32_t x406 = 1187727U;
	uint8_t x407 = 0U;

	t89 = (((x405<x406)==x407)-x408);

	if (t89 != -65534) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x410 = -16272;
	static uint64_t x411 = 530001434434LLU;
	int32_t t90 = 1009;

	t90 = (((x409<x410)==x411)-x412);

	if (t90 != 49) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x413 = INT16_MIN;
	int32_t x414 = -1;
	int8_t x415 = 41;
	volatile uint64_t x416 = 55292134313841381LLU;
	volatile uint64_t t91 = 2330627LLU;

	t91 = (((x413<x414)==x415)-x416);

	if (t91 != 18391451939395710235LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = -1;
	int64_t x418 = -1LL;
	int32_t x419 = 109723;
	uint32_t x420 = 28U;

	t92 = (((x417<x418)==x419)-x420);

	if (t92 != 4294967268U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = -1;
	static int64_t x423 = INT64_MAX;
	int32_t t93 = 1246680;

	t93 = (((x421<x422)==x423)-x424);

	if (t93 != 617) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = 2965484;
	int16_t x426 = -1;
	volatile uint64_t t94 = 3LLU;

	t94 = (((x425<x426)==x427)-x428);

	if (t94 != 18443998135583493678LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x429 = -1LL;
	volatile uint32_t x431 = 501383U;
	int16_t x432 = INT16_MIN;
	volatile int32_t t95 = -69903;

	t95 = (((x429<x430)==x431)-x432);

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MAX;
	static int32_t x435 = INT32_MIN;
	volatile int32_t t96 = 16916;

	t96 = (((x433<x434)==x435)-x436);

	if (t96 != 110581502) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = INT16_MIN;
	volatile uint64_t x439 = 2195955027LLU;
	volatile uint16_t x440 = 4952U;
	volatile int32_t t97 = 433;

	t97 = (((x437<x438)==x439)-x440);

	if (t97 != -4952) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x441 = 14U;
	uint8_t x443 = 3U;
	volatile uint16_t x444 = 4U;
	static volatile int32_t t98 = -62570;

	t98 = (((x441<x442)==x443)-x444);

	if (t98 != -4) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x445 = INT16_MAX;
	int64_t x447 = -114587182665940LL;
	uint32_t x448 = 40851411U;
	static uint32_t t99 = 25U;

	t99 = (((x445<x446)==x447)-x448);

	if (t99 != 4254115885U) { NG(); } else { ; }
	
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

