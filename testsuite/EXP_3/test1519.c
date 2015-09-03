#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x15 = 23411U;
uint64_t t3 = 901477579LLU;
volatile int32_t x19 = 245581;
int16_t x26 = -1;
int64_t x29 = 118393011107LL;
int64_t t7 = 41590LL;
int32_t x35 = INT32_MIN;
uint64_t x38 = 7350981LLU;
uint64_t x40 = 21850300443092LLU;
int8_t x51 = -1;
static int16_t x54 = INT16_MAX;
uint64_t x56 = UINT64_MAX;
volatile int32_t t13 = -6937;
int8_t x57 = INT8_MIN;
static uint8_t x60 = UINT8_MAX;
int32_t t14 = 30;
static int32_t t15 = -1;
int32_t t18 = -718;
uint32_t x77 = UINT32_MAX;
int64_t x79 = 274929604446204LL;
int8_t x80 = -1;
static int32_t x84 = -102317;
static volatile uint32_t t21 = 21450U;
int32_t x89 = INT32_MIN;
int16_t x96 = 12;
int16_t x100 = INT16_MAX;
static uint8_t x106 = 108U;
volatile int8_t x118 = -11;
volatile uint32_t t29 = 467160046U;
uint64_t x123 = UINT64_MAX;
int16_t x127 = INT16_MIN;
uint32_t x133 = 2U;
volatile uint64_t t34 = 1LLU;
uint8_t x153 = 2U;
int64_t x156 = INT64_MIN;
volatile int64_t t38 = 3505394220914LL;
static volatile int32_t t39 = 8267;
uint16_t x165 = 8867U;
int32_t x178 = 1;
uint16_t x183 = 31U;
volatile int64_t t50 = 112562431814502873LL;
volatile uint32_t x208 = 31U;
static uint8_t x211 = 15U;
int64_t x217 = 5LL;
volatile int64_t t54 = -65157LL;
uint32_t x221 = 408778152U;
int64_t x224 = INT64_MAX;
uint16_t x225 = 1U;
volatile uint32_t t57 = 107601U;
static volatile int32_t t58 = -559;
static volatile int8_t x244 = 3;
int16_t x245 = -1;
volatile int32_t t61 = -53612;
int64_t t62 = 25LL;
int8_t x254 = -8;
int16_t x256 = 3282;
int16_t x257 = -137;
static uint8_t x260 = 0U;
int64_t x264 = INT64_MAX;
static int64_t t66 = -69007309793562LL;
int64_t x270 = INT64_MAX;
uint8_t x271 = 1U;
static uint64_t x272 = UINT64_MAX;
int64_t x281 = -1LL;
volatile int32_t t71 = 629494;
uint16_t x295 = 3U;
int8_t x300 = INT8_MIN;
int64_t t74 = -6LL;
uint32_t x303 = 29718U;
volatile int64_t x304 = -1LL;
volatile int64_t t75 = 670LL;
int64_t x306 = INT64_MAX;
uint32_t x317 = 26644690U;
static int32_t x322 = -31613;
int16_t x326 = -1000;
uint64_t x332 = 8762078344530LLU;
int64_t x333 = INT64_MIN;
int16_t x336 = INT16_MIN;
int8_t x338 = INT8_MIN;
static uint64_t x339 = 207864962465843044LLU;
int64_t x340 = -17652294LL;
static volatile int32_t t84 = -293415815;
int32_t x347 = INT32_MIN;
uint32_t t86 = 109U;
int64_t x350 = INT64_MAX;
volatile int32_t t88 = 233979;
int32_t x357 = 1215;
int64_t x360 = INT64_MIN;
static volatile int8_t x363 = INT8_MIN;
volatile int32_t t91 = -1;
static int16_t x371 = -1;
volatile int64_t x372 = -1LL;
volatile int16_t x373 = -1;
int32_t x381 = -2638477;
volatile int64_t x397 = -1LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	int16_t x2 = 6427;
	volatile uint8_t x3 = 0U;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -329875;

	t0 = ((x1^x2)&(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 20;
	int64_t x6 = INT64_MIN;
	volatile uint16_t x7 = 1U;
	int32_t x8 = INT32_MIN;
	static int64_t t1 = 3822975940696334LL;

	t1 = ((x5^x6)&(x7<x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = 65;
	static int32_t x11 = -53165643;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 8028476;

	t2 = ((x9^x10)&(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 12891U;
	uint64_t x14 = UINT64_MAX;
	int16_t x16 = INT16_MIN;

	t3 = ((x13^x14)&(x15<x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = -1;
	int16_t x20 = 948;
	int32_t t4 = 1;

	t4 = ((x17^x18)&(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	static volatile int8_t x22 = -2;
	volatile int64_t x23 = INT64_MIN;
	uint32_t x24 = UINT32_MAX;
	static int32_t t5 = -356;

	t5 = ((x21^x22)&(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 0;
	static uint64_t x27 = UINT64_MAX;
	int32_t x28 = 1;
	volatile int32_t t6 = 10843;

	t6 = ((x25^x26)&(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int16_t x31 = -1;
	int32_t x32 = INT32_MAX;

	t7 = ((x29^x30)&(x31<x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = 3LLU;
	static int64_t x34 = -1LL;
	int8_t x36 = 62;
	uint64_t t8 = 3256LLU;

	t8 = ((x33^x34)&(x35<x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 2U;
	uint32_t x39 = 154U;
	uint64_t t9 = 475431354799367LLU;

	t9 = ((x37^x38)&(x39<x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	int32_t x42 = 0;
	int16_t x43 = -14817;
	static volatile int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 0;

	t10 = ((x41^x42)&(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	static int16_t x46 = INT16_MIN;
	uint8_t x47 = UINT8_MAX;
	static int8_t x48 = INT8_MIN;
	int32_t t11 = -3;

	t11 = ((x45^x46)&(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -33731179571LL;
	volatile int16_t x50 = 58;
	int16_t x52 = INT16_MAX;
	static int64_t t12 = -2747151729502LL;

	t12 = ((x49^x50)&(x51<x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int8_t x55 = INT8_MIN;

	t13 = ((x53^x54)&(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = -1;
	uint32_t x59 = 678134338U;

	t14 = ((x57^x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int32_t x62 = -1;
	int16_t x63 = 0;
	static volatile uint16_t x64 = 1756U;

	t15 = ((x61^x62)&(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	int16_t x66 = 1;
	int64_t x67 = -1LL;
	uint32_t x68 = UINT32_MAX;
	volatile int64_t t16 = -49542LL;

	t16 = ((x65^x66)&(x67<x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 13698U;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = -4869342;
	uint64_t x72 = 346617522014451423LLU;
	static volatile int64_t t17 = 3666132474326935578LL;

	t17 = ((x69^x70)&(x71<x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	volatile uint8_t x74 = 15U;
	int8_t x75 = -1;
	int8_t x76 = INT8_MIN;

	t18 = ((x73^x74)&(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x78 = UINT64_MAX;
	uint64_t t19 = 3286644634903LLU;

	t19 = ((x77^x78)&(x79<x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 7U;
	int64_t x82 = INT64_MIN;
	uint32_t x83 = 196133U;
	static int64_t t20 = -5687001355LL;

	t20 = ((x81^x82)&(x83<x84));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	static uint32_t x86 = 55703U;
	int32_t x87 = INT32_MAX;
	static int8_t x88 = INT8_MIN;

	t21 = ((x85^x86)&(x87<x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 483122LLU;
	int8_t x91 = INT8_MIN;
	volatile int64_t x92 = -4LL;
	volatile uint64_t t22 = 7530071490338048LLU;

	t22 = ((x89^x90)&(x91<x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = 66399445;
	int32_t t23 = -295;

	t23 = ((x93^x94)&(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 1U;
	int64_t x98 = -1LL;
	int8_t x99 = INT8_MAX;
	volatile int64_t t24 = -3938479898422360069LL;

	t24 = ((x97^x98)&(x99<x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	volatile int16_t x103 = 2080;
	static int16_t x104 = -1;
	volatile int32_t t25 = 12;

	t25 = ((x101^x102)&(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 30303283U;
	uint64_t x107 = 286084347102872LLU;
	int8_t x108 = INT8_MIN;
	uint32_t t26 = 161U;

	t26 = ((x105^x106)&(x107<x108));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	static volatile int64_t x112 = INT64_MAX;
	int32_t t27 = 17566;

	t27 = ((x109^x110)&(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -37678568522706785LL;
	uint16_t x114 = 321U;
	volatile uint32_t x115 = UINT32_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t28 = 405594585575942228LL;

	t28 = ((x113^x114)&(x115<x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x117 = 844537759U;
	static uint8_t x119 = UINT8_MAX;
	int64_t x120 = 5101225LL;

	t29 = ((x117^x118)&(x119<x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = 27149;
	volatile int64_t x122 = INT64_MAX;
	int8_t x124 = -1;
	int64_t t30 = -8081683561045LL;

	t30 = ((x121^x122)&(x123<x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int16_t x126 = INT16_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -4201614;

	t31 = ((x125^x126)&(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 3891LL;
	volatile int64_t x130 = INT64_MIN;
	int8_t x131 = -1;
	uint32_t x132 = 409U;
	int64_t t32 = 1189217263512603LL;

	t32 = ((x129^x130)&(x131<x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x134 = -40;
	int16_t x135 = INT16_MIN;
	int64_t x136 = INT64_MIN;
	volatile uint32_t t33 = 1371U;

	t33 = ((x133^x134)&(x135<x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MAX;
	uint8_t x139 = 53U;
	int32_t x140 = INT32_MAX;

	t34 = ((x137^x138)&(x139<x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	int64_t x142 = 989597538372694660LL;
	uint16_t x143 = 116U;
	int16_t x144 = INT16_MIN;
	int64_t t35 = 18LL;

	t35 = ((x141^x142)&(x143<x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 17304591552952335LLU;
	int64_t x146 = -1LL;
	int16_t x147 = INT16_MIN;
	uint16_t x148 = 768U;
	volatile uint64_t t36 = 72LLU;

	t36 = ((x145^x146)&(x147<x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile int64_t x150 = INT64_MIN;
	static int32_t x151 = -144371926;
	uint16_t x152 = 130U;
	volatile int64_t t37 = 480598LL;

	t37 = ((x149^x150)&(x151<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MAX;
	int16_t x155 = -5;

	t38 = ((x153^x154)&(x155<x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = 17899677;
	uint32_t x159 = 270329533U;
	uint16_t x160 = 3122U;

	t39 = ((x157^x158)&(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = 370;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = -1;
	static int64_t x164 = -5249623347120LL;
	volatile int32_t t40 = -229097157;

	t40 = ((x161^x162)&(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x166 = 465493U;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -5076;
	uint32_t t41 = 189278521U;

	t41 = ((x165^x166)&(x167<x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -97965994;
	int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MAX;
	volatile uint32_t x172 = 7044114U;
	int32_t t42 = 7;

	t42 = ((x169^x170)&(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -163473662;
	volatile int32_t x174 = INT32_MIN;
	volatile int16_t x175 = INT16_MAX;
	int32_t x176 = INT32_MIN;
	int32_t t43 = -2740;

	t43 = ((x173^x174)&(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = INT64_MIN;
	uint64_t x179 = 200474989798926683LLU;
	volatile int64_t x180 = INT64_MAX;
	volatile int64_t t44 = -1266950435769446625LL;

	t44 = ((x177^x178)&(x179<x180));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	int8_t x182 = -1;
	static int16_t x184 = INT16_MAX;
	static int32_t t45 = 323368745;

	t45 = ((x181^x182)&(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -2879158;
	uint64_t x186 = 44590309330614201LLU;
	int32_t x187 = INT32_MAX;
	uint8_t x188 = UINT8_MAX;
	static uint64_t t46 = 762588979100905035LLU;

	t46 = ((x185^x186)&(x187<x188));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 9;
	int32_t x190 = -1;
	volatile int16_t x191 = 8492;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -3804519;

	t47 = ((x189^x190)&(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = UINT8_MAX;
	int32_t x194 = -1;
	static int64_t x195 = INT64_MAX;
	uint16_t x196 = 27742U;
	static volatile int32_t t48 = -20421939;

	t48 = ((x193^x194)&(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 46;
	volatile uint32_t x198 = 1489598630U;
	volatile int16_t x199 = INT16_MAX;
	uint64_t x200 = 15LLU;
	volatile uint32_t t49 = 41146963U;

	t49 = ((x197^x198)&(x199<x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 650U;
	int64_t x202 = INT64_MAX;
	static int8_t x203 = -51;
	static volatile uint32_t x204 = UINT32_MAX;

	t50 = ((x201^x202)&(x203<x204));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int16_t x206 = INT16_MAX;
	volatile uint16_t x207 = 20U;
	volatile int64_t t51 = 12212LL;

	t51 = ((x205^x206)&(x207<x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int16_t x210 = 295;
	volatile int8_t x212 = -1;
	volatile int32_t t52 = 3;

	t52 = ((x209^x210)&(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 11U;
	int16_t x214 = 85;
	volatile uint8_t x215 = 4U;
	uint32_t x216 = 31U;
	volatile int32_t t53 = 80;

	t53 = ((x213^x214)&(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MAX;
	volatile int32_t x219 = -38573783;
	int16_t x220 = 33;

	t54 = ((x217^x218)&(x219<x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -1LL;
	int64_t x223 = INT64_MIN;
	volatile int64_t t55 = -6425304677250LL;

	t55 = ((x221^x222)&(x223<x224));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 6396U;
	int64_t x227 = -1LL;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = -1830;

	t56 = ((x225^x226)&(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 1004U;
	int16_t x231 = -3439;
	uint16_t x232 = 4U;

	t57 = ((x229^x230)&(x231<x232));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 27U;
	int8_t x234 = INT8_MAX;
	int32_t x235 = -8091516;
	int32_t x236 = INT32_MAX;

	t58 = ((x233^x234)&(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	uint8_t x238 = 6U;
	volatile int32_t x239 = -14919306;
	int64_t x240 = -1LL;
	static volatile uint32_t t59 = 403292700U;

	t59 = ((x237^x238)&(x239<x240));

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint64_t x242 = 4022293179560717091LLU;
	uint16_t x243 = UINT16_MAX;
	volatile uint64_t t60 = 15LLU;

	t60 = ((x241^x242)&(x243<x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = INT16_MIN;
	uint32_t x247 = 30289U;
	uint8_t x248 = UINT8_MAX;

	t61 = ((x245^x246)&(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1507;
	int64_t x250 = INT64_MIN;
	volatile uint32_t x251 = 2400269U;
	int32_t x252 = -1;

	t62 = ((x249^x250)&(x251<x252));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	int16_t x255 = INT16_MAX;
	static int32_t t63 = -935;

	t63 = ((x253^x254)&(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x258 = UINT8_MAX;
	int16_t x259 = -1;
	int32_t t64 = -230861;

	t64 = ((x257^x258)&(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	volatile int16_t x262 = -1;
	int16_t x263 = 4109;
	static int64_t t65 = -897576347853471LL;

	t65 = ((x261^x262)&(x263<x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = 3LL;
	int8_t x266 = 1;
	int16_t x267 = -729;
	volatile uint16_t x268 = 542U;

	t66 = ((x265^x266)&(x267<x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x269 = INT8_MIN;
	int64_t t67 = 277LL;

	t67 = ((x269^x270)&(x271<x272));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = 34;
	static int8_t x274 = -1;
	volatile uint8_t x275 = 86U;
	volatile uint32_t x276 = UINT32_MAX;
	int32_t t68 = -11836;

	t68 = ((x273^x274)&(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	static int32_t x278 = -1;
	volatile uint32_t x279 = UINT32_MAX;
	uint64_t x280 = UINT64_MAX;
	volatile int32_t t69 = -130058673;

	t69 = ((x277^x278)&(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x282 = -1;
	volatile int16_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	static volatile int64_t t70 = -5616598936LL;

	t70 = ((x281^x282)&(x283<x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -4;
	int8_t x286 = INT8_MIN;
	static uint64_t x287 = 0LLU;
	volatile uint64_t x288 = 77166514237LLU;

	t71 = ((x285^x286)&(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x289 = INT16_MAX;
	int32_t x290 = INT32_MIN;
	volatile uint16_t x291 = 3450U;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 1263656;

	t72 = ((x289^x290)&(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int16_t x294 = 0;
	int8_t x296 = INT8_MIN;
	volatile int32_t t73 = 9912661;

	t73 = ((x293^x294)&(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MAX;
	static volatile int64_t x298 = -12749386LL;
	uint16_t x299 = UINT16_MAX;

	t74 = ((x297^x298)&(x299<x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 21419556490462342LL;
	int16_t x302 = -7482;

	t75 = ((x301^x302)&(x303<x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static volatile uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	volatile int64_t t76 = -551528626785012LL;

	t76 = ((x305^x306)&(x307<x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 36343488U;
	int32_t x310 = INT32_MIN;
	static uint32_t x311 = 31U;
	int16_t x312 = INT16_MIN;
	volatile uint32_t t77 = 145878158U;

	t77 = ((x309^x310)&(x311<x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -776;
	int64_t x316 = 168982932992LL;
	volatile int32_t t78 = -1;

	t78 = ((x313^x314)&(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 32268U;
	int64_t x319 = INT64_MAX;
	static volatile uint64_t x320 = 10027058577LLU;
	uint32_t t79 = 2U;

	t79 = ((x317^x318)&(x319<x320));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static uint64_t x323 = 58613604365LLU;
	static volatile int64_t x324 = -1LL;
	static int64_t t80 = -3558738676272LL;

	t80 = ((x321^x322)&(x323<x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	int16_t x327 = 14;
	static int32_t x328 = -1;
	static int32_t t81 = 154;

	t81 = ((x325^x326)&(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	int8_t x330 = -1;
	int8_t x331 = 0;
	volatile uint32_t t82 = 6U;

	t82 = ((x329^x330)&(x331<x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = -682;
	static uint8_t x335 = 2U;
	int64_t t83 = 15719912LL;

	t83 = ((x333^x334)&(x335<x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;

	t84 = ((x337^x338)&(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int32_t t85 = 3;

	t85 = ((x341^x342)&(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	static int64_t x348 = -14037245021372119LL;

	t86 = ((x345^x346)&(x347<x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int8_t x351 = -1;
	uint64_t x352 = 1106379LLU;
	volatile int64_t t87 = 128003265LL;

	t87 = ((x349^x350)&(x351<x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = -1;
	int16_t x355 = INT16_MIN;
	volatile int32_t x356 = INT32_MAX;

	t88 = ((x353^x354)&(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = INT8_MAX;
	volatile int64_t x359 = 41LL;
	volatile int32_t t89 = -109423164;

	t89 = ((x357^x358)&(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int8_t x362 = -1;
	int32_t x364 = 1345;
	volatile int32_t t90 = -1475484;

	t90 = ((x361^x362)&(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = INT32_MIN;
	int16_t x366 = 9236;
	static uint8_t x367 = 3U;
	int64_t x368 = 125LL;

	t91 = ((x365^x366)&(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -22979526627043783LL;
	static int8_t x370 = 0;
	int64_t t92 = -22429874382LL;

	t92 = ((x369^x370)&(x371<x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	static int32_t x375 = -1;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = -2674747;

	t93 = ((x373^x374)&(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	int16_t x378 = 1;
	int64_t x379 = INT64_MIN;
	volatile int64_t x380 = INT64_MIN;
	int32_t t94 = 185;

	t94 = ((x377^x378)&(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 779052042335709LLU;
	static int8_t x383 = 43;
	uint32_t x384 = UINT32_MAX;
	static uint64_t t95 = 92540663493501LLU;

	t95 = ((x381^x382)&(x383<x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 218;
	volatile int8_t x386 = 12;
	static int8_t x387 = INT8_MIN;
	volatile int32_t x388 = -1;
	int32_t t96 = -377631;

	t96 = ((x385^x386)&(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 126U;
	static int16_t x390 = -47;
	int64_t x391 = INT64_MIN;
	int16_t x392 = -1;
	volatile int32_t t97 = 7683640;

	t97 = ((x389^x390)&(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	uint8_t x394 = 1U;
	int32_t x395 = -1;
	volatile int64_t x396 = -1LL;
	static volatile int32_t t98 = -308;

	t98 = ((x393^x394)&(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 27266U;
	static int64_t x399 = INT64_MIN;
	volatile int64_t x400 = 1288567804899720LL;
	volatile int64_t t99 = -355LL;

	t99 = ((x397^x398)&(x399<x400));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

