#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -121547057;
static int8_t x4 = -1;
uint64_t t1 = 284570521459809576LLU;
int8_t x10 = INT8_MIN;
int8_t x11 = INT8_MIN;
int64_t x13 = 1LL;
static int32_t x17 = INT32_MIN;
volatile uint16_t x19 = UINT16_MAX;
int16_t x22 = 587;
volatile int64_t t6 = -10795232949835532LL;
volatile uint64_t t7 = 3873072775906LLU;
uint8_t x33 = 37U;
int16_t x37 = -1;
int32_t x39 = INT32_MIN;
volatile uint64_t x42 = 110130975478LLU;
uint64_t x43 = 683743255863758LLU;
volatile uint32_t x51 = 703459U;
volatile uint64_t x52 = 84475LLU;
uint16_t x57 = 28531U;
int64_t x62 = 763482144602LL;
volatile uint8_t x65 = 1U;
uint64_t x66 = 31LLU;
volatile uint64_t t16 = 83592795915517022LLU;
int64_t x70 = 62693846941713335LL;
int64_t x78 = INT64_MAX;
uint16_t x80 = UINT16_MAX;
int64_t t19 = 1388480620022799007LL;
int8_t x81 = -16;
volatile int64_t t20 = -246198004451LL;
static int16_t x88 = -13;
int64_t t21 = 97367886867486186LL;
static int16_t x93 = -5321;
uint8_t x102 = 36U;
int8_t x109 = INT8_MIN;
volatile int16_t x116 = INT16_MAX;
int16_t x133 = 8860;
uint8_t x143 = 2U;
uint32_t x152 = UINT32_MAX;
static volatile int32_t x156 = INT32_MIN;
volatile uint16_t x160 = UINT16_MAX;
uint64_t x163 = 479LLU;
int64_t x179 = INT64_MIN;
int64_t x180 = INT64_MIN;
volatile int64_t t46 = 36381413550822LL;
int32_t x199 = INT32_MIN;
int16_t x200 = INT16_MAX;
uint16_t x204 = 247U;
volatile uint32_t t49 = 11438U;
int64_t x205 = 24697175LL;
uint64_t x210 = 58LLU;
static volatile int64_t x213 = INT64_MAX;
volatile int64_t x214 = INT64_MIN;
int8_t x215 = INT8_MIN;
volatile uint64_t t52 = 1127285488073996602LLU;
uint64_t t53 = 9LLU;
volatile int8_t x223 = INT8_MIN;
volatile int32_t x224 = INT32_MIN;
uint32_t x229 = 15U;
uint16_t x231 = 521U;
volatile uint32_t x245 = UINT32_MAX;
uint16_t x248 = 51U;
int16_t x251 = INT16_MAX;
int32_t x264 = INT32_MAX;
uint64_t x277 = 4216769993127LLU;
volatile int16_t x281 = INT16_MIN;
int8_t x282 = -1;
int8_t x284 = -1;
int32_t x285 = 135;
static int16_t x292 = INT16_MIN;
static uint32_t x293 = 129903U;
static int8_t x295 = 2;
uint32_t x296 = 19795733U;
static uint8_t x299 = 9U;
int64_t t70 = -797107676882941287LL;
volatile int8_t x303 = INT8_MIN;
uint32_t x311 = 6U;
int16_t x324 = INT16_MIN;
int64_t x329 = 77LL;
int32_t x331 = INT32_MAX;
int8_t x344 = INT8_MIN;
static uint64_t t85 = 644454455216858LLU;
int32_t t86 = -1;
int32_t t88 = -3307;
int8_t x375 = INT8_MAX;
volatile int8_t x377 = INT8_MAX;
int8_t x393 = -1;
uint8_t x400 = 2U;
volatile int8_t x402 = INT8_MIN;
int16_t x416 = INT16_MAX;
uint32_t t99 = 10030371U;


