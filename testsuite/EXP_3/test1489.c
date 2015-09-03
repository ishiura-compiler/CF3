#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = 65;
uint8_t x21 = UINT8_MAX;
static int8_t x22 = INT8_MAX;
volatile int64_t x25 = -1LL;
uint16_t x26 = 802U;
volatile int32_t x28 = INT32_MIN;
int64_t x33 = -5LL;
int32_t x40 = INT32_MIN;
static int64_t x42 = 58803360799683LL;
int64_t x44 = 235184101983947441LL;
static volatile int64_t t9 = 0LL;
volatile int32_t x45 = 439923;
uint8_t x46 = 1U;
uint16_t x48 = UINT16_MAX;
volatile int8_t x55 = 1;
static int32_t x72 = INT32_MIN;
volatile uint16_t x75 = 15778U;
volatile int64_t t16 = -879523624LL;
int64_t x77 = INT64_MIN;
int64_t t17 = -120736208LL;
volatile uint32_t t18 = 4367U;
static volatile uint64_t t20 = 1801468439735LLU;
uint64_t x94 = 868760LLU;
int32_t x111 = INT32_MIN;
int8_t x124 = INT8_MIN;
volatile int32_t t26 = 21413100;
volatile int32_t x138 = INT32_MAX;
int64_t x144 = -1LL;
volatile uint16_t x152 = 958U;
volatile int8_t x156 = 0;
volatile int64_t x168 = INT64_MAX;
int32_t x171 = -1;
volatile int64_t x174 = INT64_MIN;
int16_t x180 = INT16_MIN;
uint64_t x194 = 4LLU;
int16_t x204 = -67;
int16_t x206 = 1;
int16_t x209 = -1;
int32_t x213 = INT32_MIN;
static uint64_t x218 = UINT64_MAX;
int8_t x220 = 1;
static uint32_t x222 = 52199331U;
int32_t x224 = INT32_MAX;
int64_t t49 = INT64_MAX;
int16_t x231 = INT16_MIN;
volatile int64_t x232 = INT64_MAX;
uint64_t x236 = UINT64_MAX;
static int32_t t51 = 14068971;
uint32_t t52 = 4076872U;
static int8_t x243 = INT8_MAX;
int16_t x250 = INT16_MIN;
int64_t x255 = INT64_MAX;
volatile int32_t t55 = 394;
volatile uint64_t x259 = 54582552616739262LLU;
volatile uint64_t t56 = 2594182345068507596LLU;
uint64_t x271 = 569774LLU;
volatile int32_t t59 = -3835855;
int64_t x276 = INT64_MIN;
int64_t t60 = -74LL;
volatile int8_t x286 = 2;
uint64_t x305 = 54339164LLU;
uint64_t t66 = 225897137268779LLU;
int64_t x314 = 0LL;
volatile int64_t t67 = 730127995339878519LL;
volatile uint16_t x322 = 25411U;
int8_t x324 = INT8_MIN;
volatile int64_t x325 = INT64_MAX;
static uint64_t x328 = 2081607224237LLU;
volatile uint64_t t70 = 84004249796902LLU;
volatile uint16_t x338 = UINT16_MAX;
volatile uint64_t t74 = 8095693LLU;
int64_t x350 = INT64_MAX;
static int8_t x353 = INT8_MAX;
int32_t t76 = 225793;
volatile int32_t x357 = 7;
uint16_t x359 = 3403U;
int8_t x365 = INT8_MAX;
int64_t x367 = -3845LL;
int32_t t79 = 36;
int8_t x371 = INT8_MIN;
int32_t x372 = INT32_MIN;
int32_t x376 = -1;
uint64_t x401 = UINT64_MAX;
int64_t x403 = -997LL;
volatile int64_t t87 = 3LL;
static int32_t x411 = 26;
volatile uint64_t x427 = 14422384137762326LLU;
int64_t x445 = INT64_MIN;
volatile uint64_t x446 = UINT64_MAX;
int32_t x448 = INT32_MIN;
uint16_t x452 = 696U;
static int16_t x453 = INT16_MAX;
int32_t x458 = 57;
uint64_t t98 = 36990184LLU;
static uint64_t x463 = UINT64_MAX;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int16_t x2 = 1665;
	int64_t x3 = -1184800498LL;
	static int32_t x4 = -1954811;
	int32_t t0 = 1;

	t0 = ((x1&x2)>>(x3<x4));

	if (t0 != 64) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 451;
	static int32_t x6 = INT32_MAX;
	int8_t x7 = -1;
	volatile int8_t x8 = 2;

	t1 = ((x5&x6)>>(x7<x8));

	if (t1 != 225) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	uint64_t x10 = 70330LLU;
	int8_t x11 = -1;
	volatile int8_t x12 = INT8_MAX;
	volatile uint64_t t2 = 800777810957486054LLU;

	t2 = ((x9&x10)>>(x11<x12));

	if (t2 != 32768LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1870U;
	static volatile int64_t x14 = INT64_MIN;
	int32_t x15 = -1;
	uint16_t x16 = 2U;
	static int64_t t3 = 476644661714957LL;

	t3 = ((x13&x14)>>(x15<x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x23 = UINT16_MAX;
	volatile int16_t x24 = -109;
	int32_t t4 = 5229;

	t4 = ((x21&x22)>>(x23<x24));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x27 = 296736456612LLU;
	int64_t t5 = 170LL;

	t5 = ((x25&x26)>>(x27<x28));

	if (t5 != 401LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MAX;
	uint16_t x30 = 37U;
	uint16_t x31 = UINT16_MAX;
	uint64_t x32 = 655613533LLU;
	int32_t t6 = -3250521;

	t6 = ((x29&x30)>>(x31<x32));

	if (t6 != 18) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x34 = 423;
	static volatile uint8_t x35 = 3U;
	uint64_t x36 = 1635312416254936173LLU;
	static volatile int64_t t7 = -299688377089269267LL;

	t7 = ((x33&x34)>>(x35<x36));

	if (t7 != 209LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 5646485U;
	int16_t x38 = INT16_MIN;
	static volatile int64_t x39 = INT64_MIN;
	uint32_t t8 = 56U;

	t8 = ((x37&x38)>>(x39<x40));

	if (t8 != 2818048U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint64_t x43 = 0LLU;

	t9 = ((x41&x42)>>(x43<x44));

	if (t9 != 97LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x47 = UINT64_MAX;
	int32_t t10 = -3366;

	t10 = ((x45&x46)>>(x47<x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MIN;
	volatile uint8_t x56 = 2U;
	volatile int32_t t11 = 488788;

	t11 = ((x53&x54)>>(x55<x56));

	if (t11 != 16320) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	volatile int16_t x58 = 0;
	static int8_t x59 = -14;
	int64_t x60 = -1LL;
	int32_t t12 = -656;

	t12 = ((x57&x58)>>(x59<x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x61 = 0;
	uint64_t x62 = 7834452437267346087LLU;
	uint32_t x63 = 643556U;
	int32_t x64 = -1;
	uint64_t t13 = 11588739LLU;

	t13 = ((x61&x62)>>(x63<x64));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	uint64_t x66 = 1LLU;
	volatile int16_t x67 = INT16_MIN;
	static int64_t x68 = INT64_MIN;
	volatile uint64_t t14 = 501434761673LLU;

	t14 = ((x65&x66)>>(x67<x68));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	uint64_t x70 = 84973941906LLU;
	static volatile int16_t x71 = -1;
	uint64_t t15 = 1003725049324926LLU;

	t15 = ((x69&x70)>>(x71<x72));

	if (t15 != 84973912064LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MAX;
	uint8_t x74 = 1U;
	static int16_t x76 = 1;

	t16 = ((x73&x74)>>(x75<x76));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x78 = 52U;
	volatile int32_t x79 = INT32_MIN;
	int8_t x80 = -1;

	t17 = ((x77&x78)>>(x79<x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 29U;
	volatile uint32_t x82 = 56784180U;
	volatile int64_t x83 = -1LL;
	static int8_t x84 = -1;

	t18 = ((x81&x82)>>(x83<x84));

	if (t18 != 20U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = INT64_MIN;
	static uint16_t x86 = UINT16_MAX;
	int8_t x87 = 1;
	volatile int32_t x88 = INT32_MAX;
	int64_t t19 = 517901157940LL;

	t19 = ((x85&x86)>>(x87<x88));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x89 = 12569495804LLU;
	uint32_t x90 = 735U;
	static int8_t x91 = 4;
	static int16_t x92 = 2;

	t20 = ((x89&x90)>>(x91<x92));

	if (t20 != 220LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	int64_t x96 = 22329664168853LL;
	static volatile uint64_t t21 = 14690328765LLU;

	t21 = ((x93&x94)>>(x95<x96));

	if (t21 != 434368LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = 532624LL;
	uint16_t x98 = 2U;
	static int16_t x99 = INT16_MAX;
	uint64_t x100 = 1789LLU;
	volatile int64_t t22 = -24LL;

	t22 = ((x97&x98)>>(x99<x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x101 = 28U;
	uint16_t x102 = 241U;
	static int8_t x103 = 26;
	static volatile int32_t x104 = -1;
	volatile int32_t t23 = 72719;

	t23 = ((x101&x102)>>(x103<x104));

	if (t23 != 16) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 152U;
	uint8_t x106 = UINT8_MAX;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = -1;
	volatile uint32_t t24 = 2491U;

	t24 = ((x105&x106)>>(x107<x108));

	if (t24 != 152U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = 694095U;
	int32_t x112 = INT32_MIN;
	uint32_t t25 = 2856U;

	t25 = ((x109&x110)>>(x111<x112));

	if (t25 != 688128U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x121 = UINT16_MAX;
	int16_t x122 = INT16_MIN;
	int8_t x123 = 30;

	t26 = ((x121&x122)>>(x123<x124));

	if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int32_t x130 = INT32_MAX;
	volatile uint16_t x131 = 3U;
	uint32_t x132 = 711383645U;
	volatile int32_t t27 = -683815339;

	t27 = ((x129&x130)>>(x131<x132));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x137 = UINT16_MAX;
	int32_t x139 = 32680;
	int64_t x140 = INT64_MIN;
	int32_t t28 = 119;

	t28 = ((x137&x138)>>(x139<x140));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	volatile uint8_t x143 = UINT8_MAX;
	static int32_t t29 = 811703474;

	t29 = ((x141&x142)>>(x143<x144));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = -1LL;
	static uint8_t x146 = UINT8_MAX;
	int32_t x147 = -689621321;
	int32_t x148 = INT32_MIN;
	int64_t t30 = -2943851202419LL;

	t30 = ((x145&x146)>>(x147<x148));

	if (t30 != 255LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = 7;
	volatile int16_t x150 = 5093;
	int32_t x151 = INT32_MIN;
	volatile int32_t t31 = 3581;

	t31 = ((x149&x150)>>(x151<x152));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x153 = INT8_MIN;
	static uint16_t x154 = 16214U;
	static int64_t x155 = -7085053LL;
	volatile int32_t t32 = -55847;

	t32 = ((x153&x154)>>(x155<x156));

	if (t32 != 8064) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	static uint8_t x158 = UINT8_MAX;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;
	static volatile int32_t t33 = 18204;

	t33 = ((x157&x158)>>(x159<x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 7657319;
	static int16_t x162 = 1303;
	volatile int32_t x163 = -1;
	uint32_t x164 = 84U;
	static int32_t t34 = 12349;

	t34 = ((x161&x162)>>(x163<x164));

	if (t34 != 1287) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x165 = INT32_MIN;
	uint16_t x166 = 7542U;
	uint16_t x167 = UINT16_MAX;
	volatile int32_t t35 = 7685093;

	t35 = ((x165&x166)>>(x167<x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = 5916U;
	int32_t x170 = -1;
	int32_t x172 = 12;
	volatile int32_t t36 = 5543021;

	t36 = ((x169&x170)>>(x171<x172));

	if (t36 != 2958) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int8_t x175 = INT8_MAX;
	volatile int64_t x176 = INT64_MIN;
	volatile int64_t t37 = -5LL;

	t37 = ((x173&x174)>>(x175<x176));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x177 = 30U;
	int32_t x178 = -1;
	static int8_t x179 = INT8_MIN;
	int32_t t38 = -153864;

	t38 = ((x177&x178)>>(x179<x180));

	if (t38 != 30) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = 0U;
	static int32_t x186 = INT32_MAX;
	int16_t x187 = 8;
	int64_t x188 = -1LL;
	int32_t t39 = -3034;

	t39 = ((x185&x186)>>(x187<x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x189 = 1;
	static volatile int8_t x190 = -1;
	int32_t x191 = 374328424;
	int32_t x192 = -105196712;
	int32_t t40 = 1871654;

	t40 = ((x189&x190)>>(x191<x192));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x193 = 40U;
	static int32_t x195 = -1;
	static uint8_t x196 = 3U;
	volatile uint64_t t41 = 0LLU;

	t41 = ((x193&x194)>>(x195<x196));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MIN;
	static volatile int8_t x198 = 11;
	int32_t x199 = -1;
	static volatile uint8_t x200 = 110U;
	volatile int32_t t42 = 5618875;

	t42 = ((x197&x198)>>(x199<x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = 58140862;
	uint64_t x202 = 9000462192552501LLU;
	int16_t x203 = INT16_MIN;
	static uint64_t t43 = 10521209732LLU;

	t43 = ((x201&x202)>>(x203<x204));

	if (t43 != 27431962LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x205 = 2991U;
	volatile int8_t x207 = 14;
	int32_t x208 = -1;
	volatile int32_t t44 = 261139;

	t44 = ((x205&x206)>>(x207<x208));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x210 = 3;
	int8_t x211 = INT8_MIN;
	volatile int16_t x212 = -852;
	int32_t t45 = -488870;

	t45 = ((x209&x210)>>(x211<x212));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x214 = 2U;
	volatile int8_t x215 = INT8_MIN;
	static int8_t x216 = INT8_MIN;
	static int32_t t46 = 136;

	t46 = ((x213&x214)>>(x215<x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x217 = 141;
	int16_t x219 = -1;
	volatile uint64_t t47 = 132129976899219LLU;

	t47 = ((x217&x218)>>(x219<x220));

	if (t47 != 70LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x221 = -1LL;
	uint16_t x223 = 431U;
	volatile int64_t t48 = 298349376467771058LL;

	t48 = ((x221&x222)>>(x223<x224));

	if (t48 != 26099665LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = INT64_MAX;
	static int64_t x226 = -1LL;
	int8_t x227 = INT8_MIN;
	int32_t x228 = -62126506;

	t49 = ((x225&x226)>>(x227<x228));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = INT64_MIN;
	uint8_t x230 = 4U;
	int64_t t50 = -57518LL;

	t50 = ((x229&x230)>>(x231<x232));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x233 = UINT16_MAX;
	int32_t x234 = INT32_MIN;
	static int16_t x235 = INT16_MIN;

	t51 = ((x233&x234)>>(x235<x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x237 = UINT32_MAX;
	int32_t x238 = 170;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;

	t52 = ((x237&x238)>>(x239<x240));

	if (t52 != 85U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 15U;
	static volatile int32_t x242 = 58499020;
	volatile int64_t x244 = INT64_MIN;
	static int32_t t53 = -84018954;

	t53 = ((x241&x242)>>(x243<x244));

	if (t53 != 12) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = UINT16_MAX;
	int16_t x251 = -1;
	volatile int64_t x252 = 503628422603350585LL;
	volatile int32_t t54 = -252;

	t54 = ((x249&x250)>>(x251<x252));

	if (t54 != 16384) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x253 = 10U;
	volatile int8_t x254 = INT8_MIN;
	static volatile int32_t x256 = 0;

	t55 = ((x253&x254)>>(x255<x256));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	volatile uint64_t x258 = UINT64_MAX;
	int16_t x260 = INT16_MAX;

	t56 = ((x257&x258)>>(x259<x260));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = -104LL;
	uint64_t x262 = 128739LLU;
	int32_t x263 = INT32_MAX;
	volatile uint32_t x264 = 332255295U;
	uint64_t t57 = 11712331907228992LLU;

	t57 = ((x261&x262)>>(x263<x264));

	if (t57 != 128640LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x265 = 631U;
	uint16_t x266 = 52U;
	uint16_t x267 = 1U;
	uint8_t x268 = 2U;
	volatile int32_t t58 = -28160418;

	t58 = ((x265&x266)>>(x267<x268));

	if (t58 != 26) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -7182105;
	uint8_t x270 = 1U;
	int64_t x272 = 15601LL;

	t59 = ((x269&x270)>>(x271<x272));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x273 = 148245714;
	int64_t x274 = 8856401861725LL;
	static volatile uint8_t x275 = 3U;

	t60 = ((x273&x274)>>(x275<x276));

	if (t60 != 143002704LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x277 = UINT16_MAX;
	uint16_t x278 = 15394U;
	uint64_t x279 = 1676077240558LLU;
	uint32_t x280 = UINT32_MAX;
	volatile int32_t t61 = 60106;

	t61 = ((x277&x278)>>(x279<x280));

	if (t61 != 15394) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = 5913;
	uint8_t x282 = 18U;
	volatile int8_t x283 = INT8_MAX;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t62 = -53279411;

	t62 = ((x281&x282)>>(x283<x284));

	if (t62 != 16) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = INT8_MAX;
	int64_t x287 = -1LL;
	uint32_t x288 = 20129966U;
	int32_t t63 = 3137724;

	t63 = ((x285&x286)>>(x287<x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x289 = 3U;
	static volatile int32_t x290 = -329738;
	volatile int64_t x291 = 13788070052504LL;
	static uint16_t x292 = UINT16_MAX;
	volatile uint32_t t64 = 297353681U;

	t64 = ((x289&x290)>>(x291<x292));

	if (t64 != 2U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x297 = INT8_MAX;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MAX;
	uint64_t t65 = 522743402037651LLU;

	t65 = ((x297&x298)>>(x299<x300));

	if (t65 != 63LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x306 = 2541U;
	int64_t x307 = 3719LL;
	volatile uint32_t x308 = 19752161U;

	t66 = ((x305&x306)>>(x307<x308));

	if (t66 != 38LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x313 = -5045;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = UINT64_MAX;

	t67 = ((x313&x314)>>(x315<x316));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MIN;
	uint16_t x323 = 6U;
	volatile int32_t t68 = -3;

	t68 = ((x321&x322)>>(x323<x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x326 = -1;
	int32_t x327 = 736123;
	volatile int64_t t69 = 67429147194LL;

	t69 = ((x325&x326)>>(x327<x328));

	if (t69 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MIN;
	static volatile int64_t x331 = -1LL;
	static uint32_t x332 = 373U;

	t70 = ((x329&x330)>>(x331<x332));

	if (t70 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 3762U;
	uint8_t x334 = UINT8_MAX;
	uint32_t x335 = 901U;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t71 = 56;

	t71 = ((x333&x334)>>(x335<x336));

	if (t71 != 89) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x337 = 2U;
	int16_t x339 = -5;
	static int16_t x340 = 2953;
	int32_t t72 = -85432;

	t72 = ((x337&x338)>>(x339<x340));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 0U;
	uint8_t x342 = UINT8_MAX;
	static int64_t x343 = -1LL;
	volatile int32_t x344 = 226;
	static int32_t t73 = -5;

	t73 = ((x341&x342)>>(x343<x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x345 = 185625916U;
	uint64_t x346 = 99592078151LLU;
	static int32_t x347 = 72289;
	uint32_t x348 = UINT32_MAX;

	t74 = ((x345&x346)>>(x347<x348));

	if (t74 != 130LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = -1;
	static int16_t x351 = 1270;
	static int16_t x352 = -1;
	int64_t t75 = INT64_MAX;

	t75 = ((x349&x350)>>(x351<x352));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x354 = 3U;
	int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MIN;

	t76 = ((x353&x354)>>(x355<x356));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x358 = 44U;
	int16_t x360 = INT16_MIN;
	int32_t t77 = -1024015;

	t77 = ((x357&x358)>>(x359<x360));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = -13;
	volatile int16_t x363 = 15405;
	static int32_t x364 = -1651098;
	volatile int32_t t78 = -7646;

	t78 = ((x361&x362)>>(x363<x364));

	if (t78 != 32755) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x366 = INT32_MIN;
	int8_t x368 = INT8_MIN;

	t79 = ((x365&x366)>>(x367<x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = -1;
	volatile uint32_t x370 = UINT32_MAX;
	static uint32_t t80 = UINT32_MAX;

	t80 = ((x369&x370)>>(x371<x372));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = -1;
	int64_t x374 = INT64_MAX;
	static int16_t x375 = INT16_MAX;
	int64_t t81 = INT64_MAX;

	t81 = ((x373&x374)>>(x375<x376));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = 552298260182LL;
	int32_t x382 = -413068338;
	int16_t x383 = -14736;
	static int32_t x384 = 1307;
	static volatile int64_t t82 = 13816078LL;

	t82 = ((x381&x382)>>(x383<x384));

	if (t82 != 276010369379LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = INT32_MAX;
	volatile uint8_t x386 = 0U;
	volatile uint8_t x387 = 125U;
	uint8_t x388 = 0U;
	volatile int32_t t83 = 12943;

	t83 = ((x385&x386)>>(x387<x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x389 = 25835743U;
	static volatile uint32_t x390 = 179131U;
	static int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	uint32_t t84 = 580340U;

	t84 = ((x389&x390)>>(x391<x392));

	if (t84 != 72781U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x393 = INT8_MIN;
	volatile uint32_t x394 = 28316U;
	volatile int16_t x395 = INT16_MIN;
	volatile int64_t x396 = -1LL;
	static uint32_t t85 = 214133022U;

	t85 = ((x393&x394)>>(x395<x396));

	if (t85 != 14144U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x402 = UINT16_MAX;
	volatile int8_t x404 = -1;
	static volatile uint64_t t86 = 1744114LLU;

	t86 = ((x401&x402)>>(x403<x404));

	if (t86 != 32767LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x405 = INT16_MAX;
	static int64_t x406 = -58073708361284LL;
	uint8_t x407 = 0U;
	volatile int16_t x408 = 7131;

	t87 = ((x405&x406)>>(x407<x408));

	if (t87 != 1246LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = UINT16_MAX;
	uint8_t x410 = UINT8_MAX;
	static int16_t x412 = INT16_MIN;
	int32_t t88 = 31;

	t88 = ((x409&x410)>>(x411<x412));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = 651LL;
	int32_t x414 = -41;
	int8_t x415 = INT8_MAX;
	int64_t x416 = INT64_MIN;
	volatile int64_t t89 = -254833836254LL;

	t89 = ((x413&x414)>>(x415<x416));

	if (t89 != 643LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MAX;
	int32_t x418 = -1;
	int32_t x419 = INT32_MIN;
	volatile int32_t x420 = -89649246;
	int32_t t90 = -8485;

	t90 = ((x417&x418)>>(x419<x420));

	if (t90 != 1073741823) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MAX;
	int16_t x422 = -1951;
	int64_t x423 = -3764663041589679LL;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t91 = -205;

	t91 = ((x421&x422)>>(x423<x424));

	if (t91 != 15408) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x425 = UINT8_MAX;
	static uint8_t x426 = UINT8_MAX;
	int64_t x428 = 9LL;
	int32_t t92 = 1180544;

	t92 = ((x425&x426)>>(x427<x428));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x429 = -1;
	int64_t x430 = INT64_MAX;
	int8_t x431 = -1;
	uint8_t x432 = UINT8_MAX;
	int64_t t93 = 37LL;

	t93 = ((x429&x430)>>(x431<x432));

	if (t93 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = INT32_MAX;
	volatile uint32_t x434 = UINT32_MAX;
	static volatile int64_t x435 = -1LL;
	static uint8_t x436 = 9U;
	volatile uint32_t t94 = 1838297143U;

	t94 = ((x433&x434)>>(x435<x436));

	if (t94 != 1073741823U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x447 = INT16_MAX;
	uint64_t t95 = 109852LLU;

	t95 = ((x445&x446)>>(x447<x448));

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = INT16_MIN;
	static uint16_t x450 = UINT16_MAX;
	int16_t x451 = INT16_MAX;
	int32_t t96 = 23502;

	t96 = ((x449&x450)>>(x451<x452));

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x454 = UINT32_MAX;
	uint32_t x455 = 1935985U;
	int64_t x456 = -2LL;
	static volatile uint32_t t97 = 0U;

	t97 = ((x453&x454)>>(x455<x456));

	if (t97 != 32767U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x457 = UINT64_MAX;
	volatile uint16_t x459 = 370U;
	static volatile uint32_t x460 = 363160874U;

	t98 = ((x457&x458)>>(x459<x460));

	if (t98 != 28LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x461 = INT64_MAX;
	volatile int16_t x462 = -1;
	int16_t x464 = INT16_MIN;
	int64_t t99 = INT64_MAX;

	t99 = ((x461&x462)>>(x463<x464));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

