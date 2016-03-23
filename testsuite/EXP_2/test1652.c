
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MAX;
volatile uint64_t x3 = UINT64_MAX;
volatile int16_t x5 = INT16_MAX;
uint16_t x9 = 1U;
static uint64_t x10 = 116LLU;
volatile uint32_t t2 = 297218912U;
uint16_t x27 = 815U;
volatile int32_t x30 = INT32_MIN;
int32_t t6 = 894;
int8_t x47 = -1;
static volatile int32_t x62 = -433610;
static int8_t x69 = INT8_MAX;
static uint16_t x74 = UINT16_MAX;
uint16_t x84 = 5U;
uint8_t x85 = 5U;
int32_t x117 = INT32_MAX;
uint64_t x118 = 2255833183319579638LLU;
static int8_t x121 = 0;
volatile int32_t x122 = 48499;
uint16_t x133 = UINT16_MAX;
static int64_t x136 = 8012557823641075LL;
static int64_t t16 = 3016863037057704014LL;
uint8_t x154 = 12U;
static uint64_t x155 = UINT64_MAX;
int64_t x160 = -26605130601LL;
volatile int8_t x161 = 0;
int16_t x188 = INT16_MAX;
int64_t x203 = 928027495293714LL;
int16_t x211 = -1266;
static int32_t x220 = INT32_MIN;
uint64_t x235 = 4019123991321424LLU;
uint16_t x249 = 623U;
int32_t t27 = -36829161;
volatile uint32_t x258 = 644113351U;
int32_t x276 = INT32_MIN;
int32_t x289 = 2670723;
volatile int32_t t33 = 144722;
int32_t x323 = INT32_MIN;
int64_t t37 = -40946427213435LL;
int32_t x327 = INT32_MAX;
volatile uint64_t x336 = UINT64_MAX;
uint64_t x351 = 1266LLU;
static int32_t x366 = INT32_MAX;
volatile uint32_t t42 = 5830339U;
uint64_t x374 = UINT64_MAX;
static uint32_t x398 = 0U;
uint16_t x399 = 53U;
uint64_t t46 = 7466437LLU;
static uint8_t x412 = 3U;
uint32_t t49 = 132842U;
static volatile int16_t x420 = INT16_MIN;
volatile uint16_t x424 = 7288U;
int32_t x431 = INT32_MAX;
int8_t x452 = 7;
volatile int8_t x458 = 29;
volatile uint64_t x464 = 13438541605LLU;
int64_t x475 = -1LL;
volatile int16_t x476 = -1433;
uint8_t x477 = 13U;
int32_t x482 = -126971;
int16_t x485 = INT16_MAX;
volatile int8_t x490 = 1;
int64_t x491 = INT64_MAX;
int8_t x498 = INT8_MIN;
int32_t x516 = 452290837;
int64_t x521 = 7386828186679117LL;
volatile uint8_t x530 = 1U;
static int8_t x531 = -1;
uint32_t t66 = 842284297U;
volatile int8_t x535 = -1;
int8_t x541 = 2;
int64_t t69 = -2LL;
static int64_t x550 = 55672180743445LL;
static int16_t x551 = 4;
volatile int8_t x594 = INT8_MIN;
int16_t x595 = 30;
int16_t x599 = 17;
volatile int16_t x620 = 1;
uint16_t x630 = 12157U;
static int8_t x640 = -1;
volatile uint64_t t81 = 14050LLU;
int8_t x673 = INT8_MAX;
static volatile int32_t t83 = -1778748;
uint32_t x677 = 20980U;
int8_t x680 = INT8_MAX;
volatile uint8_t x700 = 0U;
uint32_t x706 = 58115U;
uint32_t x721 = UINT32_MAX;
volatile uint64_t t93 = 2126061407342035065LLU;
volatile int32_t x751 = -1;
int64_t t95 = INT64_MIN;
volatile uint64_t x767 = 738514321063LLU;
uint64_t x769 = UINT64_MAX;
static int64_t x778 = -1LL;
volatile uint32_t t99 = 37U;
volatile uint32_t t100 = UINT32_MAX;
uint64_t x805 = 35268LLU;
uint32_t x808 = 19103952U;
volatile uint8_t x831 = UINT8_MAX;
static volatile int32_t x840 = -20;
static int64_t x849 = INT64_MAX;
uint32_t x854 = UINT32_MAX;
static volatile uint32_t x859 = UINT32_MAX;
int64_t x868 = INT64_MIN;
int64_t x874 = -673889623394396LL;
uint16_t x893 = 1U;
static volatile int8_t x896 = INT8_MAX;
uint64_t t116 = 35482720467511227LLU;
volatile uint8_t x902 = 0U;
int16_t x912 = -1;
uint64_t x914 = UINT64_MAX;
uint8_t x919 = 3U;
int64_t t120 = -31LL;
static volatile int8_t x934 = INT8_MIN;
int16_t x935 = -1;
volatile int64_t x940 = -1126301381554472050LL;
int8_t x943 = INT8_MIN;
int8_t x967 = INT8_MAX;
int32_t x968 = INT32_MIN;
int8_t x970 = -39;
static int16_t x1001 = INT16_MAX;
uint32_t x1034 = 3U;
static uint16_t x1035 = 3U;
static uint32_t t132 = 115423597U;
volatile uint32_t t133 = 3993036U;
int32_t x1048 = INT32_MIN;
volatile uint64_t t134 = 183LLU;
int32_t x1054 = -195;
int64_t x1057 = INT64_MAX;
uint32_t x1058 = UINT32_MAX;
int64_t t136 = -11559LL;
int16_t x1062 = 2;
volatile int64_t x1073 = 117LL;
uint8_t x1085 = UINT8_MAX;
volatile uint8_t x1088 = 0U;
static int16_t x1095 = INT16_MAX;
int32_t t142 = 42;
static int16_t x1110 = -648;
static uint16_t x1122 = UINT16_MAX;
int64_t x1123 = INT64_MIN;
uint8_t x1129 = UINT8_MAX;
uint8_t x1155 = 8U;
uint32_t x1156 = 1325U;
uint16_t x1157 = UINT16_MAX;
uint64_t x1185 = UINT64_MAX;
uint16_t x1207 = UINT16_MAX;
uint16_t x1209 = 73U;
uint64_t x1210 = UINT64_MAX;
uint64_t x1212 = 130683LLU;
uint32_t x1215 = 3U;
static uint32_t x1221 = 21714U;
volatile uint16_t x1224 = UINT16_MAX;
uint16_t x1233 = UINT16_MAX;
volatile uint8_t x1235 = UINT8_MAX;
uint64_t x1243 = 2638LLU;
volatile int32_t t166 = -320624371;
uint32_t x1245 = UINT32_MAX;
int8_t x1246 = INT8_MAX;
static volatile int16_t x1250 = INT16_MIN;
int32_t t169 = 9;
volatile int16_t x1276 = 11;
uint8_t x1289 = 21U;
int32_t x1301 = 1432;
volatile int64_t x1303 = INT64_MIN;
static volatile uint8_t x1329 = UINT8_MAX;
int32_t x1330 = -1;
volatile int16_t x1339 = INT16_MAX;
volatile uint32_t x1341 = 24U;
uint32_t x1350 = UINT32_MAX;
uint16_t x1352 = 86U;
static uint16_t x1354 = 0U;
uint16_t x1378 = UINT16_MAX;
static volatile int32_t x1401 = 46683;
static int8_t x1404 = INT8_MIN;
int32_t t190 = 0;
static uint64_t x1410 = 779122265734510619LLU;
uint64_t x1411 = 5727144213156LLU;
int8_t x1418 = 1;
int64_t x1419 = 3838033783LL;
static volatile int32_t t192 = -29674305;
uint32_t t194 = 22590U;
int64_t x1434 = INT64_MIN;
volatile uint8_t x1435 = 30U;
static uint8_t x1439 = 4U;
volatile int32_t x1444 = 405968232;
int32_t x1456 = 3;
static int64_t x1463 = -1LL;
volatile int16_t x1464 = INT16_MIN;


