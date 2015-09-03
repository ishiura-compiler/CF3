#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 2115LLU;
uint16_t x10 = 0U;
int16_t x14 = -3;
uint32_t x23 = 131929U;
uint8_t x39 = UINT8_MAX;
static int16_t x44 = -24;
int16_t x50 = 8051;
volatile int32_t t13 = 0;
int8_t x66 = INT8_MIN;
volatile uint64_t t17 = 115003159272662466LLU;
volatile uint8_t x73 = 1U;
int64_t x74 = -1LL;
uint16_t x76 = 2235U;
volatile int64_t t18 = -275293128967174LL;
int32_t t21 = 1;
int16_t x92 = INT16_MIN;
int32_t t22 = -1;
volatile uint16_t x102 = 13U;
int64_t x107 = INT64_MAX;
static volatile int64_t t26 = 706259262LL;
static volatile int16_t x116 = -56;
static volatile uint8_t x123 = UINT8_MAX;
static volatile int64_t t30 = -6560970070558LL;
uint64_t x125 = 3458675871840LLU;
uint64_t x130 = 410153625079346910LLU;
int16_t x131 = INT16_MIN;
uint32_t x133 = 308004U;
volatile uint16_t x138 = 2174U;
int32_t x140 = INT32_MIN;
volatile uint64_t t36 = 8361571LLU;
int32_t x151 = -17346776;
static int32_t x166 = -929939;
int64_t t45 = INT64_MIN;
int16_t x186 = INT16_MIN;
uint32_t x190 = 157085U;
static int8_t x192 = 0;
static volatile int32_t t47 = -61675295;
int8_t x194 = -1;
static uint32_t t48 = 3669U;
int16_t x202 = INT16_MAX;
int16_t x203 = -1;
static int64_t x207 = INT64_MIN;
int64_t t51 = -37077135917LL;
int32_t t52 = -29815;
int64_t x220 = INT64_MIN;
volatile uint8_t x221 = 94U;
int16_t x222 = INT16_MIN;
int8_t x228 = -1;
volatile int64_t x233 = INT64_MIN;
int64_t t58 = 32738966120795767LL;
static int64_t x238 = 34126586952939LL;
uint64_t x241 = 30784269LLU;
static volatile int32_t t60 = -770;
static volatile uint32_t x250 = 29936U;
int8_t x251 = 1;
volatile int16_t x254 = -2;
volatile int8_t x260 = INT8_MAX;
uint64_t x262 = 97601262264409619LLU;
uint64_t x276 = 10258826134LLU;
static volatile int32_t x282 = -3;
volatile int64_t x284 = -57747LL;
int64_t x286 = INT64_MIN;
static volatile int64_t x290 = 82708319913035LL;
uint64_t x297 = UINT64_MAX;
static uint64_t x301 = 900975731LLU;
int64_t x307 = 833986773180LL;
uint64_t t75 = 51434958847LLU;
static uint32_t x310 = 207443908U;
int64_t x311 = -1LL;
int32_t x315 = INT32_MAX;
uint64_t x316 = 37LLU;
volatile uint64_t t77 = 122LLU;
volatile int16_t x321 = INT16_MIN;
int32_t x322 = INT32_MAX;
uint8_t x324 = 29U;
int64_t t78 = 4612445LL;
volatile int8_t x327 = -2;
uint8_t x329 = UINT8_MAX;
static int64_t x331 = -2741007LL;
int64_t t80 = 715675LL;
volatile int64_t x336 = 886295145LL;
static volatile int64_t t81 = -13752014298LL;
int64_t t83 = -27173195563974211LL;
int32_t x349 = -1;
int32_t t84 = 222801093;
int16_t x361 = INT16_MIN;
static int64_t x363 = 3382331622432466LL;
int64_t t86 = 127734209512047LL;
int8_t x370 = INT8_MIN;
uint8_t x372 = 16U;
static int16_t x375 = INT16_MIN;
static int32_t t90 = -6664;
volatile int16_t x388 = INT16_MIN;
int64_t t91 = -2071500866946016396LL;
int8_t x390 = -1;
volatile int64_t t92 = -1535521364184622LL;
int8_t x393 = INT8_MIN;
static int8_t x395 = INT8_MIN;
uint64_t t94 = 5570194613917848LLU;
uint8_t x404 = UINT8_MAX;
uint16_t x407 = 27593U;
static int32_t x410 = INT32_MIN;
int32_t t97 = 1;
static int64_t x417 = 12760LL;
uint32_t x418 = UINT32_MAX;


