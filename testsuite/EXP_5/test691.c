#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x13 = 38190U;
int64_t x15 = INT64_MIN;
int32_t x16 = -131121;
int8_t x22 = 2;
volatile int64_t t4 = -44486154LL;
uint8_t x30 = 12U;
static int64_t x35 = -30688799868161988LL;
int64_t x38 = -1LL;
int16_t x39 = INT16_MIN;
uint32_t x45 = 1317360U;
volatile uint16_t x50 = 717U;
static uint8_t x53 = 3U;
int16_t x57 = -4058;
static volatile int64_t t12 = 2914551359LL;
int16_t x73 = -1;
static int64_t t13 = -11444LL;
static volatile uint16_t x82 = UINT16_MAX;
uint8_t x83 = UINT8_MAX;
volatile int16_t x84 = -1;
static int8_t x88 = 0;
int64_t t16 = INT64_MAX;
int64_t x93 = INT64_MIN;
static volatile int64_t x97 = -69689628214LL;
volatile uint64_t t18 = 7403265444387934LLU;
uint64_t x102 = 108577213181278LLU;
uint64_t t19 = 7504LLU;
volatile int32_t t21 = -178;
static volatile uint16_t x116 = 99U;
static int8_t x117 = INT8_MAX;
volatile uint64_t t23 = 101596566965LLU;
uint64_t x124 = 235753546708LLU;
static volatile int8_t x128 = -1;
static int8_t x136 = -1;
uint8_t x149 = UINT8_MAX;
uint8_t x151 = 45U;
volatile uint64_t t29 = 2173994391993LLU;
static int16_t x161 = -8592;
volatile int32_t t30 = -12536;
uint64_t x172 = 403820589LLU;
static int16_t x176 = 54;
uint8_t x179 = UINT8_MAX;
volatile int64_t t34 = 468044LL;
static int16_t x188 = -1;
volatile uint8_t x195 = 68U;
uint64_t x196 = 858319936LLU;
uint16_t x197 = 17U;
volatile int8_t x202 = -1;
uint32_t x206 = UINT32_MAX;
volatile uint8_t x213 = 6U;
static volatile int32_t t44 = 7306;
static uint64_t x226 = 5484163LLU;
int32_t x231 = -17;
int16_t x236 = 8;
static int32_t x239 = -20233803;
uint64_t x242 = 505918831386LLU;
uint8_t x244 = 3U;
volatile uint16_t x245 = 14276U;
static int16_t x250 = -1;
volatile uint8_t x251 = 1U;
int64_t t51 = -63LL;
int32_t x260 = INT32_MIN;
static uint32_t t53 = 6998U;
uint16_t x263 = UINT16_MAX;
int16_t x264 = -129;
static int64_t t55 = 18623963397451LL;
int64_t x270 = 32978270054763LL;
static volatile int16_t x272 = -767;
uint16_t x282 = 0U;
int16_t x284 = INT16_MAX;
static volatile int64_t t60 = 6948941LL;
uint16_t x293 = UINT16_MAX;
static int32_t x294 = INT32_MAX;
int32_t t62 = 175146;
volatile uint64_t t64 = 804928368LLU;
static uint16_t x327 = 1U;
static volatile int16_t x332 = INT16_MIN;
volatile uint64_t t68 = 26LLU;
static int16_t x333 = -1;
int16_t x334 = INT16_MIN;
int16_t x340 = INT16_MIN;
uint8_t x342 = 20U;
int64_t x348 = -1LL;
static volatile int64_t t72 = -15367873034581LL;
static int64_t x349 = -13064172933LL;
int64_t x351 = -73108189LL;
int8_t x355 = 36;
volatile uint8_t x356 = 9U;
uint64_t t74 = 128376180LLU;
int32_t x359 = -1;
int32_t x360 = 0;
uint8_t x368 = 0U;
static uint16_t x377 = 4714U;
int16_t x394 = INT16_MIN;
static int16_t x395 = -1;
uint16_t x398 = 554U;
volatile uint64_t t81 = 1264168905092487140LLU;
static uint8_t x412 = 0U;
int64_t t83 = -65383698823LL;
int8_t x414 = INT8_MIN;
int16_t x417 = INT16_MIN;
volatile int32_t x431 = 785877;
volatile int64_t t88 = -59836882525002LL;
uint8_t x437 = 39U;
uint32_t x449 = UINT32_MAX;
static int16_t x450 = INT16_MAX;
volatile int8_t x451 = INT8_MAX;
volatile uint32_t t92 = 1268749202U;
int32_t x453 = 24189;
int8_t x457 = INT8_MIN;
int64_t t94 = 6742496052LL;
volatile int32_t x462 = 453009559;
uint64_t x468 = 131242518966523LLU;
static int32_t x474 = INT32_MIN;
int32_t x482 = -998807993;
int8_t x483 = INT8_MAX;
volatile int32_t t99 = -3;


