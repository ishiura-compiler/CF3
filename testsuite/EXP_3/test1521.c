#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x9 = -7635241;
int8_t x10 = INT8_MIN;
static int8_t x11 = -1;
static int8_t x14 = INT8_MIN;
uint16_t x22 = UINT16_MAX;
uint64_t x23 = 150656727866367LLU;
volatile int32_t t5 = 28;
int32_t x26 = -1;
int16_t x35 = INT16_MIN;
int64_t x37 = INT64_MIN;
uint64_t x44 = 3871037259023137981LLU;
int16_t x46 = INT16_MIN;
volatile int16_t x51 = 12994;
int16_t x53 = INT16_MAX;
int16_t x54 = -1;
int64_t x60 = 193705829505042LL;
uint8_t x76 = UINT8_MAX;
static int8_t x85 = -1;
static int32_t t21 = 12764;
static volatile int32_t t22 = -2;
int8_t x93 = -1;
volatile int32_t x99 = INT32_MIN;
int32_t x101 = -2;
int64_t x109 = 3407384651152LL;
int8_t x118 = 0;
static uint32_t x123 = 702142U;
int32_t x129 = INT32_MAX;
volatile int32_t x130 = -33;
uint64_t x138 = 29955LLU;
uint64_t x147 = 424660028117098130LLU;
int16_t x148 = INT16_MIN;
int64_t x150 = 16232931871LL;
int64_t t37 = -124044LL;
int16_t x155 = -255;
uint8_t x162 = 77U;
uint16_t x164 = 26145U;
int64_t x165 = INT64_MAX;
int16_t x168 = INT16_MIN;
static int16_t x174 = 29;
static volatile int32_t t43 = -57;
int32_t x177 = 83;
int16_t x183 = -1013;
volatile int32_t t45 = 7067;
static int32_t x191 = -1;
static uint16_t x206 = 9U;
int16_t x207 = INT16_MIN;
static int64_t t52 = -869192458787LL;
int16_t x214 = -1;
int64_t t54 = -174834817679844LL;
int8_t x224 = 3;
volatile uint32_t t55 = 4346347U;
uint16_t x231 = 1325U;
int32_t t58 = -1;
int32_t x238 = INT32_MIN;
int8_t x243 = INT8_MIN;
static uint32_t x245 = UINT32_MAX;
int64_t x251 = -1LL;
volatile int32_t t63 = -27132782;
uint16_t x257 = 10U;
int32_t x258 = -1;
uint16_t x260 = 268U;
int8_t x262 = -1;
uint32_t x264 = UINT32_MAX;
int64_t x265 = 1864558LL;
int8_t x266 = INT8_MIN;
uint8_t x268 = UINT8_MAX;
volatile int64_t t66 = 7277937508LL;
volatile uint64_t x269 = 3LLU;
int32_t x271 = 4007;
int32_t x272 = -204842900;
volatile uint64_t t67 = 1883LLU;
uint64_t x274 = UINT64_MAX;
int32_t x279 = -1;
uint16_t x286 = UINT16_MAX;
static int8_t x287 = INT8_MIN;
volatile uint64_t x290 = 109088774091768LLU;
int16_t x300 = INT16_MIN;
static volatile int32_t x301 = -1;
int16_t x303 = INT16_MIN;
int64_t x312 = INT64_MIN;
int64_t x315 = INT64_MIN;
uint8_t x316 = UINT8_MAX;
static volatile int64_t t82 = -122307432709579LL;
int8_t x333 = INT8_MAX;
uint64_t x336 = 298496614886309LLU;
volatile uint64_t x346 = 181133485LLU;
static int16_t x347 = INT16_MAX;
uint16_t x349 = 150U;
int32_t x350 = INT32_MIN;
volatile uint16_t x355 = 560U;
static int64_t x361 = -1071838LL;
volatile int64_t x362 = INT64_MIN;
uint64_t x366 = 16498355LLU;
static int32_t t94 = 2925;
int8_t x383 = INT8_MAX;
static int8_t x385 = INT8_MIN;
static uint64_t x386 = 16268LLU;
volatile int8_t x387 = INT8_MAX;
int64_t t97 = -1105458633501488LL;
int16_t x395 = INT16_MIN;
volatile int64_t t98 = 10LL;