void f0(void) {
    	int8_t x2 = -3;
	volatile int16_t x4 = 1;
	static int32_t t0 = 18;

    t0 = ((x1<<(x2>x3))^x4);

    if (t0 != 32766) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x6 = 3603U;
	uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 1118521709U;
	uint32_t t1 = 296057U;

    t1 = ((x5<<(x6>x7))^x8);

    if (t1 != 1118516882U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x11 = INT8_MAX;
	volatile uint32_t x12 = UINT32_MAX;

    t2 = ((x9<<(x10>x11))^x12);

    if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 1;
	int16_t x14 = -7763;
	uint64_t x15 = 171263613731LLU;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 8053865;

    t3 = ((x13<<(x14>x15))^x16);

    if (t3 != -2147483646) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x25 = UINT16_MAX;
	static int8_t x26 = INT8_MAX;
	static volatile uint8_t x28 = 0U;
	volatile int32_t t4 = -291;

    t4 = ((x25<<(x26>x27))^x28);

    if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MAX;
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;
	int32_t t5 = -475;

    t5 = ((x29<<(x30>x31))^x32);

    if (t5 != 2147483520) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x41 = UINT16_MAX;
	int16_t x42 = INT16_MIN;
	static uint32_t x43 = 630894618U;
	static int32_t x44 = 3468953;

    t6 = ((x41<<(x42>x43))^x44);

    if (t6 != 3477863) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x45 = UINT64_MAX;
	static uint64_t x46 = UINT64_MAX;
	static uint16_t x48 = UINT16_MAX;
	volatile uint64_t t7 = 162034285LLU;

    t7 = ((x45<<(x46>x47))^x48);

    if (t7 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x61 = INT16_MAX;
	volatile int8_t x63 = INT8_MIN;
	int16_t x64 = 1;
	volatile int32_t t8 = -479;

    t8 = ((x61<<(x62>x63))^x64);

    if (t8 != 32766) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x70 = INT32_MAX;
	static volatile uint64_t x71 = UINT64_MAX;
	static uint8_t x72 = UINT8_MAX;
	volatile int32_t t9 = -46405;

    t9 = ((x69<<(x70>x71))^x72);

    if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x73 = 193;
	static int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MAX;
	volatile int64_t t10 = 281295667LL;

    t10 = ((x73<<(x74>x75))^x76);

    if (t10 != 9223372036854775421LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x81 = 15U;
	int16_t x82 = -1;
	volatile int8_t x83 = -18;
	volatile int32_t t11 = -57158194;

    t11 = ((x81<<(x82>x83))^x84);

    if (t11 != 27) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x86 = INT8_MIN;
	static int16_t x87 = -1;
	static uint32_t x88 = 87553327U;
	uint32_t t12 = 371834U;

    t12 = ((x85<<(x86>x87))^x88);

    if (t12 != 87553322U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x93 = 3595LL;
	volatile uint32_t x94 = 30U;
	uint32_t x95 = 850039U;
	static int64_t x96 = INT64_MIN;
	volatile int64_t t13 = -280920206524427028LL;

    t13 = ((x93<<(x94>x95))^x96);

    if (t13 != -9223372036854772213LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x119 = -11;
	int16_t x120 = INT16_MIN;
	volatile int32_t t14 = 561403;

    t14 = ((x117<<(x118>x119))^x120);

    if (t14 != -2147450881) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x123 = INT32_MIN;
	int16_t x124 = -1;
	int32_t t15 = -53403;

    t15 = ((x121<<(x122>x123))^x124);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x134 = 118U;
	uint64_t x135 = 16558793025840710LLU;

    t16 = ((x133<<(x134>x135))^x136);

    if (t16 != 8012557823703564LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x149 = 186;
	volatile uint32_t x150 = 3U;
	int64_t x151 = INT64_MIN;
	int16_t x152 = -1;
	volatile int32_t t17 = 10373398;

    t17 = ((x149<<(x150>x151))^x152);

    if (t17 != -373) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x153 = 451335464668349267LLU;
	static int8_t x156 = INT8_MIN;
	volatile uint64_t t18 = 1590766661712866198LLU;

    t18 = ((x153<<(x154>x155))^x156);

    if (t18 != 17995408609041202387LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x157 = 7U;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = 5003LLU;
	int64_t t19 = 5480138168LL;

    t19 = ((x157<<(x158>x159))^x160);

    if (t19 != -26605130599LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x162 = -63;
	int32_t x163 = -1;
	uint16_t x164 = 11U;
	static int32_t t20 = 12751168;

    t20 = ((x161<<(x162>x163))^x164);

    if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x173 = 78;
	uint16_t x174 = UINT16_MAX;
	static int16_t x175 = -322;
	uint32_t x176 = 568537U;
	uint32_t t21 = 245348U;

    t21 = ((x173<<(x174>x175))^x176);

    if (t21 != 568389U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x185 = 21U;
	int32_t x186 = 8;
	int64_t x187 = -1LL;
	int32_t t22 = 26207;

    t22 = ((x185<<(x186>x187))^x188);

    if (t22 != 32725) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x201 = 6466807928LLU;
	int8_t x202 = INT8_MAX;
	static uint64_t x204 = 490288351634LLU;
	volatile uint64_t t23 = 413094600213862613LLU;

    t23 = ((x201<<(x202>x203))^x204);

    if (t23 != 496706593258LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	static int16_t x210 = INT16_MIN;
	int32_t x212 = INT32_MIN;
	volatile uint64_t t24 = 46522300LLU;

    t24 = ((x209<<(x210>x211))^x212);

    if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x217 = 1U;
	int8_t x218 = 11;
	int32_t x219 = -9553;
	volatile int32_t t25 = 1;

    t25 = ((x217<<(x218>x219))^x220);

    if (t25 != -2147483646) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x233 = 2767;
	uint32_t x234 = 40785U;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t26 = 260884446251896576LLU;

    t26 = ((x233<<(x234>x235))^x236);

    if (t26 != 18446744073709548848LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x250 = 16U;
	int16_t x251 = 0;
	int16_t x252 = INT16_MAX;

    t27 = ((x249<<(x250>x251))^x252);

    if (t27 != 31521) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x253 = UINT64_MAX;
	int64_t x254 = -44326602852LL;
	int16_t x255 = 413;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t28 = 1898847589409302LLU;

    t28 = ((x253<<(x254>x255))^x256);

    if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x257 = 301851U;
	int64_t x259 = 27765753652LL;
	int32_t x260 = INT32_MIN;
	volatile uint32_t t29 = 93U;

    t29 = ((x257<<(x258>x259))^x260);

    if (t29 != 2147785499U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x265 = UINT64_MAX;
	int32_t x266 = INT32_MIN;
	volatile int32_t x267 = -102;
	static int16_t x268 = INT16_MAX;
	volatile uint64_t t30 = 3475374406LLU;

    t30 = ((x265<<(x266>x267))^x268);

    if (t30 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x273 = 7590680U;
	volatile int8_t x274 = 7;
	uint8_t x275 = 1U;
	uint32_t t31 = 6U;

    t31 = ((x273<<(x274>x275))^x276);

    if (t31 != 2162665008U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x290 = 220685U;
	static int8_t x291 = INT8_MIN;
	static int32_t x292 = -1;
	int32_t t32 = 0;

    t32 = ((x289<<(x290>x291))^x292);

    if (t32 != -2670724) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x293 = 0;
	volatile int64_t x294 = INT64_MIN;
	uint16_t x295 = 15007U;
	volatile uint8_t x296 = UINT8_MAX;

    t33 = ((x293<<(x294>x295))^x296);

    if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x297 = 6U;
	int64_t x298 = 6992368364678389LL;
	uint8_t x299 = UINT8_MAX;
	uint16_t x300 = 22U;
	int32_t t34 = 6333210;

    t34 = ((x297<<(x298>x299))^x300);

    if (t34 != 26) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x301 = 0U;
	int16_t x302 = -1;
	static volatile int64_t x303 = INT64_MIN;
	int8_t x304 = 0;
	volatile int32_t t35 = 815528;

    t35 = ((x301<<(x302>x303))^x304);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x305 = 99737LLU;
	int16_t x306 = INT16_MIN;
	volatile int64_t x307 = INT64_MIN;
	uint16_t x308 = 26U;
	uint64_t t36 = 33158171LLU;

    t36 = ((x305<<(x306>x307))^x308);

    if (t36 != 199464LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x321 = 7LL;
	volatile int16_t x322 = INT16_MAX;
	volatile int64_t x324 = INT64_MIN;

    t37 = ((x321<<(x322>x323))^x324);

    if (t37 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x325 = UINT32_MAX;
	uint8_t x326 = 1U;
	static int64_t x328 = INT64_MAX;
	static int64_t t38 = 112310736358LL;

    t38 = ((x325<<(x326>x327))^x328);

    if (t38 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x333 = 5U;
	int32_t x334 = INT32_MAX;
	int16_t x335 = -1;
	uint64_t t39 = 2219898102604948934LLU;

    t39 = ((x333<<(x334>x335))^x336);

    if (t39 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x349 = 3162423632LLU;
	volatile int32_t x350 = -1;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t40 = 1500525LLU;

    t40 = ((x349<<(x350>x351))^x352);

    if (t40 != 18446744069296980640LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x361 = 3U;
	uint16_t x362 = 1U;
	uint16_t x363 = UINT16_MAX;
	volatile uint16_t x364 = 1345U;
	int32_t t41 = 2;

    t41 = ((x361<<(x362>x363))^x364);

    if (t41 != 1346) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x365 = 98120814U;
	uint32_t x367 = UINT32_MAX;
	int8_t x368 = INT8_MIN;

    t42 = ((x365<<(x366>x367))^x368);

    if (t42 != 4196846574U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x373 = 46774580536211LLU;
	uint16_t x375 = 0U;
	int8_t x376 = 1;
	uint64_t t43 = 41705869653LLU;

    t43 = ((x373<<(x374>x375))^x376);

    if (t43 != 93549161072423LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x377 = 2U;
	static volatile int32_t x378 = -12016107;
	static int64_t x379 = 0LL;
	uint64_t x380 = 950609406992LLU;
	volatile uint64_t t44 = 356745237106198LLU;

    t44 = ((x377<<(x378>x379))^x380);

    if (t44 != 950609406994LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x393 = INT16_MAX;
	int32_t x394 = 0;
	int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MIN;
	static volatile int32_t t45 = 0;

    t45 = ((x393<<(x394>x395))^x396);

    if (t45 != -65410) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x397 = 25977471318LLU;
	uint32_t x400 = 0U;

    t46 = ((x397<<(x398>x399))^x400);

    if (t46 != 25977471318LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x401 = UINT16_MAX;
	int64_t x402 = INT64_MIN;
	volatile uint32_t x403 = 2290U;
	int32_t x404 = INT32_MIN;
	volatile int32_t t47 = -35;

    t47 = ((x401<<(x402>x403))^x404);

    if (t47 != -2147418113) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x405 = 1104673;
	int32_t x406 = -27;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 0U;
	volatile int32_t t48 = 119;

    t48 = ((x405<<(x406>x407))^x408);

    if (t48 != 2209346) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x409 = UINT32_MAX;
	volatile int8_t x410 = 25;
	volatile int8_t x411 = 20;

    t49 = ((x409<<(x410>x411))^x412);

    if (t49 != 4294967293U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x417 = UINT8_MAX;
	volatile uint64_t x418 = 15LLU;
	volatile uint64_t x419 = UINT64_MAX;
	int32_t t50 = -3825826;

    t50 = ((x417<<(x418>x419))^x420);

    if (t50 != -32513) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x421 = 11U;
	volatile int16_t x422 = -82;
	int16_t x423 = 15579;
	int32_t t51 = -239;

    t51 = ((x421<<(x422>x423))^x424);

    if (t51 != 7283) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x429 = UINT32_MAX;
	volatile uint8_t x430 = 111U;
	uint64_t x432 = 105LLU;
	uint64_t t52 = 160043LLU;

    t52 = ((x429<<(x430>x431))^x432);

    if (t52 != 4294967190LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x445 = 345;
	int16_t x446 = 0;
	int8_t x447 = -1;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t53 = -11052402;

    t53 = ((x445<<(x446>x447))^x448);

    if (t53 != -32078) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x449 = UINT32_MAX;
	static volatile int16_t x450 = -1;
	int16_t x451 = INT16_MIN;
	uint32_t t54 = 1U;

    t54 = ((x449<<(x450>x451))^x452);

    if (t54 != 4294967289U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x457 = 16088U;
	volatile int16_t x459 = INT16_MAX;
	static uint16_t x460 = UINT16_MAX;
	static int32_t t55 = 9532;

    t55 = ((x457<<(x458>x459))^x460);

    if (t55 != 49447) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x461 = 31;
	static int64_t x462 = INT64_MAX;
	uint32_t x463 = 2U;
	static volatile uint64_t t56 = 801918154031LLU;

    t56 = ((x461<<(x462>x463))^x464);

    if (t56 != 13438541595LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x473 = INT64_MAX;
	static int8_t x474 = -8;
	int64_t t57 = 6171176367072LL;

    t57 = ((x473<<(x474>x475))^x476);

    if (t57 != -9223372036854774376LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MIN;
	uint32_t x480 = 983508851U;
	uint32_t t58 = 211934899U;

    t58 = ((x477<<(x478>x479))^x480);

    if (t58 != 983508841U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x481 = 184526U;
	int16_t x483 = INT16_MIN;
	static uint32_t x484 = 1700430U;
	volatile uint32_t t59 = 4237305U;

    t59 = ((x481<<(x482>x483))^x484);

    if (t59 != 1778304U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x486 = -8929145106308LL;
	volatile int16_t x487 = INT16_MIN;
	int64_t x488 = INT64_MAX;
	volatile int64_t t60 = 195823768949468113LL;

    t60 = ((x485<<(x486>x487))^x488);

    if (t60 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x489 = UINT64_MAX;
	int64_t x492 = -1LL;
	volatile uint64_t t61 = 84353086667LLU;

    t61 = ((x489<<(x490>x491))^x492);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x497 = UINT16_MAX;
	int16_t x499 = -1;
	int8_t x500 = INT8_MAX;
	volatile int32_t t62 = -179565494;

    t62 = ((x497<<(x498>x499))^x500);

    if (t62 != 65408) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x501 = 6;
	int16_t x502 = -1;
	int8_t x503 = -1;
	uint32_t x504 = 30U;
	volatile uint32_t t63 = 239001050U;

    t63 = ((x501<<(x502>x503))^x504);

    if (t63 != 24U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x513 = 1;
	int8_t x514 = INT8_MAX;
	int64_t x515 = 603818359502572LL;
	int32_t t64 = -8;

    t64 = ((x513<<(x514>x515))^x516);

    if (t64 != 452290836) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x522 = UINT16_MAX;
	uint64_t x523 = 1855LLU;
	int8_t x524 = INT8_MIN;
	int64_t t65 = 2145LL;

    t65 = ((x521<<(x522>x523))^x524);

    if (t65 != -14773656373358310LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x529 = 19182U;
	uint32_t x532 = 63512U;

    t66 = ((x529<<(x530>x531))^x532);

    if (t66 != 28100U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x533 = 4060349LLU;
	static volatile uint16_t x534 = 0U;
	volatile int16_t x536 = -1;
	volatile uint64_t t67 = 8173945LLU;

    t67 = ((x533<<(x534>x535))^x536);

    if (t67 != 18446744073701430917LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x542 = -1;
	int64_t x543 = INT64_MIN;
	uint16_t x544 = UINT16_MAX;
	int32_t t68 = 31381;

    t68 = ((x541<<(x542>x543))^x544);

    if (t68 != 65531) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x545 = INT64_MAX;
	int64_t x546 = -516310954LL;
	int32_t x547 = -1;
	uint8_t x548 = 5U;

    t69 = ((x545<<(x546>x547))^x548);

    if (t69 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x549 = 561733LL;
	int8_t x552 = 6;
	int64_t t70 = -1111597LL;

    t70 = ((x549<<(x550>x551))^x552);

    if (t70 != 1123468LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x561 = 41;
	int8_t x562 = -1;
	static int16_t x563 = INT16_MIN;
	volatile int64_t x564 = 56LL;
	static volatile int64_t t71 = -2045588LL;

    t71 = ((x561<<(x562>x563))^x564);

    if (t71 != 106LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x589 = 0U;
	int16_t x590 = INT16_MIN;
	int8_t x591 = -3;
	volatile uint8_t x592 = 3U;
	int32_t t72 = -219;

    t72 = ((x589<<(x590>x591))^x592);

    if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x593 = INT32_MAX;
	uint64_t x596 = UINT64_MAX;
	uint64_t t73 = 1115004568700428LLU;

    t73 = ((x593<<(x594>x595))^x596);

    if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x597 = UINT8_MAX;
	int16_t x598 = -502;
	uint64_t x600 = 1582926057LLU;
	uint64_t t74 = 36438804768LLU;

    t74 = ((x597<<(x598>x599))^x600);

    if (t74 != 1582925846LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int8_t x617 = INT8_MAX;
	int32_t x618 = INT32_MAX;
	int8_t x619 = INT8_MIN;
	volatile int32_t t75 = 41693498;

    t75 = ((x617<<(x618>x619))^x620);

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x629 = UINT8_MAX;
	int32_t x631 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	volatile uint32_t t76 = 4091U;

    t76 = ((x629<<(x630>x631))^x632);

    if (t76 != 4294966785U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x633 = 847742757U;
	volatile uint16_t x634 = UINT16_MAX;
	static int16_t x635 = INT16_MAX;
	volatile uint64_t x636 = UINT64_MAX;
	static uint64_t t77 = 191825LLU;

    t77 = ((x633<<(x634>x635))^x636);

    if (t77 != 18446744072014066101LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x637 = 3763;
	int16_t x638 = -1;
	volatile int64_t x639 = INT64_MIN;
	static int32_t t78 = 33;

    t78 = ((x637<<(x638>x639))^x640);

    if (t78 != -7527) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x645 = 1;
	int32_t x646 = -1;
	int16_t x647 = INT16_MAX;
	volatile uint8_t x648 = UINT8_MAX;
	volatile int32_t t79 = -386;

    t79 = ((x645<<(x646>x647))^x648);

    if (t79 != 254) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x649 = INT8_MAX;
	int64_t x650 = INT64_MIN;
	uint32_t x651 = 59358U;
	static int8_t x652 = INT8_MIN;
	volatile int32_t t80 = 123611;

    t80 = ((x649<<(x650>x651))^x652);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x661 = 46781277044LLU;
	static volatile int8_t x662 = -26;
	int32_t x663 = -1;
	uint16_t x664 = 13857U;

    t81 = ((x661<<(x662>x663))^x664);

    if (t81 != 46781273429LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x669 = 443;
	volatile uint64_t x670 = 89323292LLU;
	uint8_t x671 = 45U;
	volatile uint8_t x672 = 34U;
	int32_t t82 = 1;

    t82 = ((x669<<(x670>x671))^x672);

    if (t82 != 852) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x674 = INT16_MAX;
	uint64_t x675 = UINT64_MAX;
	int8_t x676 = INT8_MIN;

    t83 = ((x673<<(x674>x675))^x676);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x678 = INT8_MIN;
	int16_t x679 = INT16_MIN;
	volatile uint32_t t84 = 501753U;

    t84 = ((x677<<(x678>x679))^x680);

    if (t84 != 41879U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x685 = 3U;
	static int64_t x686 = -690285773LL;
	int32_t x687 = INT32_MIN;
	uint32_t x688 = UINT32_MAX;
	volatile uint32_t t85 = 23U;

    t85 = ((x685<<(x686>x687))^x688);

    if (t85 != 4294967289U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x693 = 0U;
	int64_t x694 = INT64_MIN;
	int8_t x695 = INT8_MAX;
	int16_t x696 = 2;
	volatile int32_t t86 = 5724;

    t86 = ((x693<<(x694>x695))^x696);

    if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x697 = 1;
	int16_t x698 = -1;
	static int16_t x699 = 1449;
	volatile int32_t t87 = 4531;

    t87 = ((x697<<(x698>x699))^x700);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x705 = 3U;
	uint16_t x707 = 225U;
	int16_t x708 = INT16_MIN;
	static int32_t t88 = 624671;

    t88 = ((x705<<(x706>x707))^x708);

    if (t88 != -32762) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	volatile int32_t x710 = -1;
	int64_t x711 = INT64_MIN;
	int32_t x712 = -6;
	volatile int32_t t89 = -2014317;

    t89 = ((x709<<(x710>x711))^x712);

    if (t89 != -131068) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x713 = UINT8_MAX;
	volatile int64_t x714 = INT64_MAX;
	int8_t x715 = INT8_MIN;
	uint64_t x716 = UINT64_MAX;
	uint64_t t90 = 122521234405730116LLU;

    t90 = ((x713<<(x714>x715))^x716);

    if (t90 != 18446744073709551105LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x722 = 35;
	static int8_t x723 = INT8_MAX;
	int32_t x724 = INT32_MIN;
	volatile uint32_t t91 = 5565191U;

    t91 = ((x721<<(x722>x723))^x724);

    if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x737 = 26109U;
	volatile int64_t x738 = INT64_MAX;
	volatile int32_t x739 = -1;
	int8_t x740 = 25;
	static int32_t t92 = 937;

    t92 = ((x737<<(x738>x739))^x740);

    if (t92 != 52195) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x745 = UINT64_MAX;
	volatile uint16_t x746 = UINT16_MAX;
	int64_t x747 = 414LL;
	uint64_t x748 = UINT64_MAX;

    t93 = ((x745<<(x746>x747))^x748);

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x749 = INT8_MAX;
	uint64_t x750 = 57930275416726LLU;
	static uint8_t x752 = 7U;
	volatile int32_t t94 = 0;

    t94 = ((x749<<(x750>x751))^x752);

    if (t94 != 120) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x753 = INT64_MAX;
	int64_t x754 = INT64_MIN;
	uint16_t x755 = 0U;
	int16_t x756 = -1;

    t95 = ((x753<<(x754>x755))^x756);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x761 = 175;
	int16_t x762 = 215;
	uint16_t x763 = 375U;
	int64_t x764 = INT64_MIN;
	volatile int64_t t96 = 34014629LL;

    t96 = ((x761<<(x762>x763))^x764);

    if (t96 != -9223372036854775633LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x765 = UINT64_MAX;
	int64_t x766 = INT64_MIN;
	int64_t x768 = -1LL;
	volatile uint64_t t97 = 1116572872035520LLU;

    t97 = ((x765<<(x766>x767))^x768);

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x770 = -157451LL;
	volatile int64_t x771 = 1LL;
	uint16_t x772 = 0U;
	static uint64_t t98 = UINT64_MAX;

    t98 = ((x769<<(x770>x771))^x772);

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x777 = UINT32_MAX;
	uint32_t x779 = 1529386U;
	static uint8_t x780 = 17U;

    t99 = ((x777<<(x778>x779))^x780);

    if (t99 != 4294967278U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x781 = 0U;
	uint64_t x782 = UINT64_MAX;
	int8_t x783 = -1;
	int32_t x784 = -1;

    t100 = ((x781<<(x782>x783))^x784);

    if (t100 != UINT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint64_t x789 = 7663LLU;
	int8_t x790 = -1;
	uint8_t x791 = 0U;
	int16_t x792 = -1;
	static volatile uint64_t t101 = 3700875037364LLU;

    t101 = ((x789<<(x790>x791))^x792);

    if (t101 != 18446744073709543952LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x801 = UINT64_MAX;
	int16_t x802 = -1;
	static volatile int64_t x803 = INT64_MIN;
	int16_t x804 = -1;
	volatile uint64_t t102 = 493906393878456345LLU;

    t102 = ((x801<<(x802>x803))^x804);

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x806 = INT32_MIN;
	static int16_t x807 = INT16_MIN;
	volatile uint64_t t103 = 20964171812739LLU;

    t103 = ((x805<<(x806>x807))^x808);

    if (t103 != 19073300LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x809 = 4;
	static int8_t x810 = INT8_MAX;
	int8_t x811 = 16;
	uint16_t x812 = 16966U;
	volatile int32_t t104 = -52;

    t104 = ((x809<<(x810>x811))^x812);

    if (t104 != 16974) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x817 = 9;
	static volatile int32_t x818 = 13;
	static uint64_t x819 = 4140187203195LLU;
	uint32_t x820 = 207480817U;
	volatile uint32_t t105 = 0U;

    t105 = ((x817<<(x818>x819))^x820);

    if (t105 != 207480824U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x829 = UINT32_MAX;
	int16_t x830 = -3;
	uint16_t x832 = UINT16_MAX;
	volatile uint32_t t106 = 15028U;

    t106 = ((x829<<(x830>x831))^x832);

    if (t106 != 4294901760U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x837 = INT8_MAX;
	int32_t x838 = -1;
	int64_t x839 = 763914820790443429LL;
	int32_t t107 = 837;

    t107 = ((x837<<(x838>x839))^x840);

    if (t107 != -109) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x850 = 1;
	static uint8_t x851 = UINT8_MAX;
	int64_t x852 = 7382904058686656LL;
	int64_t t108 = 0LL;

    t108 = ((x849<<(x850>x851))^x852);

    if (t108 != 9215989132796089151LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x853 = 898U;
	int8_t x855 = INT8_MIN;
	volatile int64_t x856 = 6117486LL;
	volatile int64_t t109 = -1028257841452334LL;

    t109 = ((x853<<(x854>x855))^x856);

    if (t109 != 6119274LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x857 = 59056367;
	volatile int64_t x858 = 27669180915034303LL;
	static int32_t x860 = -6;
	volatile int32_t t110 = -581180;

    t110 = ((x857<<(x858>x859))^x860);

    if (t110 != -118112732) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x865 = INT16_MAX;
	uint8_t x866 = UINT8_MAX;
	static uint8_t x867 = UINT8_MAX;
	int64_t t111 = 475876555LL;

    t111 = ((x865<<(x866>x867))^x868);

    if (t111 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x873 = 135U;
	int8_t x875 = INT8_MIN;
	int64_t x876 = 301LL;
	volatile int64_t t112 = 18026462086440735LL;

    t112 = ((x873<<(x874>x875))^x876);

    if (t112 != 426LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x881 = INT8_MAX;
	int8_t x882 = INT8_MIN;
	int32_t x883 = INT32_MAX;
	int16_t x884 = -1;
	int32_t t113 = -380873962;

    t113 = ((x881<<(x882>x883))^x884);

    if (t113 != -128) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x889 = 414U;
	int8_t x890 = INT8_MIN;
	uint16_t x891 = UINT16_MAX;
	int64_t x892 = INT64_MIN;
	int64_t t114 = -11734LL;

    t114 = ((x889<<(x890>x891))^x892);

    if (t114 != -9223372036854775394LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x894 = INT16_MAX;
	int8_t x895 = -1;
	volatile int32_t t115 = -1050609471;

    t115 = ((x893<<(x894>x895))^x896);

    if (t115 != 125) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x897 = 369LLU;
	uint8_t x898 = 115U;
	int16_t x899 = -182;
	uint64_t x900 = 1638588044431137LLU;

    t116 = ((x897<<(x898>x899))^x900);

    if (t116 != 1638588044430787LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x901 = 37U;
	static int8_t x903 = -1;
	uint32_t x904 = 4U;
	volatile uint32_t t117 = 3U;

    t117 = ((x901<<(x902>x903))^x904);

    if (t117 != 78U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x909 = 1U;
	int64_t x910 = 13667961LL;
	uint32_t x911 = 623394408U;
	volatile int32_t t118 = 29;

    t118 = ((x909<<(x910>x911))^x912);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x913 = 5U;
	static int16_t x915 = INT16_MIN;
	static int32_t x916 = 449;
	static int32_t t119 = 78;

    t119 = ((x913<<(x914>x915))^x916);

    if (t119 != 459) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x917 = INT16_MAX;
	uint8_t x918 = 16U;
	int64_t x920 = -1LL;

    t120 = ((x917<<(x918>x919))^x920);

    if (t120 != -65535LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x921 = UINT8_MAX;
	uint64_t x922 = 3997126665709LLU;
	static int64_t x923 = INT64_MAX;
	static int32_t x924 = -1;
	volatile int32_t t121 = 11850;

    t121 = ((x921<<(x922>x923))^x924);

    if (t121 != -256) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x933 = INT8_MAX;
	int16_t x936 = INT16_MAX;
	static int32_t t122 = -6732112;

    t122 = ((x933<<(x934>x935))^x936);

    if (t122 != 32640) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x937 = 24U;
	static int64_t x938 = INT64_MIN;
	int8_t x939 = 5;
	static int64_t t123 = -92320765965LL;

    t123 = ((x937<<(x938>x939))^x940);

    if (t123 != -1126301381554472042LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x941 = 16U;
	static int16_t x942 = INT16_MIN;
	uint32_t x944 = UINT32_MAX;
	volatile uint32_t t124 = 981392U;

    t124 = ((x941<<(x942>x943))^x944);

    if (t124 != 4294967279U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x961 = UINT16_MAX;
	int16_t x962 = INT16_MAX;
	static uint32_t x963 = 57060U;
	uint32_t x964 = 27987U;
	static uint32_t t125 = 3169U;

    t125 = ((x961<<(x962>x963))^x964);

    if (t125 != 37548U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x965 = 5U;
	int64_t x966 = -1LL;
	int32_t t126 = -1;

    t126 = ((x965<<(x966>x967))^x968);

    if (t126 != -2147483643) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x969 = 7;
	int16_t x971 = INT16_MIN;
	volatile int16_t x972 = INT16_MAX;
	int32_t t127 = -30620908;

    t127 = ((x969<<(x970>x971))^x972);

    if (t127 != 32753) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x989 = INT32_MAX;
	volatile int32_t x990 = -1;
	int32_t x991 = INT32_MAX;
	static volatile int32_t x992 = INT32_MIN;
	int32_t t128 = 116;

    t128 = ((x989<<(x990>x991))^x992);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x1002 = INT64_MIN;
	uint32_t x1003 = 248U;
	volatile int64_t x1004 = 0LL;
	volatile int64_t t129 = 2997LL;

    t129 = ((x1001<<(x1002>x1003))^x1004);

    if (t129 != 32767LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x1009 = INT16_MAX;
	int64_t x1010 = INT64_MIN;
	int64_t x1011 = INT64_MIN;
	int32_t x1012 = 997634;
	volatile int32_t t130 = 581899;

    t130 = ((x1009<<(x1010>x1011))^x1012);

    if (t130 != 1001213) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1025 = INT16_MAX;
	static int8_t x1026 = INT8_MAX;
	uint16_t x1027 = UINT16_MAX;
	uint8_t x1028 = UINT8_MAX;
	static volatile int32_t t131 = 350975;

    t131 = ((x1025<<(x1026>x1027))^x1028);

    if (t131 != 32512) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1033 = UINT32_MAX;
	int16_t x1036 = INT16_MIN;

    t132 = ((x1033<<(x1034>x1035))^x1036);

    if (t132 != 32767U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x1037 = UINT32_MAX;
	volatile int32_t x1038 = -1;
	uint64_t x1039 = UINT64_MAX;
	int16_t x1040 = -1;

    t133 = ((x1037<<(x1038>x1039))^x1040);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1045 = 1LLU;
	static uint64_t x1046 = 245LLU;
	int32_t x1047 = -99485;

    t134 = ((x1045<<(x1046>x1047))^x1048);

    if (t134 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1053 = 1296339153982596LL;
	static int32_t x1055 = -60006;
	int16_t x1056 = INT16_MIN;
	int64_t t135 = -25409LL;

    t135 = ((x1053<<(x1054>x1055))^x1056);

    if (t135 != -2592678307976952LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1059 = -1;
	int8_t x1060 = -2;

    t136 = ((x1057<<(x1058>x1059))^x1060);

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x1061 = 8U;
	volatile int8_t x1063 = 1;
	uint64_t x1064 = UINT64_MAX;
	volatile uint64_t t137 = 362886LLU;

    t137 = ((x1061<<(x1062>x1063))^x1064);

    if (t137 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x1065 = UINT16_MAX;
	int16_t x1066 = INT16_MIN;
	static volatile uint16_t x1067 = 6U;
	volatile uint8_t x1068 = UINT8_MAX;
	int32_t t138 = -237749;

    t138 = ((x1065<<(x1066>x1067))^x1068);

    if (t138 != 65280) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x1074 = 49U;
	volatile int32_t x1075 = 18114;
	int16_t x1076 = -1;
	volatile int64_t t139 = -12262384666751542LL;

    t139 = ((x1073<<(x1074>x1075))^x1076);

    if (t139 != -118LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x1081 = UINT8_MAX;
	int16_t x1082 = INT16_MIN;
	volatile int8_t x1083 = INT8_MIN;
	int16_t x1084 = INT16_MIN;
	int32_t t140 = -3792210;

    t140 = ((x1081<<(x1082>x1083))^x1084);

    if (t140 != -32513) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x1086 = 7U;
	uint64_t x1087 = 107LLU;
	volatile int32_t t141 = 73220;

    t141 = ((x1085<<(x1086>x1087))^x1088);

    if (t141 != 255) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x1093 = 61U;
	int8_t x1094 = INT8_MIN;
	uint16_t x1096 = 12359U;

    t142 = ((x1093<<(x1094>x1095))^x1096);

    if (t142 != 12410) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1101 = UINT64_MAX;
	static int32_t x1102 = -1;
	int8_t x1103 = -1;
	volatile uint64_t x1104 = 2109878095818LLU;
	static volatile uint64_t t143 = 1759001584LLU;

    t143 = ((x1101<<(x1102>x1103))^x1104);

    if (t143 != 18446741963831455797LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint8_t x1109 = 48U;
	volatile int64_t x1111 = 518773312591LL;
	int16_t x1112 = INT16_MAX;
	int32_t t144 = -254793;

    t144 = ((x1109<<(x1110>x1111))^x1112);

    if (t144 != 32719) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1113 = 13079969LL;
	static uint32_t x1114 = UINT32_MAX;
	uint16_t x1115 = UINT16_MAX;
	int64_t x1116 = 123398666722458456LL;
	static int64_t t145 = 6833233LL;

    t145 = ((x1113<<(x1114>x1115))^x1116);

    if (t145 != 123398666696298522LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1121 = UINT8_MAX;
	int8_t x1124 = -1;
	volatile int32_t t146 = -18;

    t146 = ((x1121<<(x1122>x1123))^x1124);

    if (t146 != -511) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1130 = 14;
	int16_t x1131 = INT16_MIN;
	int8_t x1132 = INT8_MIN;
	volatile int32_t t147 = 206537467;

    t147 = ((x1129<<(x1130>x1131))^x1132);

    if (t147 != -386) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1137 = 13;
	uint16_t x1138 = 12531U;
	int32_t x1139 = INT32_MIN;
	int16_t x1140 = INT16_MIN;
	int32_t t148 = 650;

    t148 = ((x1137<<(x1138>x1139))^x1140);

    if (t148 != -32742) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1149 = 0;
	int64_t x1150 = 708215656397922LL;
	volatile int64_t x1151 = INT64_MIN;
	uint8_t x1152 = 2U;
	int32_t t149 = 86080;

    t149 = ((x1149<<(x1150>x1151))^x1152);

    if (t149 != 2) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x1153 = UINT64_MAX;
	int64_t x1154 = INT64_MIN;
	static volatile uint64_t t150 = 27860720623734LLU;

    t150 = ((x1153<<(x1154>x1155))^x1156);

    if (t150 != 18446744073709550290LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x1158 = -1919LL;
	int16_t x1159 = INT16_MIN;
	uint8_t x1160 = 1U;
	static volatile int32_t t151 = 224134;

    t151 = ((x1157<<(x1158>x1159))^x1160);

    if (t151 != 131071) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x1161 = 3367043LL;
	volatile int8_t x1162 = INT8_MAX;
	uint8_t x1163 = UINT8_MAX;
	int8_t x1164 = -1;
	static volatile int64_t t152 = 13352248989LL;

    t152 = ((x1161<<(x1162>x1163))^x1164);

    if (t152 != -3367044LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x1165 = 0U;
	int64_t x1166 = INT64_MAX;
	uint32_t x1167 = UINT32_MAX;
	int16_t x1168 = -1;
	int32_t t153 = -116291293;

    t153 = ((x1165<<(x1166>x1167))^x1168);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1177 = UINT8_MAX;
	int32_t x1178 = INT32_MIN;
	int8_t x1179 = INT8_MIN;
	int64_t x1180 = INT64_MIN;
	volatile int64_t t154 = -592424440901LL;

    t154 = ((x1177<<(x1178>x1179))^x1180);

    if (t154 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1186 = INT16_MIN;
	volatile int64_t x1187 = 57035632LL;
	int32_t x1188 = INT32_MAX;
	volatile uint64_t t155 = 2492103058516480647LLU;

    t155 = ((x1185<<(x1186>x1187))^x1188);

    if (t155 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1189 = UINT16_MAX;
	int8_t x1190 = INT8_MIN;
	int16_t x1191 = -1;
	int32_t x1192 = INT32_MIN;
	int32_t t156 = 58;

    t156 = ((x1189<<(x1190>x1191))^x1192);

    if (t156 != -2147418113) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1193 = 2379;
	static uint32_t x1194 = UINT32_MAX;
	int16_t x1195 = INT16_MIN;
	volatile uint64_t x1196 = 1984755445882LLU;
	volatile uint64_t t157 = 56375633709LLU;

    t157 = ((x1193<<(x1194>x1195))^x1196);

    if (t157 != 1984755442412LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x1197 = UINT64_MAX;
	int64_t x1198 = INT64_MIN;
	int32_t x1199 = 73226079;
	int64_t x1200 = INT64_MIN;
	uint64_t t158 = 16051984677891LLU;

    t158 = ((x1197<<(x1198>x1199))^x1200);

    if (t158 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1205 = 2U;
	static int32_t x1206 = INT32_MIN;
	int64_t x1208 = INT64_MAX;
	int64_t t159 = -1360LL;

    t159 = ((x1205<<(x1206>x1207))^x1208);

    if (t159 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x1211 = UINT32_MAX;
	volatile uint64_t t160 = 2175783106645318LLU;

    t160 = ((x1209<<(x1210>x1211))^x1212);

    if (t160 != 130793LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1213 = 11090;
	static volatile int32_t x1214 = -1882;
	uint16_t x1216 = 4U;
	int32_t t161 = -627459;

    t161 = ((x1213<<(x1214>x1215))^x1216);

    if (t161 != 22176) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1222 = 0U;
	int8_t x1223 = 55;
	uint32_t t162 = 2072394U;

    t162 = ((x1221<<(x1222>x1223))^x1224);

    if (t162 != 43821U) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x1225 = 0U;
	int64_t x1226 = 7816715732865944LL;
	static uint16_t x1227 = 10U;
	uint16_t x1228 = 2684U;
	int32_t t163 = 2276;

    t163 = ((x1225<<(x1226>x1227))^x1228);

    if (t163 != 2684) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1234 = INT16_MIN;
	volatile uint64_t x1236 = 299171314743060214LLU;
	uint64_t t164 = 4397210740658135LLU;

    t164 = ((x1233<<(x1234>x1235))^x1236);

    if (t164 != 299171314743105801LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1237 = 23387U;
	int8_t x1238 = INT8_MAX;
	uint8_t x1239 = 61U;
	static int64_t x1240 = -1LL;
	volatile int64_t t165 = -25LL;

    t165 = ((x1237<<(x1238>x1239))^x1240);

    if (t165 != -46775LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1241 = 7U;
	int32_t x1242 = -810;
	int32_t x1244 = -522856;

    t166 = ((x1241<<(x1242>x1243))^x1244);

    if (t166 != -522858) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1247 = 114179536U;
	int16_t x1248 = INT16_MIN;
	static volatile uint32_t t167 = 142040261U;

    t167 = ((x1245<<(x1246>x1247))^x1248);

    if (t167 != 32767U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x1249 = 818315656;
	int8_t x1251 = INT8_MIN;
	int64_t x1252 = -7642865LL;
	int64_t t168 = 991LL;

    t168 = ((x1249<<(x1250>x1251))^x1252);

    if (t168 != -816979833LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1269 = 697;
	volatile int8_t x1270 = -22;
	uint64_t x1271 = 119LLU;
	uint16_t x1272 = UINT16_MAX;

    t169 = ((x1269<<(x1270>x1271))^x1272);

    if (t169 != 64141) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x1273 = UINT16_MAX;
	volatile int64_t x1274 = INT64_MIN;
	uint16_t x1275 = UINT16_MAX;
	int32_t t170 = 73177063;

    t170 = ((x1273<<(x1274>x1275))^x1276);

    if (t170 != 65524) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1290 = UINT64_MAX;
	volatile int64_t x1291 = INT64_MIN;
	int64_t x1292 = 42LL;
	int64_t t171 = 27LL;

    t171 = ((x1289<<(x1290>x1291))^x1292);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint64_t x1293 = 16668380LLU;
	int64_t x1294 = INT64_MAX;
	int32_t x1295 = INT32_MIN;
	uint16_t x1296 = UINT16_MAX;
	uint64_t t172 = 864117LLU;

    t172 = ((x1293<<(x1294>x1295))^x1296);

    if (t172 != 33313351LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1302 = INT8_MAX;
	uint32_t x1304 = 253U;
	static uint32_t t173 = 15389300U;

    t173 = ((x1301<<(x1302>x1303))^x1304);

    if (t173 != 3021U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x1305 = UINT64_MAX;
	static volatile int8_t x1306 = INT8_MIN;
	int64_t x1307 = -1LL;
	static volatile int8_t x1308 = -1;
	uint64_t t174 = 5776492881979635LLU;

    t174 = ((x1305<<(x1306>x1307))^x1308);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1309 = INT64_MAX;
	int8_t x1310 = INT8_MIN;
	int8_t x1311 = INT8_MIN;
	int64_t x1312 = INT64_MIN;
	int64_t t175 = 3875995077063308LL;

    t175 = ((x1309<<(x1310>x1311))^x1312);

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x1313 = UINT64_MAX;
	static volatile uint32_t x1314 = 1U;
	int8_t x1315 = -1;
	int8_t x1316 = INT8_MAX;
	uint64_t t176 = 125728588874612LLU;

    t176 = ((x1313<<(x1314>x1315))^x1316);

    if (t176 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1317 = 59U;
	int16_t x1318 = INT16_MAX;
	static int64_t x1319 = 2040218765023LL;
	volatile int32_t x1320 = INT32_MIN;
	uint32_t t177 = 628178U;

    t177 = ((x1317<<(x1318>x1319))^x1320);

    if (t177 != 2147483707U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1325 = 2U;
	uint8_t x1326 = 21U;
	static int64_t x1327 = INT64_MAX;
	volatile int16_t x1328 = INT16_MAX;
	volatile int32_t t178 = 1834;

    t178 = ((x1325<<(x1326>x1327))^x1328);

    if (t178 != 32765) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x1331 = INT32_MIN;
	int16_t x1332 = 113;
	int32_t t179 = -2282783;

    t179 = ((x1329<<(x1330>x1331))^x1332);

    if (t179 != 399) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1337 = INT16_MAX;
	int16_t x1338 = -10131;
	uint32_t x1340 = UINT32_MAX;
	volatile uint32_t t180 = 1724U;

    t180 = ((x1337<<(x1338>x1339))^x1340);

    if (t180 != 4294934528U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1342 = 1644U;
	int32_t x1343 = -172220;
	uint16_t x1344 = 3U;
	volatile uint32_t t181 = 82162U;

    t181 = ((x1341<<(x1342>x1343))^x1344);

    if (t181 != 51U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1349 = 6U;
	uint64_t x1351 = 2456210359969LLU;
	int32_t t182 = 6578;

    t182 = ((x1349<<(x1350>x1351))^x1352);

    if (t182 != 80) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x1353 = 106U;
	int16_t x1355 = 0;
	int64_t x1356 = INT64_MIN;
	volatile int64_t t183 = -530737510997LL;

    t183 = ((x1353<<(x1354>x1355))^x1356);

    if (t183 != -9223372036854775702LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1369 = UINT32_MAX;
	int32_t x1370 = INT32_MAX;
	static int8_t x1371 = INT8_MIN;
	static int16_t x1372 = -1;
	volatile uint32_t t184 = 3U;

    t184 = ((x1369<<(x1370>x1371))^x1372);

    if (t184 != 1U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1377 = INT32_MAX;
	uint64_t x1379 = UINT64_MAX;
	static uint32_t x1380 = 6229807U;
	volatile uint32_t t185 = 2303495U;

    t185 = ((x1377<<(x1378>x1379))^x1380);

    if (t185 != 2141253840U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1385 = 1844;
	int16_t x1386 = -1;
	int64_t x1387 = INT64_MIN;
	int16_t x1388 = -1;
	static volatile int32_t t186 = -18790047;

    t186 = ((x1385<<(x1386>x1387))^x1388);

    if (t186 != -3689) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1389 = 1836313504U;
	int16_t x1390 = -1;
	volatile int8_t x1391 = 30;
	static volatile uint8_t x1392 = UINT8_MAX;
	uint32_t t187 = 1162783U;

    t187 = ((x1389<<(x1390>x1391))^x1392);

    if (t187 != 1836313439U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x1393 = 3U;
	int8_t x1394 = -1;
	uint16_t x1395 = UINT16_MAX;
	uint64_t x1396 = 29023511317115LLU;
	static volatile uint64_t t188 = 16194564LLU;

    t188 = ((x1393<<(x1394>x1395))^x1396);

    if (t188 != 29023511317112LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x1397 = 79U;
	int64_t x1398 = -1LL;
	static int32_t x1399 = 22860860;
	int8_t x1400 = INT8_MAX;
	static volatile uint32_t t189 = 1311639U;

    t189 = ((x1397<<(x1398>x1399))^x1400);

    if (t189 != 48U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1402 = -4;
	static volatile int64_t x1403 = INT64_MIN;

    t190 = ((x1401<<(x1402>x1403))^x1404);

    if (t190 != -93386) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x1409 = UINT16_MAX;
	int64_t x1412 = INT64_MIN;
	volatile int64_t t191 = 891405165110LL;

    t191 = ((x1409<<(x1410>x1411))^x1412);

    if (t191 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1417 = 1;
	volatile int16_t x1420 = 90;

    t192 = ((x1417<<(x1418>x1419))^x1420);

    if (t192 != 91) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x1421 = 36U;
	int16_t x1422 = -1;
	volatile uint64_t x1423 = 1266924875801702029LLU;
	int32_t x1424 = -1;
	volatile int32_t t193 = -17;

    t193 = ((x1421<<(x1422>x1423))^x1424);

    if (t193 != -73) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1425 = 14;
	uint8_t x1426 = 1U;
	uint16_t x1427 = 1462U;
	volatile uint32_t x1428 = 4656579U;

    t194 = ((x1425<<(x1426>x1427))^x1428);

    if (t194 != 4656589U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1433 = INT64_MAX;
	int64_t x1436 = INT64_MAX;
	static int64_t t195 = 171LL;

    t195 = ((x1433<<(x1434>x1435))^x1436);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x1437 = 1670706U;
	static int8_t x1438 = INT8_MIN;
	static uint16_t x1440 = 28966U;
	uint32_t t196 = 52U;

    t196 = ((x1437<<(x1438>x1439))^x1440);

    if (t196 != 1642260U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1441 = INT8_MAX;
	uint8_t x1442 = 0U;
	uint8_t x1443 = UINT8_MAX;
	volatile int32_t t197 = -920501;

    t197 = ((x1441<<(x1442>x1443))^x1444);

    if (t197 != 405968151) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint32_t x1453 = 23U;
	static int64_t x1454 = -303855258099LL;
	static int64_t x1455 = INT64_MIN;
	volatile uint32_t t198 = 5U;

    t198 = ((x1453<<(x1454>x1455))^x1456);

    if (t198 != 45U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1461 = UINT8_MAX;
	uint64_t x1462 = 23966632092643555LLU;
	static volatile int32_t t199 = 737882;

    t199 = ((x1461<<(x1462>x1463))^x1464);

    if (t199 != -32513) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