void f0(void) {
	int32_t x1 = 93322;
	volatile int8_t x2 = -1;
	int16_t x4 = INT16_MIN;
	uint64_t t0 = 1128433LLU;

	t0 = (((x1<=x2)%x3)|x4);

	if (t0 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x6 = 0U;
	int8_t x7 = INT8_MIN;
	volatile int16_t x8 = INT16_MAX;
	int32_t t1 = 66576591;

	t1 = (((x5<=x6)%x7)|x8);

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t x11 = INT32_MAX;
	uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = UINT64_MAX;

	t2 = (((x9<=x10)%x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	static int64_t x15 = -1LL;
	uint32_t x16 = 23U;
	static volatile int64_t t3 = -27123157LL;

	t3 = (((x13<=x14)%x15)|x16);

	if (t3 != 23LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 9U;
	int64_t x18 = INT64_MIN;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = INT32_MAX;

	t4 = (((x17<=x18)%x19)|x20);

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -89832676LL;
	int32_t x22 = INT32_MAX;
	static volatile uint32_t x24 = 25716909U;
	static uint32_t t5 = 195056U;

	t5 = (((x21<=x22)%x23)|x24);

	if (t5 != 25716909U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = 31599LLU;
	int8_t x26 = INT8_MIN;
	int8_t x27 = -1;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = (((x25<=x26)%x27)|x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MIN;
	int16_t x30 = -1;
	int16_t x31 = -1;
	uint16_t x32 = 15257U;
	volatile int32_t t7 = -39061;

	t7 = (((x29<=x30)%x31)|x32);

	if (t7 != 15257) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	volatile int32_t x34 = -1;
	static int16_t x35 = INT16_MAX;
	int16_t x36 = 1259;
	volatile int32_t t8 = 1;

	t8 = (((x33<=x34)%x35)|x36);

	if (t8 != 1259) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 370;
	int8_t x38 = -12;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -14;

	t9 = (((x37<=x38)%x39)|x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	static volatile int32_t x42 = -60;
	int16_t x43 = -1;
	volatile int32_t t10 = -35864;

	t10 = (((x41<=x42)%x43)|x44);

	if (t10 != -24) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 35396633772LLU;
	volatile int16_t x46 = -109;
	int8_t x47 = INT8_MIN;
	volatile uint16_t x48 = 29U;
	int32_t t11 = 3;

	t11 = (((x45<=x46)%x47)|x48);

	if (t11 != 29) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 1511;
	uint32_t x51 = 193180363U;
	int64_t x52 = -1181LL;
	int64_t t12 = -37990133785022LL;

	t12 = (((x49<=x50)%x51)|x52);

	if (t12 != -1181LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 207620307U;
	int64_t x54 = -1LL;
	volatile uint8_t x55 = 14U;
	int8_t x56 = 25;

	t13 = (((x53<=x54)%x55)|x56);

	if (t13 != 25) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 14964160;
	int8_t x58 = INT8_MAX;
	int32_t x59 = INT32_MAX;
	int16_t x60 = 63;
	static int32_t t14 = -220543711;

	t14 = (((x57<=x58)%x59)|x60);

	if (t14 != 63) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -8420980541623930LL;
	static int64_t x62 = 237LL;
	uint64_t x63 = 22142819176310LLU;
	uint8_t x64 = 1U;
	volatile uint64_t t15 = 14454339437341LLU;

	t15 = (((x61<=x62)%x63)|x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	int64_t x67 = INT64_MAX;
	static uint8_t x68 = 0U;
	static int64_t t16 = 4099185077635879LL;

	t16 = (((x65<=x66)%x67)|x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 231619029832433476LLU;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = INT32_MIN;
	static volatile uint64_t x72 = 224178485LLU;

	t17 = (((x69<=x70)%x71)|x72);

	if (t17 != 224178485LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x75 = INT64_MAX;

	t18 = (((x73<=x74)%x75)|x76);

	if (t18 != 2235LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 5;
	volatile uint16_t x78 = 1U;
	static int64_t x79 = -2074420931LL;
	volatile uint32_t x80 = UINT32_MAX;
	int64_t t19 = -144782791307LL;

	t19 = (((x77<=x78)%x79)|x80);

	if (t19 != 4294967295LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -1LL;
	uint32_t x82 = UINT32_MAX;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = -17790984;

	t20 = (((x81<=x82)%x83)|x84);

	if (t20 != -2147483647) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 7;
	int8_t x86 = -2;
	int16_t x87 = INT16_MAX;
	int8_t x88 = INT8_MIN;

	t21 = (((x85<=x86)%x87)|x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 1U;
	int64_t x90 = INT64_MAX;
	int16_t x91 = INT16_MIN;

	t22 = (((x89<=x90)%x91)|x92);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = INT32_MAX;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MAX;
	volatile uint8_t x96 = 6U;
	static volatile int32_t t23 = -7262;

	t23 = (((x93<=x94)%x95)|x96);

	if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = 3604U;
	volatile int32_t x98 = 52;
	int8_t x99 = -1;
	volatile int16_t x100 = INT16_MAX;
	int32_t t24 = 0;

	t24 = (((x97<=x98)%x99)|x100);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 4010431803499273817LL;
	int8_t x103 = -1;
	int16_t x104 = 6719;
	volatile int32_t t25 = 7263333;

	t25 = (((x101<=x102)%x103)|x104);

	if (t25 != 6719) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -94825646;
	static uint64_t x106 = 55341411LLU;
	uint16_t x108 = UINT16_MAX;

	t26 = (((x105<=x106)%x107)|x108);

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = INT16_MAX;
	volatile int16_t x111 = -1;
	static int32_t x112 = -1;
	volatile int32_t t27 = -330;

	t27 = (((x109<=x110)%x111)|x112);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MIN;
	volatile int32_t t28 = 20;

	t28 = (((x113<=x114)%x115)|x116);

	if (t28 != -55) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = 848U;
	static uint8_t x118 = UINT8_MAX;
	int32_t x119 = -3594;
	volatile int32_t x120 = INT32_MAX;
	static int32_t t29 = INT32_MAX;

	t29 = (((x117<=x118)%x119)|x120);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = 0;
	int32_t x122 = -1;
	int64_t x124 = -1LL;

	t30 = (((x121<=x122)%x123)|x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = INT64_MIN;
	static int64_t x127 = -320574308968757654LL;
	int8_t x128 = INT8_MIN;
	int64_t t31 = -14LL;

	t31 = (((x125<=x126)%x127)|x128);

	if (t31 != -127LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 508051279727522009LLU;
	uint64_t x132 = 22184759341449LLU;
	volatile uint64_t t32 = 2180613LLU;

	t32 = (((x129<=x130)%x131)|x132);

	if (t32 != 22184759341449LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = UINT8_MAX;
	uint32_t x135 = 4605529U;
	static int32_t x136 = INT32_MIN;
	uint32_t t33 = 727281U;

	t33 = (((x133<=x134)%x135)|x136);

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x137 = INT64_MAX;
	int8_t x139 = -1;
	static int32_t t34 = INT32_MIN;

	t34 = (((x137<=x138)%x139)|x140);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MIN;
	volatile int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	volatile int64_t t35 = -2660806846023365262LL;

	t35 = (((x141<=x142)%x143)|x144);

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x146 = INT16_MAX;
	static uint64_t x147 = 83LLU;
	int16_t x148 = INT16_MIN;

	t36 = (((x145<=x146)%x147)|x148);

	if (t36 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 13U;
	int64_t x150 = INT64_MIN;
	int64_t x152 = INT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = (((x149<=x150)%x151)|x152);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint64_t x154 = 7608144LLU;
	int32_t x155 = -1;
	uint16_t x156 = 12959U;
	int32_t t38 = 7;

	t38 = (((x153<=x154)%x155)|x156);

	if (t38 != 12959) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	uint64_t x158 = UINT64_MAX;
	volatile int16_t x159 = -2;
	static int16_t x160 = INT16_MAX;
	int32_t t39 = -2;

	t39 = (((x157<=x158)%x159)|x160);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 784980LLU;
	int64_t x163 = -47157LL;
	volatile int8_t x164 = -5;
	int64_t t40 = -8293443LL;

	t40 = (((x161<=x162)%x163)|x164);

	if (t40 != -5LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	int32_t x167 = 1700160;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = 3587691;

	t41 = (((x165<=x166)%x167)|x168);

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 424015220676268LL;
	volatile int16_t x170 = 0;
	int16_t x171 = -1;
	static int32_t x172 = INT32_MIN;
	int32_t t42 = INT32_MIN;

	t42 = (((x169<=x170)%x171)|x172);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	static uint8_t x174 = 29U;
	int32_t x175 = INT32_MAX;
	int16_t x176 = INT16_MIN;
	int32_t t43 = 6;

	t43 = (((x173<=x174)%x175)|x176);

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	static int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MAX;
	static uint16_t x180 = 0U;
	static int32_t t44 = -247483;

	t44 = (((x177<=x178)%x179)|x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = 1;
	static volatile int8_t x182 = -15;
	static volatile int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MIN;

	t45 = (((x181<=x182)%x183)|x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 28577LL;
	volatile int8_t x187 = INT8_MIN;
	uint16_t x188 = 1U;
	int32_t t46 = -22065;

	t46 = (((x185<=x186)%x187)|x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = INT8_MIN;
	int16_t x191 = -2;

	t47 = (((x189<=x190)%x191)|x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x193 = 59346U;
	uint32_t x195 = UINT32_MAX;
	uint16_t x196 = UINT16_MAX;

	t48 = (((x193<=x194)%x195)|x196);

	if (t48 != 65535U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MIN;
	uint64_t x198 = 346843264058LLU;
	static int32_t x199 = 815;
	int32_t x200 = -82;
	static volatile int32_t t49 = -628;

	t49 = (((x197<=x198)%x199)|x200);

	if (t49 != -82) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x201 = -1;
	int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -78393304;

	t50 = (((x201<=x202)%x203)|x204);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MAX;
	static uint16_t x208 = 2551U;

	t51 = (((x205<=x206)%x207)|x208);

	if (t51 != 2551LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 9;
	static uint32_t x210 = 458719U;
	int8_t x211 = INT8_MIN;
	int16_t x212 = 12414;

	t52 = (((x209<=x210)%x211)|x212);

	if (t52 != 12415) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 3336513LLU;
	uint64_t x214 = UINT64_MAX;
	uint32_t x215 = 383793U;
	static int8_t x216 = 10;
	volatile uint32_t t53 = 791284U;

	t53 = (((x213<=x214)%x215)|x216);

	if (t53 != 11U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -7;
	uint16_t x218 = 10U;
	uint16_t x219 = 458U;
	static int64_t t54 = 54LL;

	t54 = (((x217<=x218)%x219)|x220);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = 22U;
	volatile uint32_t t55 = 28U;

	t55 = (((x221<=x222)%x223)|x224);

	if (t55 != 22U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = INT16_MAX;
	volatile uint64_t x226 = UINT64_MAX;
	uint8_t x227 = UINT8_MAX;
	volatile int32_t t56 = 22;

	t56 = (((x225<=x226)%x227)|x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -3;
	uint32_t x230 = UINT32_MAX;
	volatile int8_t x231 = -1;
	int16_t x232 = -1;
	static volatile int32_t t57 = 2392;

	t57 = (((x229<=x230)%x231)|x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = -1;
	int64_t x235 = -1LL;
	int16_t x236 = -58;

	t58 = (((x233<=x234)%x235)|x236);

	if (t58 != -58LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int32_t x239 = -1;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = -5453;

	t59 = (((x237<=x238)%x239)|x240);

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = -239;
	int32_t x243 = -1;
	int16_t x244 = INT16_MIN;

	t60 = (((x241<=x242)%x243)|x244);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	static int8_t x246 = INT8_MIN;
	uint32_t x247 = 146606U;
	volatile int64_t x248 = INT64_MAX;
	int64_t t61 = INT64_MAX;

	t61 = (((x245<=x246)%x247)|x248);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MAX;
	static volatile uint64_t x252 = 3LLU;
	uint64_t t62 = 24544365LLU;

	t62 = (((x249<=x250)%x251)|x252);

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 4918069LL;
	int32_t x255 = INT32_MIN;
	volatile uint8_t x256 = UINT8_MAX;
	int32_t t63 = 386009;

	t63 = (((x253<=x254)%x255)|x256);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = -1;
	static uint32_t x259 = UINT32_MAX;
	static volatile uint32_t t64 = 32421U;

	t64 = (((x257<=x258)%x259)|x260);

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	volatile uint32_t x264 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (((x261<=x262)%x263)|x264);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	volatile int32_t x271 = 1980874;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t66 = 1347;

	t66 = (((x269<=x270)%x271)|x272);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	int16_t x274 = INT16_MAX;
	uint32_t x275 = UINT32_MAX;
	uint64_t t67 = 10003884083790080LLU;

	t67 = (((x273<=x274)%x275)|x276);

	if (t67 != 10258826135LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 6U;
	volatile uint16_t x278 = 942U;
	uint64_t x279 = UINT64_MAX;
	static volatile uint64_t x280 = 2047061932951642740LLU;
	volatile uint64_t t68 = 1LLU;

	t68 = (((x277<=x278)%x279)|x280);

	if (t68 != 2047061932951642741LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = 1710;
	int16_t x283 = INT16_MIN;
	int64_t t69 = 13854897372041LL;

	t69 = (((x281<=x282)%x283)|x284);

	if (t69 != -57747LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x285 = 1;
	int32_t x287 = 12336;
	volatile uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x285<=x286)%x287)|x288);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = 5452371;
	uint8_t x291 = 3U;
	static int8_t x292 = -1;
	int32_t t71 = 1;

	t71 = (((x289<=x290)%x291)|x292);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x293 = INT8_MAX;
	int64_t x294 = -1LL;
	int64_t x295 = -1LL;
	volatile uint16_t x296 = UINT16_MAX;
	volatile int64_t t72 = -6LL;

	t72 = (((x293<=x294)%x295)|x296);

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x298 = 1583U;
	int32_t x299 = -44219;
	static int64_t x300 = -1LL;
	static int64_t t73 = 407199623262309LL;

	t73 = (((x297<=x298)%x299)|x300);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x302 = 22180U;
	volatile int64_t x303 = INT64_MIN;
	uint64_t x304 = 27587193898912LLU;
	volatile uint64_t t74 = 3053011977LLU;

	t74 = (((x301<=x302)%x303)|x304);

	if (t74 != 27587193898912LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MIN;
	int64_t x306 = -1LL;
	uint64_t x308 = 404086337LLU;

	t75 = (((x305<=x306)%x307)|x308);

	if (t75 != 404086337LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x309 = 26746731586LLU;
	int64_t x312 = INT64_MIN;
	int64_t t76 = INT64_MIN;

	t76 = (((x309<=x310)%x311)|x312);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = -1;
	volatile int16_t x314 = INT16_MIN;

	t77 = (((x313<=x314)%x315)|x316);

	if (t77 != 37LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x323 = INT64_MAX;

	t78 = (((x321<=x322)%x323)|x324);

	if (t78 != 29LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x325 = INT8_MAX;
	static volatile int16_t x326 = -1;
	int16_t x328 = INT16_MIN;
	static int32_t t79 = -807352;

	t79 = (((x325<=x326)%x327)|x328);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x330 = 1266849222LL;
	static int16_t x332 = INT16_MIN;

	t80 = (((x329<=x330)%x331)|x332);

	if (t80 != -32767LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = -17489411156539LL;
	int8_t x334 = INT8_MIN;
	int16_t x335 = INT16_MIN;

	t81 = (((x333<=x334)%x335)|x336);

	if (t81 != 886295145LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 0LLU;
	static int8_t x338 = INT8_MAX;
	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t82 = 19950;

	t82 = (((x337<=x338)%x339)|x340);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x345 = -1;
	static uint16_t x346 = 28757U;
	static int64_t x347 = 49066694853474200LL;
	int8_t x348 = -1;

	t83 = (((x345<=x346)%x347)|x348);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x350 = 31;
	int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;

	t84 = (((x349<=x350)%x351)|x352);

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	uint8_t x354 = 1U;
	uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MIN;
	static int32_t t85 = 24;

	t85 = (((x353<=x354)%x355)|x356);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x362 = INT64_MAX;
	uint8_t x364 = 52U;

	t86 = (((x361<=x362)%x363)|x364);

	if (t86 != 53LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -1LL;
	static volatile int32_t x371 = -56;
	volatile int32_t t87 = -3176;

	t87 = (((x369<=x370)%x371)|x372);

	if (t87 != 16) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x373 = -589;
	int8_t x374 = 3;
	volatile int8_t x376 = -55;
	volatile int32_t t88 = 744649363;

	t88 = (((x373<=x374)%x375)|x376);

	if (t88 != -55) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	volatile int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MIN;
	volatile int64_t t89 = -2365166928489452LL;

	t89 = (((x377<=x378)%x379)|x380);

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = -1;
	volatile int16_t x383 = INT16_MAX;
	uint8_t x384 = 0U;

	t90 = (((x381<=x382)%x383)|x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x385 = 13U;
	uint32_t x386 = 2754U;
	int64_t x387 = 613LL;

	t91 = (((x385<=x386)%x387)|x388);

	if (t91 != -32767LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x389 = 113U;
	int8_t x391 = 1;
	int64_t x392 = -1LL;

	t92 = (((x389<=x390)%x391)|x392);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x394 = UINT8_MAX;
	uint32_t x396 = 21U;
	volatile uint32_t t93 = 240583U;

	t93 = (((x393<=x394)%x395)|x396);

	if (t93 != 21U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MIN;
	static volatile int64_t x398 = -1LL;
	int32_t x399 = 409192;
	uint64_t x400 = 2LLU;

	t94 = (((x397<=x398)%x399)|x400);

	if (t94 != 3LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x401 = UINT32_MAX;
	static uint32_t x402 = UINT32_MAX;
	uint64_t x403 = 164563999750LLU;
	uint64_t t95 = 31949LLU;

	t95 = (((x401<=x402)%x403)|x404);

	if (t95 != 255LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = 0;
	static int64_t x406 = -1LL;
	static int8_t x408 = -1;
	volatile int32_t t96 = 5714182;

	t96 = (((x405<=x406)%x407)|x408);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x409 = 0;
	int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;

	t97 = (((x409<=x410)%x411)|x412);

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x413 = 0;
	int8_t x414 = INT8_MAX;
	int32_t x415 = INT32_MIN;
	uint16_t x416 = 254U;
	int32_t t98 = -30329;

	t98 = (((x413<=x414)%x415)|x416);

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x419 = -62;
	int64_t x420 = INT64_MAX;
	static volatile int64_t t99 = INT64_MAX;

	t99 = (((x417<=x418)%x419)|x420);

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

