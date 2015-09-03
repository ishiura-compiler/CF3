#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 17556LL;
static uint64_t t1 = 2478295907120421354LLU;
volatile uint32_t t3 = 7U;
uint8_t x17 = UINT8_MAX;
static uint64_t x18 = UINT64_MAX;
volatile uint16_t x19 = 145U;
static int16_t x20 = INT16_MAX;
volatile int8_t x25 = -1;
int16_t x26 = -3334;
int32_t x36 = 855644;
static int8_t x40 = INT8_MAX;
int16_t x46 = INT16_MIN;
uint32_t x51 = 411U;
int32_t x52 = -2;
volatile uint32_t x53 = UINT32_MAX;
volatile uint32_t t12 = 200U;
uint64_t x59 = 4685865648686LLU;
int16_t x60 = INT16_MIN;
uint64_t t13 = 45453888LLU;
int32_t x63 = INT32_MIN;
static uint8_t x67 = 54U;
uint64_t x68 = 3103152609915480303LLU;
volatile uint64_t t15 = 904181LLU;
uint64_t x73 = UINT64_MAX;
int32_t x74 = INT32_MIN;
volatile int8_t x78 = INT8_MAX;
volatile int32_t x89 = INT32_MAX;
int64_t x91 = -2198745253319189LL;
static uint16_t x93 = 8U;
int8_t x96 = INT8_MIN;
volatile int64_t t23 = -1848356330219182LL;
int8_t x101 = INT8_MIN;
int16_t x102 = INT16_MAX;
int32_t x104 = INT32_MIN;
static volatile int64_t t24 = 4814834814699588LL;
static int32_t x108 = -4;
uint16_t x109 = 47U;
static volatile int64_t t26 = 1922378090LL;
volatile int64_t t27 = -5697153853LL;
static int64_t x123 = INT64_MIN;
uint8_t x124 = 3U;
int8_t x126 = 0;
int64_t x131 = -1LL;
int32_t t31 = -22619;
uint32_t x140 = 1491444U;
volatile int64_t t33 = -23266LL;
static uint64_t x165 = 1734689150131024507LLU;
volatile int16_t x167 = -1;
int8_t x169 = -7;
static uint32_t t42 = 1023U;
static int16_t x190 = 1;
int8_t x196 = -58;
int32_t t45 = -585015176;
static int64_t x199 = -1LL;
uint64_t x202 = UINT64_MAX;
uint16_t x204 = UINT16_MAX;
volatile uint64_t t47 = 6LLU;
volatile int32_t x209 = INT32_MIN;
volatile int64_t t48 = 957021275421981261LL;
int32_t x213 = INT32_MIN;
static int64_t x214 = INT64_MIN;
static uint64_t t50 = 1983790632033LLU;
static uint32_t x222 = 49005U;
int8_t x226 = 3;
volatile uint64_t t52 = 2175410973LLU;
int64_t x234 = -1771628248LL;
int8_t x235 = -1;
static volatile int32_t x246 = -2243;
volatile uint32_t x249 = UINT32_MAX;
int16_t x256 = -2100;
int64_t t59 = -113524626063299911LL;
volatile int32_t x263 = INT32_MIN;
volatile uint16_t x272 = UINT16_MAX;
static uint64_t t62 = 347327087437617LLU;
uint32_t t63 = 2480U;
int32_t t65 = 2039276;
int32_t x301 = -3566492;
int64_t x307 = INT64_MAX;
static uint8_t x308 = 98U;
int16_t x314 = -129;
volatile uint8_t x315 = 4U;
uint32_t x318 = UINT32_MAX;
uint64_t x321 = 76423LLU;
int16_t x325 = INT16_MIN;
static volatile int16_t x331 = -1;
uint64_t t75 = 4LLU;
uint32_t t78 = 1536735636U;
volatile int8_t x347 = INT8_MIN;
static volatile int32_t t80 = 1643;
static uint64_t t81 = 21LLU;
uint8_t x364 = UINT8_MAX;
uint32_t x366 = 18298519U;
volatile int32_t x381 = 0;
volatile int32_t x383 = INT32_MIN;
static int32_t t87 = 0;
volatile int8_t x393 = INT8_MIN;
uint32_t x394 = 487549703U;
static int64_t t89 = 2228708361939644LL;
int8_t x401 = INT8_MIN;
uint32_t x402 = 56558499U;
volatile int32_t t91 = 524819241;
uint64_t x435 = 3436LLU;
static uint16_t x442 = 11U;
int8_t x443 = -1;
int64_t x448 = INT64_MIN;
int64_t t97 = 143111147899571006LL;
uint32_t x457 = 73076131U;
volatile int64_t x459 = 3LL;