void f0(void) {
	uint64_t x9 = 310LLU;
	uint8_t x10 = 2U;
	int8_t x11 = INT8_MAX;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t0 = 13334667LLU;

	t0 = (x9-((x10%x11)-x12));

	if (t0 != 180LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x14 = -3663758;
	volatile int64_t t1 = 7LL;

	t1 = (x13-((x14%x15)-x16));

	if (t1 != 3570827LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x17 = INT32_MIN;
	uint64_t x18 = 55703404614399LLU;
	int64_t x19 = INT64_MIN;
	static int16_t x20 = INT16_MAX;
	volatile uint64_t t2 = 10207409270LLU;

	t2 = (x17-((x18%x19)-x20));

	if (t2 != 18446688368157486336LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 0U;
	int32_t x23 = INT32_MIN;
	static int32_t x24 = -1;
	volatile int32_t t3 = -80265325;

	t3 = (x21-((x22%x23)-x24));

	if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 718300869;
	int64_t x26 = INT64_MIN;
	int8_t x27 = -13;
	int16_t x28 = INT16_MAX;

	t4 = (x25-((x26%x27)-x28));

	if (t4 != 718333644LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	volatile int64_t x31 = -12206LL;
	volatile uint8_t x32 = UINT8_MAX;
	int64_t t5 = 1059LL;

	t5 = (x29-((x30%x31)-x32));

	if (t5 != 242LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = INT8_MAX;
	uint8_t x34 = 123U;
	static int32_t x36 = -1;
	int64_t t6 = 737869LL;

	t6 = (x33-((x34%x35)-x36));

	if (t6 != 3LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = 0;
	int16_t x40 = -1;
	int64_t t7 = 183465562183LL;

	t7 = (x37-((x38%x39)-x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x46 = INT64_MIN;
	static int64_t x47 = -24387157437LL;
	uint64_t x48 = 37305934654077933LLU;
	volatile uint64_t t8 = 43236027345648422LLU;

	t8 = (x45-((x46%x47)-x48));

	if (t8 != 37305950143358720LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	uint16_t x51 = 3986U;
	volatile uint32_t x52 = UINT32_MAX;
	uint64_t t9 = 30246LLU;

	t9 = (x49-((x50%x51)-x52));

	if (t9 != 18446744073709550897LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = -1;
	int16_t x55 = -1;
	int16_t x56 = 51;
	volatile int32_t t10 = -1;

	t10 = (x53-((x54%x55)-x56));

	if (t10 != 54) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x58 = 145515142406LLU;
	uint16_t x59 = 50U;
	int16_t x60 = -1;
	volatile uint64_t t11 = 42LLU;

	t11 = (x57-((x58%x59)-x60));

	if (t11 != 18446744073709547551LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	volatile int8_t x67 = 27;
	volatile int32_t x68 = -1;

	t12 = (x65-((x66%x67)-x68));

	if (t12 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x74 = 42U;
	int64_t x75 = -1LL;
	volatile int64_t x76 = 46006LL;

	t13 = (x73-((x74%x75)-x76));

	if (t13 != 46005LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x77 = 1;
	static uint8_t x78 = 11U;
	int64_t x79 = INT64_MIN;
	int32_t x80 = -7997;
	volatile int64_t t14 = 11035216136LL;

	t14 = (x77-((x78%x79)-x80));

	if (t14 != -8007LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = 24LL;
	int64_t t15 = 4108242151453306LL;

	t15 = (x81-((x82%x83)-x84));

	if (t15 != 23LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MAX;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = INT16_MIN;

	t16 = (x85-((x86%x87)-x88));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x94 = INT32_MIN;
	static uint64_t x95 = 1757529599526LLU;
	uint64_t x96 = 121910964LLU;
	volatile uint64_t t17 = 2024LLU;

	t17 = (x93-((x94%x95)-x96));

	if (t17 != 9223370407185192540LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x98 = INT64_MAX;
	static int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;

	t18 = (x97-((x98%x99)-x100));

	if (t18 != 18446744004019890634LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 6824U;
	static int16_t x103 = INT16_MIN;
	volatile int8_t x104 = 2;

	t19 = (x101-((x102%x103)-x104));

	if (t19 != 18446635496496377164LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x105 = -14;
	uint16_t x106 = UINT16_MAX;
	uint16_t x107 = UINT16_MAX;
	uint16_t x108 = 0U;
	int32_t t20 = 0;

	t20 = (x105-((x106%x107)-x108));

	if (t20 != -14) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MIN;
	uint8_t x110 = UINT8_MAX;
	static uint8_t x111 = 1U;
	int32_t x112 = INT32_MAX;

	t21 = (x109-((x110%x111)-x112));

	if (t21 != 2147483519) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = 1;
	static int16_t x114 = 963;
	volatile uint64_t x115 = 775LLU;
	volatile uint64_t t22 = 5331224LLU;

	t22 = (x113-((x114%x115)-x116));

	if (t22 != 18446744073709551528LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x118 = 4U;
	uint64_t x119 = 1072646100891628LLU;
	int32_t x120 = -2946;

	t23 = (x117-((x118%x119)-x120));

	if (t23 != 18446744073709548793LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = -1LL;
	uint32_t x122 = 60U;
	static int16_t x123 = INT16_MIN;
	static uint64_t t24 = 10828LLU;

	t24 = (x121-((x122%x123)-x124));

	if (t24 != 235753546647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x125 = 418U;
	static int32_t x126 = INT32_MAX;
	uint8_t x127 = UINT8_MAX;
	static int32_t t25 = 301;

	t25 = (x125-((x126%x127)-x128));

	if (t25 != 290) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = 0;
	int64_t x131 = -1LL;
	static volatile int32_t x132 = INT32_MAX;
	int64_t t26 = 8438LL;

	t26 = (x129-((x130%x131)-x132));

	if (t26 != 2147450879LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = -1;
	int8_t x135 = INT8_MIN;
	uint64_t t27 = UINT64_MAX;

	t27 = (x133-((x134%x135)-x136));

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = 76282302425767LL;
	int16_t x142 = 515;
	volatile int32_t x143 = INT32_MIN;
	static volatile int8_t x144 = 0;
	static int64_t t28 = 51922LL;

	t28 = (x141-((x142%x143)-x144));

	if (t28 != 76282302425252LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x150 = 204437052229720693LLU;
	int32_t x152 = -378966;

	t29 = (x149-((x150%x151)-x152));

	if (t29 != 18446744073709172892LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x162 = 31U;
	volatile uint16_t x163 = 6U;
	static uint8_t x164 = 126U;

	t30 = (x161-((x162%x163)-x164));

	if (t30 != -8467) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = -2752;
	static int32_t x166 = INT32_MAX;
	uint32_t x167 = 16662U;
	uint8_t x168 = 1U;
	static volatile uint32_t t31 = 6348U;

	t31 = (x165-((x166%x167)-x168));

	if (t31 != 4294962768U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	volatile uint32_t x170 = 56739U;
	volatile uint32_t x171 = 270042450U;
	uint64_t t32 = 190LLU;

	t32 = (x169-((x170%x171)-x172));

	if (t32 != 9223372037258539658LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = -3785;
	int16_t x174 = INT16_MIN;
	volatile int64_t x175 = INT64_MIN;
	int64_t t33 = 8184665LL;

	t33 = (x173-((x174%x175)-x176));

	if (t33 != 29037LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x177 = -2978483646786149109LL;
	int64_t x178 = -1LL;
	volatile int32_t x180 = INT32_MAX;

	t34 = (x177-((x178%x179)-x180));

	if (t34 != -2978483644638665461LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MAX;
	uint16_t x182 = UINT16_MAX;
	volatile uint16_t x183 = 23U;
	uint8_t x184 = 0U;
	volatile int32_t t35 = -11;

	t35 = (x181-((x182%x183)-x184));

	if (t35 != 2147483639) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	int32_t t36 = -2027;

	t36 = (x185-((x186%x187)-x188));

	if (t36 != -129) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x189 = 220U;
	int16_t x190 = INT16_MAX;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = 848550U;
	volatile int64_t t37 = 1LL;

	t37 = (x189-((x190%x191)-x192));

	if (t37 != 816003LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = 11;
	int8_t x194 = -1;
	volatile uint64_t t38 = 64504883250652260LLU;

	t38 = (x193-((x194%x195)-x196));

	if (t38 != 858319948LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x198 = 45;
	int64_t x199 = INT64_MIN;
	volatile int64_t x200 = 64788LL;
	static int64_t t39 = 1LL;

	t39 = (x197-((x198%x199)-x200));

	if (t39 != 64760LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x201 = INT8_MAX;
	int16_t x203 = -1;
	uint16_t x204 = 7U;
	int32_t t40 = 95;

	t40 = (x201-((x202%x203)-x204));

	if (t40 != 134) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = 214444;
	uint16_t x207 = 2043U;
	uint8_t x208 = 23U;
	uint32_t t41 = 83913U;

	t41 = (x205-((x206%x207)-x208));

	if (t41 != 213384U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x210 = 3U;
	volatile int16_t x211 = INT16_MAX;
	uint32_t x212 = 17491U;
	volatile uint32_t t42 = 39U;

	t42 = (x209-((x210%x211)-x212));

	if (t42 != 2147501136U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x214 = 16243LL;
	int32_t x215 = -1;
	int64_t x216 = 44967LL;
	static volatile int64_t t43 = -3721106688365LL;

	t43 = (x213-((x214%x215)-x216));

	if (t43 != 44973LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = 2;
	static int32_t x222 = -1;
	int8_t x223 = -1;
	volatile int8_t x224 = 33;

	t44 = (x221-((x222%x223)-x224));

	if (t44 != 35) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = 2891;
	int16_t x227 = 1820;
	uint8_t x228 = UINT8_MAX;
	uint64_t t45 = 1854333LLU;

	t45 = (x225-((x226%x227)-x228));

	if (t45 != 2643LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = 0;
	int8_t x232 = -1;
	int32_t t46 = 812;

	t46 = (x229-((x230%x231)-x232));

	if (t46 != 32766) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -3;
	int16_t x234 = INT16_MAX;
	static int32_t x235 = INT32_MIN;
	volatile int32_t t47 = 114;

	t47 = (x233-((x234%x235)-x236));

	if (t47 != -32762) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = 10579;
	int8_t x238 = -1;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t48 = 409123807;

	t48 = (x237-((x238%x239)-x240));

	if (t48 != -2147473068) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x241 = INT32_MIN;
	static int32_t x243 = INT32_MAX;
	uint64_t t49 = 6501440703732LLU;

	t49 = (x241-((x242%x243)-x244));

	if (t49 != 18446744070301893630LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x246 = 2U;
	static uint32_t x247 = 1501176U;
	uint8_t x248 = 2U;
	uint32_t t50 = 1891U;

	t50 = (x245-((x246%x247)-x248));

	if (t50 != 14276U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	int64_t x252 = -1LL;

	t51 = (x249-((x250%x251)-x252));

	if (t51 != -32769LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = 23U;
	uint32_t x254 = 7860910U;
	int32_t x255 = -7241;
	static int32_t x256 = INT32_MIN;
	volatile uint32_t t52 = 1587U;

	t52 = (x253-((x254%x255)-x256));

	if (t52 != 2139622761U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x257 = UINT32_MAX;
	static int8_t x258 = INT8_MIN;
	static uint32_t x259 = UINT32_MAX;

	t53 = (x257-((x258%x259)-x260));

	if (t53 != 2147483775U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = INT16_MAX;
	int8_t x262 = -1;
	volatile int32_t t54 = 18;

	t54 = (x261-((x262%x263)-x264));

	if (t54 != 32639) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = -1LL;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = -193;

	t55 = (x265-((x266%x267)-x268));

	if (t55 != 9223372036854775615LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x269 = 6368803912098LLU;
	uint64_t x271 = 31918116LLU;
	uint64_t t56 = 56075729000LLU;

	t56 = (x269-((x270%x271)-x272));

	if (t56 != 6368778161392LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	static uint8_t x275 = 2U;
	int16_t x276 = INT16_MIN;
	uint64_t t57 = 401511LLU;

	t57 = (x273-((x274%x275)-x276));

	if (t57 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = 14315;
	uint16_t x283 = 2795U;
	volatile int32_t t58 = -146;

	t58 = (x281-((x282%x283)-x284));

	if (t58 != 47082) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = -1;
	int64_t x286 = INT64_MAX;
	volatile uint32_t x287 = 7U;
	uint32_t x288 = 674U;
	volatile int64_t t59 = 193LL;

	t59 = (x285-((x286%x287)-x288));

	if (t59 != 673LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x289 = 12489175U;
	volatile uint16_t x290 = 8526U;
	int64_t x291 = -1LL;
	int32_t x292 = INT32_MIN;

	t60 = (x289-((x290%x291)-x292));

	if (t60 != -2134994473LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x295 = -1LL;
	int32_t x296 = -341;
	static volatile int64_t t61 = -1479248095753LL;

	t61 = (x293-((x294%x295)-x296));

	if (t61 != 65194LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MAX;
	static int8_t x298 = INT8_MIN;
	int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MIN;

	t62 = (x297-((x298%x299)-x300));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x301 = 14503102LL;
	static int32_t x302 = INT32_MIN;
	static int64_t x303 = -181LL;
	int64_t x304 = 45345560259834332LL;
	volatile int64_t t63 = -1461516723812LL;

	t63 = (x301-((x302%x303)-x304));

	if (t63 != 45345560274337532LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = INT8_MIN;
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 572LLU;
	volatile uint16_t x308 = 991U;

	t64 = (x305-((x306%x307)-x308));

	if (t64 != 700LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x317 = 245417663693LLU;
	static int16_t x318 = INT16_MIN;
	uint8_t x319 = 2U;
	int16_t x320 = INT16_MIN;
	static volatile uint64_t t65 = 0LLU;

	t65 = (x317-((x318%x319)-x320));

	if (t65 != 245417630925LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = -4LL;
	uint32_t x322 = 1608543U;
	volatile int8_t x323 = -1;
	volatile int32_t x324 = -1;
	int64_t t66 = 466245804LL;

	t66 = (x321-((x322%x323)-x324));

	if (t66 != -1608548LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = -1;
	uint8_t x326 = 14U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t67 = 5790;

	t67 = (x325-((x326%x327)-x328));

	if (t67 != -129) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x329 = INT8_MAX;
	volatile uint64_t x330 = UINT64_MAX;
	uint64_t x331 = 537LLU;

	t68 = (x329-((x330%x331)-x332));

	if (t68 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x335 = 137LLU;
	int64_t x336 = INT64_MAX;
	uint64_t t69 = 4LLU;

	t69 = (x333-((x334%x335)-x336));

	if (t69 != 9223372036854775771LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x337 = -1;
	uint64_t x338 = 2745107345LLU;
	uint32_t x339 = UINT32_MAX;
	uint64_t t70 = 39LLU;

	t70 = (x337-((x338%x339)-x340));

	if (t70 != 18446744070964411502LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = INT16_MIN;
	int16_t x343 = -1;
	volatile int16_t x344 = -1;
	int32_t t71 = 1364756;

	t71 = (x341-((x342%x343)-x344));

	if (t71 != -32769) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x345 = -2404;
	int16_t x346 = INT16_MIN;
	int8_t x347 = 7;

	t72 = (x345-((x346%x347)-x348));

	if (t72 != -2404LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x350 = 21U;
	static volatile int16_t x352 = INT16_MAX;
	int64_t t73 = 0LL;

	t73 = (x349-((x350%x351)-x352));

	if (t73 != -13064140187LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = -5;
	static uint64_t x354 = UINT64_MAX;

	t74 = (x353-((x354%x355)-x356));

	if (t74 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x357 = 236U;
	int32_t x358 = -1;
	int32_t t75 = 9454;

	t75 = (x357-((x358%x359)-x360));

	if (t75 != 236) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MIN;
	volatile int64_t x367 = -103LL;
	volatile int64_t t76 = 608LL;

	t76 = (x365-((x366%x367)-x368));

	if (t76 != 206LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x378 = INT64_MAX;
	uint32_t x379 = UINT32_MAX;
	int16_t x380 = -1;
	volatile int64_t t77 = 19525717LL;

	t77 = (x377-((x378%x379)-x380));

	if (t77 != -2147478934LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x381 = 356052576U;
	int64_t x382 = INT64_MAX;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = 622U;
	int64_t t78 = 2017068LL;

	t78 = (x381-((x382%x383)-x384));

	if (t78 != -1791430449LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	uint16_t x391 = 7U;
	uint32_t x392 = 3514U;
	int64_t t79 = -103177560232LL;

	t79 = (x389-((x390%x391)-x392));

	if (t79 != 3514LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x393 = -1;
	uint16_t x396 = UINT16_MAX;
	int32_t t80 = 156;

	t80 = (x393-((x394%x395)-x396));

	if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x397 = 23091LLU;
	uint64_t x399 = 3614654074895727106LLU;
	uint32_t x400 = UINT32_MAX;

	t81 = (x397-((x398%x399)-x400));

	if (t81 != 4294989832LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x405 = -1LL;
	uint8_t x406 = 30U;
	int64_t x407 = 80433LL;
	int32_t x408 = INT32_MIN;
	volatile int64_t t82 = -6LL;

	t82 = (x405-((x406%x407)-x408));

	if (t82 != -2147483679LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x409 = -422242;
	uint8_t x410 = 13U;
	int64_t x411 = INT64_MIN;

	t83 = (x409-((x410%x411)-x412));

	if (t83 != -422255LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x413 = -1;
	int64_t x415 = INT64_MAX;
	static int16_t x416 = -27;
	static volatile int64_t t84 = -3729338831122635419LL;

	t84 = (x413-((x414%x415)-x416));

	if (t84 != 100LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x418 = INT64_MAX;
	static int64_t x419 = 1LL;
	volatile int8_t x420 = INT8_MIN;
	int64_t t85 = -8524LL;

	t85 = (x417-((x418%x419)-x420));

	if (t85 != -32896LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x421 = 1522106842541806280LLU;
	int8_t x422 = -1;
	int16_t x423 = 24;
	uint32_t x424 = 19041U;
	volatile uint64_t t86 = 0LLU;

	t86 = (x421-((x422%x423)-x424));

	if (t86 != 1522106838246858026LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x425 = -1;
	int8_t x426 = -1;
	volatile uint32_t x427 = UINT32_MAX;
	int32_t x428 = INT32_MIN;
	volatile uint32_t t87 = 5934634U;

	t87 = (x425-((x426%x427)-x428));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x429 = 31U;
	static int64_t x430 = 141242964088139149LL;
	int16_t x432 = -9;

	t88 = (x429-((x430%x431)-x432));

	if (t88 != -486147LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x438 = INT32_MIN;
	uint8_t x439 = UINT8_MAX;
	uint32_t x440 = 2U;
	uint32_t t89 = 160U;

	t89 = (x437-((x438%x439)-x440));

	if (t89 != 169U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = INT8_MAX;
	uint64_t x442 = 333971781402188025LLU;
	static int8_t x443 = INT8_MIN;
	volatile uint64_t x444 = UINT64_MAX;
	uint64_t t90 = 50713899457LLU;

	t90 = (x441-((x442%x443)-x444));

	if (t90 != 18112772292307363717LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x445 = 1U;
	uint16_t x446 = 2U;
	int8_t x447 = INT8_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	uint32_t t91 = 264005692U;

	t91 = (x445-((x446%x447)-x448));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x452 = 398581814;

	t92 = (x449-((x450%x451)-x452));

	if (t92 != 398581812U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x454 = 47658974;
	static uint16_t x455 = 31U;
	uint64_t x456 = 309430342686LLU;
	uint64_t t93 = 377852267044663LLU;

	t93 = (x453-((x454%x455)-x456));

	if (t93 != 309430366867LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x458 = -1LL;
	int64_t x459 = 35392918739635404LL;
	int16_t x460 = -4;

	t94 = (x457-((x458%x459)-x460));

	if (t94 != -131LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x461 = UINT8_MAX;
	uint16_t x463 = 4U;
	static int8_t x464 = -1;
	static int32_t t95 = 7;

	t95 = (x461-((x462%x463)-x464));

	if (t95 != 251) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x465 = 31U;
	int32_t x466 = INT32_MAX;
	int64_t x467 = 211261761623LL;
	static volatile uint64_t t96 = 383112LLU;

	t96 = (x465-((x466%x467)-x468));

	if (t96 != 131240371482907LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x473 = -1;
	uint16_t x475 = UINT16_MAX;
	int16_t x476 = INT16_MAX;
	int32_t t97 = -35;

	t97 = (x473-((x474%x475)-x476));

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x477 = 10;
	static volatile uint32_t x478 = 2719U;
	int16_t x479 = INT16_MIN;
	static int16_t x480 = 491;
	volatile uint32_t t98 = 1171U;

	t98 = (x477-((x478%x479)-x480));

	if (t98 != 4294965078U) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x481 = 5U;
	int16_t x484 = INT16_MIN;

	t99 = (x481-((x482%x483)-x484));

	if (t99 != -32653) { NG(); } else { ; }
	
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