void f0(void) {
	uint16_t x1 = 1504U;
	volatile uint8_t x2 = 10U;
	int32_t x3 = 61633;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 1007;

	t0 = ((x1^x2)^(x3<x4));

	if (t0 != 1515) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int32_t x6 = -150943;
	int16_t x7 = 0;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -1311;

	t1 = ((x5^x6)^(x7<x8));

	if (t1 != 143969) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -293646413;

	t2 = ((x9^x10)^(x11<x12));

	if (t2 != 7635286) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 577;
	volatile int16_t x15 = -1;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 4465;

	t3 = ((x13^x14)^(x15<x16));

	if (t3 != -576) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = INT16_MIN;
	static uint32_t x19 = UINT32_MAX;
	int8_t x20 = -1;
	int64_t t4 = -2024795508560LL;

	t4 = ((x17^x18)^(x19<x20));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int8_t x24 = -36;

	t5 = ((x21^x22)^(x23<x24));

	if (t5 != 2147418113) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MIN;
	static int8_t x27 = -1;
	static uint32_t x28 = UINT32_MAX;
	int64_t t6 = INT64_MAX;

	t6 = ((x25^x26)^(x27<x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -3;
	static int16_t x30 = INT16_MIN;
	uint8_t x31 = 1U;
	volatile int8_t x32 = 0;
	volatile int32_t t7 = 24043431;

	t7 = ((x29^x30)^(x31<x32));

	if (t7 != 32765) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x33 = 8U;
	int32_t x34 = -3959174;
	uint64_t x36 = 88984447036406LLU;
	int32_t t8 = -330;

	t8 = ((x33^x34)^(x35<x36));

	if (t8 != -3959182) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	volatile int64_t x40 = INT64_MIN;
	volatile int64_t t9 = INT64_MAX;

	t9 = ((x37^x38)^(x39<x40));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -22211;
	int32_t x42 = -1;
	int32_t x43 = -1070;
	volatile int32_t t10 = 28376311;

	t10 = ((x41^x42)^(x43<x44));

	if (t10 != 22210) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -160;
	uint16_t x47 = 271U;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 110991656;

	t11 = ((x45^x46)^(x47<x48));

	if (t11 != 32608) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 130LL;
	static volatile int32_t x50 = INT32_MIN;
	int64_t x52 = INT64_MIN;
	static volatile int64_t t12 = 806563047159LL;

	t12 = ((x49^x50)^(x51<x52));

	if (t12 != -2147483518LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = 296709598;
	int8_t x56 = -25;
	int32_t t13 = -21;

	t13 = ((x53^x54)^(x55<x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile uint16_t x58 = 7967U;
	static volatile int64_t x59 = -1LL;
	int32_t t14 = 208947802;

	t14 = ((x57^x58)^(x59<x60));

	if (t14 != -2147475682) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = -1;
	int64_t x63 = INT64_MIN;
	int16_t x64 = 62;
	volatile int32_t t15 = 324326561;

	t15 = ((x61^x62)^(x63<x64));

	if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint8_t x66 = UINT8_MAX;
	static volatile int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	int64_t t16 = 64640615625036103LL;

	t16 = ((x65^x66)^(x67<x68));

	if (t16 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 2015;
	static volatile int16_t x70 = -228;
	static volatile uint64_t x71 = 43651LLU;
	uint64_t x72 = 11992229LLU;
	int32_t t17 = -7364265;

	t17 = ((x69^x70)^(x71<x72));

	if (t17 != -1854) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 594558LLU;
	int32_t x74 = -1;
	volatile uint8_t x75 = 6U;
	volatile uint64_t t18 = 452LLU;

	t18 = ((x73^x74)^(x75<x76));

	if (t18 != 18446744073708957056LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int8_t x78 = INT8_MIN;
	volatile int16_t x79 = INT16_MIN;
	volatile int8_t x80 = 2;
	volatile int32_t t19 = 2;

	t19 = ((x77^x78)^(x79<x80));

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 1390948636660LLU;
	int64_t x82 = 3791967261444730603LL;
	static int64_t x83 = INT64_MIN;
	int16_t x84 = -1;
	volatile uint64_t t20 = 2552319295584948LLU;

	t20 = ((x81^x82)^(x83<x84));

	if (t20 != 3791968634598668574LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x86 = 0;
	int64_t x87 = -1LL;
	static int64_t x88 = INT64_MAX;

	t21 = ((x85^x86)^(x87<x88));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -2;
	int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	int16_t x92 = 1;

	t22 = ((x89^x90)^(x91<x92));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x94 = 473LL;
	uint8_t x95 = 0U;
	static uint64_t x96 = 1825056271856LLU;
	int64_t t23 = 450LL;

	t23 = ((x93^x94)^(x95<x96));

	if (t23 != -473LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = -1LL;
	int32_t x98 = INT32_MIN;
	static uint32_t x100 = 1U;
	volatile int64_t t24 = 1159LL;

	t24 = ((x97^x98)^(x99<x100));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = UINT16_MAX;
	uint32_t x103 = UINT32_MAX;
	volatile uint16_t x104 = 7U;
	int32_t t25 = -1;

	t25 = ((x101^x102)^(x103<x104));

	if (t25 != -65535) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -4092807;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = 1273882U;
	static uint64_t x108 = UINT64_MAX;
	static volatile int32_t t26 = -954739;

	t26 = ((x105^x106)^(x107<x108));

	if (t26 != 4092920) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 2053515892U;
	int64_t x111 = -69LL;
	static volatile uint32_t x112 = UINT32_MAX;
	int64_t t27 = 2943094877LL;

	t27 = ((x109^x110)^(x111<x112));

	if (t27 != 3406673842149LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static uint8_t x114 = 34U;
	volatile int8_t x115 = -1;
	uint32_t x116 = 104162447U;
	volatile int32_t t28 = -12;

	t28 = ((x113^x114)^(x115<x116));

	if (t28 != -35) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = 11U;
	int64_t x119 = 173LL;
	uint16_t x120 = UINT16_MAX;
	static int32_t t29 = 45;

	t29 = ((x117^x118)^(x119<x120));

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -1;
	static int32_t x122 = INT32_MIN;
	uint8_t x124 = 43U;
	static int32_t t30 = INT32_MAX;

	t30 = ((x121^x122)^(x123<x124));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int32_t x126 = -1;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	static volatile int64_t t31 = -756556871958406016LL;

	t31 = ((x125^x126)^(x127<x128));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x131 = 3U;
	volatile int16_t x132 = -1;
	int32_t t32 = -1;

	t32 = ((x129^x130)^(x131<x132));

	if (t32 != -2147483615) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MAX;
	int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MAX;
	int32_t x136 = -56311592;
	static int64_t t33 = 243333029757762603LL;

	t33 = ((x133^x134)^(x135<x136));

	if (t33 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -134615967;
	volatile uint64_t x139 = UINT64_MAX;
	uint16_t x140 = 5181U;
	volatile uint64_t t34 = 580546478655LLU;

	t34 = ((x137^x138)^(x139<x140));

	if (t34 != 18446744073574914402LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -7;
	uint16_t x142 = 3404U;
	static volatile uint64_t x143 = 586665LLU;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -86;

	t35 = ((x141^x142)^(x143<x144));

	if (t35 != -3404) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -400780558894584LL;
	uint64_t x146 = UINT64_MAX;
	uint64_t t36 = 308199794062LLU;

	t36 = ((x145^x146)^(x147<x148));

	if (t36 != 400780558894582LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -3652;
	uint32_t x151 = 255594818U;
	int32_t x152 = -1;

	t37 = ((x149^x150)^(x151<x152));

	if (t37 != -16232934494LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MAX;
	volatile int64_t x156 = -23545416567LL;
	int64_t t38 = 54LL;

	t38 = ((x153^x154)^(x155<x156));

	if (t38 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	static volatile int16_t x158 = INT16_MIN;
	static int8_t x159 = 31;
	int8_t x160 = 16;
	volatile int64_t t39 = 0LL;

	t39 = ((x157^x158)^(x159<x160));

	if (t39 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int64_t x163 = INT64_MAX;
	volatile int32_t t40 = 0;

	t40 = ((x161^x162)^(x163<x164));

	if (t40 != 32690) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	int64_t x167 = -1LL;
	volatile int64_t t41 = INT64_MIN;

	t41 = ((x165^x166)^(x167<x168));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 2880U;
	int32_t x170 = -1;
	volatile uint64_t x171 = 51384863894LLU;
	int16_t x172 = 3;
	volatile uint32_t t42 = 74155U;

	t42 = ((x169^x170)^(x171<x172));

	if (t42 != 4294964415U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1128;
	int64_t x175 = 12LL;
	int8_t x176 = INT8_MIN;

	t43 = ((x173^x174)^(x175<x176));

	if (t43 != -1147) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -1LL;
	int16_t x179 = -2645;
	uint32_t x180 = 1885578957U;
	int64_t t44 = 757386421645370LL;

	t44 = ((x177^x178)^(x179<x180));

	if (t44 != -84LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -1;
	volatile uint16_t x182 = UINT16_MAX;
	uint32_t x184 = 21U;

	t45 = ((x181^x182)^(x183<x184));

	if (t45 != -65536) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int64_t x186 = 458737766576553LL;
	static int64_t x187 = INT64_MAX;
	static int64_t x188 = INT64_MIN;
	uint64_t t46 = 1609005984919LLU;

	t46 = ((x185^x186)^(x187<x188));

	if (t46 != 18446285335942975062LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = 44963U;
	int16_t x192 = INT16_MIN;
	volatile uint32_t t47 = 5U;

	t47 = ((x189^x190)^(x191<x192));

	if (t47 != 44892U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 2;
	uint64_t x194 = 22LLU;
	uint64_t x195 = UINT64_MAX;
	static volatile int64_t x196 = 36087LL;
	volatile uint64_t t48 = 1018LLU;

	t48 = ((x193^x194)^(x195<x196));

	if (t48 != 20LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MIN;
	int32_t x200 = -63;
	volatile int32_t t49 = 0;

	t49 = ((x197^x198)^(x199<x200));

	if (t49 != -2147483522) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 115599LLU;
	int8_t x202 = -6;
	static volatile int64_t x203 = 747087743LL;
	int16_t x204 = -15115;
	volatile uint64_t t50 = 31026418646089925LLU;

	t50 = ((x201^x202)^(x203<x204));

	if (t50 != 18446744073709436021LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 798115U;
	volatile uint32_t x208 = UINT32_MAX;
	volatile uint32_t t51 = 314U;

	t51 = ((x205^x206)^(x207<x208));

	if (t51 != 798123U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 3U;
	int64_t x210 = INT64_MIN;
	int32_t x211 = -1;
	int16_t x212 = INT16_MIN;

	t52 = ((x209^x210)^(x211<x212));

	if (t52 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 1845;
	volatile int16_t x215 = INT16_MAX;
	uint64_t x216 = 1209831423991883LLU;
	int32_t t53 = -857196;

	t53 = ((x213^x214)^(x215<x216));

	if (t53 != -1845) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int16_t x218 = INT16_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int16_t x220 = INT16_MIN;

	t54 = ((x217^x218)^(x219<x220));

	if (t54 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 372430U;
	int32_t x222 = INT32_MIN;
	uint8_t x223 = 0U;

	t55 = ((x221^x222)^(x223<x224));

	if (t55 != 2147856079U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -20;
	static uint16_t x226 = UINT16_MAX;
	volatile int16_t x227 = 7553;
	static int8_t x228 = -1;
	int32_t t56 = -84;

	t56 = ((x225^x226)^(x227<x228));

	if (t56 != -65517) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	uint32_t x230 = 96621702U;
	static int32_t x232 = 86559;
	uint32_t t57 = 4799U;

	t57 = ((x229^x230)^(x231<x232));

	if (t57 != 2244105351U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 15U;
	int16_t x234 = INT16_MIN;
	uint16_t x235 = 7804U;
	int16_t x236 = -3104;

	t58 = ((x233^x234)^(x235<x236));

	if (t58 != -32753) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 1182;
	int64_t x239 = INT64_MIN;
	volatile int16_t x240 = INT16_MIN;
	static volatile int32_t t59 = 5;

	t59 = ((x237^x238)^(x239<x240));

	if (t59 != -2147482465) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 7735;
	volatile int16_t x242 = -1276;
	volatile int8_t x244 = -1;
	int32_t t60 = -42769;

	t60 = ((x241^x242)^(x243<x244));

	if (t60 != -6862) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x246 = 3246;
	int8_t x247 = -1;
	int32_t x248 = INT32_MIN;
	volatile uint32_t t61 = 55660646U;

	t61 = ((x245^x246)^(x247<x248));

	if (t61 != 4294964049U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = UINT8_MAX;
	uint8_t x250 = UINT8_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t62 = -73;

	t62 = ((x249^x250)^(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	uint16_t x254 = 16607U;
	int64_t x255 = -1LL;
	int64_t x256 = 451134318062195LL;

	t63 = ((x253^x254)^(x255<x256));

	if (t63 != -16162) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x259 = UINT64_MAX;
	volatile int32_t t64 = -4145473;

	t64 = ((x257^x258)^(x259<x260));

	if (t64 != -11) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = INT64_MIN;
	int64_t x263 = -1LL;
	volatile int64_t t65 = -118918247231814299LL;

	t65 = ((x261^x262)^(x263<x264));

	if (t65 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x267 = INT8_MIN;

	t66 = ((x265^x266)^(x267<x268));

	if (t66 != -1864465LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x270 = 964755;

	t67 = ((x269^x270)^(x271<x272));

	if (t67 != 964752LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	uint16_t x275 = 5U;
	int16_t x276 = INT16_MIN;
	volatile uint64_t t68 = 213906126LLU;

	t68 = ((x273^x274)^(x275<x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 26951;
	uint16_t x278 = 1U;
	static int32_t x280 = INT32_MIN;
	static int32_t t69 = -5;

	t69 = ((x277^x278)^(x279<x280));

	if (t69 != 26950) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	int8_t x283 = INT8_MIN;
	static volatile int32_t x284 = -2;
	int32_t t70 = -2974;

	t70 = ((x281^x282)^(x283<x284));

	if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int16_t x288 = -1;
	volatile int32_t t71 = -49875080;

	t71 = ((x285^x286)^(x287<x288));

	if (t71 != -65410) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x289 = -27093245079LL;
	int64_t x291 = INT64_MIN;
	static int64_t x292 = -11793279097LL;
	static volatile uint64_t t72 = 122739665714439973LLU;

	t72 = ((x289^x290)^(x291<x292));

	if (t72 != 18446635009537020048LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint32_t x294 = 200004316U;
	volatile uint16_t x295 = 281U;
	uint8_t x296 = UINT8_MAX;
	volatile uint32_t t73 = 786U;

	t73 = ((x293^x294)^(x295<x296));

	if (t73 != 1947479331U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	volatile uint32_t x298 = 103093569U;
	volatile int8_t x299 = INT8_MIN;
	uint32_t t74 = 25U;

	t74 = ((x297^x298)^(x299<x300));

	if (t74 != 103148222U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MIN;
	int8_t x304 = 0;
	volatile int32_t t75 = -51169905;

	t75 = ((x301^x302)^(x303<x304));

	if (t75 != 126) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -211;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 150364719887LLU;
	uint16_t x308 = 9192U;
	static volatile int32_t t76 = 383296;

	t76 = ((x305^x306)^(x307<x308));

	if (t76 != 173) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MIN;
	uint16_t x310 = 251U;
	int64_t x311 = INT64_MAX;
	int64_t t77 = -8385433232240LL;

	t77 = ((x309^x310)^(x311<x312));

	if (t77 != -9223372036854775557LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = UINT16_MAX;
	static int8_t x314 = -1;
	volatile int32_t t78 = -16093008;

	t78 = ((x313^x314)^(x315<x316));

	if (t78 != -65535) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 5;
	int8_t x318 = INT8_MAX;
	uint64_t x319 = UINT64_MAX;
	uint8_t x320 = UINT8_MAX;
	int32_t t79 = 302014;

	t79 = ((x317^x318)^(x319<x320));

	if (t79 != 122) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int64_t x322 = INT64_MIN;
	uint16_t x323 = UINT16_MAX;
	uint64_t x324 = 654653290873711490LLU;
	volatile int64_t t80 = -319059381587920227LL;

	t80 = ((x321^x322)^(x323<x324));

	if (t80 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 89348732U;
	uint32_t x327 = 2059923U;
	volatile uint8_t x328 = UINT8_MAX;
	static volatile uint64_t t81 = 572LLU;

	t81 = ((x325^x326)^(x327<x328));

	if (t81 != 18446744073620202883LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 2913U;
	int64_t x330 = -1LL;
	int8_t x331 = -1;
	int16_t x332 = INT16_MIN;

	t82 = ((x329^x330)^(x331<x332));

	if (t82 != -2914LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = UINT8_MAX;
	static volatile int64_t x335 = -96270198LL;
	volatile int32_t t83 = 4152852;

	t83 = ((x333^x334)^(x335<x336));

	if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 8628705U;
	volatile uint16_t x338 = 0U;
	static volatile int64_t x339 = -1LL;
	static uint32_t x340 = 32188432U;
	static volatile uint32_t t84 = 136U;

	t84 = ((x337^x338)^(x339<x340));

	if (t84 != 8628704U) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -5061;
	volatile int64_t x342 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;
	volatile int64_t t85 = 420307813854LL;

	t85 = ((x341^x342)^(x343<x344));

	if (t85 != -9223372036854770747LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -1LL;
	int8_t x348 = INT8_MAX;
	volatile uint64_t t86 = 400LLU;

	t86 = ((x345^x346)^(x347<x348));

	if (t86 != 18446744073528418130LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x351 = INT8_MIN;
	uint32_t x352 = 219688491U;
	static int32_t t87 = 85;

	t87 = ((x349^x350)^(x351<x352));

	if (t87 != -2147483498) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = 6373665557LL;
	volatile int32_t x354 = -3;
	int64_t x356 = INT64_MIN;
	static int64_t t88 = 8958339907276LL;

	t88 = ((x353^x354)^(x355<x356));

	if (t88 != -6373665560LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = -1;
	static int16_t x359 = -1;
	int32_t x360 = INT32_MIN;
	static volatile int64_t t89 = INT64_MIN;

	t89 = ((x357^x358)^(x359<x360));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x363 = UINT32_MAX;
	volatile int8_t x364 = INT8_MAX;
	int64_t t90 = -4LL;

	t90 = ((x361^x362)^(x363<x364));

	if (t90 != 9223372036853703970LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	uint32_t x368 = 4227U;
	volatile uint64_t t91 = 4627476164193192442LLU;

	t91 = ((x365^x366)^(x367<x368));

	if (t91 != 18446744073693053235LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x369 = -1;
	int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t92 = INT32_MIN;

	t92 = ((x369^x370)^(x371<x372));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = 1044;
	static int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MIN;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t93 = -57;

	t93 = ((x373^x374)^(x375<x376));

	if (t93 != -1132) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	volatile uint16_t x378 = 233U;
	volatile int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;

	t94 = ((x377^x378)^(x379<x380));

	if (t94 != -234) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	uint32_t x382 = UINT32_MAX;
	uint8_t x384 = 19U;
	uint32_t t95 = 20146U;

	t95 = ((x381^x382)^(x383<x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x388 = 0;
	volatile uint64_t t96 = 4057486699403705LLU;

	t96 = ((x385^x386)^(x387<x388));

	if (t96 != 18446744073709535244LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	static int64_t x390 = INT64_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int64_t x392 = 479165793LL;

	t97 = ((x389^x390)^(x391<x392));

	if (t97 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = -1LL;
	uint8_t x394 = UINT8_MAX;
	static volatile int8_t x396 = INT8_MIN;

	t98 = ((x393^x394)^(x395<x396));

	if (t98 != -255LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	volatile int16_t x398 = -1;
	int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 221266543849034LLU;
	int32_t t99 = 321;

	t99 = ((x397^x398)^(x399<x400));

	if (t99 != 32767) { NG(); } else { ; }
	
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