void f0(void) {
	int64_t x2 = 853472LL;
	int64_t x3 = 258211365015LL;
	int32_t x4 = -551996627;
	static volatile int64_t t0 = 480588561094006587LL;

	t0 = ((x1+(x2^x3))%x4);

	if (t0 != 428762402LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int16_t x6 = 6234;
	volatile int32_t x7 = INT32_MIN;
	uint64_t x8 = 1667948LLU;

	t1 = ((x5+(x6^x7))%x8);

	if (t1 != 601950LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -15006758LL;
	int8_t x10 = -1;
	volatile int32_t x11 = -1;
	static int16_t x12 = -1;
	int64_t t2 = 636901252079121LL;

	t2 = ((x9+(x10^x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 11U;
	uint8_t x14 = 52U;
	volatile int32_t x15 = -1;
	uint16_t x16 = 1469U;

	t3 = ((x13+(x14^x15))%x16);

	if (t3 != 539U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t t4 = 122935170871162LLU;

	t4 = ((x17+(x18^x19))%x20);

	if (t4 != 109LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x22 = INT64_MAX;
	int64_t x23 = INT64_MIN;
	static int16_t x24 = INT16_MAX;
	int64_t t5 = 192LL;

	t5 = ((x21+(x22^x23))%x24);

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -19260;

	t6 = ((x25+(x26^x27))%x28);

	if (t6 != -29436) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int64_t x30 = -1LL;
	uint64_t x31 = 3449574301595LLU;
	volatile int32_t x32 = 46711;
	uint64_t t7 = 314668858LLU;

	t7 = ((x29+(x30^x31))%x32);

	if (t7 != 44672LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 14;
	uint8_t x34 = 0U;
	uint8_t x35 = UINT8_MAX;
	int32_t t8 = 17067136;

	t8 = ((x33+(x34^x35))%x36);

	if (t8 != 269) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	int32_t t9 = 73;

	t9 = ((x37+(x38^x39))%x40);

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = -894445926926093LL;
	volatile uint8_t x47 = 96U;
	uint16_t x48 = 50U;
	volatile int64_t t10 = 843849782159069LL;

	t10 = ((x45+(x46^x47))%x48);

	if (t10 != -15LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	int32_t x50 = 328234;
	static volatile uint32_t t11 = 0U;

	t11 = ((x49+(x50^x51))%x52);

	if (t11 != 328624U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x54 = 58928954U;
	int8_t x55 = INT8_MAX;
	int32_t x56 = -1;

	t12 = ((x53+(x54^x55))%x56);

	if (t12 != 58928964U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	volatile uint32_t x58 = UINT32_MAX;

	t13 = ((x57+(x58^x59))%x60);

	if (t13 != 4687900474833LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -188;
	int8_t x62 = -1;
	uint16_t x64 = 128U;
	int32_t t14 = 29615012;

	t14 = ((x61+(x62^x63))%x64);

	if (t14 != 67) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x65 = -1;
	int16_t x66 = -2872;

	t15 = ((x65+(x66^x67))%x68);

	if (t15 != 2930981024132147282LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	volatile uint8_t x70 = 18U;
	uint8_t x71 = UINT8_MAX;
	int64_t x72 = INT64_MAX;
	int64_t t16 = -54LL;

	t16 = ((x69+(x70^x71))%x72);

	if (t16 != 492LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	uint64_t t17 = 473202851546LLU;

	t17 = ((x73+(x74^x75))%x76);

	if (t17 != 32766LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 3;
	volatile int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	volatile int64_t t18 = -565861717LL;

	t18 = ((x77+(x78^x79))%x80);

	if (t18 != -126LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 136LLU;
	static int64_t x82 = 11352557841LL;
	int16_t x83 = 1;
	int64_t x84 = -2901910484642LL;
	static volatile uint64_t t19 = 6LLU;

	t19 = ((x81+(x82^x83))%x84);

	if (t19 != 11352557976LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	int32_t x86 = -1;
	int64_t x87 = 524873LL;
	int8_t x88 = INT8_MIN;
	volatile int64_t t20 = -2LL;

	t20 = ((x85+(x86^x87))%x88);

	if (t20 != -75LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	uint64_t x92 = 12751228LLU;
	static uint64_t t21 = 35LLU;

	t21 = ((x89+(x90^x91))%x92);

	if (t21 != 4742827LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 2LLU;
	static uint64_t t22 = 34672986871LLU;

	t22 = ((x93+(x94^x95))%x96);

	if (t22 != 18446744071562067978LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 647U;
	int64_t x98 = -124602629560556151LL;
	int8_t x99 = INT8_MIN;
	int8_t x100 = -1;

	t23 = ((x97+(x98^x99))%x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x103 = INT64_MIN;

	t24 = ((x101+(x102^x103))%x104);

	if (t24 != -2147451009LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 33621LLU;
	static uint8_t x106 = 3U;
	int8_t x107 = -1;
	volatile uint64_t t25 = 0LLU;

	t25 = ((x105+(x106^x107))%x108);

	if (t25 != 33617LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x110 = 42;
	int32_t x111 = -1320;
	static int64_t x112 = 328266727104776LL;

	t26 = ((x109+(x110^x111))%x112);

	if (t26 != -1247LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x113 = -1LL;
	uint32_t x114 = UINT32_MAX;
	static int8_t x115 = -1;
	int32_t x116 = INT32_MIN;

	t27 = ((x113+(x114^x115))%x116);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = INT32_MIN;
	static volatile int64_t x122 = INT64_MIN;
	volatile int64_t t28 = -23803LL;

	t28 = ((x121+(x122^x123))%x124);

	if (t28 != -2LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x125 = 194144286855LLU;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	static uint64_t t29 = 7011538LLU;

	t29 = ((x125+(x126^x127))%x128);

	if (t29 != 194144286855LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x129 = 3607536775040179150LL;
	static int8_t x130 = INT8_MAX;
	volatile uint16_t x132 = 5U;
	volatile int64_t t30 = -1484244617LL;

	t30 = ((x129+(x130^x131))%x132);

	if (t30 != 2LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -1;

	t31 = ((x133+(x134^x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = INT8_MAX;
	uint16_t x138 = 72U;
	int16_t x139 = INT16_MIN;
	uint32_t t32 = 13242U;

	t32 = ((x137+(x138^x139))%x140);

	if (t32 != 1067451U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MAX;
	static int8_t x142 = -1;
	static uint32_t x143 = UINT32_MAX;
	int64_t x144 = -1LL;

	t33 = ((x141+(x142^x143))%x144);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -31713;
	static int8_t x146 = INT8_MIN;
	static uint16_t x147 = 159U;
	uint64_t x148 = 845LLU;
	volatile uint64_t t34 = 7LLU;

	t34 = ((x145+(x146^x147))%x148);

	if (t34 != 773LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = -185;
	int32_t x150 = INT32_MIN;
	int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	static int32_t t35 = -778662863;

	t35 = ((x149+(x150^x151))%x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -134422;
	uint32_t x154 = 234229125U;
	uint32_t x155 = 49508685U;
	int32_t x156 = INT32_MIN;
	uint32_t t36 = 255854U;

	t36 = ((x153+(x154^x155))%x156);

	if (t36 != 251883442U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 276U;
	static int8_t x158 = INT8_MIN;
	int16_t x159 = 0;
	int16_t x160 = INT16_MIN;
	volatile int32_t t37 = -30553452;

	t37 = ((x157+(x158^x159))%x160);

	if (t37 != 148) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x166 = UINT16_MAX;
	int64_t x168 = INT64_MIN;
	uint64_t t38 = 48LLU;

	t38 = ((x165+(x166^x167))%x168);

	if (t38 != 1734689150130958971LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x170 = 2U;
	int8_t x171 = INT8_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t39 = 0U;

	t39 = ((x169+(x170^x171))%x172);

	if (t39 != 118U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = 1;
	uint32_t x174 = 1U;
	int16_t x175 = -10024;
	int32_t x176 = INT32_MIN;
	static volatile uint32_t t40 = 141903U;

	t40 = ((x173+(x174^x175))%x176);

	if (t40 != 2147473626U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x177 = INT64_MAX;
	int8_t x178 = INT8_MIN;
	static volatile int16_t x179 = INT16_MAX;
	int32_t x180 = -1;
	int64_t t41 = 572638961439598248LL;

	t41 = ((x177+(x178^x179))%x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = INT8_MIN;
	static uint32_t x182 = 298838061U;
	volatile uint32_t x183 = 2U;
	uint16_t x184 = UINT16_MAX;

	t42 = ((x181+(x182^x183))%x184);

	if (t42 != 63870U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 1;
	int64_t x186 = -141382026LL;
	volatile int64_t x187 = 62809449529947437LL;
	int8_t x188 = INT8_MIN;
	volatile int64_t t43 = -1LL;

	t43 = ((x185+(x186^x187))%x188);

	if (t43 != -36LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -35036623989LL;
	int8_t x191 = INT8_MIN;
	int16_t x192 = INT16_MAX;
	int64_t t44 = 594LL;

	t44 = ((x189+(x190^x191))%x192);

	if (t44 != -17861LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int32_t x195 = -1;

	t45 = ((x193+(x194^x195))%x196);

	if (t45 != 54) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x197 = INT32_MIN;
	volatile int32_t x198 = 41;
	uint8_t x200 = UINT8_MAX;
	static int64_t t46 = -2633870713945802109LL;

	t46 = ((x197+(x198^x199))%x200);

	if (t46 != -170LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x201 = INT8_MIN;
	volatile int32_t x203 = 114;

	t47 = ((x201+(x202^x203))%x204);

	if (t47 != 65293LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x210 = INT8_MIN;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;

	t48 = ((x209+(x210^x211))%x212);

	if (t48 != -2147483521LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x215 = -1;
	uint64_t x216 = 23724457LLU;
	static uint64_t t49 = 778716916LLU;

	t49 = ((x213+(x214^x215))%x216);

	if (t49 != 5218143LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = UINT8_MAX;
	int64_t x218 = -3985787LL;
	uint64_t x219 = UINT64_MAX;
	uint64_t x220 = 6463342106669399LLU;

	t50 = ((x217+(x218^x219))%x220);

	if (t50 != 3986041LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x221 = INT8_MIN;
	uint8_t x223 = 111U;
	int8_t x224 = -1;
	uint32_t t51 = 51U;

	t51 = ((x221+(x222^x223))%x224);

	if (t51 != 48770U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 6660724446073256639LLU;
	int16_t x227 = INT16_MAX;
	static uint16_t x228 = 20U;

	t52 = ((x225+(x226^x227))%x228);

	if (t52 != 3LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	int8_t x230 = -1;
	int16_t x231 = -1;
	int32_t x232 = 116200;
	volatile int32_t t53 = -14565;

	t53 = ((x229+(x230^x231))%x232);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = -13;
	uint64_t x236 = 81027758343LLU;
	volatile uint64_t t54 = 8447990830045LLU;

	t54 = ((x233+(x234^x235))%x236);

	if (t54 != 1771628234LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	int8_t x238 = INT8_MIN;
	int64_t x239 = -348LL;
	int32_t x240 = -11483;
	static volatile int64_t t55 = 10LL;

	t55 = ((x237+(x238^x239))%x240);

	if (t55 != 291LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	int8_t x242 = INT8_MIN;
	int64_t x243 = 23956894902361LL;
	int8_t x244 = 1;
	static volatile int64_t t56 = 114559064LL;

	t56 = ((x241+(x242^x243))%x244);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = -236041;
	uint8_t x247 = 1U;
	volatile int8_t x248 = -1;
	int32_t t57 = -1836;

	t57 = ((x245+(x246^x247))%x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x250 = INT8_MIN;
	int8_t x251 = -1;
	int8_t x252 = -2;
	volatile uint32_t t58 = 2742U;

	t58 = ((x249+(x250^x251))%x252);

	if (t58 != 126U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int8_t x254 = -1;
	volatile int64_t x255 = 132LL;

	t59 = ((x253+(x254^x255))%x256);

	if (t59 != 122LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x261 = 12164LLU;
	static int16_t x262 = INT16_MIN;
	static int16_t x264 = INT16_MIN;
	static uint64_t t60 = 815614042653LLU;

	t60 = ((x261+(x262^x263))%x264);

	if (t60 != 2147463044LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = INT16_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	static uint8_t x267 = 113U;
	int16_t x268 = INT16_MAX;
	static int32_t t61 = 36;

	t61 = ((x265+(x266^x267))%x268);

	if (t61 != 32654) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 49223831246LLU;
	uint64_t x270 = 25467353003786306LLU;
	int16_t x271 = 960;

	t62 = ((x269+(x270^x271))%x272);

	if (t62 != 13379LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = UINT32_MAX;
	volatile int32_t x274 = INT32_MIN;
	volatile int32_t x275 = 580551187;
	int16_t x276 = -1;

	t63 = ((x273+(x274^x275))%x276);

	if (t63 != 2728034834U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1;
	static int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = UINT64_MAX;
	uint64_t t64 = 411555180664LLU;

	t64 = ((x277+(x278^x279))%x280);

	if (t64 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;

	t65 = ((x285+(x286^x287))%x288);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = 1U;
	static volatile int16_t x291 = INT16_MAX;
	int16_t x292 = 1347;
	static int32_t t66 = -438935411;

	t66 = ((x289+(x290^x291))%x292);

	if (t66 != 310) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x293 = -1LL;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = 1031LL;
	int32_t x296 = INT32_MIN;
	volatile int64_t t67 = -15182353065LL;

	t67 = ((x293+(x294^x295))%x296);

	if (t67 != 1271LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x302 = INT16_MAX;
	volatile int16_t x303 = INT16_MIN;
	uint64_t x304 = 2730646004685072603LLU;
	volatile uint64_t t68 = 143888LLU;

	t68 = ((x301+(x302^x303))%x304);

	if (t68 != 2062868045595549505LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MIN;
	static uint64_t x306 = 5339022660LLU;
	volatile uint64_t t69 = 50LLU;

	t69 = ((x305+(x306^x307))%x308);

	if (t69 != 13LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x309 = 24059U;
	volatile uint16_t x310 = UINT16_MAX;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = 29U;
	int64_t t70 = 2434320947701959026LL;

	t70 = ((x309+(x310^x311))%x312);

	if (t70 != -28LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = UINT32_MAX;
	volatile uint16_t x316 = 2854U;
	volatile uint32_t t71 = 803696U;

	t71 = ((x313+(x314^x315))%x316);

	if (t71 != 2540U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MAX;
	static volatile int16_t x319 = 2;
	static uint32_t x320 = 1174U;
	volatile uint32_t t72 = 0U;

	t72 = ((x317+(x318^x319))%x320);

	if (t72 != 124U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x322 = -18;
	int8_t x323 = -62;
	volatile uint8_t x324 = 1U;
	volatile uint64_t t73 = 16674809999LLU;

	t73 = ((x321+(x322^x323))%x324);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x326 = 17U;
	uint64_t x327 = 10989359LLU;
	int32_t x328 = -1;
	uint64_t t74 = 6171127LLU;

	t74 = ((x325+(x326^x327))%x328);

	if (t74 != 10956606LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x329 = 61208867384340814LLU;
	int64_t x330 = INT64_MAX;
	int8_t x332 = INT8_MAX;

	t75 = ((x329+(x330^x331))%x332);

	if (t75 != 125LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = 1096335442532LL;
	uint8_t x334 = UINT8_MAX;
	int8_t x335 = -1;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t76 = 3912386078608452441LLU;

	t76 = ((x333+(x334^x335))%x336);

	if (t76 != 1096335442276LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x337 = UINT16_MAX;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MAX;
	int8_t x340 = 4;
	int64_t t77 = -109502828280787571LL;

	t77 = ((x337+(x338^x339))%x340);

	if (t77 != 3LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x341 = INT8_MIN;
	static uint32_t x342 = 823023U;
	int16_t x343 = 8091;
	uint32_t x344 = 188U;

	t78 = ((x341+(x342^x343))%x344);

	if (t78 != 100U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 626U;
	volatile int16_t x346 = -206;
	static uint32_t x348 = UINT32_MAX;
	static volatile uint32_t t79 = 268072178U;

	t79 = ((x345+(x346^x347))%x348);

	if (t79 != 804U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x349 = 1U;
	uint8_t x350 = 6U;
	volatile int16_t x351 = 13976;
	volatile int32_t x352 = 196327;

	t80 = ((x349+(x350^x351))%x352);

	if (t80 != 13983) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = 50145;
	uint64_t x358 = UINT64_MAX;
	uint16_t x359 = 1230U;
	volatile int8_t x360 = -1;

	t81 = ((x357+(x358^x359))%x360);

	if (t81 != 48914LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x361 = UINT16_MAX;
	static int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MAX;
	volatile int64_t t82 = 17698260609180377LL;

	t82 = ((x361+(x362^x363))%x364);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = INT8_MIN;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = 638U;
	volatile uint32_t t83 = 185536U;

	t83 = ((x365+(x366^x367))%x368);

	if (t83 != 443U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x373 = 19U;
	uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 449845LLU;
	int32_t x376 = -31024456;
	volatile uint64_t t84 = 78246LLU;

	t84 = ((x373+(x374^x375))%x376);

	if (t84 != 450013LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x377 = -1LL;
	static volatile uint16_t x378 = 278U;
	static volatile int64_t x379 = 113811377066182263LL;
	int8_t x380 = -1;
	int64_t t85 = 272506113552989982LL;

	t85 = ((x377+(x378^x379))%x380);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x382 = 5776LL;
	uint32_t x384 = UINT32_MAX;
	static volatile int64_t t86 = 21319015100LL;

	t86 = ((x381+(x382^x383))%x384);

	if (t86 != -2147477872LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MIN;
	volatile int16_t x391 = 3;
	static int16_t x392 = 25;

	t87 = ((x389+(x390^x391))%x392);

	if (t87 != -8) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x395 = 9490541778LLU;
	volatile uint32_t x396 = 44774200U;
	volatile uint64_t t88 = 5597LLU;

	t88 = ((x393+(x394^x395))%x396);

	if (t88 != 3333389LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = INT32_MAX;
	int64_t x398 = INT64_MIN;
	int16_t x399 = INT16_MAX;
	int32_t x400 = INT32_MIN;

	t89 = ((x397+(x398^x399))%x400);

	if (t89 != -2147450882LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x403 = INT16_MAX;
	static volatile int8_t x404 = INT8_MIN;
	uint32_t t90 = 38173U;

	t90 = ((x401+(x402^x403))%x404);

	if (t90 != 56589276U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x421 = -6869;
	int16_t x422 = -1218;
	int8_t x423 = -25;
	int8_t x424 = -1;

	t91 = ((x421+(x422^x423))%x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = -1LL;
	uint8_t x426 = 10U;
	volatile uint16_t x427 = UINT16_MAX;
	int8_t x428 = INT8_MIN;
	int64_t t92 = 66344LL;

	t92 = ((x425+(x426^x427))%x428);

	if (t92 != 116LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x429 = -925LL;
	int32_t x430 = INT32_MAX;
	uint8_t x431 = 13U;
	static int64_t x432 = -1LL;
	volatile int64_t t93 = -56761520161LL;

	t93 = ((x429+(x430^x431))%x432);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = INT32_MIN;
	static int8_t x434 = INT8_MIN;
	int32_t x436 = -1;
	volatile uint64_t t94 = 98830107205106463LLU;

	t94 = ((x433+(x434^x435))%x436);

	if (t94 != 18446744071562064620LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x437 = 22738U;
	static uint64_t x438 = 1286432261LLU;
	int64_t x439 = INT64_MIN;
	static uint32_t x440 = 145298212U;
	static volatile uint64_t t95 = 305590708701997LLU;

	t95 = ((x437+(x438^x439))%x440);

	if (t95 != 141168403LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x441 = INT16_MIN;
	volatile int8_t x444 = INT8_MAX;
	static volatile int32_t t96 = 113;

	t96 = ((x441+(x442^x443))%x444);

	if (t96 != -14) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x445 = -1;
	volatile int32_t x446 = INT32_MIN;
	int32_t x447 = INT32_MIN;

	t97 = ((x445+(x446^x447))%x448);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = INT16_MIN;
	int64_t x450 = 22LL;
	int32_t x451 = INT32_MIN;
	int16_t x452 = -1;
	static int64_t t98 = 7LL;

	t98 = ((x449+(x450^x451))%x452);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x458 = 0U;
	uint8_t x460 = UINT8_MAX;
	volatile int64_t t99 = -364LL;

	t99 = ((x457+(x458^x459))%x460);

	if (t99 != 19LL) { NG(); } else { ; }
	
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