void f0(void) {
	int16_t x2 = -2824;
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -1041;

	t0 = ((x1^x2)-(x3/x4));

	if (t0 != 121545143) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 2LLU;
	uint64_t x6 = 19447913083LLU;
	uint8_t x7 = UINT8_MAX;
	int64_t x8 = -1LL;

	t1 = ((x5^x6)-(x7/x8));

	if (t1 != 19447913336LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 921U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 305386776LLU;

	t2 = ((x9^x10)-(x11/x12));

	if (t2 != 18446744073709550617LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 1070982U;
	volatile int64_t x15 = INT64_MAX;
	static int32_t x16 = -12;
	int64_t t3 = -15382LL;

	t3 = ((x13^x14)-(x15/x16));

	if (t3 != 768614336405635633LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MAX;
	volatile int64_t x20 = 9990213041LL;
	volatile int64_t t4 = -1924296505726462LL;

	t4 = ((x17^x18)-(x19/x20));

	if (t4 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 12LLU;
	uint32_t x23 = 1755051745U;
	volatile int64_t x24 = -162537LL;
	volatile uint64_t t5 = 14993345866496LLU;

	t5 = ((x21^x22)-(x23/x24));

	if (t5 != 11380LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 16083;
	static volatile int32_t x26 = -1;
	int32_t x27 = INT32_MIN;
	static int64_t x28 = -1LL;

	t6 = ((x25^x26)-(x27/x28));

	if (t6 != -2147499732LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = 53831325;
	static uint64_t x30 = 12697174188800LLU;
	uint64_t x31 = 217404085667350255LLU;
	int16_t x32 = 12;

	t7 = ((x29^x30)-(x31/x32));

	if (t7 != 18428639763730975327LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = 33;
	static int16_t x35 = INT16_MIN;
	uint16_t x36 = 37U;
	static int32_t t8 = 4167;

	t8 = ((x33^x34)-(x35/x36));

	if (t8 != 889) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = INT16_MAX;
	uint32_t x40 = 16246534U;
	uint32_t t9 = 1019766U;

	t9 = ((x37^x38)-(x39/x40));

	if (t9 != 4294934396U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x44 = 4115490936796481LLU;
	volatile uint64_t t10 = 26LLU;

	t10 = ((x41^x42)-(x43/x44));

	if (t10 != 18446743963578576246LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 2009229839399476595LLU;
	int64_t x46 = INT64_MAX;
	int64_t x47 = -1LL;
	static uint64_t x48 = UINT64_MAX;
	volatile uint64_t t11 = 7780331LLU;

	t11 = ((x45^x46)-(x47/x48));

	if (t11 != 7214142197455299211LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	int64_t x50 = -1548797LL;
	volatile uint64_t t12 = 4352848401638487LLU;

	t12 = ((x49^x50)-(x51/x52));

	if (t12 != 1548788LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	volatile int16_t x54 = 11410;
	volatile int16_t x55 = INT16_MIN;
	static int8_t x56 = INT8_MAX;
	int64_t t13 = 2597569506756125LL;

	t13 = ((x53^x54)-(x55/x56));

	if (t13 != -9223372036854764140LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = 67632U;
	volatile int16_t x59 = INT16_MAX;
	volatile uint16_t x60 = 910U;
	static uint32_t t14 = 149080892U;

	t14 = ((x57^x58)-(x59/x60));

	if (t14 != 91935U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -31843599LL;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = UINT32_MAX;
	volatile int64_t t15 = 1072LL;

	t15 = ((x61^x62)-(x63/x64));

	if (t15 != -763479792213LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x67 = INT8_MIN;
	uint16_t x68 = 395U;

	t16 = ((x65^x66)-(x67/x68));

	if (t16 != 30LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int32_t x71 = -1;
	int8_t x72 = -35;
	int64_t t17 = 25036228004108167LL;

	t17 = ((x69^x70)-(x71/x72));

	if (t17 != -62693846941713336LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = UINT64_MAX;
	int16_t x74 = -1;
	static uint8_t x75 = 29U;
	volatile int32_t x76 = INT32_MAX;
	uint64_t t18 = 149LLU;

	t18 = ((x73^x74)-(x75/x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MIN;
	int32_t x79 = -1;

	t19 = ((x77^x78)-(x79/x80));

	if (t19 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -1;
	int64_t x83 = INT64_MIN;
	volatile int8_t x84 = INT8_MIN;

	t20 = ((x81^x82)-(x83/x84));

	if (t20 != -72057594037927921LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x85 = UINT32_MAX;
	int64_t x86 = INT64_MAX;
	int8_t x87 = -1;

	t21 = ((x85^x86)-(x87/x88));

	if (t21 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = 3;
	int8_t x95 = -1;
	int16_t x96 = INT16_MIN;
	int32_t t22 = -4;

	t22 = ((x93^x94)-(x95/x96));

	if (t22 != -5324) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint64_t x98 = 1029903323716346972LLU;
	uint8_t x99 = 0U;
	volatile int8_t x100 = -1;
	volatile uint64_t t23 = 62623119280168LLU;

	t23 = ((x97^x98)-(x99/x100));

	if (t23 != 1029903323716361123LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = -1;
	static int64_t x103 = -9907192LL;
	uint64_t x104 = 3754762482176777LLU;
	uint64_t t24 = 611LLU;

	t24 = ((x101^x102)-(x103/x104));

	if (t24 != 18446744073709546667LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = INT16_MAX;
	volatile int64_t x107 = -1LL;
	volatile int32_t x108 = INT32_MIN;
	volatile int64_t t25 = 76400202223595827LL;

	t25 = ((x105^x106)-(x107/x108));

	if (t25 != 4294934528LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x110 = 1U;
	int32_t x111 = -1;
	volatile uint8_t x112 = 3U;
	volatile uint32_t t26 = 3U;

	t26 = ((x109^x110)-(x111/x112));

	if (t26 != 4294967169U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = 1;
	static int16_t x114 = 1;
	static volatile int8_t x115 = -1;
	volatile int32_t t27 = 1;

	t27 = ((x113^x114)-(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	static uint32_t x118 = 3U;
	uint32_t x119 = 31276U;
	uint32_t x120 = 12157938U;
	uint32_t t28 = 60890513U;

	t28 = ((x117^x118)-(x119/x120));

	if (t28 != 2147483644U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = 3LL;
	uint64_t x122 = 58617158LLU;
	int16_t x123 = -1;
	int16_t x124 = 8168;
	uint64_t t29 = 142854994LLU;

	t29 = ((x121^x122)-(x123/x124));

	if (t29 != 58617157LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MIN;
	uint64_t x126 = 243888050939007LLU;
	volatile int32_t x127 = INT32_MAX;
	int16_t x128 = INT16_MAX;
	volatile uint64_t t30 = 572141LLU;

	t30 = ((x125^x126)-(x127/x128));

	if (t30 != 9223615924905649277LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x129 = -386151598851565656LL;
	static int8_t x130 = INT8_MIN;
	static int64_t x131 = 2444488LL;
	int32_t x132 = -1;
	volatile int64_t t31 = -1LL;

	t31 = ((x129^x130)-(x131/x132));

	if (t31 != 386151598854010096LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x134 = 907765576484554LLU;
	int8_t x135 = -50;
	volatile int32_t x136 = INT32_MIN;
	volatile uint64_t t32 = 4LLU;

	t32 = ((x133^x134)-(x135/x136));

	if (t32 != 907765576492118LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	static uint32_t x138 = 3331393U;
	int64_t x139 = 22365919582989LL;
	volatile int16_t x140 = -5369;
	int64_t t33 = -498692LL;

	t33 = ((x137^x138)-(x139/x140));

	if (t33 != 8457398243LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x141 = 7655137U;
	static uint64_t x142 = 35906322351373935LLU;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t34 = 1278655LLU;

	t34 = ((x141^x142)-(x143/x144));

	if (t34 != 35906322344276110LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x145 = -1LL;
	uint16_t x146 = 1U;
	uint8_t x147 = 56U;
	int16_t x148 = -8036;
	static int64_t t35 = 105496037LL;

	t35 = ((x145^x146)-(x147/x148));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = INT64_MIN;
	int32_t x151 = INT32_MAX;
	int64_t t36 = 5529LL;

	t36 = ((x149^x150)-(x151/x152));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = INT8_MIN;
	volatile uint64_t t37 = 492128027LLU;

	t37 = ((x153^x154)-(x155/x156));

	if (t37 != 32767LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = 67290280;
	int64_t x158 = -1LL;
	int8_t x159 = INT8_MIN;
	volatile int64_t t38 = -1649179LL;

	t38 = ((x157^x158)-(x159/x160));

	if (t38 != -67290281LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	int64_t x162 = INT64_MIN;
	int32_t x164 = 208;
	uint64_t t39 = 5354LLU;

	t39 = ((x161^x162)-(x163/x164));

	if (t39 != 9223372039002259453LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -22;
	int8_t x166 = 20;
	int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MIN;
	int32_t t40 = 6;

	t40 = ((x165^x166)-(x167/x168));

	if (t40 != 253) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -6;
	volatile int16_t x170 = 2203;
	uint16_t x171 = UINT16_MAX;
	int8_t x172 = -1;
	volatile int32_t t41 = 816566;

	t41 = ((x169^x170)-(x171/x172));

	if (t41 != 63328) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = 51;
	int32_t x174 = 7407773;
	uint64_t x175 = 793937LLU;
	int8_t x176 = 1;
	uint64_t t42 = 523556786071097LLU;

	t42 = ((x173^x174)-(x175/x176));

	if (t42 != 6613853LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	static int64_t x178 = INT64_MIN;
	int64_t t43 = 2LL;

	t43 = ((x177^x178)-(x179/x180));

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = 121499447U;
	int32_t x183 = -36547;
	int64_t x184 = INT64_MIN;
	volatile int64_t t44 = -239373403LL;

	t44 = ((x181^x182)-(x183/x184));

	if (t44 != 2268983095LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 27;
	static int64_t x186 = -1LL;
	uint16_t x187 = UINT16_MAX;
	uint32_t x188 = UINT32_MAX;
	static volatile int64_t t45 = -3501788LL;

	t45 = ((x185^x186)-(x187/x188));

	if (t45 != -28LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -827508563267LL;
	uint16_t x190 = 49U;
	uint8_t x191 = 1U;
	static int16_t x192 = -481;

	t46 = ((x189^x190)-(x191/x192));

	if (t46 != -827508563316LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = UINT8_MAX;
	int64_t x194 = INT64_MIN;
	static int8_t x195 = INT8_MIN;
	uint16_t x196 = 670U;
	int64_t t47 = 0LL;

	t47 = ((x193^x194)-(x195/x196));

	if (t47 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 3954U;
	int16_t x198 = INT16_MIN;
	static int32_t t48 = 17597907;

	t48 = ((x197^x198)-(x199/x200));

	if (t48 != 36724) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x201 = 52378U;
	int16_t x202 = INT16_MIN;
	volatile uint32_t x203 = UINT32_MAX;

	t49 = ((x201^x202)-(x203/x204));

	if (t49 != 4277532839U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x206 = UINT64_MAX;
	static uint16_t x207 = 1462U;
	int16_t x208 = 572;
	uint64_t t50 = 97128981LLU;

	t50 = ((x205^x206)-(x207/x208));

	if (t50 != 18446744073684854438LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = -12160;
	volatile int64_t x211 = INT64_MIN;
	int64_t x212 = 1388988640711577LL;
	volatile uint64_t t51 = 244669433195LLU;

	t51 = ((x209^x210)-(x211/x212));

	if (t51 != 18446744073709546154LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x216 = 702527358941LLU;

	t52 = ((x213^x214)-(x215/x216));

	if (t52 != 18446744073683293928LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x217 = 1;
	int32_t x218 = 13073554;
	uint64_t x219 = 1712813964LLU;
	int64_t x220 = INT64_MAX;

	t53 = ((x217^x218)-(x219/x220));

	if (t53 != 13073555LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	volatile int8_t x222 = 0;
	int64_t t54 = INT64_MIN;

	t54 = ((x221^x222)-(x223/x224));

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -103;
	int64_t x226 = 54093854491757250LL;
	static int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MAX;
	int64_t t55 = -677590855972LL;

	t55 = ((x225^x226)-(x227/x228));

	if (t55 != -54093854491757220LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	uint32_t t56 = 1336972U;

	t56 = ((x229^x230)-(x231/x232));

	if (t56 != 4294967187U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x233 = 0;
	volatile int32_t x234 = 1;
	static uint16_t x235 = 9U;
	int16_t x236 = 60;
	int32_t t57 = -5436236;

	t57 = ((x233^x234)-(x235/x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x237 = -1LL;
	volatile int64_t x238 = INT64_MIN;
	int8_t x239 = -1;
	static int8_t x240 = -39;
	volatile int64_t t58 = INT64_MAX;

	t58 = ((x237^x238)-(x239/x240));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x246 = INT16_MIN;
	uint32_t x247 = 13U;
	static uint32_t t59 = 19382U;

	t59 = ((x245^x246)-(x247/x248));

	if (t59 != 32767U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = 23;
	volatile int64_t x250 = INT64_MIN;
	static int8_t x252 = INT8_MIN;
	volatile int64_t t60 = 2243863623699317447LL;

	t60 = ((x249^x250)-(x251/x252));

	if (t60 != -9223372036854775530LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 2376355969970LLU;
	int64_t x254 = INT64_MIN;
	int32_t x255 = 609;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t61 = 616111476584856LLU;

	t61 = ((x253^x254)-(x255/x256));

	if (t61 != 9223374413210745778LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x261 = 68LL;
	volatile int16_t x262 = INT16_MAX;
	uint32_t x263 = UINT32_MAX;
	int64_t t62 = 17668LL;

	t62 = ((x261^x262)-(x263/x264));

	if (t62 != 32697LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x265 = -1;
	int32_t x266 = INT32_MIN;
	int16_t x267 = -1;
	int32_t x268 = -1;
	int32_t t63 = 351061;

	t63 = ((x265^x266)-(x267/x268));

	if (t63 != 2147483646) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	static int8_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = INT16_MAX;
	volatile uint64_t t64 = 42652829501011590LLU;

	t64 = ((x269^x270)-(x271/x272));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = UINT64_MAX;
	uint64_t t65 = 2282041949670LLU;

	t65 = ((x277^x278)-(x279/x280));

	if (t65 != 4216769993048LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x283 = INT16_MIN;
	volatile int32_t t66 = 6;

	t66 = ((x281^x282)-(x283/x284));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x286 = 236U;
	uint8_t x287 = UINT8_MAX;
	volatile int32_t x288 = -1;
	volatile int32_t t67 = 118;

	t67 = ((x285^x286)-(x287/x288));

	if (t67 != 362) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = 106LL;
	static volatile uint64_t x290 = 228460LLU;
	static volatile uint8_t x291 = UINT8_MAX;
	volatile uint64_t t68 = 1043270LLU;

	t68 = ((x289^x290)-(x291/x292));

	if (t68 != 228358LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x294 = INT64_MIN;
	int64_t t69 = 58136756715954246LL;

	t69 = ((x293^x294)-(x295/x296));

	if (t69 != -9223372036854645905LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = -35784;
	int32_t x298 = INT32_MIN;
	int64_t x300 = INT64_MIN;

	t70 = ((x297^x298)-(x299/x300));

	if (t70 != 2147447864LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t71 = -1;

	t71 = ((x301^x302)-(x303/x304));

	if (t71 != 32640) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = INT64_MIN;
	static volatile int32_t x306 = INT32_MAX;
	static uint32_t x307 = 528653403U;
	uint8_t x308 = UINT8_MAX;
	int64_t t72 = -11LL;

	t72 = ((x305^x306)-(x307/x308));

	if (t72 != -9223372034709365311LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	static int64_t x312 = 26197021199LL;
	int64_t t73 = -221LL;

	t73 = ((x309^x310)-(x311/x312));

	if (t73 != 32767LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -1806;
	int16_t x314 = 3;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	int32_t t74 = -18;

	t74 = ((x313^x314)-(x315/x316));

	if (t74 != -1806) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MAX;
	uint64_t x318 = UINT64_MAX;
	volatile int16_t x319 = INT16_MIN;
	int64_t x320 = INT64_MIN;
	volatile uint64_t t75 = 7968879LLU;

	t75 = ((x317^x318)-(x319/x320));

	if (t75 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = 2913LLU;
	static uint16_t x323 = 1U;
	static uint64_t t76 = 14589443578LLU;

	t76 = ((x321^x322)-(x323/x324));

	if (t76 != 18446744071562070881LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x325 = INT8_MIN;
	int64_t x326 = 3LL;
	volatile int64_t x327 = INT64_MIN;
	uint32_t x328 = 925U;
	volatile int64_t t77 = -23259285697963564LL;

	t77 = ((x325^x326)-(x327/x328));

	if (t77 != 9971213012815848LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x330 = 934210914166029LLU;
	uint8_t x332 = UINT8_MAX;
	volatile uint64_t t78 = 46466LLU;

	t78 = ((x329^x330)-(x331/x332));

	if (t78 != 934210905744576LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x333 = -1;
	int64_t x334 = INT64_MAX;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = 46895LLU;
	volatile uint64_t t79 = 1052286100LLU;

	t79 = ((x333^x334)-(x335/x336));

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x337 = INT8_MIN;
	int64_t x338 = -17LL;
	volatile uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MIN;
	int64_t t80 = 2353160956243LL;

	t80 = ((x337^x338)-(x339/x340));

	if (t80 != 111LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = -1LL;
	volatile uint8_t x342 = UINT8_MAX;
	static int16_t x343 = -1;
	static int64_t t81 = 7754171LL;

	t81 = ((x341^x342)-(x343/x344));

	if (t81 != -256LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MIN;
	static int64_t x346 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	volatile int16_t x348 = 1362;
	static volatile uint64_t t82 = 1557862129LLU;

	t82 = ((x345^x346)-(x347/x348));

	if (t82 != 9209828171896072298LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MAX;
	int64_t x351 = INT64_MIN;
	uint32_t x352 = UINT32_MAX;
	static int64_t t83 = 43109127864LL;

	t83 = ((x349^x350)-(x351/x352));

	if (t83 != 2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MIN;
	int8_t x355 = -15;
	int16_t x356 = -1;
	static volatile int64_t t84 = -257361028759LL;

	t84 = ((x353^x354)-(x355/x356));

	if (t84 != 9223372034707292145LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = -1;
	volatile int64_t x358 = 346515835847975357LL;
	uint64_t x359 = 4257LLU;
	static int8_t x360 = INT8_MIN;

	t85 = ((x357^x358)-(x359/x360));

	if (t85 != 18100228237861576258LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = -2;
	uint16_t x362 = 28U;
	volatile uint16_t x363 = 237U;
	static int8_t x364 = -12;

	t86 = ((x361^x362)-(x363/x364));

	if (t86 != -11) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MAX;
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t87 = 45;

	t87 = ((x365^x366)-(x367/x368));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x369 = INT16_MIN;
	uint16_t x370 = 1U;
	volatile uint16_t x371 = UINT16_MAX;
	static int16_t x372 = -3;

	t88 = ((x369^x370)-(x371/x372));

	if (t88 != -10922) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t x376 = 1;
	uint32_t t89 = 153U;

	t89 = ((x373^x374)-(x375/x376));

	if (t89 != 2147483520U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x378 = 7203U;
	uint64_t x379 = 109547LLU;
	static int64_t x380 = INT64_MIN;
	volatile uint64_t t90 = 222203649LLU;

	t90 = ((x377^x378)-(x379/x380));

	if (t90 != 7260LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x381 = 27U;
	int64_t x382 = -1LL;
	int16_t x383 = -8526;
	uint8_t x384 = 62U;
	int64_t t91 = 16647517983LL;

	t91 = ((x381^x382)-(x383/x384));

	if (t91 != 109LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x389 = INT32_MIN;
	volatile uint64_t x390 = 1542820676455798136LLU;
	volatile uint32_t x391 = UINT32_MAX;
	static volatile int32_t x392 = 111;
	uint64_t t92 = 8285379785794174353LLU;

	t92 = ((x389^x390)-(x391/x392));

	if (t92 != 16903923396284787553LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 1222U;
	volatile uint64_t t93 = 2587861006157LLU;

	t93 = ((x393^x394)-(x395/x396));

	if (t93 != 1757351LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MIN;
	uint16_t x399 = 36U;
	static volatile int64_t t94 = 1168691619944LL;

	t94 = ((x397^x398)-(x399/x400));

	if (t94 != 9223372034707292142LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x401 = -1;
	static int16_t x403 = 0;
	int32_t x404 = 19107686;
	int32_t t95 = 975253501;

	t95 = ((x401^x402)-(x403/x404));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = 0;
	int8_t x406 = 1;
	int32_t x407 = -1;
	uint32_t x408 = 4889U;
	static uint32_t t96 = 8366721U;

	t96 = ((x405^x406)-(x407/x408));

	if (t96 != 4294088801U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x409 = 113U;
	volatile uint8_t x410 = UINT8_MAX;
	int64_t x411 = -1LL;
	int16_t x412 = INT16_MIN;
	static int64_t t97 = -9LL;

	t97 = ((x409^x410)-(x411/x412));

	if (t97 != 142LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 58U;
	int16_t x414 = -2;
	uint32_t x415 = UINT32_MAX;
	uint32_t t98 = 0U;

	t98 = ((x413^x414)-(x415/x416));

	if (t98 != 4294836160U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	uint32_t x418 = UINT32_MAX;
	static volatile int32_t x419 = -1;
	volatile uint32_t x420 = 4702U;

	t99 = ((x417^x418)-(x419/x420));

	if (t99 != 4294053989U) { NG(); } else { ; }
	
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

